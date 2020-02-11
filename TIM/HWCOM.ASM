.model tiny
.code
org 100h

main:
mov	ah, 09h
mov	dx, offset abc
int	21h
ret

abc db "hello$" 
end main
