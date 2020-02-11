	.model	tiny
	.code
	org	100h

main:
	mov	ax, 123
	mov	dx, 0
	mov	bx, 10
	div	bx
lp:
	mov	ah, 02h
	mov	dl, 31h
	int	21h
	ret

end main
