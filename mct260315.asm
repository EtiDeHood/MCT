CSEG AT 0h
jump INIT

CSEG AT 100h
INIT:

mov r7, #35
mov r6, #18
mov a,r7

clr c
subb a,r6
mov r5,a
END
