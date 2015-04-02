$include (hska_include_.inc)



CSEG AT 0h
	jmp MAIN

CSEG AT 100h
MAIN:

mov r0, #2
mov r1, #4
mov r2, #16
mov r3, #4

mov a, R1
subb a, r0
mov b, r3
mul ab
mov b,a
mov a, r2
div ab
mov r4, a


jmp MAIN

END

