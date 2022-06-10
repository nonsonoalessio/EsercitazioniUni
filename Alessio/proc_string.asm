# Autore: Giura Alessio Donato
#
# *********************************************************
# * Procedure LeggiCar & ScriviCar                        *
# * Obiettivi:                                            *
# *	- leggi una stringa fino al tappo;                *
# *	- salva stringa in memoria;                       *
# *	- stampa sul display una stringa per volta.       *
# * Dati:                                                 *
# * 	- 0xffff0000 registro stato kb (+4 controllo)     *
# * 	- 0xffff0008 registro stato video (+4 controllo)  *
# *********************************************************

# ===========================================================================================================
# Idea di risoluzione: potrebbe essere ragionevole prendere in input, stampare e successivamente memorizzare  
# un carattere per volta. Compromesso: potrebbe aumentare i tempi di esecuzione.
# ===========================================================================================================

.text
li $s0, 0xffff0000 	# registro stato ricevitore
li $s1, 0xffff0008	# registro stato trasmettitore
li $s2, 36		# carattere tappo: "$" (36 base10; 0x00000024 base16)
li $s3, 0		# utilizzio descritto in proc. SalvaMem

routineIO:
	jal LeggiCar
	beq $v0, $s2, exit		# controlla che il carattere immesso non sia "$", così da non salvarlo e stamparlo
	jal ScriviCar
	jal SalvaMem
	bne $v0, $s2, routineIO		# se il carattere inserito non è "$", continua a prendere input, stampare e salvare

# chiusura del programma
exit:
	li $v0, 10
	syscall



# Con la proc. LeggiCar implemento il driver per la tastiera
LeggiCar:
	lw $t0, 0($s0)			# leggo reg. stato del ricevitore
	andi $t0, $t0, 0x0001		# controllo se è uguale ad 1
	beq  $t0, $zero, LeggiCar	# se non è uguale ad 1, attendo che lo diventi
	lw $v0, 4($s0)			# carico il valore dal registro data del ricevitore, una volta che lo stato sia 1
	jr $ra				# torno al "main"

# Con la proc. ScriviCar implemento il driver per il monitor
ScriviCar:
	lw $t0, 0($s1)
	andi $t0, $t0, 0x0001
	beq $t0, $zero, ScriviCar
	sw $v0, 4($s1)			# conservo il carattere nel registro data del trasmettitore, così da poterlo stampare
	jr $ra


# Con la proc. SalvaMem memorizzo la stringa nella memoria (stack).
# !!!
# Faulty: ogni carattere richiede un accesso alla memoria.
# ===========================================================================================================
# La procedura può essere implementata aggiornando ogni volta il valore di $sp, portandolo indietro
# di 4 (1 word) ogni volta che la procedura viene invocata, prima di tornare al chiamante.
# Questo metodo salva nella posizione più "alta" (l'indirizzo più basso) il carattere più recente immesso.
# Potrebbe essere utile tener conto della lunghezza della stringa mediante un registro (regValue++),
# in modo da poter riportare lo sp in posizione di origine (pre-salvataggio stringa) ed, eventualmente,
# stampare la stringa a partire dalla memoria. 
# ===========================================================================================================

SalvaMem:
	sw $v0, 0($sp)		# conservo il valore nello stack
	addi $sp, $sp, -4	# porto lo sp indietro di 1 word
	addi $s3, $s3, 4	# aggiungo 4 (1 word) ad una variabile contatore che mi consente di tornare alla pos. orig. sp.
	jr $ra
	
	
	
