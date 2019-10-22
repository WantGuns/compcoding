	.file	"kanishk.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$256, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -248(%rbp)
	movl	$0, -244(%rbp)
	leaq	-224(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	gets@PLT
	leaq	-224(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movl	%eax, -240(%rbp)
	jmp	.L2
.L4:
	movl	-248(%rbp), %eax
	cltq
	movzbl	-224(%rbp,%rax), %eax
	cmpb	$32, %al
	je	.L3
	movl	-248(%rbp), %eax
	cltq
	movzbl	-224(%rbp,%rax), %edx
	movl	-244(%rbp), %eax
	cltq
	movb	%dl, -112(%rbp,%rax)
	addl	$1, -244(%rbp)
.L3:
	addl	$1, -248(%rbp)
.L2:
	movl	-248(%rbp), %eax
	cmpl	-240(%rbp), %eax
	jl	.L4
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movl	%eax, -236(%rbp)
	cvtsi2sdl	-236(%rbp), %xmm0
	call	sqrt@PLT
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -232(%rbp)
	cvtsi2sdl	-236(%rbp), %xmm0
	call	sqrt@PLT
	call	ceil@PLT
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -228(%rbp)
	movl	$0, -244(%rbp)
	movl	$0, -244(%rbp)
	jmp	.L5
.L9:
	movl	$0, -248(%rbp)
	jmp	.L6
.L8:
	movl	-248(%rbp), %eax
	imull	-228(%rbp), %eax
	movl	%eax, %edx
	movl	-244(%rbp), %eax
	addl	%eax, %edx
	movl	-236(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, %edx
	jge	.L7
	movl	-248(%rbp), %eax
	imull	-228(%rbp), %eax
	movl	%eax, %edx
	movl	-244(%rbp), %eax
	addl	%edx, %eax
	cltq
	movzbl	-112(%rbp,%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
.L7:
	addl	$1, -248(%rbp)
.L6:
	movl	-248(%rbp), %eax
	cmpl	-232(%rbp), %eax
	jl	.L8
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -244(%rbp)
.L5:
	movl	-244(%rbp), %eax
	cmpl	-228(%rbp), %eax
	jl	.L9
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L11
	call	__stack_chk_fail@PLT
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 9.1.0"
	.section	.note.GNU-stack,"",@progbits
