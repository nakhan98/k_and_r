	.file	"1-13.c"
	.section	.rodata
.LC0:
	.string	"\n%d words entered\n"
.LC1:
	.string	"### HORIZONTAL HISTOGRAM ###"
.LC2:
	.string	"%2d |"
.LC3:
	.string	"\n### VERTICAL HISTOGRAM ###\n"
.LC4:
	.string	"  X"
.LC5:
	.string	"   "
.LC6:
	.string	"%3d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$144, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	movl	$0, -16(%rbp)
	jmp	.L2
.L3:
	movl	-16(%rbp), %eax
	cltq
	movl	$0, -144(%rbp,%rax,4)
	addl	$1, -16(%rbp)
.L2:
	cmpl	$25, -16(%rbp)
	jle	.L3
	jmp	.L4
.L7:
	cmpl	$9, -28(%rbp)
	je	.L5
	cmpl	$10, -28(%rbp)
	je	.L5
	cmpl	$32, -28(%rbp)
	je	.L5
	addl	$1, -8(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L4
.L5:
	cmpl	$1, -4(%rbp)
	jne	.L4
	movl	$0, -4(%rbp)
	cmpl	$25, -8(%rbp)
	jg	.L6
	movl	-8(%rbp), %eax
	cltq
	movl	-144(%rbp,%rax,4), %eax
	leal	1(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	movl	%edx, -144(%rbp,%rax,4)
.L6:
	movl	$0, -8(%rbp)
	addl	$1, -12(%rbp)
.L4:
	call	getchar
	movl	%eax, -28(%rbp)
	cmpl	$-1, -28(%rbp)
	jne	.L7
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$.LC1, %edi
	call	puts
	movl	$1, -16(%rbp)
	jmp	.L8
.L11:
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -20(%rbp)
	jmp	.L9
.L10:
	movl	$88, %edi
	call	putchar
	addl	$1, -20(%rbp)
.L9:
	movl	-16(%rbp), %eax
	cltq
	movl	-144(%rbp,%rax,4), %eax
	cmpl	-20(%rbp), %eax
	jg	.L10
	movl	$10, %edi
	call	putchar
	addl	$1, -16(%rbp)
.L8:
	cmpl	$25, -16(%rbp)
	jle	.L11
	movl	$.LC3, %edi
	call	puts
	movl	$0, -24(%rbp)
	movl	$1, -16(%rbp)
	jmp	.L12
.L14:
	movl	-16(%rbp), %eax
	cltq
	movl	-144(%rbp,%rax,4), %eax
	cmpl	-24(%rbp), %eax
	jle	.L13
	movl	-16(%rbp), %eax
	cltq
	movl	-144(%rbp,%rax,4), %eax
	movl	%eax, -24(%rbp)
.L13:
	addl	$1, -16(%rbp)
.L12:
	cmpl	$25, -16(%rbp)
	jle	.L14
	movl	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L15
.L20:
	movl	$1, -20(%rbp)
	jmp	.L16
.L19:
	movl	-20(%rbp), %eax
	cltq
	movl	-144(%rbp,%rax,4), %eax
	cmpl	-16(%rbp), %eax
	jl	.L17
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L17:
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
.L18:
	addl	$1, -20(%rbp)
.L16:
	cmpl	$25, -20(%rbp)
	jle	.L19
	movl	$10, %edi
	call	putchar
	subl	$1, -16(%rbp)
.L15:
	cmpl	$0, -16(%rbp)
	jg	.L20
	movl	$1, -16(%rbp)
	jmp	.L21
.L22:
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -16(%rbp)
.L21:
	cmpl	$25, -16(%rbp)
	jle	.L22
	movl	$10, %edi
	call	putchar
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.1-19) 4.9.1"
	.section	.note.GNU-stack,"",@progbits
