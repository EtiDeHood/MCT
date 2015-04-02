CSEG AT 0h
jmp START

CSEG AT 100h
START:

mov r3,#221 ; Festlegen der zu zerlegenden Zahl

mov a, r3   ; Durch Hundert und in r0 speichern
mov b, #100 
div ab
mov r0, a

mov b, #100 ; Abziehen der Hunderter vom Anfangswert
mul ab
mov b,a
mov a, r3
subb a, b

mov r4, a   ; Division durch Zehner und speichern in r1
mov b, #10
div ab
mov r1, a

mov b, #10  ; Zehnerziffer in b
mov a, r1
mul ab
mov b,a

mov a, r4 ; Anfangswert ohne Hunderter in a
subb a, b ; Abziehen der Zehner

mov r2, a ; Übrig bleibt die Einserziffer, speichern in r2


END ; ENDE
