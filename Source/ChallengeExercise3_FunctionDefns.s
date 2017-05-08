	.file	"ChallengeExercise3_FunctionDefns.c"
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	printNumbers
	.type	printNumbers, @function
printNumbers:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, -4(%rbp)
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %edi
	call	printNumbers
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	printNumbers, .-printNumbers
	.ident	"GCC: (Ubuntu 6.2.0-5ubuntu12) 6.2.0 20161005"
	.section	.note.GNU-stack,"",@progbits
