	.arch armv4t
	.fpu softvfp
	.file	"<stdin>"
	.text
	.align	2
	.arch armv4t
	.fpu softvfp
	.syntax unified
	.arm
	.type	Mode5Loop, %function
Mode5Loop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 12
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	cmp	r0, #0
	sub	sp, sp, #12
	str	r0, [sp, #8]
	beq	.L1
	mov	r10, #0
	mov	r4, r3
	ldr	r3, .L125
	mov	fp, r1
	ldm	r3, {r8, lr}
	ldrb	r0, [r3, #8]	@ zero_extendqisi2
	ldrb	r1, [r3, #9]	@ zero_extendqisi2
	ldr	ip, [r3, #12]
	str	r10, [sp, #4]
.L46:
	ldr	r6, [fp, r8, lsl #2]
	and	r7, r6, #7
	lsr	r3, r6, #16
	and	r3, r3, ip, lsr r1
	add	r1, r1, r7
	lsr	r5, r6, #3
	cmp	r1, #31
	lsl	r6, r6, #16
	and	r5, r5, #31
	add	r6, r3, r6, lsr #24
	bhi	.L113
	ldr	r8, [fp, r6, lsl #2]
	lsl	r3, r8, #1
	and	r7, r8, #7
	and	r3, r3, #496
	lsr	r6, r8, #16
	orr	r5, r3, r5
	add	r3, r1, r7
	and	r6, r6, ip, lsr r1
	lsl	r8, r8, #16
	cmp	r3, #31
	add	r6, r6, r8, lsr #24
	bls	.L5
	subs	r3, r3, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r7, r7, r3
	bicne	r1, ip, r1, lsl r3
	addne	r6, r6, r1, lsl r7
.L5:
	tst	r5, #128
	beq	.L6
	ldr	r6, [fp, r6, lsl #2]
	and	r8, r6, #7
	lsr	r7, r6, #16
	and	r7, r7, ip, lsr r3
	add	r3, r3, r8
	lsr	r1, r6, #3
	cmp	r3, #31
	lsl	r6, r6, #16
	add	r6, r7, r6, lsr #24
	eor	r5, r5, #128
	and	r7, r1, #31
	bhi	.L114
	ldr	r8, [fp, r6, lsl #2]
	lsl	r6, r8, #1
	and	r6, r6, #496
	and	r1, r8, #7
	orr	r7, r6, r7
	lsr	r6, r8, #16
	and	r6, r6, ip, lsr r3
	add	r3, r1, r3
	lsl	r8, r8, #16
	cmp	r3, #31
	add	r6, r6, r8, lsr #24
	bls	.L9
	subs	r3, r3, #32
	mvnne	r8, #0
	ldr	ip, [lr], #4
	subne	r1, r1, r3
	bicne	r8, ip, r8, lsl r3
	addne	r6, r6, r8, lsl r1
.L9:
	add	r5, r5, r7, lsl #7
.L6:
	ldr	r1, [fp, r6, lsl #2]
	and	r8, r1, #7
	lsr	r7, r1, #16
	and	r7, r7, ip, lsr r3
	add	r3, r3, r8
	lsr	r6, r1, #3
	cmp	r3, #31
	lsl	r1, r1, #16
	add	r7, r7, r1, lsr #24
	and	r6, r6, #31
	bhi	.L115
	ldr	r7, [fp, r7, lsl #2]
	lsl	r1, r7, #1
	and	r1, r1, #496
	orr	r1, r1, r6
	and	r8, r7, #7
	str	r1, [sp]
	lsr	r1, r7, #16
	and	r1, r1, ip, lsr r3
	add	r3, r3, r8
	lsl	r7, r7, #16
	cmp	r3, #31
	add	r1, r1, r7, lsr #24
	bls	.L12
	subs	r3, r3, #32
	mvnne	r6, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r3
	bicne	r7, ip, r6, lsl r3
	addne	r1, r1, r7, lsl r8
.L12:
	ldr	r6, [sp]
	tst	r6, #128
	beq	.L13
	ldr	r9, [fp, r1, lsl #2]
	and	r8, r9, #7
	lsr	r1, ip, r3
	add	r3, r3, r8
	and	r1, r1, r9, lsr #16
	lsr	r7, r9, #3
	cmp	r3, #31
	lsl	r9, r9, #16
	eor	r6, r6, #128
	add	r1, r1, r9, lsr #24
	and	r7, r7, #31
	bhi	.L116
	ldr	r9, [fp, r1, lsl #2]
	lsl	r1, r9, #1
	and	r1, r1, #496
	and	r8, r9, #7
	orr	r7, r1, r7
	lsr	r1, r9, #16
	and	r1, r1, ip, lsr r3
	add	r3, r3, r8
	lsl	r9, r9, #16
	cmp	r3, #31
	add	r1, r1, r9, lsr #24
	bls	.L16
	subs	r3, r3, #32
	mvnne	r9, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r3
	bicne	r9, ip, r9, lsl r3
	addne	r1, r1, r9, lsl r8
.L16:
	add	r6, r6, r7, lsl #7
	str	r6, [sp]
.L13:
	ldr	r8, [r2, r1, lsl #2]
	add	r7, r0, r8, lsr #3
	and	r0, r8, #7
	lsr	r9, r8, #16
	add	r1, r3, r0
	and	r9, r9, ip, lsr r3
	lsl	r8, r8, #16
	cmp	r1, #31
	and	r7, r7, #15
	add	r8, r9, r8, lsr #24
	bhi	.L117
	ldr	r9, [r2, r8, lsl #2]
	lsr	r3, r9, #16
	and	r8, r9, #7
	add	r0, r7, r9, lsr #3
	and	r10, r3, ip, lsr r1
	add	r1, r1, r8
	and	r0, r0, #15
	lsl	r9, r9, #16
	cmp	r1, #31
	orr	r7, r7, r0, lsl #4
	add	r3, r10, r9, lsr #24
	bhi	.L118
	ldr	r8, [r2, r3, lsl #2]
	add	r0, r0, r8, lsr #3
	and	r0, r0, #15
	lsr	r9, r8, #16
	orr	r3, r7, r0, lsl #8
	and	r7, r8, #7
	and	r9, r9, ip, lsr r1
	add	r1, r1, r7
	lsl	r8, r8, #16
	cmp	r1, #31
	add	r8, r9, r8, lsr #24
	bhi	.L119
	ldr	r7, [r2, r8, lsl #2]
	and	r9, r7, #7
	lsr	r8, r7, #16
	add	r0, r0, r7, lsr #3
	and	r8, r8, ip, lsr r1
	add	r1, r1, r9
	and	r0, r0, #15
	lsl	r7, r7, #16
	cmp	r1, #31
	orr	r3, r3, r0, lsl #12
	add	r8, r8, r7, lsr #24
	bls	.L19
	subs	r1, r1, #32
	mvnne	r7, #0
	ldr	ip, [lr], #4
	subne	r9, r9, r1
	bicne	r7, ip, r7, lsl r1
	addne	r8, r8, r7, lsl r9
.L19:
	cmp	r5, #0
	and	r0, r0, #255
	and	r1, r1, #255
	beq	.L120
.L24:
	ldr	r6, [sp]
	cmp	r6, #1
	beq	.L34
	mov	r7, r4
	strh	r3, [r7], #2	@ movhi
	sub	r3, r5, #1
	cmp	r3, #8
	lsl	r9, r6, #1
	bls	.L35
	rsb	r3, r9, #2
	add	r3, r4, r3
	orr	r10, r7, r3
	tst	r10, #3
	beq	.L121
.L35:
	mov	r3, r4
	ldr	r6, [sp]
	rsb	r9, r6, #-2147483648
	sub	r6, r5, r6
	add	r4, r4, r9, lsl #1
	add	r6, r3, r6, lsl #1
.L42:
	ldrh	r9, [r4, #2]!
	cmp	r4, r6
	strh	r9, [r3, #2]!	@ movhi
	bne	.L42
.L43:
	add	r4, r7, r5, lsl #1
.L25:
	ldr	r3, [sp, #4]
	ldr	r5, [sp, #8]
	add	r3, r3, #1
	cmp	r5, r3
	str	r3, [sp, #4]
	bne	.L46
	ldr	r3, .L125
	stm	r3, {r8, lr}
	str	ip, [r3, #12]
	strb	r0, [r3, #8]
	strb	r1, [r3, #9]
.L1:
	add	sp, sp, #12
	@ sp needed
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L117:
	subs	r1, r1, #32
	mvnne	r3, #0
	ldr	ip, [lr], #4
	subne	r0, r0, r1
	bicne	r3, ip, r3, lsl r1
	addne	r8, r8, r3, lsl r0
	ldr	r0, [r2, r8, lsl #2]
	lsr	r3, r0, #16
	lsl	r8, r0, #16
	and	r3, r3, ip, lsr r1
	add	r3, r3, r8, lsr #24
	ldr	r8, [r2, r3, lsl #2]
	and	r10, r0, #7
	add	r0, r7, r0, lsr #3
	and	r0, r0, #15
	orr	r3, r7, r0, lsl #4
	add	r0, r0, r8, lsr #3
	and	r0, r0, #15
	add	r10, r10, r1
	orr	r3, r3, r0, lsl #8
.L111:
	lsr	r1, r8, #16
	lsl	r7, r8, #16
	and	r1, r1, ip, lsr r10
	add	r1, r1, r7, lsr #24
	and	r8, r8, #7
	ldr	r1, [r2, r1, lsl #2]
	add	r9, r8, r10
.L109:
	add	r0, r0, r1, lsr #3
	lsr	r8, r1, #16
	lsl	r7, r1, #16
	and	r1, r1, #7
	and	r0, r0, #15
	and	r8, r8, ip, lsr r9
	add	r1, r1, r9
	cmp	r5, #0
	orr	r3, r3, r0, lsl #12
	add	r8, r8, r7, lsr #24
	and	r0, r0, #255
	and	r1, r1, #255
	bne	.L24
.L120:
	mov	r6, r4
	ldr	r4, [sp]
	strh	r3, [r6], #2	@ movhi
	cmp	r4, #1
	sub	r7, r4, #1
	mov	r4, r6
	beq	.L25
	mov	r10, r6
	b	.L33
.L26:
	ldr	r9, [r2, r3, lsl #2]
	and	r8, r9, #7
	lsr	r6, r9, #16
	add	r3, r0, r9, lsr #3
	and	r6, r6, ip, lsr r1
	add	r1, r1, r8
	and	r3, r3, #15
	lsl	r9, r9, #16
	cmp	r1, #31
	orr	r0, r0, r3, lsl #4
	add	r6, r6, r9, lsr #24
	bhi	.L122
	ldr	r6, [r2, r6, lsl #2]
	add	r3, r3, r6, lsr #3
	and	r3, r3, #15
	lsr	r9, r6, #16
	orr	r8, r0, r3, lsl #8
	and	r0, r6, #7
	and	r9, r9, ip, lsr r1
	add	r1, r1, r0
	lsl	r6, r6, #16
	cmp	r1, #31
	add	r6, r9, r6, lsr #24
	bhi	.L123
	ldr	r6, [r2, r6, lsl #2]
	add	r3, r3, r6, lsr #3
	and	r0, r3, #15
	and	r9, r6, #7
	orr	r3, r8, r0, lsl #12
	lsr	r8, r6, #16
	and	r8, r8, ip, lsr r1
	add	r1, r1, r9
	lsl	r6, r6, #16
	cmp	r1, #31
	add	r8, r8, r6, lsr #24
	bls	.L28
	subs	r1, r1, #32
	mvnne	r6, #0
	ldr	ip, [lr], #4
	subne	r9, r9, r1
	bicne	r6, ip, r6, lsl r1
	addne	r8, r8, r6, lsl r9
.L28:
	add	r5, r5, #1
	cmp	r5, r7
	strh	r3, [r4], #2	@ movhi
	and	r0, r0, #255
	and	r1, r1, #255
	beq	.L124
.L33:
	ldr	r3, [r2, r8, lsl #2]
	and	r6, r3, #7
	lsr	r8, r3, #16
	and	r8, r8, ip, lsr r1
	add	r1, r1, r6
	add	r0, r0, r3, lsr #3
	cmp	r1, #31
	lsl	r3, r3, #16
	and	r0, r0, #15
	add	r3, r8, r3, lsr #24
	bls	.L26
	subs	r1, r1, #32
	mvnne	r8, #0
	ldr	ip, [lr], #4
	subne	r6, r6, r1
	bicne	r8, ip, r8, lsl r1
	addne	r3, r3, r8, lsl r6
	ldr	r3, [r2, r3, lsl #2]
	lsr	r6, r3, #16
	lsl	r8, r3, #16
	and	r6, r6, ip, lsr r1
	add	r6, r6, r8, lsr #24
	ldr	r6, [r2, r6, lsl #2]
	and	r8, r3, #7
	add	r3, r0, r3, lsr #3
	add	r8, r8, r1
	and	r1, r3, #15
	orr	r3, r0, r1, lsl #4
	add	r0, r1, r6, lsr #3
	lsr	r1, r6, #16
	lsl	r9, r6, #16
	and	r1, r1, ip, lsr r8
	add	r1, r1, r9, lsr #24
	ldr	r1, [r2, r1, lsl #2]
	and	r0, r0, #15
	orr	r3, r3, r0, lsl #8
	and	r6, r6, #7
	add	r0, r0, r1, lsr #3
	add	r6, r6, r8
	and	r0, r0, #15
.L110:
	lsr	r8, r1, #16
	lsl	r9, r1, #16
	and	r8, r8, ip, lsr r6
	and	r1, r1, #7
	orr	r3, r3, r0, lsl #12
	add	r8, r8, r9, lsr #24
	add	r1, r1, r6
	b	.L28
.L115:
	subs	r3, r3, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r3
	bicne	r1, ip, r1, lsl r3
	addne	r7, r7, r1, lsl r8
	ldr	r7, [fp, r7, lsl #2]
	lsl	r1, r7, #1
	and	r1, r1, #496
	orr	r1, r1, r6
	str	r1, [sp]
	lsr	r1, r7, #16
	and	r1, r1, ip, lsr r3
	lsl	r8, r7, #16
	and	r7, r7, #7
	add	r1, r1, r8, lsr #24
	add	r3, r7, r3
	b	.L12
.L113:
	subs	r3, r1, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r7, r7, r3
	bicne	r1, ip, r1, lsl r3
	addne	r6, r6, r1, lsl r7
	ldr	r1, [fp, r6, lsl #2]
	lsl	r6, r1, #1
	and	r6, r6, #496
	orr	r5, r6, r5
	lsr	r6, r1, #16
	and	r6, r6, ip, lsr r3
	lsl	r7, r1, #16
	and	r1, r1, #7
	add	r6, r6, r7, lsr #24
	add	r3, r1, r3
	b	.L5
.L122:
	subs	r9, r1, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r9
	bicne	r1, ip, r1, lsl r9
	addne	r6, r6, r1, lsl r8
	ldr	r6, [r2, r6, lsl #2]
	add	r3, r3, r6, lsr #3
	and	r8, r3, #15
	lsr	r1, r6, #16
	orr	r3, r0, r8, lsl #8
	and	r1, r1, ip, lsr r9
	lsl	r0, r6, #16
	add	r1, r1, r0, lsr #24
	ldr	r1, [r2, r1, lsl #2]
	and	r6, r6, #7
	add	r8, r8, r1, lsr #3
	add	r6, r6, r9
	and	r0, r8, #15
	b	.L110
.L123:
	subs	r9, r1, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r0, r0, r9
	bicne	r1, ip, r1, lsl r9
	addne	r6, r6, r1, lsl r0
	ldr	r1, [r2, r6, lsl #2]
	add	r3, r3, r1, lsr #3
	and	r0, r3, #15
	orr	r3, r8, r0, lsl #12
	lsr	r8, r1, #16
	lsl	r6, r1, #16
	and	r8, r8, ip, lsr r9
	and	r1, r1, #7
	add	r8, r8, r6, lsr #24
	add	r1, r1, r9
	b	.L28
.L34:
	lsr	r6, r4, #1
	cmp	r5, #5
	and	r6, r6, #1
	str	r6, [sp]
	add	r5, r5, #1
	bls	.L37
	cmp	r6, #0
	ldr	r6, [sp]
	sub	r7, r5, r6
	lsr	r9, r7, #1
	add	r6, r4, r6, lsl #1
	strhne	r3, [r4]	@ movhi
	add	r9, r6, r9, lsl #2
	orr	r10, r3, r3, lsl #16
.L39:
	str	r10, [r6], #4
	cmp	r9, r6
	bne	.L39
	tst	r7, #1
	beq	.L40
	ldr	r6, [sp]
	bic	r7, r7, #1
	add	r7, r7, r6
	add	r6, r7, #1
	cmp	r5, r6
	lsl	r6, r7, #1
	strh	r3, [r4, r6]	@ movhi
	bls	.L40
.L47:
	add	r9, r7, #2
	add	r6, r4, r6
	cmp	r5, r9
	strh	r3, [r6, #2]	@ movhi
	bls	.L40
	add	r9, r7, #3
	cmp	r5, r9
	strh	r3, [r6, #4]	@ movhi
	bls	.L40
	add	r9, r7, #4
	cmp	r5, r9
	strh	r3, [r6, #6]	@ movhi
	bls	.L40
	add	r7, r7, #5
	cmp	r5, r7
	strh	r3, [r6, #8]	@ movhi
	strhhi	r3, [r6, #10]	@ movhi
.L40:
	add	r4, r4, r5, lsl #1
	b	.L25
.L124:
	ldr	r3, [sp]
	sub	r4, r3, #-2147483647
	add	r4, r10, r4, lsl #1
	b	.L25
.L118:
	subs	r10, r1, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r10
	bicne	r1, ip, r1, lsl r10
	addne	r3, r3, r1, lsl r8
	ldr	r8, [r2, r3, lsl #2]
	add	r0, r0, r8, lsr #3
	and	r0, r0, #15
	orr	r3, r7, r0, lsl #8
	b	.L111
.L121:
	mov	r6, r7
	lsr	r10, r5, #1
	add	r10, r4, r10, lsl #2
	sub	r3, r3, #4
	add	r10, r10, #2
.L44:
	ldr	r4, [r3, #4]!
	str	r4, [r6], #4
	cmp	r6, r10
	bne	.L44
	tst	r5, #1
	bic	r3, r5, #1
	rsbne	r9, r9, r3, lsl #1
	ldrhne	r4, [r7, r9]
	lslne	r3, r3, #1
	strhne	r4, [r7, r3]	@ movhi
	b	.L43
.L114:
	subs	r3, r3, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r3
	bicne	r1, ip, r1, lsl r3
	addne	r6, r6, r1, lsl r8
	ldr	r1, [fp, r6, lsl #2]
	lsl	r6, r1, #1
	and	r6, r6, #496
	orr	r7, r6, r7
	lsr	r6, r1, #16
	and	r6, r6, ip, lsr r3
	lsl	r8, r1, #16
	and	r1, r1, #7
	add	r6, r6, r8, lsr #24
	add	r3, r1, r3
	b	.L9
.L116:
	subs	r3, r3, #32
	mvnne	r9, #0
	ldr	ip, [lr], #4
	subne	r8, r8, r3
	bicne	r9, ip, r9, lsl r3
	addne	r1, r1, r9, lsl r8
	ldr	r8, [fp, r1, lsl #2]
	lsl	r1, r8, #1
	and	r1, r1, #496
	orr	r7, r1, r7
	lsr	r1, r8, #16
	and	r1, r1, ip, lsr r3
	lsl	r9, r8, #16
	and	r8, r8, #7
	add	r1, r1, r9, lsr #24
	add	r3, r8, r3
	b	.L16
.L119:
	subs	r9, r1, #32
	mvnne	r1, #0
	ldr	ip, [lr], #4
	subne	r7, r7, r9
	bicne	r1, ip, r1, lsl r9
	addne	r8, r8, r1, lsl r7
	ldr	r1, [r2, r8, lsl #2]
	b	.L109
.L37:
	mov	r7, #0
	strh	r3, [r4]	@ movhi
	mov	r6, r7
	b	.L47
.L126:
	.align	2
.L125:
	.word	.LANCHOR0
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
	.section	.iwram.code,"ax",%progbits
	.align	2
	.syntax unified
	.arm
	.type	CopyTable, %function
CopyTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	add	r2, r0, r2, lsl #2
.L129:
	ldr	ip, [r1], #4
	orr	ip, ip, r3
	str	ip, [r0], #4
	cmp	r2, r0
	bne	.L129
	bx	lr
	.size	CopyTable, .-CopyTable
	.text
	.align	1
	.p2align 2,,3
	.arch armv4t
	.fpu softvfp
	.syntax unified
	.code	16
	.thumb_func
	.type	BuildDecompressionTable, %function
BuildDecompressionTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r9
	mov	r6, r8
	mov	lr, r10
	ldr	r3, [r0]
	push	{r6, r7, lr}
	movs	r7, #12
	mov	r9, r3
	movs	r3, #48
	ldr	r6, [r0, #4]
	ldr	r0, [r0, #8]
	movs	r4, r1
	lsrs	r1, r6, #28
	ands	r7, r1
	lsrs	r1, r0, #26
	mov	ip, r3
	mov	r8, r1
	mov	r10, r7
	mov	r1, ip
	mov	r7, r8
	ands	r1, r7
	mov	ip, r1
	mov	r1, r9
	movs	r2, #63
	sub	sp, sp, #32
	mov	r5, sp
	lsrs	r1, r1, #6
	ands	r1, r2
	strh	r1, [r5, #2]
	mov	r1, r9
	lsrs	r1, r1, #12
	ands	r1, r2
	strh	r1, [r5, #4]
	mov	r1, r9
	lsrs	r1, r1, #18
	ands	r1, r2
	strh	r1, [r5, #6]
	mov	r1, r9
	lsrs	r1, r1, #24
	ands	r1, r2
	strh	r1, [r5, #8]
	lsrs	r1, r6, #6
	ands	r1, r2
	strh	r1, [r5, #12]
	lsrs	r1, r6, #12
	ands	r1, r2
	strh	r1, [r5, #14]
	lsrs	r1, r6, #18
	ands	r1, r2
	strh	r1, [r5, #16]
	lsrs	r1, r6, #24
	ands	r6, r2
	strh	r6, [r5, #10]
	movs	r6, r1
	mov	r1, r9
	mov	r8, r10
	ands	r6, r2
	strh	r6, [r5, #18]
	lsrs	r6, r0, #6
	ands	r6, r2
	strh	r6, [r5, #22]
	lsrs	r6, r0, #12
	ands	r6, r2
	strh	r6, [r5, #24]
	lsrs	r6, r0, #18
	ands	r6, r2
	strh	r6, [r5, #26]
	lsrs	r6, r0, #24
	ands	r6, r2
	ands	r0, r2
	ands	r2, r1
	strh	r2, [r5]
	ldr	r2, .L148
	add	r8, r8, ip
	lsrs	r1, r1, #30
	add	r1, r1, r8
	mov	r8, r2
	ldr	r2, .L148+4
	strh	r6, [r5, #28]
	movs	r3, #0
	mov	r9, r2
	strh	r0, [r5, #20]
	strh	r1, [r5, #30]
	ldr	r6, .L148+8
	b	.L138
.L146:
	ldr	r1, .L148+12
	cmp	r2, #0
	beq	.L135
	orrs	r1, r3
	stmia	r4!, {r1}
.L135:
	adds	r3, r3, #8
	adds	r5, r5, #2
	cmp	r3, #128
	beq	.L145
.L138:
	ldrh	r2, [r5]
	cmp	r2, #2
	beq	.L133
	bls	.L146
	cmp	r2, #3
	bne	.L147
	movs	r0, r6
	ldr	r1, .L148+16
	ldr	r2, .L148+20
	orrs	r0, r3
	orrs	r1, r3
	orrs	r2, r3
	adds	r3, r3, #8
	str	r0, [r4]
	str	r1, [r4, #4]
	str	r2, [r4, #8]
	adds	r5, r5, #2
	adds	r4, r4, #12
	cmp	r3, #128
	bne	.L138
.L145:
	add	sp, sp, #32
	@ sp needed
	pop	{r5, r6, r7}
	mov	r10, r7
	mov	r9, r6
	mov	r8, r5
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L133:
	mov	r1, r8
	movs	r2, r6
	orrs	r1, r3
	orrs	r2, r3
	str	r1, [r4]
	str	r2, [r4, #4]
	adds	r4, r4, #8
	b	.L135
.L147:
	mov	r1, r9
	lsls	r7, r2, #2
	movs	r0, r4
	adds	r1, r7, r1
	bl	CopyTable
	adds	r4, r4, r7
	b	.L135
.L149:
	.align	2
.L148:
	.word	2031621
	.word	sYkTemplate
	.word	2039813
	.word	4128774
	.word	983044
	.word	987140
	.size	BuildDecompressionTable, .-BuildDecompressionTable
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeMode5, %function
DecodeMode5:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 3200
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r8
	mov	r8, r2
	push	{lr}
	movs	r5, r3
	ldr	r3, .L151
	ldr	r4, .L151+4
	ldr	r2, [r3, #4]
	ldr	r6, .L151+8
	add	sp, sp, r4
	movs	r4, r0
	movs	r0, r1
	adds	r1, r2, #4
	ldr	r2, [r2]
	str	r1, [r3, #4]
	movs	r1, r6
	str	r2, [r3, #12]
	bl	BuildDecompressionTable
	ldr	r7, .L151+12
	mov	r0, r8
	movs	r1, r7
	bl	BuildDecompressionTable
	movs	r2, #3
	mov	r8, sp
	ldr	r0, .L151+16
	ldr	r3, .L151+20
	subs	r3, r3, r0
	asrs	r1, r3, #31
	ands	r2, r1
	adds	r2, r2, r3
	lsls	r2, r2, #9
	mov	r1, r8
	lsrs	r2, r2, #11
	bl	CpuFastSet
	movs	r3, r5
	movs	r2, r7
	movs	r1, r6
	movs	r0, r4
	bl	.L153
	movs	r3, #200
	lsls	r3, r3, #4
	add	sp, sp, r3
	@ sp needed
	pop	{r7}
	mov	r8, r7
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L152:
	.align	2
.L151:
	.word	.LANCHOR0
	.word	-3200
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
	ldr	r2, .L161
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L159
	mov	r3, sp
	ldrh	r0, [r3, #4]
	cmp	r0, #0
	beq	.L154
	ldrh	r3, [r3]
	ldr	r1, .L161+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1]
	movs	r3, #0
	strb	r3, [r1, #9]
	strb	r3, [r1, #8]
	str	r3, [r1, #12]
	cmp	r2, #5
	beq	.L160
.L154:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L159:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L154
.L160:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1, #4]
	movs	r1, r4
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	bl	DecodeMode5
	b	.L154
.L162:
	.align	2
.L161:
	.word	67108866
	.word	.LANCHOR0
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
	ldr	r2, .L170
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L168
	mov	r3, sp
	ldrh	r0, [r3, #4]
	cmp	r0, #0
	beq	.L163
	ldrh	r3, [r3]
	ldr	r1, .L170+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1]
	movs	r3, #0
	strb	r3, [r1, #9]
	strb	r3, [r1, #8]
	str	r3, [r1, #12]
	cmp	r2, #5
	beq	.L169
.L163:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L168:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
	b	.L163
.L169:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1, #4]
	movs	r1, r4
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	bl	DecodeMode5
	b	.L163
.L171:
	.align	2
.L170:
	.word	67108866
	.word	.LANCHOR0
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
	bne	.L175
	ldrb	r4, [r3]
	movs	r0, #0
	cmp	r4, #16
	bne	.L172
	ldrb	r0, [r3, #2]
	ldrb	r4, [r3, #3]
	lsls	r0, r0, #8
	ldrb	r3, [r3, #1]
	lsls	r4, r4, #16
	orrs	r0, r4
	orrs	r0, r3
	cmp	r0, r1
	bcc	.L175
	cmp	r2, r0
	bcc	.L175
.L172:
	@ sp needed
	pop	{r4}
	pop	{r1}
	bx	r1
.L175:
	movs	r0, #0
	b	.L172
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
	bne	.L183
	ldrb	r3, [r0]
	cmp	r3, #16
	beq	.L186
.L183:
	movs	r0, r4
	movs	r2, r5
	movs	r1, #0
	bl	LoadSpriteSheetByTemplate
	movs	r4, r0
.L182:
	movs	r0, r4
	add	sp, sp, #32
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L186:
	ldrb	r6, [r0, #2]
	ldrb	r3, [r0, #3]
	lsls	r6, r6, #8
	lsls	r3, r3, #16
	orrs	r6, r3
	ldrb	r3, [r0, #1]
	orrs	r6, r3
	movs	r2, r6
	ldr	r3, .L187
	subs	r2, r2, #32
	cmp	r2, r3
	bhi	.L183
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
	b	.L182
.L188:
	.align	2
.L187:
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
	ldr	r2, .L198
	movs	r4, r1
	movs	r0, r5
	mov	r1, sp
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L196
	mov	r3, sp
	ldrh	r0, [r3, #4]
	cmp	r0, #0
	beq	.L191
	ldrh	r3, [r3]
	ldr	r1, .L198+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1]
	movs	r3, #0
	strb	r3, [r1, #9]
	strb	r3, [r1, #8]
	str	r3, [r1, #12]
	cmp	r2, #5
	beq	.L197
.L191:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L196:
	movs	r1, r4
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L191
.L197:
	movs	r3, r5
	adds	r3, r3, #32
	movs	r2, r5
	str	r3, [r1, #4]
	movs	r1, r5
	movs	r3, r4
	adds	r2, r2, #20
	adds	r1, r1, #8
	bl	DecodeMode5
	b	.L191
.L199:
	.align	2
.L198:
	.word	67108866
	.word	.LANCHOR0
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
	ldr	r2, .L207
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L205
	mov	r3, sp
	ldrh	r0, [r3, #4]
	cmp	r0, #0
	beq	.L200
	ldrh	r3, [r3]
	ldr	r1, .L207+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1]
	movs	r3, #0
	strb	r3, [r1, #9]
	strb	r3, [r1, #8]
	str	r3, [r1, #12]
	cmp	r2, #5
	beq	.L206
.L200:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L205:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
	b	.L200
.L206:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1, #4]
	movs	r1, r4
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	bl	DecodeMode5
	b	.L200
.L208:
	.align	2
.L207:
	.word	67108866
	.word	.LANCHOR0
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
	ldr	r2, .L216
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L214
	mov	r3, sp
	ldrh	r0, [r3, #4]
	cmp	r0, #0
	beq	.L209
	ldrh	r3, [r3]
	ldr	r1, .L216+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1]
	movs	r3, #0
	strb	r3, [r1, #9]
	strb	r3, [r1, #8]
	str	r3, [r1, #12]
	cmp	r2, #5
	beq	.L215
.L209:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L214:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L209
.L215:
	movs	r3, r4
	adds	r3, r3, #32
	movs	r2, r4
	str	r3, [r1, #4]
	movs	r1, r4
	movs	r3, r5
	adds	r2, r2, #20
	adds	r1, r1, #8
	bl	DecodeMode5
	b	.L209
.L217:
	.align	2
.L216:
	.word	67108866
	.word	.LANCHOR0
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
	push	{r4, r5, r6, lr}
	ldrh	r6, [r0, #4]
	cmp	r6, #0
	beq	.L220
	ldrh	r4, [r0]
	ldr	r5, .L225
	lsls	r4, r4, #21
	lsrs	r4, r4, #26
	str	r4, [r5]
	movs	r4, #0
	strb	r4, [r5, #9]
	strb	r4, [r5, #8]
	str	r4, [r5, #12]
	ldrb	r4, [r0]
	lsls	r4, r4, #27
	lsrs	r4, r4, #27
	cmp	r4, #5
	beq	.L224
.L220:
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L224:
	movs	r3, r1
	movs	r0, r1
	adds	r3, r3, #24
	adds	r0, r0, #12
	str	r3, [r5, #4]
	movs	r3, r2
	movs	r2, r0
	movs	r0, r6
	bl	DecodeMode5
	b	.L220
.L226:
	.align	2
.L225:
	.word	.LANCHOR0
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
	beq	.L253
.L231:
	ldr	r3, .L256
	mov	r8, r3
	cmp	r5, #0
	beq	.L232
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #108]
	mov	r9, r3
	cmp	r3, #0
	beq	.L233
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L254
.L233:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r0, [r5, #88]
	cmp	r0, #0
	beq	.L235
.L251:
	movs	r1, r6
	bl	DecompressDataWram
.L234:
	movs	r3, #72
	adds	r3, r3, #255
	cmp	r4, r3
	bne	.L230
	movs	r2, #0
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
	movs	r2, #1
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
.L230:
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L232:
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #112]
	mov	r9, r3
	cmp	r3, #0
	beq	.L236
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L255
.L236:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r0, [r5, #92]
	cmp	r0, #0
	beq	.L238
.L252:
	movs	r1, r6
	bl	DecompressDataWram
	b	.L230
.L253:
	movs	r0, r7
	bl	GetUnownSpeciesId
	movs	r4, r0
	b	.L231
.L255:
	movs	r1, r6
	mov	r0, r9
	bl	DecompressDataWram
	b	.L230
.L254:
	movs	r1, r6
	mov	r0, r9
	bl	DecompressDataWram
	b	.L234
.L235:
	mov	r3, r8
	ldr	r0, [r3, #88]
	b	.L251
.L238:
	mov	r3, r8
	ldr	r0, [r3, #92]
	b	.L252
.L257:
	.align	2
.L256:
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
	ldr	r2, .L266
	movs	r4, r1
	movs	r0, r5
	mov	r1, sp
	bl	CpuSet
	mov	r3, sp
	ldrb	r2, [r3]
	lsls	r2, r2, #27
	lsrs	r2, r2, #27
	cmp	r2, #16
	beq	.L264
	mov	r3, sp
	ldrh	r0, [r3, #4]
	cmp	r0, #0
	beq	.L259
	ldrh	r3, [r3]
	ldr	r1, .L266+4
	lsls	r3, r3, #21
	lsrs	r3, r3, #26
	str	r3, [r1]
	movs	r3, #0
	strb	r3, [r1, #9]
	strb	r3, [r1, #8]
	str	r3, [r1, #12]
	cmp	r2, #5
	beq	.L265
.L259:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L264:
	movs	r1, r4
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L259
.L265:
	movs	r3, r5
	adds	r3, r3, #32
	movs	r2, r5
	str	r3, [r1, #4]
	movs	r1, r5
	movs	r3, r4
	adds	r2, r2, #20
	adds	r1, r1, #8
	bl	DecodeMode5
	b	.L259
.L267:
	.align	2
.L266:
	.word	67108866
	.word	.LANCHOR0
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
	beq	.L271
	lsrs	r0, r0, #11
.L268:
	@ sp needed
	bx	lr
.L271:
	lsrs	r0, r0, #8
	b	.L268
	.size	GetDecompressedDataSize, .-GetDecompressedDataSize
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC14:
	.ascii	"src/decompress.c:903\000"
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
	beq	.L275
	lsrs	r0, r0, #11
.L274:
	ldr	r1, .L276
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
.L275:
	lsrs	r0, r0, #8
	b	.L274
.L277:
	.align	2
.L276:
	.word	.LC14
	.size	LoadCompressedSpriteSheetUsingHeap, .-LoadCompressedSpriteSheetUsingHeap
	.section	.rodata.str1.4
	.align	2
.LC16:
	.ascii	"src/decompress.c:920\000"
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
	beq	.L281
	lsrs	r0, r0, #11
.L280:
	ldr	r1, .L282
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
.L281:
	lsrs	r0, r0, #8
	b	.L280
.L283:
	.align	2
.L282:
	.word	.LC16
	.size	LoadCompressedSpritePaletteUsingHeap, .-LoadCompressedSpritePaletteUsingHeap
	.section	.rodata
	.align	2
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
	.section	.bss,"aw",%nobits
	.align	2
	.type	sWorkingYkTable_Sym, %object
	.size	sWorkingYkTable_Sym, 256
sWorkingYkTable_Sym:
	.space	256
	.type	sWorkingYkTable_Lo, %object
	.size	sWorkingYkTable_Lo, 256
sWorkingYkTable_Lo:
	.space	256
	.section	.sbss,"aw",%nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	sCurrState, %object
	.size	sCurrState, 4
sCurrState:
	.space	4
	.type	sBitStream, %object
	.size	sBitStream, 4
sBitStream:
	.space	4
	.type	sPrevSymNibble, %object
	.size	sPrevSymNibble, 1
sPrevSymNibble:
	.space	1
	.type	sBitIndex, %object
	.size	sBitIndex, 1
sBitIndex:
	.space	1
	.space	2
	.type	sCurrBits, %object
	.size	sCurrBits, 4
sCurrBits:
	.space	4
	.ident	"GCC: (devkitARM release 63) 13.2.0"
	.text
	.code 16
	.align	1
.L153:
	bx	r8
.text
	.align	2, 0

