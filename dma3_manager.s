	.arch armv4t
	.fpu softvfp
	.file	"<stdin>"
	.text
	.align	1
	.p2align 2,,3
	.global	ClearDma3Requests
	.syntax unified
	.code	16
	.thumb_func
	.type	ClearDma3Requests, %function
ClearDma3Requests:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, #1
	ldr	r0, .L5
	strb	r3, [r0]
	movs	r3, #0
	movs	r2, #128
	strb	r3, [r0, #1]
	ldr	r3, .L5+4
	lsls	r2, r2, #4
	adds	r1, r3, r2
	movs	r2, #0
.L2:
	strh	r2, [r3, #8]
	str	r2, [r3]
	str	r2, [r3, #4]
	adds	r3, r3, #16
	cmp	r3, r1
	bne	.L2
	movs	r3, #0
	@ sp needed
	strb	r3, [r0]
	bx	lr
.L6:
	.align	2
.L5:
	.word	.LANCHOR0
	.word	sDma3Requests
	.size	ClearDma3Requests, .-ClearDma3Requests
	.align	1
	.p2align 2,,3
	.global	ProcessDma3Requests
	.syntax unified
	.code	16
	.thumb_func
	.type	ProcessDma3Requests, %function
ProcessDma3Requests:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 28
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7, lr}
	ldr	r2, .L44
	ldrb	r3, [r2]
	sub	sp, sp, #28
	str	r2, [sp, #4]
	cmp	r3, #0
	beq	.LCB54
	b	.L7	@long jump
.LCB54:
	ldrb	r3, [r2, #1]
	ldr	r0, .L44+4
	mov	fp, r3
	movs	r1, r3
	lsls	r3, r3, #4
	adds	r3, r0, r3
	ldrh	r3, [r3, #8]
	ldr	r4, .L44+8
	subs	r2, r3, #1
	lsls	r2, r2, #16
	lsrs	r2, r2, #16
	cmp	r2, r4
	bhi	.L7
	movs	r4, r3
	mov	r6, fp
.L9:
	ldr	r2, .L44+12
	ldrb	r2, [r2]
	cmp	r2, #224
	bhi	.L7
	lsls	r2, r1, #4
	adds	r5, r0, r2
	ldrh	r1, [r5, #10]
	cmp	r1, #3
	bne	.LCB84
	b	.L11	@long jump
.LCB84:
	bls	.LCB86
	b	.L12	@long jump
.LCB86:
	cmp	r1, #1
	bne	.LCB88
	b	.L13	@long jump
.LCB88:
	cmp	r1, #2
	bne	.L15
	ldr	r1, [r5, #4]
	mov	r9, r1
	movs	r1, #128
	movs	r7, r3
	lsls	r1, r1, #5
	cmp	r3, r1
	bhi	.LCB97
	b	.L40	@long jump
.LCB97:
	ldr	r1, .L44+16
	mov	fp, r1
	add	fp, fp, r3
	mov	r1, fp
	lsrs	r1, r1, #12
	mov	fp, r1
	movs	r7, #1
	add	r7, r7, fp
	lsls	r1, r7, #12
	mov	r8, r1
	mov	r7, r9
	ldr	r1, .L44+20
	mov	r10, r1
	ldr	r1, .L44+24
	add	r8, r8, r9
	str	r3, [sp]
	mov	r9, r1
	movs	r3, r2
	ldr	r1, .L44+28
	movs	r2, r5
	mov	ip, r1
	mov	r5, r8
	movs	r1, r7
	str	r3, [sp, #8]
.L21:
	ldr	r3, [r2, #12]
	str	r3, [sp, #24]
	mov	r3, r10
	add	r7, sp, #24
	str	r7, [r3]
	mov	r3, r9
	str	r1, [r3]
	mov	r3, ip
	ldr	r7, .L44+32
	str	r7, [r3]
	ldr	r3, [r3]
	movs	r3, #128
	lsls	r3, r3, #5
	mov	r8, r3
	add	r1, r1, r8
	cmp	r1, r5
	bne	.L21
	ldr	r3, [sp]
	ldr	r1, .L44+36
	adds	r7, r3, r1
	mov	r3, fp
	mov	r8, r5
	lsls	r3, r3, #12
	ldr	r2, [sp, #8]
	subs	r7, r7, r3
.L22:
	adds	r3, r0, r2
	ldr	r3, [r3, #12]
	str	r3, [sp, #20]
	ldr	r3, .L44+20
	add	r1, sp, #20
	str	r1, [r3]
	mov	r1, r8
	ldr	r3, .L44+24
	str	r1, [r3]
	lsrs	r3, r7, #2
	movs	r7, #133
.L39:
	lsls	r7, r7, #24
	orrs	r7, r3
	ldr	r3, .L44+28
	str	r7, [r3]
	ldr	r3, [r3]
.L15:
	movs	r5, r2
	adds	r6, r6, #1
	adds	r5, r5, #8
	lsls	r3, r6, #24
	adds	r5, r0, r5
	lsrs	r6, r3, #24
	cmp	r3, #0
	blt	.L32
	movs	r1, r6
	movs	r7, r6
.L29:
	movs	r3, #0
	str	r3, [r0, r2]
	adds	r2, r0, r2
	str	r3, [r2, #4]
	str	r3, [r5]
	str	r3, [r2, #12]
	ldr	r3, [sp, #4]
	strb	r7, [r3, #1]
	lsls	r3, r1, #4
	adds	r3, r0, r3
	ldrh	r3, [r3, #8]
	cmp	r3, #0
	beq	.L7
	movs	r2, #160
	adds	r4, r3, r4
	lsls	r4, r4, #16
	lsrs	r4, r4, #16
	lsls	r2, r2, #8
	cmp	r4, r2
	bls	.L9
.L7:
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L32:
	movs	r7, #0
	movs	r6, #0
	movs	r1, #0
	b	.L29
.L12:
	cmp	r1, #4
	bne	.L15
	ldr	r1, [r5, #4]
	mov	r9, r1
	movs	r1, #128
	movs	r7, r3
	lsls	r1, r1, #5
	cmp	r3, r1
	bhi	.LCB242
	b	.L41	@long jump
.LCB242:
	add	r1, sp, #16
	adds	r1, r1, #2
	str	r1, [sp]
	ldr	r1, .L44+16
	mov	fp, r1
	add	fp, fp, r3
	mov	r1, fp
	lsrs	r1, r1, #12
	mov	fp, r1
	movs	r7, #1
	add	r7, r7, fp
	lsls	r1, r7, #12
	mov	r8, r1
	mov	r7, r9
	ldr	r1, .L44+20
	mov	r10, r1
	ldr	r1, .L44+24
	add	r8, r8, r9
	str	r3, [sp, #8]
	mov	r9, r1
	movs	r3, r2
	ldr	r1, .L44+28
	movs	r2, r5
	mov	ip, r1
	mov	r5, r8
	movs	r1, r7
	str	r3, [sp, #12]
.L27:
	ldrh	r3, [r2, #12]
	ldr	r7, [sp]
	strh	r3, [r7]
	mov	r3, r10
	str	r7, [r3]
	mov	r3, r9
	str	r1, [r3]
	mov	r3, ip
	ldr	r7, .L44+40
	str	r7, [r3]
	ldr	r3, [r3]
	movs	r3, #128
	lsls	r3, r3, #5
	mov	r8, r3
	add	r1, r1, r8
	cmp	r1, r5
	bne	.L27
	ldr	r3, [sp, #8]
	ldr	r1, .L44+36
	adds	r7, r3, r1
	mov	r3, fp
	mov	r8, r5
	lsls	r3, r3, #12
	ldr	r2, [sp, #12]
	subs	r7, r7, r3
.L28:
	adds	r3, r0, r2
	ldrh	r3, [r3, #12]
	add	r1, sp, #16
	strh	r3, [r1]
	ldr	r3, .L44+20
	str	r1, [r3]
	mov	r1, r8
	ldr	r3, .L44+24
	str	r1, [r3]
	lsrs	r3, r7, #1
	movs	r7, #129
	b	.L39
.L11:
	movs	r7, #128
	ldr	r5, [r5, #4]
	ldr	r1, [r0, r2]
	mov	r10, r5
	lsls	r7, r7, #5
	movs	r5, r3
	cmp	r3, r7
	bls	.L42
	ldr	r5, .L44+16
	adds	r5, r3, r5
	lsrs	r5, r5, #12
	str	r5, [sp]
	adds	r5, r5, #1
	lsls	r5, r5, #12
	mov	fp, r5
	mov	ip, r1
	add	ip, ip, fp
	str	r3, [sp, #8]
	mov	r5, r10
	mov	r3, ip
	ldr	r7, .L44+20
	mov	r9, r7
	ldr	r7, .L44+24
	str	r2, [sp, #12]
	mov	r8, r7
	ldr	r7, .L44+28
.L24:
	mov	r2, r9
	str	r1, [r2]
	mov	r2, r8
	str	r5, [r2]
	ldr	r2, .L44+44
	str	r2, [r7]
	ldr	r2, [r7]
	movs	r2, #128
	lsls	r2, r2, #5
	mov	ip, r2
	add	r1, r1, ip
	add	r5, r5, ip
	cmp	r1, r3
	bne	.L24
	mov	ip, r3
	ldr	r1, .L44+36
	ldr	r3, [sp, #8]
	adds	r5, r3, r1
	ldr	r3, [sp]
	ldr	r2, [sp, #12]
	lsls	r3, r3, #12
	add	r10, r10, fp
	subs	r5, r5, r3
.L25:
	mov	r1, ip
	ldr	r3, .L44+20
	str	r1, [r3]
	mov	r1, r10
	ldr	r3, .L44+24
	str	r1, [r3]
	movs	r3, #128
	lsrs	r5, r5, #1
.L38:
	ldr	r1, .L44+28
	lsls	r3, r3, #24
	orrs	r3, r5
	str	r3, [r1]
	ldr	r3, [r1]
	b	.L15
.L13:
	movs	r7, #128
	ldr	r5, [r5, #4]
	ldr	r1, [r0, r2]
	mov	r10, r5
	lsls	r7, r7, #5
	movs	r5, r3
	cmp	r3, r7
	bls	.L43
	ldr	r5, .L44+16
	adds	r5, r3, r5
	lsrs	r5, r5, #12
	str	r5, [sp]
	adds	r5, r5, #1
	lsls	r5, r5, #12
	mov	fp, r5
	mov	ip, r1
	add	ip, ip, fp
	str	r3, [sp, #8]
	mov	r5, r10
	mov	r3, ip
	ldr	r7, .L44+20
	mov	r9, r7
	ldr	r7, .L44+24
	str	r2, [sp, #12]
	mov	r8, r7
	ldr	r7, .L44+28
.L18:
	mov	r2, r9
	str	r1, [r2]
	mov	r2, r8
	str	r5, [r2]
	ldr	r2, .L44+48
	str	r2, [r7]
	ldr	r2, [r7]
	movs	r2, #128
	lsls	r2, r2, #5
	mov	ip, r2
	add	r1, r1, ip
	add	r5, r5, ip
	cmp	r1, r3
	bne	.L18
	mov	ip, r3
	ldr	r1, .L44+36
	ldr	r3, [sp, #8]
	adds	r5, r3, r1
	ldr	r3, [sp]
	ldr	r2, [sp, #12]
	lsls	r3, r3, #12
	add	r10, r10, fp
	subs	r5, r5, r3
.L19:
	mov	r1, ip
	ldr	r3, .L44+20
	str	r1, [r3]
	mov	r1, r10
	ldr	r3, .L44+24
	lsrs	r5, r5, #2
	str	r1, [r3]
	movs	r3, #132
	b	.L38
.L40:
	mov	r8, r9
	b	.L22
.L41:
	mov	r8, r9
	b	.L28
.L42:
	mov	ip, r1
	b	.L25
.L43:
	mov	ip, r1
	b	.L19
.L45:
	.align	2
.L44:
	.word	.LANCHOR0
	.word	sDma3Requests
	.word	40959
	.word	67108870
	.word	-4097
	.word	67109076
	.word	67109080
	.word	67109084
	.word	-2063596544
	.word	-4096
	.word	-2130704384
	.word	-2147481600
	.word	-2080373760
	.size	ProcessDma3Requests, .-ProcessDma3Requests
	.align	1
	.p2align 2,,3
	.global	RequestDma3Copy
	.syntax unified
	.code	16
	.thumb_func
	.type	RequestDma3Copy, %function
RequestDma3Copy:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r2, r2, #16
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	fp, r3
	lsrs	r3, r2, #16
	mov	r5, r8
	mov	r8, r3
	ldr	r3, .L56
	mov	r6, r9
	mov	r9, r3
	mov	r7, r10
	movs	r3, #1
	mov	r2, r9
	push	{r5, r6, r7, lr}
	mov	r10, r0
	strb	r3, [r2]
	mov	ip, r1
	movs	r5, #128
	movs	r3, #127
	movs	r7, #0
	ldrb	r2, [r2, #1]
	ldr	r6, .L56+4
	b	.L51
.L47:
	adds	r2, r2, #1
	lsrs	r4, r2, #31
	cmp	r3, r2
	adcs	r4, r4, r7
	subs	r5, r5, #1
	rsbs	r4, r4, #0
	ands	r2, r4
	cmp	r5, #0
	beq	.L55
.L51:
	lsls	r1, r2, #4
	adds	r4, r6, r1
	ldrh	r0, [r4, #8]
	cmp	r0, #0
	bne	.L47
	mov	r3, r10
	str	r3, [r6, r1]
	mov	r3, ip
	mov	r1, fp
	str	r3, [r4, #4]
	mov	r3, r8
	subs	r1, r1, #1
	strh	r3, [r4, #8]
	subs	r3, r1, #1
	sbcs	r1, r1, r3
	mov	r3, r9
	lsls	r1, r1, #1
	adds	r1, r1, #1
	strb	r0, [r3]
	strh	r1, [r4, #10]
	lsls	r0, r2, #16
	asrs	r0, r0, #16
.L49:
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L55:
	mov	r3, r9
	movs	r0, #1
	strb	r5, [r3]
	rsbs	r0, r0, #0
	b	.L49
.L57:
	.align	2
.L56:
	.word	.LANCHOR0
	.word	sDma3Requests
	.size	RequestDma3Copy, .-RequestDma3Copy
	.align	1
	.p2align 2,,3
	.global	RequestDma3Fill
	.syntax unified
	.code	16
	.thumb_func
	.type	RequestDma3Fill, %function
RequestDma3Fill:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r9
	mov	r6, r8
	mov	lr, r10
	lsls	r2, r2, #16
	mov	ip, r1
	movs	r1, r3
	lsrs	r3, r2, #16
	mov	r8, r3
	ldr	r3, .L68
	mov	r9, r3
	push	{r6, r7, lr}
	mov	r10, r0
	ldrb	r2, [r3, #1]
	mov	r0, r9
	movs	r3, #1
	movs	r5, #128
	strb	r3, [r0]
	movs	r7, #0
	ldr	r6, .L68+4
	adds	r3, r3, #126
	b	.L63
.L59:
	adds	r2, r2, #1
	lsrs	r4, r2, #31
	cmp	r3, r2
	adcs	r4, r4, r7
	subs	r5, r5, #1
	rsbs	r4, r4, #0
	ands	r2, r4
	cmp	r5, #0
	beq	.L67
.L63:
	lsls	r4, r2, #4
	adds	r4, r6, r4
	ldrh	r0, [r4, #8]
	cmp	r0, #0
	bne	.L59
	mov	r3, ip
	str	r3, [r4, #4]
	mov	r3, r8
	strh	r3, [r4, #8]
	mov	r3, r10
	subs	r1, r1, #1
	str	r3, [r4, #12]
	subs	r3, r1, #1
	sbcs	r1, r1, r3
	mov	r3, r9
	lsls	r1, r1, #1
	adds	r1, r1, #2
	strb	r0, [r3]
	strh	r1, [r4, #10]
	lsls	r0, r2, #16
	asrs	r0, r0, #16
.L61:
	@ sp needed
	pop	{r5, r6, r7}
	mov	r10, r7
	mov	r9, r6
	mov	r8, r5
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L67:
	mov	r3, r9
	movs	r0, #1
	strb	r5, [r3]
	rsbs	r0, r0, #0
	b	.L61
.L69:
	.align	2
.L68:
	.word	.LANCHOR0
	.word	sDma3Requests
	.size	RequestDma3Fill, .-RequestDma3Fill
	.align	1
	.p2align 2,,3
	.global	CheckForSpaceForDma3Request
	.syntax unified
	.code	16
	.thumb_func
	.type	CheckForSpaceForDma3Request, %function
CheckForSpaceForDma3Request:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	lsls	r0, r0, #16
	asrs	r0, r0, #16
	adds	r3, r0, #1
	beq	.L76
	ldr	r3, .L79
	lsls	r0, r0, #4
	adds	r3, r3, r0
	ldrh	r0, [r3, #8]
	subs	r3, r0, #1
	sbcs	r0, r0, r3
	rsbs	r0, r0, #0
.L72:
	@ sp needed
	bx	lr
.L76:
	movs	r2, #128
	ldr	r3, .L79+4
	lsls	r2, r2, #4
	adds	r1, r3, r2
	b	.L73
.L78:
	adds	r3, r3, #16
	cmp	r3, r1
	beq	.L77
.L73:
	ldrh	r2, [r3]
	cmp	r2, #0
	beq	.L78
	movs	r0, #1
	rsbs	r0, r0, #0
	b	.L72
.L77:
	movs	r0, #0
	b	.L72
.L80:
	.align	2
.L79:
	.word	sDma3Requests
	.word	sDma3Requests+8
	.size	CheckForSpaceForDma3Request, .-CheckForSpaceForDma3Request
	.bss
	.set	.LANCHOR0,. + 0
	.type	sDma3ManagerLocked, %object
	.size	sDma3ManagerLocked, 1
sDma3ManagerLocked:
	.space	1
	.type	sDma3RequestCursor, %object
	.size	sDma3RequestCursor, 1
sDma3RequestCursor:
	.space	1
	.section	.sbss,"aw",%nobits
	.align	2
	.type	sDma3Requests, %object
	.size	sDma3Requests, 2048
sDma3Requests:
	.space	2048
	.ident	"GCC: (devkitARM release 63) 13.2.0"
.text
	.align	2, 0

