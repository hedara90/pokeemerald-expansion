	.arch armv4t
	.fpu softvfp
	.file	"<stdin>"
	.text
	.align	2
	.arch armv4t
	.fpu softvfp
	.syntax unified
	.arm
	.type	BuildDecompressionTable, %function
BuildDecompressionTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 64
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	sub	sp, sp, #64
	ldr	ip, [r0, #4]
	ldr	r2, [r0, #8]
	mov	r3, #0
	mov	r5, sp
	ldr	lr, [r0]
	lsr	r4, ip, #28
	lsr	r0, r2, #26
	and	r4, r4, #12
	and	r0, r0, #48
	orr	r0, r0, r4
	add	r0, r0, lr, lsr #30
	str	r0, [sp, #60]
	lsr	r0, lr, #6
	and	r0, r0, #63
	str	r0, [sp, #4]
	lsr	r0, lr, #12
	and	r0, r0, #63
	str	r0, [sp, #8]
	lsr	r0, lr, #18
	and	r0, r0, #63
	str	r0, [sp, #12]
	lsr	r0, lr, #24
	and	r0, r0, #63
	str	r0, [sp, #16]
	lsr	r0, ip, #6
	and	r0, r0, #63
	str	r0, [sp, #24]
	lsr	r0, ip, #12
	and	r0, r0, #63
	str	r0, [sp, #28]
	lsr	r0, ip, #18
	and	r0, r0, #63
	str	r0, [sp, #32]
	lsr	r0, ip, #24
	and	r0, r0, #63
	str	r0, [sp, #36]
	lsr	r0, r2, #6
	and	r0, r0, #63
	str	r0, [sp, #44]
	lsr	r0, r2, #12
	and	r0, r0, #63
	str	r0, [sp, #48]
	lsr	r0, r2, #18
	and	r0, r0, #63
	str	r0, [sp, #52]
	lsr	r0, r2, #24
	and	r2, r2, #63
	str	r2, [sp, #40]
	and	lr, lr, #63
	and	ip, ip, #63
	and	r2, r0, #63
	ldr	r6, .L25
	str	lr, [sp]
	str	ip, [sp, #20]
	str	r2, [sp, #56]
.L10:
	ldr	r2, [r5], #4
	cmp	r2, #1
	beq	.L2
	cmp	r2, #2
	beq	.L3
	cmp	r2, #0
	beq	.L4
	mov	lr, r1
	ldr	r0, [r6, r2, lsl #2]
	orr	r0, r0, r3
	str	r0, [lr], #8
	add	r8, r6, r2, lsl #2
	sub	r4, r2, #2
	lsl	ip, r2, #2
	ldr	r2, [r8, #4]
	cmp	r4, #10
	orr	r2, r2, r3
	str	r2, [r1, #4]
	add	r7, r8, #8
	bls	.L11
	add	r2, ip, #8
	add	r0, r6, r2
	add	r2, ip, #12
	orr	r8, lr, r0
	add	r2, r6, r2
	subs	r2, lr, r2
	and	r8, r8, #7
	movne	r2, #1
	cmp	r8, #0
	movne	r2, #0
	cmp	r2, #0
	bne	.L24
.L8:
	ldr	r0, [r7], #4
	add	r2, r2, #1
	orr	r0, r0, r3
	cmp	r4, r2
	str	r0, [lr], #4
	bhi	.L8
.L9:
	add	r1, r1, ip
.L4:
	add	r3, r3, #8
	cmp	r3, #128
	bne	.L10
	add	sp, sp, #64
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L3:
	mov	r2, r1
	ldr	r0, [r6, #8]
	orr	r0, r0, r3
	str	r0, [r2], #8
	ldr	r0, [r6, #12]
	orr	r0, r0, r3
	str	r0, [r1, #4]
	mov	r1, r2
	b	.L4
.L2:
	ldr	r2, [r6, #4]
	orr	r2, r2, r3
	str	r2, [r1], #4
	b	.L4
.L24:
	mov	r2, r0
	mov	r9, #0
	mov	r0, lr
	lsr	r10, r4, #1
.L6:
	ldr	fp, [r2]
	ldr	r8, [r2, #4]
	add	r9, r9, #1
	orr	fp, r3, fp
	orr	r8, r3, r8
	cmp	r10, r9
	str	fp, [r0]
	str	r8, [r0, #4]
	add	r2, r2, #8
	add	r0, r0, #8
	bne	.L6
	tst	r4, #1
	bic	r4, r4, #1
	ldrne	r2, [r7, r4, lsl #2]
	orrne	r2, r2, r3
	strne	r2, [lr, r4, lsl #2]
	b	.L9
.L11:
	mov	r2, #0
	b	.L8
.L26:
	.align	2
.L25:
	.word	.LANCHOR0
	.size	BuildDecompressionTable, .-BuildDecompressionTable
	.align	2
	.syntax unified
	.arm
	.type	SwitchToArmCallBuildDecompressionTable, %function
SwitchToArmCallBuildDecompressionTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	bx	r2	@ indirect register sibling call
	.size	SwitchToArmCallBuildDecompressionTable, .-SwitchToArmCallBuildDecompressionTable
	.align	2
	.syntax unified
	.arm
	.type	Mode5Loop, %function
Mode5Loop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	mov	ip, #0
	mov	fp, r1
	ldr	lr, .L145
	sub	sp, sp, #8
	add	r4, lr, #8
	ldm	lr, {r5, r6}
	str	r0, [sp]
	ldm	r4, {r4, lr}
.L71:
	ldr	r1, [fp, r4, lsl #2]
	and	r4, r1, #7
	lsr	r7, r1, #16
	and	r7, r7, r6, lsr ip
	add	ip, ip, r4
	lsr	r0, r1, #3
	cmp	ip, #31
	lsl	r1, r1, #16
	add	r1, r7, r1, lsr #24
	and	r0, r0, #31
	bhi	.L133
	ldr	r4, [fp, r1, lsl #2]
	lsl	r1, r4, #1
	and	r1, r1, #496
	and	r7, r4, #7
	orr	r0, r1, r0
	lsr	r1, r4, #16
	and	r1, r1, r6, lsr ip
	add	ip, ip, r7
	lsl	r4, r4, #16
	cmp	ip, #31
	add	r1, r1, r4, lsr #24
	bls	.L31
	subs	ip, ip, #32
	mvnne	r4, #0
	ldr	r6, [r5], #4
	subne	r7, r7, ip
	bicne	r4, r6, r4, lsl ip
	addne	r1, r1, r4, lsl r7
.L31:
	tst	r0, #128
	beq	.L32
	ldr	r1, [fp, r1, lsl #2]
	and	r7, r1, #7
	lsr	r8, r1, #16
	and	r8, r8, r6, lsr ip
	add	ip, ip, r7
	lsr	r4, r1, #3
	cmp	ip, #31
	lsl	r1, r1, #16
	eor	r0, r0, #128
	add	r1, r8, r1, lsr #24
	and	r4, r4, #31
	bhi	.L134
	ldr	r7, [fp, r1, lsl #2]
	lsl	r1, r7, #1
	and	r1, r1, #496
	and	r8, r7, #7
	orr	r4, r1, r4
	lsr	r1, r7, #16
	and	r1, r1, r6, lsr ip
	add	ip, r8, ip
	lsl	r7, r7, #16
	cmp	ip, #31
	add	r1, r1, r7, lsr #24
	bls	.L35
	subs	ip, ip, #32
	mvnne	r7, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	r7, r6, r7, lsl ip
	addne	r1, r1, r7, lsl r8
.L35:
	add	r0, r0, r4, lsl #7
.L32:
	ldr	r4, [fp, r1, lsl #2]
	and	r8, r4, #7
	lsr	r7, r4, #16
	and	r7, r7, r6, lsr ip
	add	ip, ip, r8
	lsr	r1, r4, #3
	cmp	ip, #31
	lsl	r4, r4, #16
	and	r1, r1, #31
	add	r4, r7, r4, lsr #24
	bhi	.L135
	ldr	r8, [fp, r4, lsl #2]
	lsl	r4, r8, #1
	and	r4, r4, #496
	and	r7, r8, #7
	orr	r1, r4, r1
	lsr	r4, r8, #16
	and	r4, r4, r6, lsr ip
	add	ip, ip, r7
	lsl	r8, r8, #16
	cmp	ip, #31
	add	r4, r4, r8, lsr #24
	bls	.L38
	subs	ip, ip, #32
	mvnne	r8, #0
	ldr	r6, [r5], #4
	subne	r7, r7, ip
	bicne	r8, r6, r8, lsl ip
	addne	r4, r4, r8, lsl r7
.L38:
	tst	r1, #128
	beq	.L39
	ldr	r9, [fp, r4, lsl #2]
	and	r8, r9, #7
	lsr	r4, r6, ip
	add	ip, ip, r8
	and	r4, r4, r9, lsr #16
	lsr	r7, r9, #3
	cmp	ip, #31
	lsl	r9, r9, #16
	eor	r1, r1, #128
	add	r4, r4, r9, lsr #24
	and	r7, r7, #31
	bhi	.L136
	ldr	r9, [fp, r4, lsl #2]
	lsl	r4, r9, #1
	and	r4, r4, #496
	and	r8, r9, #7
	orr	r7, r4, r7
	lsr	r4, r9, #16
	and	r4, r4, r6, lsr ip
	add	ip, ip, r8
	lsl	r9, r9, #16
	cmp	ip, #31
	add	r4, r4, r9, lsr #24
	bls	.L42
	subs	ip, ip, #32
	mvnne	r9, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	r9, r6, r9, lsl ip
	addne	r4, r4, r9, lsl r8
.L42:
	add	r1, r1, r7, lsl #7
.L39:
	ldr	r4, [r2, r4, lsl #2]
	add	r7, lr, r4, lsr #3
	and	r8, r4, #7
	lsr	lr, r4, #16
	and	lr, lr, r6, lsr ip
	add	ip, ip, r8
	lsl	r4, r4, #16
	cmp	ip, #31
	and	r7, r7, #15
	add	r4, lr, r4, lsr #24
	bhi	.L137
	ldr	r9, [r2, r4, lsl #2]
	and	r8, r9, #7
	lsr	r4, r9, #16
	add	lr, r7, r9, lsr #3
	and	r4, r4, r6, lsr ip
	add	ip, ip, r8
	and	lr, lr, #15
	lsl	r9, r9, #16
	cmp	ip, #31
	orr	r7, r7, lr, lsl #4
	add	r4, r4, r9, lsr #24
	bhi	.L138
	ldr	r4, [r2, r4, lsl #2]
	and	r8, r4, #7
	lsr	r9, r4, #16
	add	lr, lr, r4, lsr #3
	and	r9, r9, r6, lsr ip
	add	ip, ip, r8
	and	lr, lr, #15
	lsl	r4, r4, #16
	cmp	ip, #31
	orr	r7, r7, lr, lsl #8
	add	r4, r9, r4, lsr #24
	bhi	.L139
	ldr	r8, [r2, r4, lsl #2]
	and	r9, r8, #7
	lsr	r4, r8, #16
	add	lr, lr, r8, lsr #3
	and	r4, r4, r6, lsr ip
	add	ip, ip, r9
	and	lr, lr, #15
	lsl	r8, r8, #16
	cmp	ip, #31
	orr	r7, r7, lr, lsl #12
	add	r4, r4, r8, lsr #24
	bls	.L45
	subs	ip, ip, #32
	mvnne	r8, #0
	ldr	r6, [r5], #4
	subne	r9, r9, ip
	bicne	r8, r6, r8, lsl ip
	addne	r4, r4, r8, lsl r9
.L45:
	cmp	r0, #0
	beq	.L140
.L50:
	cmp	r1, #1
	beq	.L141
	mov	r8, r3
	strh	r7, [r8], #2	@ movhi
	add	r0, r8, r0, lsl #1
	sub	r9, r0, r3
	sub	r9, r9, #4
	cmp	r9, #16
	sub	r7, r8, r1, lsl #1
	bls	.L69
	rsb	r1, r1, #1
	add	r1, r3, r1, lsl #1
	orr	r10, r8, r1
	tst	r10, #3
	beq	.L142
.L69:
	ldrh	r3, [r7], #2
	strh	r3, [r8], #2	@ movhi
	cmp	r8, r0
	bne	.L69
.L70:
	mov	r3, r0
.L51:
	ldr	r1, [sp]
	cmp	r3, r1
	bne	.L71
	ldr	r3, .L145
	str	lr, [r3, #12]
	str	r4, [r3, #8]
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L135:
	subs	ip, ip, #32
	mvnne	r7, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	r7, r6, r7, lsl ip
	addne	r4, r4, r7, lsl r8
	ldr	r7, [fp, r4, lsl #2]
	lsl	r4, r7, #1
	and	r4, r4, #496
	orr	r1, r4, r1
	lsr	r4, r7, #16
	and	r4, r4, r6, lsr ip
	lsl	r8, r7, #16
	and	r7, r7, #7
	add	r4, r4, r8, lsr #24
	add	ip, r7, ip
	b	.L38
.L133:
	subs	ip, ip, #32
	mvnne	r7, #0
	ldr	r6, [r5], #4
	subne	r4, r4, ip
	bicne	r7, r6, r7, lsl ip
	addne	r1, r1, r7, lsl r4
	ldr	r4, [fp, r1, lsl #2]
	lsl	r1, r4, #1
	and	r1, r1, #496
	orr	r0, r1, r0
	lsr	r1, r4, #16
	and	r1, r1, r6, lsr ip
	lsl	r7, r4, #16
	and	r4, r4, #7
	add	r1, r1, r7, lsr #24
	add	ip, r4, ip
	b	.L31
.L137:
	subs	ip, ip, #32
	mvnne	lr, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	lr, r6, lr, lsl ip
	addne	r4, r4, lr, lsl r8
	ldr	lr, [r2, r4, lsl #2]
	lsr	r4, lr, #16
	lsl	r8, lr, #16
	and	r4, r4, r6, lsr ip
	add	r4, r4, r8, lsr #24
	ldr	r4, [r2, r4, lsl #2]
	and	r8, lr, #7
	add	r8, r8, ip
	add	ip, r7, lr, lsr #3
	lsr	lr, r4, #16
	lsl	r9, r4, #16
	and	lr, lr, r6, lsr r8
	and	ip, ip, #15
	add	lr, lr, r9, lsr #24
	ldr	r9, [r2, lr, lsl #2]
	orr	r7, r7, ip, lsl #4
	add	ip, ip, r4, lsr #3
	and	ip, ip, #15
	and	r4, r4, #7
	add	r8, r4, r8
	orr	r7, r7, ip, lsl #8
	lsr	r4, r9, #16
	add	ip, ip, r9, lsr #3
	and	lr, ip, #15
	and	r4, r4, r6, lsr r8
	lsl	ip, r9, #16
	add	r4, r4, ip, lsr #24
	cmp	r0, #0
	and	ip, r9, #7
	orr	r7, r7, lr, lsl #12
	add	ip, ip, r8
	bne	.L50
.L140:
	mov	r0, r3
	strh	r7, [r0], #2	@ movhi
	sub	r1, r1, #-2147483647
	add	r3, r0, r1, lsl #1
	cmp	r0, r3
	bne	.L59
	b	.L51
.L52:
	ldr	r8, [r2, r1, lsl #2]
	lsr	r4, r8, #16
	and	r7, r8, #7
	and	r9, r4, r6, lsr ip
	add	r1, lr, r8, lsr #3
	add	ip, ip, r7
	and	r1, r1, #15
	lsl	r4, r8, #16
	cmp	ip, #31
	orr	lr, lr, r1, lsl #4
	add	r4, r9, r4, lsr #24
	bhi	.L143
	ldr	r7, [r2, r4, lsl #2]
	add	r1, r1, r7, lsr #3
	and	r1, r1, #15
	lsr	r4, r7, #16
	orr	r8, lr, r1, lsl #8
	and	lr, r7, #7
	and	r9, r4, r6, lsr ip
	add	ip, ip, lr
	lsl	r4, r7, #16
	cmp	ip, #31
	add	r4, r9, r4, lsr #24
	bhi	.L144
	ldr	r7, [r2, r4, lsl #2]
	and	r9, r7, #7
	lsr	r4, r7, #16
	add	r1, r1, r7, lsr #3
	and	r4, r4, r6, lsr ip
	add	ip, ip, r9
	and	lr, r1, #15
	cmp	ip, #31
	lsl	r1, r7, #16
	orr	r8, r8, lr, lsl #12
	add	r4, r4, r1, lsr #24
	bls	.L54
	subs	ip, ip, #32
	mvnne	r1, #0
	ldr	r6, [r5], #4
	subne	r9, r9, ip
	bicne	r1, r6, r1, lsl ip
	addne	r4, r4, r1, lsl r9
.L54:
	strh	r8, [r0], #2	@ movhi
	cmp	r3, r0
	beq	.L51
.L59:
	ldr	r1, [r2, r4, lsl #2]
	and	r7, r1, #7
	lsr	r4, r1, #16
	and	r4, r4, r6, lsr ip
	add	ip, r7, ip
	add	lr, lr, r1, lsr #3
	cmp	ip, #31
	lsl	r1, r1, #16
	and	lr, lr, #15
	add	r1, r4, r1, lsr #24
	bls	.L52
	subs	ip, ip, #32
	mvnne	r4, #0
	ldr	r6, [r5], #4
	subne	r7, r7, ip
	bicne	r4, r6, r4, lsl ip
	addne	r1, r1, r4, lsl r7
	ldr	r1, [r2, r1, lsl #2]
	lsr	r4, r1, #16
	lsl	r7, r1, #16
	and	r4, r4, r6, lsr ip
	add	r4, r4, r7, lsr #24
	ldr	r7, [r2, r4, lsl #2]
	and	r4, r1, #7
	add	r1, lr, r1, lsr #3
	and	r1, r1, #15
	orr	lr, lr, r1, lsl #4
	add	r1, r1, r7, lsr #3
	add	r4, r4, ip
	and	r1, r1, #15
	lsr	ip, r7, #16
	orr	r8, lr, r1, lsl #8
	and	ip, ip, r6, lsr r4
	lsl	lr, r7, #16
	add	ip, ip, lr, lsr #24
	and	r7, r7, #7
	ldr	ip, [r2, ip, lsl #2]
	add	r7, r7, r4
.L132:
	add	r1, r1, ip, lsr #3
	lsr	r4, ip, #16
	and	lr, r1, #15
	and	r4, r4, r6, lsr r7
	lsl	r1, ip, #16
	and	ip, ip, #7
	orr	r8, r8, lr, lsl #12
	add	r4, r4, r1, lsr #24
	add	ip, ip, r7
	b	.L54
.L143:
	subs	r9, ip, #32
	mvnne	ip, #0
	ldr	r6, [r5], #4
	subne	r7, r7, r9
	bicne	ip, r6, ip, lsl r9
	addne	r4, r4, ip, lsl r7
	ldr	r4, [r2, r4, lsl #2]
	add	r1, r1, r4, lsr #3
	lsr	ip, r4, #16
	and	r1, r1, #15
	orr	r8, lr, r1, lsl #8
	and	ip, ip, r6, lsr r9
	lsl	lr, r4, #16
	add	ip, ip, lr, lsr #24
	and	r4, r4, #7
	ldr	ip, [r2, ip, lsl #2]
	add	r7, r4, r9
	b	.L132
.L144:
	subs	ip, ip, #32
	mvnne	r7, #0
	ldr	r6, [r5], #4
	subne	lr, lr, ip
	bicne	r7, r6, r7, lsl ip
	addne	r4, r4, r7, lsl lr
	ldr	r7, [r2, r4, lsl #2]
	add	lr, r1, r7, lsr #3
	lsr	r4, r7, #16
	and	r4, r4, r6, lsr ip
	lsl	r1, r7, #16
	and	lr, lr, #15
	and	r7, r7, #7
	orr	r8, r8, lr, lsl #12
	add	r4, r4, r1, lsr #24
	add	ip, r7, ip
	b	.L54
.L141:
	lsr	r1, r3, #1
	cmp	r0, #5
	and	r1, r1, #1
	str	r1, [sp, #4]
	add	r0, r0, #1
	bls	.L61
	cmp	r1, #0
	ldr	r1, [sp, #4]
	sub	r8, r0, r1
	lsr	r9, r8, #1
	add	r1, r3, r1, lsl #1
	strhne	r7, [r3]	@ movhi
	add	r9, r1, r9, lsl #2
	orr	r10, r7, r7, lsl #16
.L63:
	str	r10, [r1], #4
	cmp	r9, r1
	bne	.L63
	tst	r8, #1
	beq	.L64
	ldr	r1, [sp, #4]
	bic	r8, r8, #1
	add	r8, r8, r1
	add	r1, r8, #1
	cmp	r0, r1
	lsl	r1, r8, #1
	strh	r7, [r3, r1]	@ movhi
	bls	.L64
.L72:
	add	r9, r8, #2
	add	r1, r3, r1
	cmp	r9, r0
	strh	r7, [r1, #2]	@ movhi
	bcs	.L64
	add	r9, r8, #3
	cmp	r0, r9
	strh	r7, [r1, #4]	@ movhi
	bls	.L64
	add	r9, r8, #4
	cmp	r0, r9
	strh	r7, [r1, #6]	@ movhi
	bls	.L64
	add	r8, r8, #5
	cmp	r0, r8
	strh	r7, [r1, #8]	@ movhi
	strhhi	r7, [r1, #10]	@ movhi
.L64:
	add	r3, r3, r0, lsl #1
	b	.L51
.L138:
	subs	ip, ip, #32
	mvnne	r9, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	r9, r6, r9, lsl ip
	addne	r4, r4, r9, lsl r8
	ldr	r4, [r2, r4, lsl #2]
	lsr	r8, r4, #16
	and	r8, r8, r6, lsr ip
	lsl	r9, r4, #16
	add	lr, lr, r4, lsr #3
	add	r8, r8, r9, lsr #24
	and	lr, lr, #15
	and	r4, r4, #7
	ldr	r8, [r2, r8, lsl #2]
	orr	r7, r7, lr, lsl #8
	add	ip, r4, ip
.L131:
	add	lr, lr, r8, lsr #3
	lsr	r4, r8, #16
	and	r4, r4, r6, lsr ip
	lsl	r9, r8, #16
	and	lr, lr, #15
	and	r8, r8, #7
	orr	r7, r7, lr, lsl #12
	add	r4, r4, r9, lsr #24
	add	ip, r8, ip
	b	.L45
.L142:
	mov	r10, r8
	lsr	r9, r9, #1
	add	r9, r9, #1
	str	r9, [sp, #4]
	lsr	r9, r9, #1
	add	r3, r3, r9, lsl #2
	sub	r1, r1, #4
	add	r9, r3, #2
.L66:
	ldr	r3, [r1, #4]!
	str	r3, [r10], #4
	cmp	r10, r9
	bne	.L66
	ldr	r3, [sp, #4]
	bic	r9, r3, #1
	tst	r3, #1
	lsl	r9, r9, #1
	ldrhne	r3, [r7, r9]
	strhne	r3, [r8, r9]	@ movhi
	b	.L70
.L136:
	subs	ip, ip, #32
	mvnne	r9, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	r9, r6, r9, lsl ip
	addne	r4, r4, r9, lsl r8
	ldr	r8, [fp, r4, lsl #2]
	lsl	r4, r8, #1
	and	r4, r4, #496
	orr	r7, r4, r7
	lsr	r4, r8, #16
	and	r4, r4, r6, lsr ip
	lsl	r9, r8, #16
	and	r8, r8, #7
	add	r4, r4, r9, lsr #24
	add	ip, r8, ip
	b	.L42
.L134:
	subs	ip, ip, #32
	mvnne	r8, #0
	ldr	r6, [r5], #4
	subne	r7, r7, ip
	bicne	r8, r6, r8, lsl ip
	addne	r1, r1, r8, lsl r7
	ldr	r7, [fp, r1, lsl #2]
	lsl	r1, r7, #1
	and	r1, r1, #496
	orr	r4, r1, r4
	lsr	r1, r7, #16
	and	r1, r1, r6, lsr ip
	lsl	r8, r7, #16
	and	r7, r7, #7
	add	r1, r1, r8, lsr #24
	add	ip, r7, ip
	b	.L35
.L139:
	subs	ip, ip, #32
	mvnne	r9, #0
	ldr	r6, [r5], #4
	subne	r8, r8, ip
	bicne	r9, r6, r9, lsl ip
	addne	r4, r4, r9, lsl r8
	ldr	r8, [r2, r4, lsl #2]
	b	.L131
.L61:
	mov	r8, #0
	strh	r7, [r3]	@ movhi
	mov	r1, r8
	b	.L72
.L146:
	.align	2
.L145:
	.word	.LANCHOR1
	.size	Mode5Loop, .-Mode5Loop
	.align	2
	.syntax unified
	.arm
	.type	SwitchToArmCallMode5Loop, %function
SwitchToArmCallMode5Loop:
	@ Function supports interworking.
	@ args = 4, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	ip, [sp]
	bx	ip	@ indirect register sibling call
	.size	SwitchToArmCallMode5Loop, .-SwitchToArmCallMode5Loop
	.align	1
	.p2align 2,,3
	.arch armv4t
	.fpu softvfp
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeMode5, %function
DecodeMode5:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 3328
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r9
	mov	r7, r8
	movs	r6, r3
	push	{r7, lr}
	ldr	r3, .L150
	mov	r9, r2
	ldr	r2, [r3]
	ldr	r4, .L150+4
	mov	r8, r1
	adds	r1, r2, #4
	add	sp, sp, r4
	str	r1, [r3]
	ldr	r2, [r2]
	ldr	r4, .L150+8
	ldr	r1, .L150+12
	str	r2, [r3, #4]
	subs	r2, r4, r1
	mov	r4, sp
	movs	r5, r0
	movs	r0, r4
	bl	FastUnsafeCopy32
	ldr	r7, .L150+16
	mov	r0, r8
	movs	r1, r7
	bl	.L152
	ldr	r3, .L150+20
	mov	r8, r3
	movs	r1, r3
	mov	r0, r9
	bl	.L152
	ldr	r1, .L150+24
	ldr	r2, .L150+28
	movs	r0, r4
	subs	r2, r2, r1
	bl	FastUnsafeCopy32
	movs	r3, r6
	mov	r2, r8
	movs	r1, r7
	movs	r0, r5
	bl	.L152
	movs	r3, #208
	lsls	r3, r3, #4
	add	sp, sp, r3
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L151:
	.align	2
.L150:
	.word	.LANCHOR1
	.word	-3328
	.word	SwitchToArmCallBuildDecompressionTable
	.word	BuildDecompressionTable
	.word	sWorkingYkTable_Lo
	.word	sWorkingYkTable_Sym
	.word	Mode5Loop
	.word	SwitchToArmCallMode5Loop
	.size	DecodeMode5, .-DecodeMode5
	.align	1
	.p2align 2,,3
	.global	LZDecompressWram
	.syntax unified
	.code	16
	.thumb_func
	.type	LZDecompressWram, %function
LZDecompressWram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	ldr	r2, .L160
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L158
	mov	r3, sp
	ldrh	r3, [r3, #4]
	cmp	r3, #0
	beq	.L153
	mov	r3, sp
	ldrh	r3, [r3]
	ldr	r1, .L160+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1, #8]
	movs	r3, #0
	str	r3, [r1, #4]
	cmp	r2, #5
	beq	.L159
.L153:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L158:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L153
.L159:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1]
	movs	r1, r4
	ldr	r0, [sp]
	lsrs	r0, r0, #11
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	adds	r0, r5, r0
	bl	DecodeMode5
	b	.L153
.L161:
	.align	2
.L160:
	.word	67108866
	.word	.LANCHOR1
	.size	LZDecompressWram, .-LZDecompressWram
	.align	1
	.p2align 2,,3
	.global	LZDecompressVram
	.syntax unified
	.code	16
	.thumb_func
	.type	LZDecompressVram, %function
LZDecompressVram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	ldr	r2, .L169
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L167
	mov	r3, sp
	ldrh	r3, [r3, #4]
	cmp	r3, #0
	beq	.L162
	mov	r3, sp
	ldrh	r3, [r3]
	ldr	r1, .L169+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1, #8]
	movs	r3, #0
	str	r3, [r1, #4]
	cmp	r2, #5
	beq	.L168
.L162:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L167:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
	b	.L162
.L168:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1]
	movs	r1, r4
	ldr	r0, [sp]
	lsrs	r0, r0, #11
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	adds	r0, r5, r0
	bl	DecodeMode5
	b	.L162
.L170:
	.align	2
.L169:
	.word	67108866
	.word	.LANCHOR1
	.size	LZDecompressVram, .-LZDecompressVram
	.align	1
	.p2align 2,,3
	.global	IsLZ77Data
	.syntax unified
	.code	16
	.thumb_func
	.type	IsLZ77Data, %function
IsLZ77Data:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, r0
	movs	r0, #3
	push	{r4, lr}
	tst	r3, r0
	bne	.L174
	ldrb	r4, [r3]
	movs	r0, #0
	cmp	r4, #16
	bne	.L171
	ldrb	r0, [r3, #2]
	ldrb	r4, [r3, #3]
	lsls	r0, r0, #8
	ldrb	r3, [r3, #1]
	lsls	r4, r4, #16
	orrs	r0, r4
	orrs	r0, r3
	cmp	r0, r1
	bcc	.L174
	cmp	r2, r0
	bcc	.L174
.L171:
	@ sp needed
	pop	{r4}
	pop	{r1}
	bx	r1
.L174:
	movs	r0, #0
	b	.L171
	.size	IsLZ77Data, .-IsLZ77Data
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheet
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheet, %function
LoadCompressedSpriteSheet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r1, #0
	sub	sp, sp, #8
	movs	r5, r0
	ldr	r0, [r0]
	bl	malloc_and_decompress
	ldr	r3, [r5, #4]
	movs	r4, r0
	str	r0, [sp]
	mov	r0, sp
	str	r3, [sp, #4]
	bl	LoadSpriteSheet
	movs	r5, r0
	movs	r0, r4
	bl	Free
	movs	r0, r5
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpriteSheet, .-LoadCompressedSpriteSheet
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheetByTemplate
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheetByTemplate, %function
LoadCompressedSpriteSheetByTemplate:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	r3, [r0, #12]
	movs	r4, r0
	ldr	r0, [r3]
	movs	r5, r1
	sub	sp, sp, #32
	lsls	r3, r0, #30
	bne	.L182
	ldrb	r3, [r0]
	cmp	r3, #16
	beq	.L185
.L182:
	movs	r0, r4
	movs	r2, r5
	movs	r1, #0
	bl	LoadSpriteSheetByTemplate
	movs	r4, r0
.L181:
	movs	r0, r4
	add	sp, sp, #32
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L185:
	ldrb	r6, [r0, #2]
	ldrb	r3, [r0, #3]
	lsls	r6, r6, #8
	lsls	r3, r3, #16
	orrs	r6, r3
	ldrb	r3, [r0, #1]
	orrs	r6, r3
	movs	r2, r6
	ldr	r3, .L186
	subs	r2, r2, #32
	cmp	r2, r3
	bhi	.L182
	movs	r1, #0
	bl	malloc_and_decompress
	mov	r3, sp
	movs	r7, r0
	str	r0, [sp]
	adds	r6, r6, r5
	strh	r6, [r3, #4]
	str	r3, [sp, #20]
	ldrh	r3, [r4]
	add	r0, sp, #8
	movs	r2, r5
	movs	r1, #0
	strh	r3, [r0]
	bl	LoadSpriteSheetByTemplate
	movs	r4, r0
	movs	r0, r7
	bl	Free
	b	.L181
.L187:
	.align	2
.L186:
	.word	16352
	.size	LoadCompressedSpriteSheetByTemplate, .-LoadCompressedSpriteSheetByTemplate
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePalette
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePalette, %function
LoadCompressedSpritePalette:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r1, #0
	sub	sp, sp, #8
	ldrh	r5, [r0, #4]
	ldr	r0, [r0]
	bl	malloc_and_decompress
	mov	r3, sp
	movs	r4, r0
	str	r0, [sp]
	mov	r0, sp
	strh	r5, [r3, #4]
	bl	LoadSpritePalette
	movs	r5, r0
	movs	r0, r4
	bl	Free
	movs	r0, r5
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpritePalette, .-LoadCompressedSpritePalette
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePaletteWithTag
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePaletteWithTag, %function
LoadCompressedSpritePaletteWithTag:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	lsls	r4, r1, #16
	sub	sp, sp, #8
	movs	r1, #0
	bl	malloc_and_decompress
	mov	r3, sp
	movs	r5, r0
	str	r0, [sp]
	lsrs	r4, r4, #16
	mov	r0, sp
	strh	r4, [r3, #4]
	bl	LoadSpritePalette
	movs	r4, r0
	movs	r0, r5
	bl	Free
	movs	r0, r4
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpritePaletteWithTag, .-LoadCompressedSpritePaletteWithTag
	.align	1
	.p2align 2,,3
	.global	DecompressPicFromTable
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressPicFromTable, %function
DecompressPicFromTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r5, [r0]
	sub	sp, sp, #8
	ldr	r2, .L197
	movs	r4, r1
	movs	r0, r5
	mov	r1, sp
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L195
	mov	r3, sp
	ldrh	r3, [r3, #4]
	cmp	r3, #0
	beq	.L190
	mov	r3, sp
	ldrh	r3, [r3]
	ldr	r1, .L197+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1, #8]
	movs	r3, #0
	str	r3, [r1, #4]
	cmp	r2, #5
	beq	.L196
.L190:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L195:
	movs	r1, r4
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L190
.L196:
	movs	r3, r5
	adds	r3, r3, #32
	movs	r2, r5
	str	r3, [r1]
	movs	r1, r5
	ldr	r0, [sp]
	lsrs	r0, r0, #11
	movs	r3, r4
	adds	r2, r2, #20
	adds	r1, r1, #8
	adds	r0, r4, r0
	bl	DecodeMode5
	b	.L190
.L198:
	.align	2
.L197:
	.word	67108866
	.word	.LANCHOR1
	.size	DecompressPicFromTable, .-DecompressPicFromTable
	.align	1
	.p2align 2,,3
	.global	DecompressDataVram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressDataVram, %function
DecompressDataVram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	ldr	r2, .L206
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L204
	mov	r3, sp
	ldrh	r3, [r3, #4]
	cmp	r3, #0
	beq	.L199
	mov	r3, sp
	ldrh	r3, [r3]
	ldr	r1, .L206+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1, #8]
	movs	r3, #0
	str	r3, [r1, #4]
	cmp	r2, #5
	beq	.L205
.L199:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L204:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
	b	.L199
.L205:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1]
	movs	r1, r4
	ldr	r0, [sp]
	lsrs	r0, r0, #11
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	adds	r0, r5, r0
	bl	DecodeMode5
	b	.L199
.L207:
	.align	2
.L206:
	.word	67108866
	.word	.LANCHOR1
	.size	DecompressDataVram, .-DecompressDataVram
	.align	1
	.p2align 2,,3
	.global	DecompressDataWram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressDataWram, %function
DecompressDataWram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	ldr	r2, .L215
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L213
	mov	r3, sp
	ldrh	r3, [r3, #4]
	cmp	r3, #0
	beq	.L208
	mov	r3, sp
	ldrh	r3, [r3]
	ldr	r1, .L215+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1, #8]
	movs	r3, #0
	str	r3, [r1, #4]
	cmp	r2, #5
	beq	.L214
.L208:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L213:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L208
.L214:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1]
	movs	r1, r4
	ldr	r0, [sp]
	lsrs	r0, r0, #11
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	adds	r0, r5, r0
	bl	DecodeMode5
	b	.L208
.L216:
	.align	2
.L215:
	.word	67108866
	.word	.LANCHOR1
	.size	DecompressDataWram, .-DecompressDataWram
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheetOverrideBuffer
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheetOverrideBuffer, %function
LoadCompressedSpriteSheetOverrideBuffer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r4, r0
	movs	r5, r1
	sub	sp, sp, #8
	ldr	r0, [r0]
	bl	DecompressDataWram
	ldr	r3, [r4, #4]
	mov	r0, sp
	str	r5, [sp]
	str	r3, [sp, #4]
	bl	LoadSpriteSheet
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpriteSheetOverrideBuffer, .-LoadCompressedSpriteSheetOverrideBuffer
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePaletteOverrideBuffer
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePaletteOverrideBuffer, %function
LoadCompressedSpritePaletteOverrideBuffer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r5, r1
	movs	r4, r0
	sub	sp, sp, #8
	ldr	r0, [r0]
	bl	DecompressDataWram
	mov	r2, sp
	str	r5, [sp]
	ldrh	r3, [r4, #4]
	mov	r0, sp
	strh	r3, [r2, #4]
	bl	LoadSpritePalette
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
	.size	LoadCompressedSpritePaletteOverrideBuffer, .-LoadCompressedSpritePaletteOverrideBuffer
	.align	1
	.p2align 2,,3
	.global	SmolDecompressData
	.syntax unified
	.code	16
	.thumb_func
	.type	SmolDecompressData, %function
SmolDecompressData:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldrh	r4, [r0, #4]
	cmp	r4, #0
	beq	.L219
	movs	r3, #0
	ldrh	r4, [r0]
	ldr	r5, .L224
	lsls	r4, r4, #21
	lsrs	r4, r4, #26
	str	r4, [r5, #8]
	ldrb	r4, [r0]
	lsls	r4, r4, #27
	str	r3, [r5, #4]
	lsrs	r4, r4, #27
	cmp	r4, #5
	beq	.L223
.L219:
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L223:
	movs	r3, r1
	movs	r4, r1
	ldr	r0, [r0]
	adds	r3, r3, #24
	adds	r4, r4, #12
	lsrs	r0, r0, #11
	str	r3, [r5]
	adds	r0, r2, r0
	movs	r3, r2
	movs	r2, r4
	bl	DecodeMode5
	b	.L219
.L225:
	.align	2
.L224:
	.word	.LANCHOR1
	.size	SmolDecompressData, .-SmolDecompressData
	.align	1
	.p2align 2,,3
	.global	isModeLoEncoded
	.syntax unified
	.code	16
	.thumb_func
	.type	isModeLoEncoded, %function
isModeLoEncoded:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	subs	r3, r0, #3
	movs	r2, #2
	@ sp needed
	movs	r0, #0
	cmp	r2, r3
	adcs	r0, r0, r0
	bx	lr
	.size	isModeLoEncoded, .-isModeLoEncoded
	.align	1
	.p2align 2,,3
	.global	isModeSymEncoded
	.syntax unified
	.code	16
	.thumb_func
	.type	isModeSymEncoded, %function
isModeSymEncoded:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, #0
	push	{r4, lr}
	movs	r1, #1
	@ sp needed
	movs	r4, r3
	subs	r2, r0, #1
	cmp	r1, r2
	adcs	r4, r4, r3
	subs	r0, r0, #4
	cmp	r1, r0
	adcs	r3, r3, r3
	movs	r2, r4
	orrs	r2, r3
	movs	r0, r2
	pop	{r4}
	pop	{r1}
	bx	r1
	.size	isModeSymEncoded, .-isModeSymEncoded
	.align	1
	.p2align 2,,3
	.global	isModeSymDelta
	.syntax unified
	.code	16
	.thumb_func
	.type	isModeSymDelta, %function
isModeSymDelta:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, r0
	@ sp needed
	subs	r0, r0, #2
	subs	r3, r3, #5
	rsbs	r2, r0, #0
	adcs	r0, r0, r2
	rsbs	r2, r3, #0
	adcs	r3, r3, r2
	orrs	r0, r3
	bx	lr
	.size	isModeSymDelta, .-isModeSymDelta
	.align	1
	.p2align 2,,3
	.global	LoadSpecialPokePic
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadSpecialPokePic, %function
LoadSpecialPokePic:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r9
	mov	r7, r8
	lsls	r1, r1, #16
	push	{r7, lr}
	movs	r6, r0
	lsrs	r0, r1, #16
	lsls	r5, r3, #24
	movs	r7, r2
	bl	SanitizeSpeciesId
	lsrs	r5, r5, #24
	movs	r4, r0
	cmp	r0, #201
	beq	.L252
.L230:
	ldr	r3, .L255
	mov	r8, r3
	cmp	r5, #0
	beq	.L231
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #108]
	mov	r9, r3
	cmp	r3, #0
	beq	.L232
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L253
.L232:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r0, [r5, #88]
	cmp	r0, #0
	beq	.L234
.L250:
	movs	r1, r6
	bl	DecompressDataWram
.L233:
	movs	r3, #72
	adds	r3, r3, #255
	cmp	r4, r3
	bne	.L229
	movs	r2, #0
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
	movs	r2, #1
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
.L229:
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L231:
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #112]
	mov	r9, r3
	cmp	r3, #0
	beq	.L235
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L254
.L235:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r0, [r5, #92]
	cmp	r0, #0
	beq	.L237
.L251:
	movs	r1, r6
	bl	DecompressDataWram
	b	.L229
.L252:
	movs	r0, r7
	bl	GetUnownSpeciesId
	movs	r4, r0
	b	.L230
.L254:
	movs	r1, r6
	mov	r0, r9
	bl	DecompressDataWram
	b	.L229
.L253:
	movs	r1, r6
	mov	r0, r9
	bl	DecompressDataWram
	b	.L233
.L234:
	mov	r3, r8
	ldr	r0, [r3, #88]
	b	.L250
.L237:
	mov	r3, r8
	ldr	r0, [r3, #92]
	b	.L251
.L256:
	.align	2
.L255:
	.word	gSpeciesInfo
	.size	LoadSpecialPokePic, .-LoadSpecialPokePic
	.align	1
	.p2align 2,,3
	.global	HandleLoadSpecialPokePic
	.syntax unified
	.code	16
	.thumb_func
	.type	HandleLoadSpecialPokePic, %function
HandleLoadSpecialPokePic:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	movs	r4, r1
	@ sp needed
	movs	r1, r2
	movs	r2, r3
	movs	r3, #255
	ands	r3, r0
	movs	r0, r4
	bl	LoadSpecialPokePic
	pop	{r4}
	pop	{r0}
	bx	r0
	.size	HandleLoadSpecialPokePic, .-HandleLoadSpecialPokePic
	.align	1
	.p2align 2,,3
	.global	Unused_LZDecompressWramIndirect
	.syntax unified
	.code	16
	.thumb_func
	.type	Unused_LZDecompressWramIndirect, %function
Unused_LZDecompressWramIndirect:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r5, [r0]
	sub	sp, sp, #8
	ldr	r2, .L265
	movs	r4, r1
	movs	r0, r5
	mov	r1, sp
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L263
	mov	r3, sp
	ldrh	r3, [r3, #4]
	cmp	r3, #0
	beq	.L258
	mov	r3, sp
	ldrh	r3, [r3]
	ldr	r1, .L265+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1, #8]
	movs	r3, #0
	str	r3, [r1, #4]
	cmp	r2, #5
	beq	.L264
.L258:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L263:
	movs	r1, r4
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L258
.L264:
	movs	r3, r5
	adds	r3, r3, #32
	movs	r2, r5
	str	r3, [r1]
	movs	r1, r5
	ldr	r0, [sp]
	lsrs	r0, r0, #11
	movs	r3, r4
	adds	r2, r2, #20
	adds	r1, r1, #8
	adds	r0, r4, r0
	bl	DecodeMode5
	b	.L258
.L266:
	.align	2
.L265:
	.word	67108866
	.word	.LANCHOR1
	.size	Unused_LZDecompressWramIndirect, .-Unused_LZDecompressWramIndirect
	.align	1
	.p2align 2,,3
	.global	GetDecompressedDataSize
	.syntax unified
	.code	16
	.thumb_func
	.type	GetDecompressedDataSize, %function
GetDecompressedDataSize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldrb	r3, [r0]
	lsls	r3, r3, #27
	ldr	r0, [r0]
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L270
	lsrs	r0, r0, #11
.L267:
	@ sp needed
	bx	lr
.L270:
	lsrs	r0, r0, #8
	b	.L267
	.size	GetDecompressedDataSize, .-GetDecompressedDataSize
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC15:
	.ascii	"src/decompress.c:886\000"
	.text
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheetUsingHeap
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheetUsingHeap, %function
LoadCompressedSpriteSheetUsingHeap:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r2, [r0]
	ldrb	r3, [r2]
	lsls	r3, r3, #27
	movs	r5, r0
	sub	sp, sp, #8
	ldr	r0, [r2]
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L274
	lsrs	r0, r0, #11
.L273:
	ldr	r1, .L275
	bl	AllocZeroed_
	movs	r4, r0
	ldr	r0, [r5]
	movs	r1, r4
	bl	DecompressDataWram
	ldr	r3, [r5, #4]
	mov	r0, sp
	str	r3, [sp, #4]
	str	r4, [sp]
	bl	LoadSpriteSheet
	movs	r0, r4
	bl	Free
	movs	r0, #0
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
.L274:
	lsrs	r0, r0, #8
	b	.L273
.L276:
	.align	2
.L275:
	.word	.LC15
	.size	LoadCompressedSpriteSheetUsingHeap, .-LoadCompressedSpriteSheetUsingHeap
	.section	.rodata.str1.4
	.align	2
.LC17:
	.ascii	"src/decompress.c:903\000"
	.text
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePaletteUsingHeap
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePaletteUsingHeap, %function
LoadCompressedSpritePaletteUsingHeap:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r2, [r0]
	ldrb	r3, [r2]
	lsls	r3, r3, #27
	movs	r5, r0
	sub	sp, sp, #8
	ldr	r0, [r2]
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L280
	lsrs	r0, r0, #11
.L279:
	ldr	r1, .L281
	bl	AllocZeroed_
	movs	r4, r0
	ldr	r0, [r5]
	movs	r1, r4
	bl	DecompressDataWram
	mov	r2, sp
	str	r4, [sp]
	ldrh	r3, [r5, #4]
	mov	r0, sp
	strh	r3, [r2, #4]
	bl	LoadSpritePalette
	movs	r0, r4
	bl	Free
	movs	r0, #0
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
.L280:
	lsrs	r0, r0, #8
	b	.L279
.L282:
	.align	2
.L281:
	.word	.LC17
	.size	LoadCompressedSpritePaletteUsingHeap, .-LoadCompressedSpritePaletteUsingHeap
	.section	.bss,"aw",%nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	sBitStream, %object
	.size	sBitStream, 4
sBitStream:
	.space	4
	.type	sCurrBits, %object
	.size	sCurrBits, 4
sCurrBits:
	.space	4
	.type	sCurrState, %object
	.size	sCurrState, 4
sCurrState:
	.space	4
	.type	sCurrSymbol, %object
	.size	sCurrSymbol, 4
sCurrSymbol:
	.space	4
	.type	sWorkingYkTable_Sym, %object
	.size	sWorkingYkTable_Sym, 256
sWorkingYkTable_Sym:
	.space	256
	.type	sWorkingYkTable_Lo, %object
	.size	sWorkingYkTable_Lo, 256
sWorkingYkTable_Lo:
	.space	256
	.section	.iwram,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	sYkTemplate, %object
	.size	sYkTemplate, 512
sYkTemplate:
	.word	0
	.word	4128774
	.word	2031621
	.word	2039813
	.word	983044
	.word	987140
	.word	991236
	.word	995332
	.word	458755
	.word	460803
	.word	462851
	.word	464899
	.word	466947
	.word	468995
	.word	471043
	.word	473091
	.word	196610
	.word	197634
	.word	198658
	.word	199682
	.word	200706
	.word	201730
	.word	202754
	.word	203778
	.word	204802
	.word	205826
	.word	206850
	.word	207874
	.word	208898
	.word	209922
	.word	210946
	.word	211970
	.word	65537
	.word	66049
	.word	66561
	.word	67073
	.word	67585
	.word	68097
	.word	68609
	.word	69121
	.word	69633
	.word	70145
	.word	70657
	.word	71169
	.word	71681
	.word	72193
	.word	72705
	.word	73217
	.word	73729
	.word	74241
	.word	74753
	.word	75265
	.word	75777
	.word	76289
	.word	76801
	.word	77313
	.word	77825
	.word	78337
	.word	78849
	.word	79361
	.word	79873
	.word	80385
	.word	80897
	.word	81409
	.word	0
	.word	256
	.word	512
	.word	768
	.word	1024
	.word	1280
	.word	1536
	.word	1792
	.word	2048
	.word	2304
	.word	2560
	.word	2816
	.word	3072
	.word	3328
	.word	3584
	.word	3840
	.word	4096
	.word	4352
	.word	4608
	.word	4864
	.word	5120
	.word	5376
	.word	5632
	.word	5888
	.word	6144
	.word	6400
	.word	6656
	.word	6912
	.word	7168
	.word	7424
	.word	7680
	.word	7936
	.word	8192
	.word	8448
	.word	8704
	.word	8960
	.word	9216
	.word	9472
	.word	9728
	.word	9984
	.word	10240
	.word	10496
	.word	10752
	.word	11008
	.word	11264
	.word	11520
	.word	11776
	.word	12032
	.word	12288
	.word	12544
	.word	12800
	.word	13056
	.word	13312
	.word	13568
	.word	13824
	.word	14080
	.word	14336
	.word	14592
	.word	14848
	.word	15104
	.word	15360
	.word	15616
	.word	15872
	.word	16128
	.ident	"GCC: (devkitARM release 63) 13.2.0"
	.text
	.code 16
	.align	1
.L152:
	bx	r4
.text
	.align	2, 0

