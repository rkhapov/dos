.model tiny
.code
org 100h

main:
mov	ah, 09h
mov	dx, offset abc
mov	cx, seg abc
mov	ds, cx
int	21h

mov	ah, 4Ch
mov	al, 0
int	21h

.data
abc db "hello$" 

.stack
db 300 dup(?)
end main
