CSEG AT 0h
jmp START

CSEG AT 100h
START:

mov r3,#221
mov a, r3
mov b, #100
div ab
mov r0, a
mov b, #100
mul ab
mov b,a
mov a, r3
subb a, b

mov r4, a
mov b, #10
div ab
mov r1, a
mov b, #10
mov a, r1
mul ab
mov b,a
mov a, r4
subb a, b

mov r2, a


END
