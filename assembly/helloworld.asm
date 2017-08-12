; This program displays "Hello, world!"
;.model small
;.stack 100h
;.data
;message db "Hello, world!",0dh,0ah,'$'
;.code
;mov  ax
;mov  ds,ax
;mov  ah,9
;mov  dx,offset message
;int  21h
;mov  ax,4C00h
;int  21h

section	.text
global	_start ;must be declared for linker (ld)

_start: ;tell linker entry point

	mov	edx,len ;message length
    mov	ecx,msg ;message to write
    mov	ebx,1   ;file descriptor (stdout)
    mov	eax,4   ;system call number (sys_write)
    int	0x80    ;call kernel

    mov	eax,1   ;system call number (sys_exit)
    int	0x80    ;call kernel

section	.data

msg	db	'Hello, world!',0xa  ;our dear string
len	equ $ - msg              ;length of our dear string
