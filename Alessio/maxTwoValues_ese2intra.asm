# $a0 contiene il valore di a
# $sv0 contiene il valore massimo, output della funzione
# =============================================================

.data
a: .space 4
val: .space 4
inputMsg: .asciiz "Dammi il valore di a: "
outputMsg: .asciiz "Il massimo è: "
newLine: .asciiz "\n"

.text
la $a0, inputMsg
li $v0, 4
syscall

li $v0, 5
syscall

jal fun

add $s0, $v0, $zero

la $a0, outputMsg
li $v0, 4
syscall

add $a0, $s0, $zero
li $v0, 1
syscall

# chiusura del programma:
li $v0, 10
syscall

fun:
	(...)
	jr $ra