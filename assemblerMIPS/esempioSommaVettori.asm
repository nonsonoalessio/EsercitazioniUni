.data
vett1: .space 40 
vett2: .space 40
vettSomma: .space 40
msgInput: .asciiz "Inserisci numeri dell'array:"
msgOutput: .asciiz "Ecco i risultati della somma:"
newLine: .asciiz "\n"


.text
li $t0, 0
li $t1, 10
la $a1, vett1
la $a2, vett2


la $a0, msgInput
li $v0, 4
syscall 
beginFirstLoop:
	li $v0, 5
	syscall
	sw $a0, 0($a1)
	addi $t0, $t0, 1
	addi $a1, $a1, 4
	bne $t0, $t1, beginFirstLoop
# endFisrtLoop
# set i equal to zero
li $t0, 0

la $a0, msgInput
li $v0, 4
syscall 
beginSecondLoop:
	li $v0, 5
	syscall
	sw $a0, 0($a2)
	addi $t0, $t0, 1
	addi $a2, $a2, 4
	bne $t0, $t1, beginSecondLoop
# endSecondLoop
# set i equal to zero
li $t0, 0

la $a3, vettSomma
addi $a3, $a3, 36
beginSumLoop:
	lw $t2, 0($a1)
	lw $t4, 0($a2)
	add $t3, $t2, $t4
	sw $t3, 0($a3)		 
	addi $t0, $t0, 1
	addi $a3, $a3, -4
	addi $a2, $a2, -4
	addi $a1, $a1, -4
	bne $t0, $t1, beginSumLoop
# endSumLoop
# set i equal to zero
li $t0, 0

la $a0, msgOutput
li $v0, 4
syscall
beginPrintLoop:
	li $a0, 0
	lw $t2, 0($a3)
	add $a0, $t2, $zero
	li $v0, 1
	syscall
	addi $t0, $t0, 1
	addi $a3, $a3, -4
	la $a0, newLine
	li $v0, 4
	syscall
	bne $t0, $t1, beginPrintLoop
# endPrintLoop
	


  #####################
# Chiusura del programma
li $v0, 10
syscall