	.arch armv4t
	.fpu softvfp
	.file	"<stdin>"
	.text
	.align	1
	.p2align 2,,3
	.global	TrkVolPitSet
	.syntax unified
	.code	16
	.thumb_func
	.type	TrkVolPitSet, %function
TrkVolPitSet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldrb	r2, [r1]
	push	{r4, r5, lr}
	lsls	r3, r2, #31
	bpl	.L2
	ldrb	r3, [r1, #18]
	ldrb	r0, [r1, #19]
	muls	r0, r3
	movs	r3, #20
	movs	r5, #21
	ldrsb	r3, [r1, r3]
	ldrsb	r5, [r1, r5]
	ldrb	r4, [r1, #24]
	lsls	r3, r3, #1
	lsrs	r0, r0, #5
	adds	r3, r3, r5
	cmp	r4, #1
	beq	.L19
	cmp	r4, #2
	bne	.L4
	movs	r4, #22
	ldrsb	r4, [r1, r4]
	adds	r3, r3, r4
.L4:
	cmp	r3, #127
	ble	.L5
	movs	r3, #127
.L6:
	movs	r4, r3
	adds	r4, r4, #128
	muls	r4, r0
	lsrs	r4, r4, #8
	strb	r4, [r1, #16]
	movs	r4, #127
	subs	r3, r4, r3
	muls	r0, r3
	lsrs	r0, r0, #8
	strb	r0, [r1, #17]
.L2:
	lsls	r3, r2, #29
	bpl	.L7
	movs	r0, #14
	ldrb	r3, [r1, #15]
	ldrsb	r0, [r1, r0]
	muls	r3, r0
	movs	r0, #12
	ldrsb	r0, [r1, r0]
	adds	r3, r3, r0
	movs	r0, #10
	ldrsb	r0, [r1, r0]
	lsls	r3, r3, #2
	lsls	r0, r0, #8
	adds	r3, r3, r0
	movs	r0, #11
	ldrsb	r0, [r1, r0]
	lsls	r0, r0, #8
	adds	r3, r3, r0
	ldrb	r0, [r1, #13]
	adds	r3, r3, r0
	ldrb	r0, [r1, #24]
	cmp	r0, #0
	beq	.L20
.L8:
	lsls	r0, r3, #8
	lsls	r3, r3, #16
	lsrs	r3, r3, #24
	orrs	r3, r0
	strh	r3, [r1, #8]
.L7:
	@ sp needed
	movs	r3, #5
	bics	r2, r3
	strb	r2, [r1]
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L20:
	movs	r0, #22
	ldrsb	r0, [r1, r0]
	lsls	r0, r0, #4
	adds	r3, r3, r0
	b	.L8
.L5:
	movs	r4, r3
	adds	r4, r4, #128
	bge	.L6
	movs	r3, #128
	rsbs	r3, r3, #0
	b	.L6
.L19:
	movs	r4, #22
	ldrsb	r4, [r1, r4]
	adds	r4, r4, #128
	muls	r0, r4
	lsrs	r0, r0, #7
	b	.L4
	.size	TrkVolPitSet, .-TrkVolPitSet
	.align	1
	.p2align 2,,3
	.global	ply_memacc
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_memacc, %function
ply_memacc:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	r3, [r1, #64]
	adds	r4, r3, #1
	ldrb	r2, [r3]
	str	r4, [r1, #64]
	adds	r6, r3, #2
	ldr	r5, [r0, #24]
	ldrb	r4, [r3, #1]
	str	r6, [r1, #64]
	adds	r6, r3, #3
	ldrb	r7, [r3, #2]
	adds	r4, r5, r4
	str	r6, [r1, #64]
	cmp	r2, #17
	bhi	.L21
	ldr	r6, .L44
	lsls	r2, r2, #2
	ldr	r2, [r6, r2]
	mov	pc, r2
	.section	.rodata
	.align	2
.L24:
	.word	.L41
	.word	.L40
	.word	.L39
	.word	.L38
	.word	.L37
	.word	.L36
	.word	.L35
	.word	.L34
	.word	.L33
	.word	.L32
	.word	.L31
	.word	.L30
	.word	.L29
	.word	.L28
	.word	.L27
	.word	.L26
	.word	.L25
	.word	.L23
	.text
.L35:
	ldrb	r2, [r4]
	cmp	r2, r7
	beq	.L42
.L43:
	adds	r3, r3, #7
	str	r3, [r1, #64]
.L21:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L25:
	ldrb	r4, [r4]
	ldrb	r2, [r5, r7]
	cmp	r4, r2
	bhi	.L43
.L42:
	ldr	r3, .L44+4
	ldr	r3, [r3, #4]
	bl	.L46
	b	.L21
.L23:
	ldrb	r4, [r4]
	ldrb	r2, [r5, r7]
	cmp	r4, r2
	bcs	.L43
	b	.L42
.L41:
	strb	r7, [r4]
	b	.L21
.L40:
	ldrb	r3, [r4]
	adds	r3, r7, r3
	strb	r3, [r4]
	b	.L21
.L39:
	ldrb	r3, [r4]
	subs	r3, r3, r7
	strb	r3, [r4]
	b	.L21
.L38:
	ldrb	r3, [r5, r7]
	strb	r3, [r4]
	b	.L21
.L37:
	ldrb	r3, [r5, r7]
	ldrb	r2, [r4]
	adds	r3, r3, r2
	strb	r3, [r4]
	b	.L21
.L36:
	ldrb	r3, [r4]
	ldrb	r2, [r5, r7]
	subs	r3, r3, r2
	strb	r3, [r4]
	b	.L21
.L34:
	ldrb	r2, [r4]
	cmp	r2, r7
	bne	.L42
	b	.L43
.L33:
	ldrb	r2, [r4]
	cmp	r2, r7
	bhi	.L42
	b	.L43
.L29:
	ldrb	r4, [r4]
	ldrb	r2, [r5, r7]
	cmp	r4, r2
	bne	.L43
	b	.L42
.L28:
	ldrb	r4, [r4]
	ldrb	r2, [r5, r7]
	cmp	r4, r2
	bne	.L42
	b	.L43
.L27:
	ldrb	r4, [r4]
	ldrb	r2, [r5, r7]
	cmp	r4, r2
	bhi	.L42
	b	.L43
.L26:
	ldrb	r4, [r4]
	ldrb	r2, [r5, r7]
	cmp	r4, r2
	bcs	.L42
	b	.L43
.L31:
	ldrb	r2, [r4]
	cmp	r2, r7
	bls	.L42
	b	.L43
.L30:
	ldrb	r2, [r4]
	cmp	r2, r7
	bcc	.L42
	b	.L43
.L32:
	ldrb	r2, [r4]
	cmp	r2, r7
	bcs	.L42
	b	.L43
.L45:
	.align	2
.L44:
	.word	.L24
	.word	gMPlayJumpTable
	.size	ply_memacc, .-ply_memacc
	.align	1
	.p2align 2,,3
	.global	ply_xcmd
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xcmd, %function
ply_xcmd:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r3, [r1, #64]
	@ sp needed
	ldrb	r2, [r3]
	adds	r3, r3, #1
	str	r3, [r1, #64]
	ldr	r3, .L48
	lsls	r2, r2, #2
	ldr	r3, [r2, r3]
	bl	.L46
	pop	{r0}
	bx	r0
.L49:
	.align	2
.L48:
	.word	gXcmdTable
	.size	ply_xcmd, .-ply_xcmd
	.align	1
	.p2align 2,,3
	.global	DummyFunc
	.syntax unified
	.code	16
	.thumb_func
	.type	DummyFunc, %function
DummyFunc:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	@ sp needed
	bx	lr
	.size	DummyFunc, .-DummyFunc
	.align	1
	.p2align 2,,3
	.global	FadeOutBody
	.syntax unified
	.code	16
	.thumb_func
	.type	FadeOutBody, %function
FadeOutBody:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldrh	r2, [r0, #36]
	movs	r5, r0
	cmp	r2, #0
	beq	.L51
	ldrh	r3, [r0, #38]
	subs	r3, r3, #1
	lsls	r3, r3, #16
	lsrs	r1, r3, #16
	cmp	r3, #0
	bne	.L73
	strh	r2, [r0, #38]
	ldrh	r3, [r0, #40]
	ldrb	r2, [r0, #8]
	ldr	r4, [r0, #44]
	movs	r6, r2
	lsls	r0, r3, #30
	bpl	.L56
	adds	r3, r3, #16
	lsls	r3, r3, #16
	lsrs	r3, r3, #16
	cmp	r3, #255
	bls	.L57
	movs	r3, #128
	lsls	r3, r3, #1
	strh	r3, [r5, #40]
	strh	r1, [r5, #36]
.L58:
	cmp	r2, #0
	beq	.L51
	movs	r0, #3
	lsls	r1, r2, #2
	adds	r1, r1, r2
	lsls	r1, r1, #4
	adds	r1, r4, r1
.L66:
	ldrb	r3, [r4]
	lsls	r2, r3, #24
	bpl	.L65
	ldrh	r2, [r5, #40]
	orrs	r3, r0
	lsrs	r2, r2, #2
	strb	r2, [r4, #19]
	strb	r3, [r4]
.L65:
	adds	r4, r4, #80
	cmp	r1, r4
	bne	.L66
.L51:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L73:
	strh	r1, [r0, #38]
	b	.L51
.L56:
	subs	r3, r3, #16
	lsls	r3, r3, #16
	lsrs	r3, r3, #16
	lsls	r1, r3, #16
	strh	r3, [r5, #40]
	asrs	r1, r1, #16
	cmp	r1, #0
	bgt	.L58
	cmp	r2, #0
	beq	.L60
	movs	r7, #1
.L62:
	movs	r1, r4
	movs	r0, r5
	bl	TrackStop
	movs	r2, r7
	ldrh	r3, [r5, #40]
	ands	r2, r3
	tst	r7, r3
	bne	.L61
	strb	r2, [r4]
.L61:
	subs	r6, r6, #1
	adds	r4, r4, #80
	cmp	r6, #0
	bne	.L62
.L63:
	cmp	r2, #0
	bne	.L74
	movs	r3, #128
	lsls	r3, r3, #24
.L64:
	str	r3, [r5, #4]
	movs	r3, #0
	strh	r3, [r5, #36]
	b	.L51
.L57:
	strh	r3, [r5, #40]
	b	.L58
.L74:
	movs	r3, #128
	ldr	r2, [r5, #4]
	lsls	r3, r3, #24
	orrs	r3, r2
	b	.L64
.L60:
	movs	r2, #1
	ands	r2, r3
	b	.L63
	.size	FadeOutBody, .-FadeOutBody
	.align	1
	.p2align 2,,3
	.global	MidiKeyToCgbFreq
	.syntax unified
	.code	16
	.thumb_func
	.type	MidiKeyToCgbFreq, %function
MidiKeyToCgbFreq:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r0, r0, #24
	lsls	r1, r1, #24
	lsls	r2, r2, #24
	lsrs	r3, r0, #24
	push	{r4, r5, r6, r7, lr}
	lsrs	r1, r1, #24
	lsrs	r0, r2, #24
	cmp	r3, #4
	beq	.L84
	cmp	r1, #35
	bhi	.L85
	movs	r0, #0
	movs	r5, #1
	movs	r1, #0
.L80:
	movs	r3, #15
	ldr	r4, .L86
	ldrb	r2, [r4, r1]
	ldrb	r4, [r4, r5]
	ldr	r1, .L86+4
	asrs	r6, r2, #4
	ands	r2, r3
	ands	r3, r4
	lsls	r2, r2, #1
	lsls	r3, r3, #1
	ldrsh	r2, [r2, r1]
	ldrsh	r3, [r3, r1]
	asrs	r5, r4, #4
	asrs	r2, r2, r6
	asrs	r3, r3, r5
	subs	r3, r3, r2
	muls	r0, r3
	movs	r3, #128
	lsls	r3, r3, #4
	mov	ip, r3
	asrs	r0, r0, #8
	adds	r0, r0, r2
	add	r0, r0, ip
.L75:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L85:
	subs	r1, r1, #36
	lsls	r1, r1, #24
	lsrs	r1, r1, #24
	adds	r5, r1, #1
	cmp	r1, #130
	bls	.L80
	movs	r0, #255
	movs	r5, #131
	movs	r1, #130
	b	.L80
.L84:
	movs	r3, #0
	cmp	r1, #20
	bls	.L77
	subs	r1, r1, #21
	adds	r3, r1, #0
	lsls	r1, r1, #24
	lsrs	r1, r1, #24
	cmp	r1, #59
	bls	.L78
	movs	r3, #59
.L78:
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
.L77:
	ldr	r2, .L86+8
	ldrb	r0, [r2, r3]
	b	.L75
.L87:
	.align	2
.L86:
	.word	gCgbScaleTable
	.word	gCgbFreqTable
	.word	gNoiseTable
	.size	MidiKeyToCgbFreq, .-MidiKeyToCgbFreq
	.align	1
	.p2align 2,,3
	.global	CgbOscOff
	.syntax unified
	.code	16
	.thumb_func
	.type	CgbOscOff, %function
CgbOscOff:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	lsls	r0, r0, #24
	lsrs	r0, r0, #24
	cmp	r0, #2
	beq	.L89
	cmp	r0, #3
	beq	.L90
	cmp	r0, #1
	bne	.L91
	movs	r2, #8
	ldr	r3, .L93
	strb	r2, [r3]
	ldr	r3, .L93+4
	adds	r2, r2, #120
	strb	r2, [r3]
.L88:
	@ sp needed
	bx	lr
.L90:
	movs	r2, #0
	ldr	r3, .L93+8
	strb	r2, [r3]
	b	.L88
.L89:
	movs	r2, #8
	ldr	r3, .L93+12
	strb	r2, [r3]
	ldr	r3, .L93+16
	adds	r2, r2, #120
	strb	r2, [r3]
	b	.L88
.L91:
	movs	r2, #8
	ldr	r3, .L93+20
	strb	r2, [r3]
	ldr	r3, .L93+24
	adds	r2, r2, #120
	strb	r2, [r3]
	b	.L88
.L94:
	.align	2
.L93:
	.word	67108963
	.word	67108965
	.word	67108976
	.word	67108969
	.word	67108973
	.word	67108985
	.word	67108989
	.size	CgbOscOff, .-CgbOscOff
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayOpen.part.0, %function
MPlayOpen.part.0:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L105
	push	{r4, r5, r6, r7, lr}
	ldr	r7, [r3]
	movs	r4, r1
	ldr	r3, .L105+4
	ldr	r1, [r7]
	movs	r6, r0
	cmp	r1, r3
	bne	.L95
	adds	r5, r2, #0
	cmp	r2, #16
	bhi	.L104
.L97:
	movs	r2, #140
	ldr	r3, .L105+8
	str	r3, [r7]
	ldr	r3, .L105+12
	movs	r0, r6
	ldr	r3, [r3, r2]
	bl	.L46
	movs	r3, #128
	movs	r2, #0
	lsls	r5, r5, #24
	lsrs	r5, r5, #24
	lsls	r3, r3, #24
	str	r4, [r6, #44]
	strb	r5, [r6, #8]
	str	r3, [r6, #4]
.L98:
	subs	r5, r5, #1
	lsls	r3, r5, #24
	strb	r2, [r4]
	lsrs	r5, r3, #24
	adds	r4, r4, #80
	cmp	r3, #0
	bne	.L98
	ldr	r3, [r7, #32]
	cmp	r3, #0
	beq	.L99
	str	r3, [r6, #56]
	ldr	r3, [r7, #36]
	str	r3, [r6, #60]
.L99:
	ldr	r3, .L105+16
	str	r3, [r7, #32]
	ldr	r3, .L105+4
	str	r6, [r7, #36]
	str	r3, [r7]
	str	r3, [r6, #52]
.L95:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L104:
	movs	r5, #16
	b	.L97
.L106:
	.align	2
.L105:
	.word	50364400
	.word	1752395091
	.word	1752395092
	.word	gMPlayJumpTable
	.word	MPlayMain
	.size	MPlayOpen.part.0, .-MPlayOpen.part.0
	.global	__udivsi3
	.global	__divsi3
	.align	1
	.p2align 2,,3
	.global	SampleFreqSet
	.syntax unified
	.code	16
	.thumb_func
	.type	SampleFreqSet, %function
SampleFreqSet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L114
	push	{r4, r5, lr}
	lsls	r0, r0, #12
	ldr	r4, [r3]
	lsrs	r0, r0, #28
	ldr	r3, .L114+4
	strb	r0, [r4, #8]
	subs	r0, r0, #1
	lsls	r0, r0, #1
	ldrh	r5, [r0, r3]
	movs	r0, #198
	movs	r1, r5
	str	r5, [r4, #16]
	lsls	r0, r0, #3
	bl	__divsi3
	ldr	r3, .L114+8
	mov	ip, r3
	strb	r0, [r4, #11]
	ldr	r0, .L114+12
	muls	r0, r5
	ldr	r1, .L114+16
	add	r0, r0, ip
	bl	__divsi3
	movs	r1, r0
	str	r0, [r4, #20]
	movs	r0, #128
	lsls	r0, r0, #17
	bl	__divsi3
	movs	r2, #0
	ldr	r3, .L114+20
	adds	r0, r0, #1
	asrs	r0, r0, #1
	str	r0, [r4, #24]
	movs	r1, r5
	strh	r2, [r3]
	ldr	r0, .L114+24
	bl	__divsi3
	ldr	r3, .L114+28
	lsls	r0, r0, #16
	lsrs	r0, r0, #16
	strh	r0, [r3]
	ldr	r2, .L114+32
	ldr	r3, [r4]
	cmp	r3, r2
	beq	.L108
	ldr	r2, .L114+36
	ldr	r1, .L114+40
	strh	r2, [r1]
	ldr	r1, .L114+44
	strh	r2, [r1]
	movs	r2, #0
	subs	r3, r3, #10
	strb	r2, [r4, #4]
	str	r3, [r4]
.L108:
	ldr	r2, .L114+48
.L109:
	ldrb	r3, [r2]
	cmp	r3, #159
	beq	.L109
	ldr	r2, .L114+48
.L110:
	ldrb	r3, [r2]
	cmp	r3, #159
	bne	.L110
	@ sp needed
	movs	r2, #128
	ldr	r3, .L114+20
	strh	r2, [r3]
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L115:
	.align	2
.L114:
	.word	50364400
	.word	gPcmSamplesPerVBlankTable
	.word	5000
	.word	597275
	.word	10000
	.word	67109122
	.word	-280896
	.word	67109120
	.word	1752395091
	.word	-18944
	.word	67109062
	.word	67109074
	.word	67108870
	.size	SampleFreqSet, .-SampleFreqSet
	.align	1
	.p2align 2,,3
	.global	MidiKeyToFreq
	.syntax unified
	.code	16
	.thumb_func
	.type	MidiKeyToFreq, %function
MidiKeyToFreq:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r1, r1, #24
	lsls	r2, r2, #24
	push	{r4, r5, r6, r7, lr}
	lsrs	r3, r1, #24
	lsrs	r2, r2, #24
	cmp	r3, #178
	bhi	.L118
	lsls	r1, r2, #24
	adds	r7, r3, #1
.L117:
	ldr	r5, .L119
	@ sp needed
	ldrb	r2, [r5, r3]
	movs	r3, #15
	ldr	r6, .L119+4
	lsrs	r4, r2, #4
	ands	r2, r3
	lsls	r2, r2, #2
	ldr	r2, [r2, r6]
	lsrs	r2, r2, r4
	movs	r4, r2
	ldrb	r2, [r5, r7]
	ands	r3, r2
	lsls	r3, r3, #2
	ldr	r5, [r0, #4]
	ldr	r0, [r3, r6]
	lsrs	r7, r2, #4
	lsrs	r0, r0, r7
	subs	r0, r0, r4
	bl	umul3232H32
	adds	r1, r0, r4
	movs	r0, r5
	bl	umul3232H32
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L118:
	movs	r1, #255
	movs	r7, #179
	movs	r3, #178
	lsls	r1, r1, #24
	b	.L117
.L120:
	.align	2
.L119:
	.word	gScaleTable
	.word	gFreqTable
	.size	MidiKeyToFreq, .-MidiKeyToFreq
	.align	1
	.p2align 2,,3
	.global	UnusedDummyFunc
	.syntax unified
	.code	16
	.thumb_func
	.type	UnusedDummyFunc, %function
UnusedDummyFunc:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	@ sp needed
	bx	lr
	.size	UnusedDummyFunc, .-UnusedDummyFunc
	.align	1
	.p2align 2,,3
	.global	MPlayContinue
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayContinue, %function
MPlayContinue:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L124
	ldr	r2, [r0, #52]
	cmp	r2, r3
	bne	.L122
	ldr	r3, [r0, #4]
	lsls	r3, r3, #1
	lsrs	r3, r3, #1
	str	r3, [r0, #4]
.L122:
	@ sp needed
	bx	lr
.L125:
	.align	2
.L124:
	.word	1752395091
	.size	MPlayContinue, .-MPlayContinue
	.align	1
	.p2align 2,,3
	.global	MPlayFadeOut
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayFadeOut, %function
MPlayFadeOut:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L128
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L126
	lsls	r3, r1, #16
	orrs	r1, r3
	movs	r3, #128
	lsls	r3, r3, #1
	str	r1, [r0, #36]
	strh	r3, [r0, #40]
.L126:
	@ sp needed
	bx	lr
.L129:
	.align	2
.L128:
	.word	1752395091
	.size	MPlayFadeOut, .-MPlayFadeOut
	.align	1
	.p2align 2,,3
	.global	m4aSoundMain
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSoundMain, %function
m4aSoundMain:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	bl	SoundMain
	@ sp needed
	pop	{r0}
	bx	r0
	.size	m4aSoundMain, .-m4aSoundMain
	.align	1
	.p2align 2,,3
	.global	m4aSongNumStop
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSongNumStop, %function
m4aSongNumStop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L140
	lsls	r0, r0, #16
	lsrs	r0, r0, #13
	adds	r0, r0, r3
	ldrh	r2, [r0, #4]
	lsls	r3, r2, #1
	adds	r3, r3, r2
	ldr	r2, .L140+4
	lsls	r3, r3, #2
	ldr	r4, [r2, r3]
	ldr	r3, [r0]
	ldr	r2, [r4]
	cmp	r2, r3
	beq	.L139
.L131:
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L139:
	ldr	r3, .L140+8
	ldr	r2, [r4, #52]
	cmp	r2, r3
	bne	.L131
	ldr	r3, .L140+12
	str	r3, [r4, #52]
	movs	r3, #128
	ldr	r2, [r4, #4]
	lsls	r3, r3, #24
	ldrb	r5, [r4, #8]
	orrs	r3, r2
	str	r3, [r4, #4]
	ldr	r6, [r4, #44]
	cmp	r5, #0
	beq	.L133
.L134:
	movs	r1, r6
	movs	r0, r4
	subs	r5, r5, #1
	bl	TrackStop
	adds	r6, r6, #80
	cmp	r5, #0
	bne	.L134
.L133:
	ldr	r3, .L140+8
	str	r3, [r4, #52]
	b	.L131
.L141:
	.align	2
.L140:
	.word	gSongTable
	.word	gMPlayTable
	.word	1752395091
	.word	1752395092
	.size	m4aSongNumStop, .-m4aSongNumStop
	.align	1
	.p2align 2,,3
	.global	m4aSongNumContinue
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSongNumContinue, %function
m4aSongNumContinue:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L145
	lsls	r0, r0, #16
	lsrs	r0, r0, #13
	adds	r0, r0, r3
	ldrh	r2, [r0, #4]
	lsls	r3, r2, #1
	adds	r3, r3, r2
	ldr	r2, .L145+4
	lsls	r3, r3, #2
	ldr	r3, [r2, r3]
	ldr	r2, [r0]
	ldr	r1, [r3]
	cmp	r1, r2
	beq	.L144
.L142:
	@ sp needed
	bx	lr
.L144:
	ldr	r2, .L145+8
	ldr	r1, [r3, #52]
	cmp	r1, r2
	bne	.L142
	ldr	r2, [r3, #4]
	lsls	r2, r2, #1
	lsrs	r2, r2, #1
	str	r2, [r3, #4]
	b	.L142
.L146:
	.align	2
.L145:
	.word	gSongTable
	.word	gMPlayTable
	.word	1752395091
	.size	m4aSongNumContinue, .-m4aSongNumContinue
	.align	1
	.p2align 2,,3
	.global	m4aMPlayAllStop
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayAllStop, %function
m4aMPlayAllStop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	ldr	r3, .L170
	lsls	r3, r3, #16
	push	{r5, r6, r7, lr}
	lsrs	r2, r3, #16
	cmp	r3, #0
	beq	.L148
	lsls	r3, r2, #1
	adds	r3, r3, r2
	lsls	r3, r3, #2
	mov	r8, r3
	ldr	r3, .L170+4
	mov	r9, r3
	ldr	r3, .L170+8
	mov	fp, r3
	movs	r3, #128
	lsls	r3, r3, #24
	mov	r10, r3
	ldr	r7, .L170+12
	add	r8, r8, r7
.L152:
	ldr	r6, [r7]
	ldr	r3, [r6, #52]
	cmp	r3, r9
	bne	.L149
	mov	r3, fp
	mov	r2, r10
	str	r3, [r6, #52]
	ldr	r3, [r6, #4]
	ldrb	r4, [r6, #8]
	orrs	r3, r2
	str	r3, [r6, #4]
	ldr	r5, [r6, #44]
	cmp	r4, #0
	beq	.L150
.L151:
	movs	r1, r5
	movs	r0, r6
	subs	r4, r4, #1
	bl	TrackStop
	adds	r5, r5, #80
	cmp	r4, #0
	bne	.L151
.L150:
	mov	r3, r9
	str	r3, [r6, #52]
.L149:
	adds	r7, r7, #12
	cmp	r7, r8
	bne	.L152
.L148:
	movs	r3, #128
	mov	r8, r3
	ldr	r3, .L170+8
	mov	r10, r3
	movs	r3, #128
	lsls	r3, r3, #24
	mov	r9, r3
	ldr	r6, .L170+16
	ldr	r7, .L170+4
	add	r8, r8, r6
.L156:
	ldr	r3, [r6, #52]
	cmp	r3, r7
	bne	.L153
	mov	r3, r10
	mov	r2, r9
	str	r3, [r6, #52]
	ldr	r3, [r6, #4]
	ldrb	r4, [r6, #8]
	orrs	r3, r2
	str	r3, [r6, #4]
	ldr	r5, [r6, #44]
	cmp	r4, #0
	beq	.L154
.L155:
	movs	r1, r5
	movs	r0, r6
	subs	r4, r4, #1
	bl	TrackStop
	adds	r5, r5, #80
	cmp	r4, #0
	bne	.L155
.L154:
	str	r7, [r6, #52]
.L153:
	adds	r6, r6, #64
	cmp	r6, r8
	bne	.L156
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L171:
	.align	2
.L170:
	.word	gNumMusicPlayers
	.word	1752395091
	.word	1752395092
	.word	gMPlayTable
	.word	gPokemonCryMusicPlayers
	.size	m4aMPlayAllStop, .-m4aMPlayAllStop
	.align	1
	.p2align 2,,3
	.global	m4aMPlayContinue
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayContinue, %function
m4aMPlayContinue:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L174
	ldr	r2, [r0, #52]
	cmp	r2, r3
	bne	.L172
	ldr	r3, [r0, #4]
	lsls	r3, r3, #1
	lsrs	r3, r3, #1
	str	r3, [r0, #4]
.L172:
	@ sp needed
	bx	lr
.L175:
	.align	2
.L174:
	.word	1752395091
	.size	m4aMPlayContinue, .-m4aMPlayContinue
	.align	1
	.p2align 2,,3
	.global	m4aMPlayAllContinue
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayAllContinue, %function
m4aMPlayAllContinue:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L186
	lsls	r3, r3, #16
	push	{r4, lr}
	lsrs	r2, r3, #16
	cmp	r3, #0
	beq	.L177
	lsls	r0, r2, #1
	ldr	r3, .L186+4
	adds	r0, r0, r2
	lsls	r0, r0, #2
	ldr	r4, .L186+8
	adds	r0, r0, r3
.L179:
	ldr	r2, [r3]
	ldr	r1, [r2, #52]
	cmp	r1, r4
	bne	.L178
	ldr	r1, [r2, #4]
	lsls	r1, r1, #1
	lsrs	r1, r1, #1
	str	r1, [r2, #4]
.L178:
	adds	r3, r3, #12
	cmp	r3, r0
	bne	.L179
.L177:
	ldr	r3, .L186+12
	ldr	r2, .L186+8
	ldr	r1, [r3, #52]
	cmp	r1, r2
	bne	.L180
	ldr	r2, [r3, #4]
	lsls	r2, r2, #1
	lsrs	r2, r2, #1
	str	r2, [r3, #4]
.L180:
	ldr	r2, .L186+8
	ldr	r1, [r3, #116]
	cmp	r1, r2
	bne	.L176
	ldr	r2, [r3, #68]
	lsls	r2, r2, #1
	lsrs	r2, r2, #1
	str	r2, [r3, #68]
.L176:
	@ sp needed
	pop	{r4}
	pop	{r0}
	bx	r0
.L187:
	.align	2
.L186:
	.word	gNumMusicPlayers
	.word	gMPlayTable
	.word	1752395091
	.word	gPokemonCryMusicPlayers
	.size	m4aMPlayAllContinue, .-m4aMPlayAllContinue
	.align	1
	.p2align 2,,3
	.global	m4aMPlayFadeOut
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayFadeOut, %function
m4aMPlayFadeOut:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L190
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L188
	lsls	r3, r1, #16
	orrs	r1, r3
	movs	r3, #128
	lsls	r3, r3, #1
	str	r1, [r0, #36]
	strh	r3, [r0, #40]
.L188:
	@ sp needed
	bx	lr
.L191:
	.align	2
.L190:
	.word	1752395091
	.size	m4aMPlayFadeOut, .-m4aMPlayFadeOut
	.align	1
	.p2align 2,,3
	.global	m4aMPlayFadeOutTemporarily
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayFadeOutTemporarily, %function
m4aMPlayFadeOutTemporarily:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L194
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L192
	lsls	r3, r1, #16
	orrs	r1, r3
	movs	r3, #2
	adds	r3, r3, #255
	str	r1, [r0, #36]
	strh	r3, [r0, #40]
.L192:
	@ sp needed
	bx	lr
.L195:
	.align	2
.L194:
	.word	1752395091
	.size	m4aMPlayFadeOutTemporarily, .-m4aMPlayFadeOutTemporarily
	.align	1
	.p2align 2,,3
	.global	m4aMPlayFadeIn
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayFadeIn, %function
m4aMPlayFadeIn:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L198
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L196
	lsls	r3, r1, #16
	orrs	r1, r3
	movs	r3, #2
	strh	r3, [r0, #40]
	ldr	r3, [r0, #4]
	lsls	r3, r3, #1
	lsrs	r3, r3, #1
	str	r1, [r0, #36]
	str	r3, [r0, #4]
.L196:
	@ sp needed
	bx	lr
.L199:
	.align	2
.L198:
	.word	1752395091
	.size	m4aMPlayFadeIn, .-m4aMPlayFadeIn
	.align	1
	.p2align 2,,3
	.global	m4aMPlayImmInit
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayImmInit, %function
m4aMPlayImmInit:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r9
	mov	r7, r8
	push	{r7, lr}
	ldrb	r5, [r0, #8]
	ldr	r4, [r0, #44]
	cmp	r5, #0
	beq	.L200
	ldr	r3, .L211
	movs	r6, r4
	mov	r9, r3
	movs	r3, #140
	movs	r7, #64
	mov	r8, r3
	adds	r6, r6, #36
	b	.L203
.L202:
	subs	r5, r5, #1
	adds	r4, r4, #80
	adds	r6, r6, #80
	cmp	r5, #0
	beq	.L200
.L203:
	ldrb	r3, [r4]
	lsls	r2, r3, #24
	bpl	.L202
	tst	r7, r3
	beq	.L202
	mov	r2, r8
	mov	r3, r9
	movs	r0, r4
	ldr	r3, [r3, r2]
	bl	.L46
	movs	r3, #128
	strb	r3, [r4]
	subs	r3, r3, #126
	strb	r3, [r4, #15]
	adds	r3, r3, #20
	strb	r3, [r4, #25]
	subs	r5, r5, #1
	subs	r3, r3, #21
	strb	r7, [r4, #19]
	strb	r3, [r6]
	adds	r4, r4, #80
	adds	r6, r6, #80
	cmp	r5, #0
	bne	.L203
.L200:
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L212:
	.align	2
.L211:
	.word	gMPlayJumpTable
	.size	m4aMPlayImmInit, .-m4aMPlayImmInit
	.align	1
	.p2align 2,,3
	.global	MPlayExtender
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayExtender, %function
MPlayExtender:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 4
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r2, #143
	ldr	r3, .L216
	push	{r4, r5, r6, lr}
	movs	r1, #0
	strh	r2, [r3]
	movs	r3, #8
	movs	r5, #0
	ldr	r2, .L216+4
	movs	r4, r0
	ldr	r0, .L216+8
	strh	r1, [r2]
	strb	r3, [r0]
	ldr	r0, .L216+12
	strb	r3, [r0]
	ldr	r0, .L216+16
	strb	r3, [r0]
	ldr	r0, .L216+20
	adds	r3, r3, #120
	strb	r3, [r0]
	ldr	r0, .L216+24
	strb	r3, [r0]
	ldr	r0, .L216+28
	strb	r3, [r0]
	ldr	r0, .L216+32
	strb	r5, [r0]
	movs	r0, #119
	strb	r0, [r2]
	ldr	r2, .L216+36
	ldr	r5, [r2]
	ldr	r2, .L216+40
	ldr	r6, [r5]
	sub	sp, sp, #4
	cmp	r6, r2
	beq	.L215
.L213:
	add	sp, sp, #4
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L215:
	ldr	r2, .L216+44
	ldr	r0, .L216+48
	str	r2, [r5]
	ldr	r2, .L216+52
	str	r0, [r2, #32]
	ldr	r0, .L216+56
	str	r0, [r2, #68]
	ldr	r0, .L216+60
	str	r0, [r2, #76]
	ldr	r0, .L216+64
	str	r0, [r2, #112]
	ldr	r0, .L216+68
	str	r0, [r2, #116]
	ldr	r0, .L216+72
	str	r0, [r2, #120]
	ldr	r0, .L216+76
	str	r0, [r2, #124]
	ldr	r0, .L216+80
	str	r0, [r2, r3]
	movs	r0, #132
	ldr	r3, .L216+84
	str	r3, [r2, r0]
	ldr	r3, .L216+88
	str	r3, [r5, #40]
	ldr	r3, .L216+92
	str	r3, [r5, #44]
	ldr	r3, .L216+96
	str	r3, [r5, #48]
	ldr	r3, .L216+100
	str	r4, [r5, #28]
	strb	r3, [r5, #12]
	str	r1, [sp]
	ldr	r2, .L216+104
	movs	r1, r4
	mov	r0, sp
	bl	CpuSet
	movs	r3, #1
	strb	r3, [r4, #1]
	adds	r3, r3, #16
	strb	r3, [r4, #28]
	movs	r3, r4
	movs	r2, #2
	adds	r3, r3, #64
	strb	r2, [r3, #1]
	adds	r2, r2, #32
	strb	r2, [r3, #28]
	adds	r3, r3, #64
	subs	r2, r2, #31
	strb	r2, [r3, #1]
	adds	r2, r2, #65
	strb	r2, [r3, #28]
	movs	r3, #4
	adds	r4, r4, #192
	strb	r3, [r4, #1]
	adds	r3, r3, #132
	strb	r3, [r4, #28]
	str	r6, [r5]
	b	.L213
.L217:
	.align	2
.L216:
	.word	67108996
	.word	67108992
	.word	67108963
	.word	67108969
	.word	67108985
	.word	67108965
	.word	67108973
	.word	67108989
	.word	67108976
	.word	50364400
	.word	1752395091
	.word	1752395092
	.word	ply_memacc
	.word	gMPlayJumpTable
	.word	ply_lfos
	.word	ply_mod
	.word	ply_xcmd
	.word	ply_endtie
	.word	SampleFreqSet
	.word	TrackStop
	.word	FadeOutBody
	.word	TrkVolPitSet
	.word	CgbSound
	.word	CgbOscOff
	.word	MidiKeyToCgbFreq
	.word	gMaxLines
	.word	83886144
	.size	MPlayExtender, .-MPlayExtender
	.align	1
	.p2align 2,,3
	.global	MusicPlayerJumpTableCopy
	.syntax unified
	.code	16
	.thumb_func
	.type	MusicPlayerJumpTableCopy, %function
MusicPlayerJumpTableCopy:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	.syntax divided
@ 315 "src/m4a.c" 1
	swi 0x2A
@ 0 "" 2
	.thumb
	.syntax unified
	@ sp needed
	bx	lr
	.size	MusicPlayerJumpTableCopy, .-MusicPlayerJumpTableCopy
	.align	1
	.p2align 2,,3
	.global	ClearChain
	.syntax unified
	.code	16
	.thumb_func
	.type	ClearChain, %function
ClearChain:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r2, #136
	push	{lr}
	ldr	r3, .L220
	@ sp needed
	ldr	r3, [r3, r2]
	bl	.L46
	pop	{r0}
	bx	r0
.L221:
	.align	2
.L220:
	.word	gMPlayJumpTable
	.size	ClearChain, .-ClearChain
	.align	1
	.p2align 2,,3
	.global	Clear64byte
	.syntax unified
	.code	16
	.thumb_func
	.type	Clear64byte, %function
Clear64byte:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r2, #140
	push	{lr}
	ldr	r3, .L223
	@ sp needed
	ldr	r3, [r3, r2]
	bl	.L46
	pop	{r0}
	bx	r0
.L224:
	.align	2
.L223:
	.word	gMPlayJumpTable
	.size	Clear64byte, .-Clear64byte
	.align	1
	.p2align 2,,3
	.global	SoundInit
	.syntax unified
	.code	16
	.thumb_func
	.type	SoundInit, %function
SoundInit:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 4
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, #0
	push	{r4, r5, lr}
	ldr	r2, .L236
	str	r3, [r0]
	ldr	r3, [r2]
	movs	r4, r0
	sub	sp, sp, #4
	lsls	r3, r3, #6
	bpl	.L226
	ldr	r3, .L236+4
	str	r3, [r2]
.L226:
	ldr	r2, .L236+8
	ldr	r3, [r2]
	lsls	r3, r3, #6
	bpl	.L227
	ldr	r3, .L236+4
	str	r3, [r2]
.L227:
	movs	r3, #128
	ldr	r2, .L236+12
	lsls	r3, r3, #3
	strh	r3, [r2]
	ldr	r2, .L236+16
	strh	r3, [r2]
	movs	r2, #143
	ldr	r3, .L236+20
	strh	r2, [r3]
	ldr	r3, .L236+24
	ldr	r2, .L236+28
	strh	r2, [r3]
	movs	r3, #63
	ldr	r2, .L236+32
	ldrb	r1, [r2]
	ands	r3, r1
	movs	r1, #64
	orrs	r3, r1
	strb	r3, [r2]
	movs	r3, #212
	lsls	r3, r3, #2
	adds	r2, r4, r3
	ldr	r3, .L236+36
	str	r2, [r3]
	ldr	r3, .L236+40
	ldr	r2, .L236+44
	str	r2, [r3]
	movs	r3, #152
	lsls	r3, r3, #4
	adds	r2, r4, r3
	ldr	r3, .L236+48
	str	r2, [r3]
	ldr	r3, .L236+52
	ldr	r2, .L236+56
	str	r2, [r3]
	ldr	r3, .L236+60
	str	r4, [r3]
	movs	r3, #0
	movs	r1, r4
	ldr	r2, .L236+64
	mov	r0, sp
	str	r3, [sp]
	bl	CpuSet
	ldr	r3, .L236+68
	strh	r3, [r4, #6]
	ldr	r3, .L236+72
	ldr	r5, .L236+76
	str	r3, [r4, #56]
	ldr	r3, .L236+80
	movs	r0, r5
	str	r3, [r4, #40]
	str	r3, [r4, #44]
	str	r3, [r4, #48]
	str	r3, [r4, #60]
	bl	MPlayJumpTableCopy
	movs	r0, #128
	str	r5, [r4, #52]
	lsls	r0, r0, #11
	bl	SampleFreqSet
	ldr	r3, .L236+84
	str	r3, [r4]
	add	sp, sp, #4
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L237:
	.align	2
.L236:
	.word	67109060
	.word	-2076180476
	.word	67109072
	.word	67109062
	.word	67109074
	.word	67108996
	.word	67108994
	.word	-22258
	.word	67109001
	.word	67109052
	.word	67109056
	.word	67109024
	.word	67109064
	.word	67109068
	.word	67109028
	.word	50364400
	.word	83887084
	.word	3848
	.word	ply_note
	.word	gMPlayJumpTable
	.word	DummyFunc
	.word	1752395091
	.size	SoundInit, .-SoundInit
	.align	1
	.p2align 2,,3
	.global	SoundClear
	.syntax unified
	.code	16
	.thumb_func
	.type	SoundClear, %function
SoundClear:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L248
	push	{r4, r5, r6, r7, lr}
	ldr	r5, [r3]
	ldr	r3, .L248+4
	ldr	r2, [r5]
	cmp	r2, r3
	bne	.L238
	movs	r2, #212
	ldr	r3, .L248+8
	lsls	r2, r2, #2
	str	r3, [r5]
	movs	r3, r5
	adds	r1, r5, r2
	movs	r2, #0
	adds	r3, r3, #80
.L240:
	strb	r2, [r3]
	adds	r3, r3, #64
	cmp	r1, r3
	bne	.L240
	ldr	r6, [r5, #28]
	cmp	r6, #0
	beq	.L241
	movs	r4, #1
	movs	r7, #0
.L242:
	movs	r0, r4
	ldr	r3, [r5, #44]
	adds	r4, r4, #1
	bl	.L46
	strb	r7, [r6]
	adds	r6, r6, #64
	cmp	r4, #5
	bne	.L242
.L241:
	ldr	r3, .L248+4
	str	r3, [r5]
.L238:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L249:
	.align	2
.L248:
	.word	50364400
	.word	1752395091
	.word	1752395092
	.size	SoundClear, .-SoundClear
	.align	1
	.p2align 2,,3
	.global	m4aSoundVSyncOff
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSoundVSyncOff, %function
m4aSoundVSyncOff:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 4
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L263
	push	{lr}
	ldr	r1, [r3]
	ldr	r2, .L263+4
	ldr	r3, [r1]
	adds	r2, r3, r2
	sub	sp, sp, #4
	cmp	r2, #1
	bls	.L262
.L250:
	add	sp, sp, #4
	@ sp needed
	pop	{r0}
	bx	r0
.L262:
	adds	r3, r3, #10
	str	r3, [r1]
	ldr	r2, .L263+8
	ldr	r3, [r2]
	lsls	r3, r3, #6
	bpl	.L252
	ldr	r3, .L263+12
	str	r3, [r2]
.L252:
	ldr	r2, .L263+16
	ldr	r3, [r2]
	lsls	r3, r3, #6
	bpl	.L253
	ldr	r3, .L263+12
	str	r3, [r2]
.L253:
	movs	r3, #128
	ldr	r2, .L263+20
	lsls	r3, r3, #3
	strh	r3, [r2]
	ldr	r2, .L263+24
	strh	r3, [r2]
	movs	r3, #0
	str	r3, [sp]
	movs	r3, #212
	lsls	r3, r3, #2
	mov	ip, r3
	mov	r0, sp
	ldr	r2, .L263+28
	add	r1, r1, ip
	bl	CpuSet
	b	.L250
.L264:
	.align	2
.L263:
	.word	50364400
	.word	-1752395091
	.word	67109060
	.word	-2076180476
	.word	67109072
	.word	67109062
	.word	67109074
	.word	83886872
	.size	m4aSoundVSyncOff, .-m4aSoundVSyncOff
	.align	1
	.p2align 2,,3
	.global	m4aSoundMode
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSoundMode, %function
m4aSoundMode:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L290
	push	{r4, r5, lr}
	ldr	r4, [r3]
	ldr	r3, .L290+4
	ldr	r2, [r4]
	cmp	r2, r3
	bne	.L265
	ldr	r3, .L290+8
	str	r3, [r4]
	movs	r3, #255
	tst	r3, r0
	beq	.L267
	subs	r3, r3, #128
	ands	r3, r0
	strb	r3, [r4, #5]
.L267:
	movs	r3, #240
	movs	r2, r0
	lsls	r3, r3, #4
	ands	r2, r3
	tst	r0, r3
	beq	.L268
	lsrs	r2, r2, #8
	strb	r2, [r4, #6]
	movs	r2, #212
	movs	r3, r4
	lsls	r2, r2, #2
	adds	r1, r4, r2
	movs	r2, #0
	adds	r3, r3, #80
.L269:
	strb	r2, [r3]
	adds	r3, r3, #64
	cmp	r3, r1
	bne	.L269
.L268:
	movs	r3, #240
	movs	r2, r0
	lsls	r3, r3, #8
	ands	r2, r3
	tst	r0, r3
	beq	.L270
	lsrs	r2, r2, #12
	strb	r2, [r4, #7]
.L270:
	movs	r2, #176
	movs	r3, r0
	lsls	r2, r2, #16
	ands	r3, r2
	tst	r0, r2
	beq	.L271
	movs	r2, #63
	ldr	r1, .L290+12
	ldrb	r5, [r1]
	lsrs	r3, r3, #14
	ands	r2, r5
	orrs	r3, r2
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r1]
.L271:
	movs	r3, #240
	movs	r5, r0
	lsls	r3, r3, #12
	ands	r5, r3
	tst	r0, r3
	bne	.L289
.L272:
	ldr	r3, .L290+4
	str	r3, [r4]
.L265:
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L289:
	bl	m4aSoundVSyncOff
	movs	r0, r5
	bl	SampleFreqSet
	b	.L272
.L291:
	.align	2
.L290:
	.word	50364400
	.word	1752395091
	.word	1752395092
	.word	67109001
	.size	m4aSoundMode, .-m4aSoundMode
	.align	1
	.p2align 2,,3
	.global	m4aSoundInit
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSoundInit, %function
m4aSoundInit:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r10
	mov	r7, r9
	mov	r6, r8
	ldr	r0, .L311
	push	{r6, r7, lr}
	bl	SoundInit
	ldr	r0, .L311+4
	bl	MPlayExtender
	ldr	r0, .L311+8
	bl	m4aSoundMode
	ldr	r3, .L311+12
	lsls	r3, r3, #16
	lsrs	r2, r3, #16
	cmp	r3, #0
	beq	.L310
	lsls	r6, r2, #1
	ldr	r4, .L311+16
	adds	r6, r6, r2
	lsls	r6, r6, #2
	ldr	r7, .L311+20
	adds	r6, r6, r4
.L295:
	ldrb	r2, [r4, #8]
	ldr	r5, [r4]
	cmp	r2, #0
	beq	.L294
	movs	r0, r5
	ldr	r1, [r4, #4]
	bl	MPlayOpen.part.0
.L294:
	ldrh	r3, [r4, #10]
	adds	r4, r4, #12
	strb	r3, [r5, #11]
	str	r7, [r5, #24]
	cmp	r4, r6
	bne	.L295
.L293:
	movs	r0, r7
	movs	r2, #52
	ldr	r1, .L311+24
	adds	r0, r0, #16
	bl	memcpy
	movs	r3, #128
	mov	r8, r3
	ldr	r3, .L311+28
	mov	r10, r3
	ldr	r3, .L311+32
	movs	r7, #0
	mov	r9, r3
	ldr	r4, .L311+36
	ldr	r5, .L311+40
	add	r8, r8, r4
.L298:
	ldr	r3, .L311+44
	ldr	r6, [r3]
	ldr	r3, .L311+48
	ldr	r2, [r6]
	cmp	r2, r3
	bne	.L296
	ldr	r3, .L311+52
	mov	r2, r10
	str	r3, [r6]
	movs	r3, #140
	movs	r0, r4
	ldr	r3, [r2, r3]
	bl	.L46
	movs	r3, #2
	strb	r3, [r4, #8]
	movs	r3, #128
	lsls	r3, r3, #24
	str	r3, [r4, #4]
	movs	r3, #80
	strb	r7, [r5]
	strb	r7, [r5, r3]
	ldr	r3, [r6, #32]
	str	r5, [r4, #44]
	cmp	r3, #0
	beq	.L297
	str	r3, [r4, #56]
	ldr	r3, [r6, #36]
	str	r3, [r4, #60]
.L297:
	mov	r3, r9
	str	r3, [r6, #32]
	ldr	r3, .L311+48
	str	r4, [r6, #36]
	str	r3, [r6]
	str	r3, [r4, #52]
.L296:
	adds	r4, r4, #64
	str	r7, [r5, #32]
	adds	r5, r5, #160
	cmp	r4, r8
	bne	.L298
	@ sp needed
	pop	{r5, r6, r7}
	mov	r10, r7
	mov	r9, r6
	mov	r8, r5
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L310:
	ldr	r7, .L311+20
	b	.L293
.L312:
	.align	2
.L311:
	.word	gSoundInfo
	.word	gCgbChans
	.word	9749760
	.word	gNumMusicPlayers
	.word	gMPlayTable
	.word	.LANCHOR0
	.word	gPokemonCrySongTemplate
	.word	gMPlayJumpTable
	.word	MPlayMain
	.word	gPokemonCryMusicPlayers
	.word	gPokemonCryTracks
	.word	50364400
	.word	1752395091
	.word	1752395092
	.size	m4aSoundInit, .-m4aSoundInit
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayStart.part.0, %function
MPlayStart.part.0:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r9
	mov	r6, r8
	mov	lr, r10
	push	{r6, r7, lr}
	ldrb	r3, [r0, #11]
	movs	r6, r0
	movs	r7, r1
	ldrb	r2, [r1, #2]
	cmp	r3, #0
	beq	.L314
	ldr	r3, [r0]
	cmp	r3, #0
	beq	.L315
	ldr	r3, [r0, #44]
	ldrb	r3, [r3]
	lsls	r3, r3, #25
	bmi	.L316
.L315:
	ldr	r3, [r6, #4]
	lsls	r1, r3, #16
	bne	.L341
.L314:
	ldr	r1, [r7, #4]
	str	r1, [r6, #48]
	movs	r1, #8
	strb	r2, [r6, #9]
	ldr	r2, .L343
	ldr	r3, .L343+4
	str	r2, [r6, #28]
	movs	r2, #150
	mov	r8, r1
	adds	r1, r1, #184
	mov	r10, r1
	str	r3, [r6, #52]
	movs	r1, #0
	movs	r3, #0
	str	r2, [r6, #32]
	ldrb	r2, [r7]
	str	r3, [r6, #4]
	str	r3, [r6, #12]
	strh	r3, [r6, #36]
	movs	r5, #0
	mov	r9, r1
	str	r7, [r6]
	ldr	r4, [r6, #44]
	ldrb	r3, [r6, #8]
	add	r8, r8, r7
	cmp	r2, #0
	bne	.L320
	b	.L319
.L321:
	movs	r1, r4
	movs	r0, r6
	bl	TrackStop
	mov	r3, r10
	mov	r2, r8
	strb	r3, [r4]
	mov	r3, r9
	str	r3, [r4, #32]
	ldmia	r2!, {r3}
	str	r3, [r4, #64]
	ldrb	r3, [r7]
	adds	r5, r5, #1
	mov	r8, r2
	adds	r4, r4, #80
	cmp	r5, r3
	bge	.L339
	ldrb	r3, [r6, #8]
.L320:
	cmp	r3, r5
	bgt	.L321
.L322:
	ldrb	r0, [r7, #3]
	lsls	r3, r0, #24
	bmi	.L342
.L325:
	ldr	r3, .L343+8
	str	r3, [r6, #52]
.L313:
	@ sp needed
	pop	{r5, r6, r7}
	mov	r10, r7
	mov	r9, r6
	mov	r8, r5
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L339:
	ldrb	r3, [r6, #8]
.L319:
	movs	r2, #0
	mov	r8, r2
	cmp	r5, r3
	bge	.L322
.L323:
	movs	r1, r4
	movs	r0, r6
	bl	TrackStop
	mov	r3, r8
	strb	r3, [r4]
	ldrb	r3, [r6, #8]
	adds	r5, r5, #1
	adds	r4, r4, #80
	cmp	r5, r3
	blt	.L323
	ldrb	r0, [r7, #3]
	lsls	r3, r0, #24
	bpl	.L325
.L342:
	bl	m4aSoundMode
	b	.L325
.L341:
	cmp	r3, #0
	blt	.L314
.L316:
	ldrb	r3, [r6, #9]
	cmp	r3, r2
	bhi	.L313
	b	.L314
.L344:
	.align	2
.L343:
	.word	16777366
	.word	1752395092
	.word	1752395091
	.size	MPlayStart.part.0, .-MPlayStart.part.0
	.align	1
	.p2align 2,,3
	.global	m4aSongNumStart
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSongNumStart, %function
m4aSongNumStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r2, .L347
	lsls	r3, r0, #16
	lsrs	r3, r3, #13
	adds	r3, r3, r2
	ldrh	r1, [r3, #4]
	lsls	r2, r1, #1
	adds	r2, r2, r1
	ldr	r1, .L347+4
	lsls	r2, r2, #2
	ldr	r0, [r1, r2]
	ldr	r2, .L347+8
	ldr	r1, [r0, #52]
	cmp	r1, r2
	bne	.L345
	ldr	r1, [r3]
	bl	MPlayStart.part.0
.L345:
	@ sp needed
	pop	{r0}
	bx	r0
.L348:
	.align	2
.L347:
	.word	gSongTable
	.word	gMPlayTable
	.word	1752395091
	.size	m4aSongNumStart, .-m4aSongNumStart
	.align	1
	.p2align 2,,3
	.global	m4aSongNumStartOrChange
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSongNumStartOrChange, %function
m4aSongNumStartOrChange:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r2, .L358
	lsls	r3, r0, #16
	lsrs	r3, r3, #13
	adds	r3, r3, r2
	ldrh	r1, [r3, #4]
	lsls	r2, r1, #1
	adds	r2, r2, r1
	ldr	r1, .L358+4
	lsls	r2, r2, #2
	ldr	r0, [r1, r2]
	ldr	r1, [r3]
	ldr	r3, [r0]
	cmp	r3, r1
	beq	.L350
.L352:
	ldr	r3, .L358+8
	ldr	r2, [r0, #52]
	cmp	r2, r3
	beq	.L357
.L349:
	@ sp needed
	pop	{r0}
	bx	r0
.L357:
	bl	MPlayStart.part.0
	b	.L349
.L350:
	ldr	r3, [r0, #4]
	lsls	r2, r3, #16
	beq	.L352
	cmp	r3, #0
	bge	.L349
	b	.L352
.L359:
	.align	2
.L358:
	.word	gSongTable
	.word	gMPlayTable
	.word	1752395091
	.size	m4aSongNumStartOrChange, .-m4aSongNumStartOrChange
	.align	1
	.p2align 2,,3
	.global	m4aSongNumStartOrContinue
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSongNumStartOrContinue, %function
m4aSongNumStartOrContinue:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r2, .L365
	lsls	r3, r0, #16
	lsrs	r3, r3, #13
	adds	r3, r3, r2
	ldrh	r1, [r3, #4]
	lsls	r2, r1, #1
	adds	r2, r2, r1
	ldr	r1, .L365+4
	lsls	r2, r2, #2
	ldr	r0, [r1, r2]
	ldr	r1, [r3]
	ldr	r3, [r0]
	cmp	r3, r1
	beq	.L361
	ldr	r3, .L365+8
	ldr	r2, [r0, #52]
	cmp	r2, r3
	beq	.L364
.L360:
	@ sp needed
	pop	{r0}
	bx	r0
.L361:
	ldr	r2, [r0, #4]
	lsls	r1, r2, #16
	bne	.L363
	ldr	r2, .L365+8
	ldr	r1, [r0, #52]
	cmp	r1, r2
	bne	.L360
	movs	r1, r3
.L364:
	bl	MPlayStart.part.0
	b	.L360
.L363:
	cmp	r2, #0
	bge	.L360
	ldr	r3, .L365+8
	ldr	r1, [r0, #52]
	cmp	r1, r3
	bne	.L360
	lsls	r2, r2, #1
	lsrs	r2, r2, #1
	str	r2, [r0, #4]
	b	.L360
.L366:
	.align	2
.L365:
	.word	gSongTable
	.word	gMPlayTable
	.word	1752395091
	.size	m4aSongNumStartOrContinue, .-m4aSongNumStartOrContinue
	.align	1
	.p2align 2,,3
	.global	m4aSoundVSyncOn
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aSoundVSyncOn, %function
m4aSoundVSyncOn:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L369
	ldr	r2, [r3]
	ldr	r1, .L369+4
	ldr	r3, [r2]
	cmp	r3, r1
	beq	.L367
	ldr	r1, .L369+8
	ldr	r0, .L369+12
	strh	r1, [r0]
	ldr	r0, .L369+16
	strh	r1, [r0]
	movs	r1, #0
	subs	r3, r3, #10
	strb	r1, [r2, #4]
	str	r3, [r2]
.L367:
	@ sp needed
	bx	lr
.L370:
	.align	2
.L369:
	.word	50364400
	.word	1752395091
	.word	-18944
	.word	67109062
	.word	67109074
	.size	m4aSoundVSyncOn, .-m4aSoundVSyncOn
	.align	1
	.p2align 2,,3
	.global	MPlayOpen
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayOpen, %function
MPlayOpen:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r3, r2, #24
	push	{lr}
	lsrs	r2, r3, #24
	cmp	r3, #0
	beq	.L371
	bl	MPlayOpen.part.0
.L371:
	@ sp needed
	pop	{r0}
	bx	r0
	.size	MPlayOpen, .-MPlayOpen
	.align	1
	.p2align 2,,3
	.global	MPlayStart
	.syntax unified
	.code	16
	.thumb_func
	.type	MPlayStart, %function
MPlayStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L378
	ldr	r2, [r0, #52]
	push	{lr}
	cmp	r2, r3
	bne	.L376
	bl	MPlayStart.part.0
.L376:
	@ sp needed
	pop	{r0}
	bx	r0
.L379:
	.align	2
.L378:
	.word	1752395091
	.size	MPlayStart, .-MPlayStart
	.align	1
	.p2align 2,,3
	.global	m4aMPlayStop
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayStop, %function
m4aMPlayStop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L388
	ldr	r2, [r0, #52]
	push	{r4, r5, r6, lr}
	movs	r6, r0
	cmp	r2, r3
	bne	.L380
	ldr	r3, .L388+4
	str	r3, [r0, #52]
	movs	r3, #128
	ldr	r2, [r0, #4]
	lsls	r3, r3, #24
	ldrb	r4, [r0, #8]
	orrs	r3, r2
	str	r3, [r0, #4]
	ldr	r5, [r0, #44]
	cmp	r4, #0
	beq	.L382
.L383:
	movs	r1, r5
	movs	r0, r6
	subs	r4, r4, #1
	bl	TrackStop
	adds	r5, r5, #80
	cmp	r4, #0
	bne	.L383
.L382:
	ldr	r3, .L388
	str	r3, [r6, #52]
.L380:
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L389:
	.align	2
.L388:
	.word	1752395091
	.word	1752395092
	.size	m4aMPlayStop, .-m4aMPlayStop
	.align	1
	.p2align 2,,3
	.global	CgbModVol
	.syntax unified
	.code	16
	.thumb_func
	.type	CgbModVol, %function
CgbModVol:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r2, .L400
	ldr	r2, [r2]
	ldrb	r2, [r2, #9]
	ldrb	r3, [r0, #2]
	ldrb	r1, [r0, #3]
	lsls	r2, r2, #31
	bpl	.L398
.L391:
	movs	r4, #255
	adds	r3, r3, r1
	lsls	r3, r3, #24
	lsrs	r3, r3, #28
.L394:
	ldrb	r2, [r0, #6]
	@ sp needed
	strb	r3, [r0, #10]
	muls	r3, r2
	adds	r3, r3, #15
	asrs	r3, r3, #4
	strb	r3, [r0, #25]
	ldrb	r3, [r0, #28]
	ands	r3, r4
	strb	r3, [r0, #27]
	pop	{r4}
	pop	{r0}
	bx	r0
.L398:
	cmp	r3, r1
	bcs	.L399
	lsrs	r2, r1, #1
	cmp	r3, r2
	bhi	.L391
	movs	r4, #240
.L393:
	adds	r3, r3, r1
	lsls	r3, r3, #24
	lsrs	r3, r3, #28
	b	.L394
.L399:
	lsrs	r2, r3, #1
	cmp	r1, r2
	bhi	.L391
	movs	r4, #15
	b	.L393
.L401:
	.align	2
.L400:
	.word	50364400
	.size	CgbModVol, .-CgbModVol
	.align	1
	.p2align 2,,3
	.global	CgbSound
	.syntax unified
	.code	16
	.thumb_func
	.type	CgbSound, %function
CgbSound:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7, lr}
	ldr	r3, .L511
	ldr	r3, [r3]
	mov	fp, r3
	ldrb	r3, [r3, #10]
	movs	r2, #14
	sub	sp, sp, #24
	cmp	r3, #0
	beq	.L403
	subs	r3, r3, #1
	lsls	r3, r3, #24
	lsrs	r2, r3, #24
.L403:
	mov	r3, fp
	ldr	r7, [r3, #28]
	strb	r2, [r3, #10]
	ldr	r3, .L511+4
	mov	r8, r3
	movs	r3, #12
	add	r3, r3, r8
	mov	r10, r3
	movs	r3, #24
	add	r3, r3, r8
	mov	r9, r3
	movs	r6, #1
	mov	r4, r8
	mov	r5, r10
	str	r7, [sp, #20]
.L452:
	ldrb	r3, [r7]
	movs	r1, #56
	movs	r2, r3
	bics	r2, r1
	bne	.LCB2779
	b	.L404	@long jump
.LCB2779:
	cmp	r6, #4
	bne	.LCB2781
	b	.L455	@long jump
.LCB2781:
	ldr	r2, [r4]
	str	r2, [sp, #16]
	ldr	r2, [r5]
	str	r2, [sp, #8]
	mov	r2, r9
	ldr	r1, .L511+8
	mov	ip, r1
	ldr	r2, [r2]
	mov	r8, r2
	lsls	r2, r6, #3
	add	ip, ip, r2
	mov	r1, ip
	str	r1, [sp, #4]
	ldr	r1, .L511+12
	mov	ip, r1
	add	r2, r2, ip
	str	r2, [sp]
.L405:
	mov	r2, fp
	ldrb	r2, [r2, #10]
	str	r2, [sp, #12]
	mov	r2, r8
	ldrb	r2, [r2]
	mov	r10, r2
	lsls	r2, r3, #24
	bpl	.LCB2811
	b	.L501	@long jump
.LCB2811:
	lsls	r2, r3, #29
	bpl	.LCB2817
	b	.L502	@long jump
.LCB2817:
	lsls	r2, r3, #25
	bmi	.LCB2823
	b	.L425	@long jump
.LCB2823:
	movs	r2, #3
	tst	r2, r3
	bne	.LCB2829
	b	.L425	@long jump
.LCB2829:
	bics	r3, r2
	ldrb	r2, [r7, #7]
	strb	r3, [r7]
	strb	r2, [r7, #11]
	cmp	r2, #0
	bne	.LCB2835
	b	.L428	@long jump
.LCB2835:
	movs	r1, #1
	ldrb	r3, [r7, #29]
	orrs	r3, r1
	strb	r3, [r7, #29]
	subs	r3, r2, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	cmp	r6, #3
	bne	.LCB2844
	b	.L417	@long jump
.LCB2844:
	mov	r10, r2
.L507:
	ldr	r2, [sp, #12]
	strb	r3, [r7, #11]
	cmp	r2, #0
	bne	.LCB2851
	b	.L458	@long jump
.LCB2851:
.L499:
	ldrb	r3, [r7, #29]
.L419:
	lsls	r2, r3, #30
	bpl	.L442
	ldr	r3, [r7, #32]
	cmp	r6, #4
	beq	.L443
.L433:
	ldrb	r2, [r7, #1]
	lsls	r2, r2, #28
	bpl	.L444
	ldr	r2, .L511+16
	ldrb	r2, [r2]
	cmp	r2, #63
	bgt	.LCB2877
	b	.L503	@long jump
.LCB2877:
	cmp	r2, #127
	bgt	.L444
	ldr	r2, .L511+20
	adds	r3, r3, #1
	ands	r3, r2
	str	r3, [r7, #32]
.L444:
	ldr	r2, [sp, #4]
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r2]
	b	.L446
.L443:
	movs	r2, #8
	ldr	r0, [sp, #4]
	ldrb	r1, [r0]
	ands	r2, r1
	orrs	r3, r2
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r0]
.L446:
	movs	r1, #63
	ldrb	r2, [r7, #26]
	bics	r2, r1
	ldr	r1, [sp, #20]
	lsls	r3, r6, #6
	subs	r1, r1, #31
	ldrb	r3, [r1, r3]
	adds	r3, r3, r2
	lsls	r3, r3, #24
	ldr	r2, [sp]
	lsrs	r3, r3, #24
	strb	r3, [r7, #26]
	strb	r3, [r2]
	ldrb	r3, [r7, #29]
.L442:
	lsls	r3, r3, #31
	bpl	.L450
	ldr	r2, .L511+24
	ldrb	r1, [r7, #28]
	ldrb	r3, [r2]
	bics	r3, r1
	ldrb	r1, [r7, #27]
	orrs	r3, r1
	strb	r3, [r2]
	cmp	r6, #3
	bne	.LCB2941
	b	.L453	@long jump
.LCB2941:
	mov	r1, r10
	movs	r2, #15
	ldrb	r3, [r7, #9]
	ands	r2, r1
	lsls	r3, r3, #4
	adds	r3, r3, r2
	mov	r2, r8
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r2]
	movs	r2, #128
	ldrb	r3, [r7, #26]
	rsbs	r2, r2, #0
	orrs	r3, r2
	ldr	r1, [sp]
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r1]
	cmp	r6, #1
	bne	.LCB2961
	b	.L504	@long jump
.LCB2961:
.L450:
	movs	r3, #0
	strb	r3, [r7, #29]
.L404:
	movs	r3, #4
	mov	ip, r3
	adds	r6, r6, #1
	adds	r7, r7, #64
	adds	r4, r4, #4
	adds	r5, r5, #4
	add	r9, r9, ip
	cmp	r6, #5
	beq	.LCB2975
	b	.L452	@long jump
.LCB2975:
.L402:
	add	sp, sp, #24
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L501:
	movs	r2, #64
	tst	r2, r3
	beq	.L505
.L407:
	cmp	r6, #2
	bne	.LCB3002
	b	.L420	@long jump
.LCB3002:
.L506:
	cmp	r6, #3
	bne	.LCB3005
	b	.L421	@long jump
.LCB3005:
	cmp	r6, #1
	beq	.LCB3007
	b	.L422	@long jump
.LCB3007:
	movs	r2, #8
	ldr	r3, .L511+28
	strb	r2, [r3]
	ldr	r3, .L511+32
	adds	r2, r2, #120
	strb	r2, [r3]
	movs	r3, #0
	strb	r3, [r7]
.L494:
	strb	r3, [r7, #29]
	adds	r3, r3, #4
	mov	ip, r3
	adds	r7, r7, #64
	adds	r4, r4, #4
	adds	r5, r5, #4
	add	r9, r9, ip
	adds	r6, r6, #1
	b	.L452
.L455:
	ldr	r2, .L511+36
	str	r2, [sp]
	ldr	r2, .L511+40
	str	r2, [sp, #4]
	ldr	r2, .L511+44
	mov	r8, r2
	ldr	r2, .L511+48
	str	r2, [sp, #8]
	ldr	r2, .L511+52
	str	r2, [sp, #16]
	b	.L405
.L502:
	ldrb	r3, [r7, #13]
	subs	r3, r3, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r7, #13]
	lsls	r3, r3, #24
	cmp	r3, #0
	ble	.LCB3052
	b	.L499	@long jump
.LCB3052:
	cmp	r6, #2
	bne	.L506
	b	.L420
.L505:
	movs	r3, #3
	movs	r0, r7
	strb	r3, [r7]
	strb	r3, [r7, #29]
	bl	CgbModVol
	cmp	r6, #2
	beq	.L408
	cmp	r6, #3
	bne	.LCB3067
	b	.L409	@long jump
.LCB3067:
	cmp	r6, #1
	beq	.LCB3069
	b	.L410	@long jump
.LCB3069:
	ldrb	r3, [r7, #31]
	ldr	r2, [sp, #16]
	strb	r3, [r2]
.L408:
	ldr	r3, [r7, #36]
	ldrb	r2, [r7, #30]
	lsls	r3, r3, #6
	adds	r3, r3, r2
	lsls	r3, r3, #24
	ldr	r2, [sp, #8]
	lsrs	r3, r3, #24
	strb	r3, [r2]
.L411:
	movs	r2, #8
	mov	r10, r2
	ldrb	r2, [r7, #30]
	subs	r1, r2, #1
	sbcs	r2, r2, r1
	ldrb	r3, [r7, #4]
	lsls	r2, r2, #6
	strb	r2, [r7, #26]
	add	r10, r10, r3
.L414:
	strb	r3, [r7, #11]
	cmp	r3, #0
	beq	.LCB3097
	b	.L415	@long jump
.LCB3097:
	ldrb	r3, [r7]
.L416:
	subs	r3, r3, #1
	ldrb	r2, [r7, #5]
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r7]
	strb	r2, [r7, #11]
	cmp	r2, #0
	bne	.LCB3108
	b	.L439	@long jump
.LCB3108:
	movs	r1, #1
	ldrb	r3, [r7, #29]
	orrs	r3, r1
	strb	r3, [r7, #29]
	ldrb	r3, [r7, #10]
	strb	r3, [r7, #9]
	subs	r3, r2, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	cmp	r6, #3
	beq	.L417
	mov	r10, r2
	b	.L507
.L425:
	ldrb	r3, [r7, #11]
.L427:
	cmp	r3, #0
	bne	.L497
	cmp	r6, #3
	bne	.LCB3131
	b	.L508	@long jump
.LCB3131:
.L430:
	movs	r0, r7
	bl	CgbModVol
	movs	r2, #3
	movs	r1, r2
	ldrb	r3, [r7]
	ands	r1, r3
	tst	r2, r3
	bne	.L431
	ldrb	r3, [r7, #9]
	subs	r3, r3, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	strb	r3, [r7, #9]
	lsls	r3, r3, #24
	cmp	r3, #0
	bgt	.LCB3151
	b	.L428	@long jump
.LCB3151:
	ldrb	r3, [r7, #7]
	subs	r3, r3, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	b	.L417
.L431:
	cmp	r1, #1
	bne	.LCB3161
	b	.L436	@long jump
.LCB3161:
	ldrb	r2, [r7, #9]
	cmp	r1, #2
	bne	.LCB3164
	b	.L509	@long jump
.LCB3164:
	adds	r2, r2, #1
	lsls	r2, r2, #24
	ldrb	r1, [r7, #10]
	lsrs	r2, r2, #24
	strb	r2, [r7, #9]
	cmp	r1, r2
	bls	.L416
	ldrb	r3, [r7, #4]
.L497:
	subs	r3, r3, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
.L417:
	ldr	r2, [sp, #12]
	strb	r3, [r7, #11]
	cmp	r2, #0
	beq	.LCB3183
	b	.L499	@long jump
.LCB3183:
.L458:
	movs	r2, #1
	rsbs	r2, r2, #0
	str	r2, [sp, #12]
	b	.L427
.L420:
	movs	r2, #8
	ldr	r3, .L511+56
	strb	r2, [r3]
	ldr	r3, .L511+60
	adds	r2, r2, #120
	strb	r2, [r3]
	movs	r3, #0
	strb	r3, [r7]
	strb	r3, [r7, #29]
	adds	r3, r3, #4
	mov	ip, r3
	movs	r6, #3
	adds	r7, r7, #64
	adds	r4, r4, #4
	adds	r5, r5, #4
	add	r9, r9, ip
	b	.L452
.L422:
	movs	r2, #8
	ldr	r3, .L511+44
	strb	r2, [r3]
	ldr	r3, .L511+36
	adds	r2, r2, #120
	strb	r2, [r3]
	movs	r3, #0
	strb	r3, [r7]
	strb	r3, [r7, #29]
	b	.L402
.L409:
	ldr	r2, [r7, #36]
	ldr	r3, [r7, #40]
	cmp	r2, r3
	beq	.L412
	movs	r2, #64
	ldr	r3, [sp, #16]
	strb	r2, [r3]
	ldr	r3, [r7, #36]
	ldr	r2, .L511+64
	ldr	r1, [r3]
	str	r1, [r2]
	ldr	r2, .L511+68
	ldr	r1, [r3, #4]
	str	r1, [r2]
	ldr	r2, .L511+72
	ldr	r1, [r3, #8]
	str	r1, [r2]
	ldr	r2, .L511+76
	ldr	r1, [r3, #12]
	str	r1, [r2]
	str	r3, [r7, #40]
.L412:
	movs	r3, #0
	ldr	r2, [sp, #16]
	strb	r3, [r2]
	ldr	r2, [sp, #8]
	ldrb	r3, [r7, #30]
	strb	r3, [r2]
	cmp	r3, #0
	bne	.LCB3255
	b	.L413	@long jump
.LCB3255:
	movs	r3, #192
	strb	r3, [r7, #26]
	ldrb	r3, [r7, #4]
	b	.L414
.L512:
	.align	2
.L511:
	.word	50364400
	.word	.LANCHOR1
	.word	67108956
	.word	67108957
	.word	67109001
	.word	2046
	.word	67108993
	.word	67108963
	.word	67108965
	.word	67108989
	.word	67108988
	.word	67108985
	.word	67108984
	.word	67108977
	.word	67108969
	.word	67108973
	.word	67109008
	.word	67109012
	.word	67109016
	.word	67109020
.L439:
	ldrb	r2, [r7, #6]
	cmp	r2, #0
	bne	.L440
	adds	r2, r2, #3
	bics	r3, r2
	strb	r3, [r7]
.L428:
	ldrb	r2, [r7, #10]
	ldrb	r3, [r7, #12]
	muls	r3, r2
	adds	r3, r3, #255
	asrs	r3, r3, #8
	strb	r3, [r7, #9]
	bne	.LCB3303
	b	.L407	@long jump
.LCB3303:
	movs	r2, #4
	ldrb	r3, [r7]
	orrs	r3, r2
	strb	r3, [r7]
	movs	r3, #1
	ldrb	r2, [r7, #29]
	orrs	r3, r2
	strb	r3, [r7, #29]
	cmp	r6, #3
	bne	.L456
	lsls	r2, r2, #30
	bmi	.L510
	ldr	r2, .L513
	ldrb	r1, [r7, #28]
	ldrb	r3, [r2]
	bics	r3, r1
	ldrb	r1, [r7, #27]
	orrs	r3, r1
	strb	r3, [r2]
.L453:
	ldrb	r2, [r7, #9]
	ldr	r3, .L513+4
	ldrb	r3, [r3, r2]
	mov	r2, r8
	strb	r3, [r2]
	ldrb	r3, [r7, #26]
	cmp	r3, #127
	bhi	.L449
.L496:
	movs	r3, #0
.L495:
	strb	r3, [r7, #29]
	adds	r3, r3, #4
	mov	ip, r3
	movs	r6, #4
	adds	r7, r7, #64
	adds	r4, r4, #4
	adds	r5, r5, #4
	add	r9, r9, ip
	b	.L452
.L415:
	movs	r2, #0
	subs	r3, r3, #1
	lsls	r3, r3, #24
	strb	r2, [r7, #9]
	lsrs	r3, r3, #24
	b	.L417
.L421:
	movs	r3, #0
	ldr	r2, .L513+8
	strb	r3, [r2]
	strb	r3, [r7]
	b	.L495
.L410:
	ldrb	r3, [r7, #30]
	ldr	r2, [sp, #8]
	strb	r3, [r2]
	ldr	r3, [r7, #36]
	ldr	r2, [sp, #4]
	lsls	r3, r3, #27
	lsrs	r3, r3, #24
	strb	r3, [r2]
	b	.L411
.L440:
	movs	r2, #1
	subs	r3, r3, #1
	strb	r3, [r7]
	ldrb	r3, [r7, #29]
	orrs	r3, r2
	strb	r3, [r7, #29]
	cmp	r6, #3
	beq	.L436
	movs	r3, #8
	mov	r10, r3
.L436:
	ldrb	r3, [r7, #25]
	strb	r3, [r7, #9]
	movs	r3, #6
	b	.L417
.L456:
	movs	r2, #8
	mov	r10, r2
	b	.L419
.L503:
	ldr	r2, .L513+12
	adds	r3, r3, #2
	ands	r3, r2
	str	r3, [r7, #32]
	b	.L444
.L504:
	movs	r1, #8
	movs	r0, r1
	ldr	r3, [sp, #16]
	ldrb	r3, [r3]
	ands	r0, r3
	tst	r1, r3
	beq	.L451
	movs	r3, #0
	b	.L494
.L413:
	movs	r3, #128
	strb	r3, [r7, #26]
	ldrb	r3, [r7, #4]
	b	.L414
.L509:
	movs	r1, #25
	subs	r2, r2, #1
	lsls	r2, r2, #24
	lsrs	r2, r2, #24
	strb	r2, [r7, #9]
	ldrsb	r1, [r7, r1]
	lsls	r2, r2, #24
	asrs	r2, r2, #24
	cmp	r1, r2
	bge	.L439
	ldrb	r3, [r7, #5]
	subs	r3, r3, #1
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	b	.L417
.L449:
	movs	r3, #128
	ldr	r2, [sp, #16]
	strb	r3, [r2]
	ldr	r3, [sp]
	ldrb	r2, [r7, #26]
	strb	r2, [r3]
	movs	r3, #127
	ands	r3, r2
	strb	r3, [r7, #26]
	b	.L496
.L508:
	movs	r2, #1
	ldrb	r3, [r7, #29]
	orrs	r3, r2
	strb	r3, [r7, #29]
	b	.L430
.L451:
	ldrb	r3, [r7, #26]
	orrs	r3, r2
	lsls	r3, r3, #24
	ldr	r2, [sp]
	lsrs	r3, r3, #24
	strb	r3, [r2]
	movs	r3, #4
	mov	ip, r3
	strb	r0, [r7, #29]
	movs	r6, #2
	adds	r7, r7, #64
	adds	r4, r4, #4
	adds	r5, r5, #4
	add	r9, r9, ip
	b	.L452
.L510:
	ldr	r3, [r7, #32]
	b	.L433
.L514:
	.align	2
.L513:
	.word	67108993
	.word	gCgb3Vol
	.word	67108976
	.word	2044
	.size	CgbSound, .-CgbSound
	.align	1
	.p2align 2,,3
	.global	m4aMPlayTempoControl
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayTempoControl, %function
m4aMPlayTempoControl:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L517
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L515
	ldrh	r3, [r0, #28]
	strh	r1, [r0, #30]
	muls	r1, r3
	asrs	r1, r1, #8
	strh	r1, [r0, #32]
.L515:
	@ sp needed
	bx	lr
.L518:
	.align	2
.L517:
	.word	1752395091
	.size	m4aMPlayTempoControl, .-m4aMPlayTempoControl
	.align	1
	.p2align 2,,3
	.global	m4aMPlayVolumeControl
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayVolumeControl, %function
m4aMPlayVolumeControl:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	r3, .L529
	ldr	r4, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	lsls	r2, r2, #16
	cmp	r4, r3
	bne	.L519
	ldrb	r5, [r0, #8]
	ldr	r3, [r0, #44]
	cmp	r5, #0
	beq	.L524
	lsls	r4, r5, #2
	adds	r4, r4, r5
	movs	r5, #3
	lsls	r2, r2, #6
	lsrs	r6, r2, #24
	mov	ip, r5
	movs	r2, #1
	lsls	r4, r4, #4
	adds	r4, r3, r4
.L523:
	tst	r2, r1
	beq	.L522
	ldrb	r5, [r3]
	lsls	r7, r5, #24
	bpl	.L522
	mov	r7, ip
	orrs	r5, r7
	strb	r6, [r3, #19]
	strb	r5, [r3]
.L522:
	adds	r3, r3, #80
	lsls	r2, r2, #1
	cmp	r3, r4
	bne	.L523
.L524:
	ldr	r3, .L529
	str	r3, [r0, #52]
.L519:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L530:
	.align	2
.L529:
	.word	1752395091
	.size	m4aMPlayVolumeControl, .-m4aMPlayVolumeControl
	.align	1
	.p2align 2,,3
	.global	m4aMPlayPitchControl
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayPitchControl, %function
m4aMPlayPitchControl:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r8
	lsls	r1, r1, #16
	lsrs	r4, r1, #16
	ldr	r3, .L541
	ldr	r1, [r0, #52]
	lsls	r2, r2, #16
	push	{lr}
	asrs	r2, r2, #16
	cmp	r1, r3
	bne	.L531
	ldrb	r1, [r0, #8]
	ldr	r3, [r0, #44]
	cmp	r1, #0
	beq	.L536
	movs	r6, #12
	asrs	r5, r2, #8
	mov	ip, r5
	lsls	r5, r1, #2
	adds	r5, r5, r1
	mov	r8, r6
	movs	r1, #1
	lsls	r5, r5, #4
	adds	r5, r3, r5
.L535:
	tst	r1, r4
	beq	.L534
	ldrb	r6, [r3]
	lsls	r7, r6, #24
	bpl	.L534
	mov	r7, ip
	strb	r7, [r3, #11]
	mov	r7, r8
	orrs	r6, r7
	strb	r2, [r3, #13]
	strb	r6, [r3]
.L534:
	adds	r3, r3, #80
	lsls	r1, r1, #1
	cmp	r3, r5
	bne	.L535
.L536:
	ldr	r3, .L541
	str	r3, [r0, #52]
.L531:
	@ sp needed
	pop	{r7}
	mov	r8, r7
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L542:
	.align	2
.L541:
	.word	1752395091
	.size	m4aMPlayPitchControl, .-m4aMPlayPitchControl
	.align	1
	.p2align 2,,3
	.global	m4aMPlayPanpotControl
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayPanpotControl, %function
m4aMPlayPanpotControl:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r2, r2, #24
	push	{r4, r5, r6, r7, lr}
	ldr	r3, .L553
	asrs	r7, r2, #24
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L543
	ldrb	r2, [r0, #8]
	ldr	r3, [r0, #44]
	cmp	r2, #0
	beq	.L548
	movs	r5, #3
	lsls	r4, r2, #2
	adds	r4, r4, r2
	mov	ip, r5
	movs	r2, #1
	lsls	r4, r4, #4
	adds	r4, r3, r4
.L547:
	tst	r2, r1
	beq	.L546
	ldrb	r5, [r3]
	lsls	r6, r5, #24
	bpl	.L546
	mov	r6, ip
	orrs	r5, r6
	strb	r7, [r3, #21]
	strb	r5, [r3]
.L546:
	adds	r3, r3, #80
	lsls	r2, r2, #1
	cmp	r3, r4
	bne	.L547
.L548:
	ldr	r3, .L553
	str	r3, [r0, #52]
.L543:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L554:
	.align	2
.L553:
	.word	1752395091
	.size	m4aMPlayPanpotControl, .-m4aMPlayPanpotControl
	.align	1
	.p2align 2,,3
	.global	ClearModM
	.syntax unified
	.code	16
	.thumb_func
	.type	ClearModM, %function
ClearModM:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, #0
	ldrb	r2, [r0, #24]
	strb	r3, [r0, #26]
	strb	r3, [r0, #22]
	ldrb	r3, [r0]
	cmp	r2, #0
	bne	.L556
	adds	r2, r2, #12
	orrs	r3, r2
.L557:
	strb	r3, [r0]
	@ sp needed
	bx	lr
.L556:
	movs	r2, #3
	orrs	r3, r2
	b	.L557
	.size	ClearModM, .-ClearModM
	.align	1
	.p2align 2,,3
	.global	m4aMPlayModDepthSet
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayModDepthSet, %function
m4aMPlayModDepthSet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r2, r2, #24
	push	{r4, r5, r6, r7, lr}
	ldr	r3, .L568
	lsrs	r4, r2, #24
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L558
	ldrb	r2, [r0, #8]
	ldr	r3, [r0, #44]
	cmp	r2, #0
	beq	.L566
	lsls	r5, r2, #2
	adds	r5, r5, r2
	lsls	r5, r5, #4
	movs	r2, #1
	adds	r5, r3, r5
	b	.L565
.L562:
	adds	r3, r3, #80
	lsls	r2, r2, #1
	cmp	r3, r5
	beq	.L566
.L565:
	tst	r2, r1
	beq	.L562
	ldrb	r6, [r3]
	lsls	r7, r6, #24
	bpl	.L562
	strb	r4, [r3, #23]
	cmp	r4, #0
	bne	.L562
	ldrb	r7, [r3, #24]
	strb	r4, [r3, #26]
	strb	r4, [r3, #22]
	cmp	r7, #0
	bne	.L564
	movs	r7, #12
	orrs	r6, r7
	strb	r6, [r3]
	adds	r3, r3, #80
	lsls	r2, r2, #1
	cmp	r3, r5
	bne	.L565
.L566:
	ldr	r3, .L568
	str	r3, [r0, #52]
.L558:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L564:
	movs	r7, #3
	orrs	r6, r7
	strb	r6, [r3]
	b	.L562
.L569:
	.align	2
.L568:
	.word	1752395091
	.size	m4aMPlayModDepthSet, .-m4aMPlayModDepthSet
	.align	1
	.p2align 2,,3
	.global	m4aMPlayLFOSpeedSet
	.syntax unified
	.code	16
	.thumb_func
	.type	m4aMPlayLFOSpeedSet, %function
m4aMPlayLFOSpeedSet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	lsls	r2, r2, #24
	push	{r4, r5, r6, r7, lr}
	ldr	r3, .L580
	lsrs	r4, r2, #24
	ldr	r2, [r0, #52]
	lsls	r1, r1, #16
	lsrs	r1, r1, #16
	cmp	r2, r3
	bne	.L570
	ldrb	r2, [r0, #8]
	ldr	r3, [r0, #44]
	cmp	r2, #0
	beq	.L578
	lsls	r5, r2, #2
	adds	r5, r5, r2
	lsls	r5, r5, #4
	movs	r2, #1
	adds	r5, r3, r5
	b	.L577
.L574:
	adds	r3, r3, #80
	lsls	r2, r2, #1
	cmp	r3, r5
	beq	.L578
.L577:
	tst	r2, r1
	beq	.L574
	ldrb	r6, [r3]
	lsls	r7, r6, #24
	bpl	.L574
	strb	r4, [r3, #25]
	cmp	r4, #0
	bne	.L574
	ldrb	r7, [r3, #24]
	strb	r4, [r3, #26]
	strb	r4, [r3, #22]
	cmp	r7, #0
	bne	.L576
	movs	r7, #12
	orrs	r6, r7
	strb	r6, [r3]
	adds	r3, r3, #80
	lsls	r2, r2, #1
	cmp	r3, r5
	bne	.L577
.L578:
	ldr	r3, .L580
	str	r3, [r0, #52]
.L570:
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L576:
	movs	r7, #3
	orrs	r6, r7
	strb	r6, [r3]
	b	.L574
.L581:
	.align	2
.L580:
	.word	1752395091
	.size	m4aMPlayLFOSpeedSet, .-m4aMPlayLFOSpeedSet
	.align	1
	.p2align 2,,3
	.global	ply_xxx
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xxx, %function
ply_xxx:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r3, .L583
	@ sp needed
	ldr	r3, [r3]
	bl	.L46
	pop	{r0}
	bx	r0
.L584:
	.align	2
.L583:
	.word	gMPlayJumpTable
	.size	ply_xxx, .-ply_xxx
	.align	1
	.p2align 2,,3
	.global	ply_xwave
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xwave, %function
ply_xwave:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, [r1, #64]
	@ sp needed
	ldrb	r2, [r3, #1]
	ldrb	r0, [r3]
	lsls	r2, r2, #8
	orrs	r2, r0
	ldrb	r0, [r3, #2]
	lsls	r0, r0, #16
	orrs	r0, r2
	ldrb	r2, [r3, #3]
	lsls	r2, r2, #24
	orrs	r2, r0
	adds	r3, r3, #4
	str	r2, [r1, #40]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xwave, .-ply_xwave
	.align	1
	.p2align 2,,3
	.global	ply_xtype
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xtype, %function
ply_xtype:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #36
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xtype, .-ply_xtype
	.align	1
	.p2align 2,,3
	.global	ply_xatta
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xatta, %function
ply_xatta:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #44
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xatta, .-ply_xatta
	.align	1
	.p2align 2,,3
	.global	ply_xdeca
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xdeca, %function
ply_xdeca:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #45
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xdeca, .-ply_xdeca
	.align	1
	.p2align 2,,3
	.global	ply_xsust
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xsust, %function
ply_xsust:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #46
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xsust, .-ply_xsust
	.align	1
	.p2align 2,,3
	.global	ply_xrele
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xrele, %function
ply_xrele:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #47
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xrele, .-ply_xrele
	.align	1
	.p2align 2,,3
	.global	ply_xiecv
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xiecv, %function
ply_xiecv:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, [r1, #64]
	@ sp needed
	ldrb	r2, [r3]
	adds	r3, r3, #1
	strb	r2, [r1, #30]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xiecv, .-ply_xiecv
	.align	1
	.p2align 2,,3
	.global	ply_xiecl
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xiecl, %function
ply_xiecl:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, [r1, #64]
	@ sp needed
	ldrb	r2, [r3]
	adds	r3, r3, #1
	strb	r2, [r1, #31]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xiecl, .-ply_xiecl
	.align	1
	.p2align 2,,3
	.global	ply_xleng
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xleng, %function
ply_xleng:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #38
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xleng, .-ply_xleng
	.align	1
	.p2align 2,,3
	.global	ply_xswee
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xswee, %function
ply_xswee:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #39
	@ sp needed
	ldr	r3, [r1, #64]
	ldrb	r0, [r3]
	adds	r3, r3, #1
	strb	r0, [r1, r2]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xswee, .-ply_xswee
	.align	1
	.p2align 2,,3
	.global	ply_xcmd_0C
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xcmd_0C, %function
ply_xcmd_0C:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r2, [r1, #64]
	ldrb	r0, [r2, #1]
	ldrb	r4, [r2]
	ldrh	r3, [r1, #58]
	lsls	r0, r0, #8
	orrs	r0, r4
	cmp	r3, r0
	bcs	.L596
	movs	r0, #1
	adds	r3, r3, #1
	lsls	r3, r3, #16
	strb	r0, [r1, #1]
	lsrs	r3, r3, #16
	subs	r2, r2, #2
.L597:
	str	r2, [r1, #64]
	@ sp needed
	strh	r3, [r1, #58]
	pop	{r4}
	pop	{r0}
	bx	r0
.L596:
	movs	r3, #0
	adds	r2, r2, #2
	b	.L597
	.size	ply_xcmd_0C, .-ply_xcmd_0C
	.align	1
	.p2align 2,,3
	.global	ply_xcmd_0D
	.syntax unified
	.code	16
	.thumb_func
	.type	ply_xcmd_0D, %function
ply_xcmd_0D:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, [r1, #64]
	@ sp needed
	ldrb	r2, [r3, #1]
	ldrb	r0, [r3]
	lsls	r2, r2, #8
	orrs	r2, r0
	ldrb	r0, [r3, #2]
	lsls	r0, r0, #16
	orrs	r0, r2
	ldrb	r2, [r3, #3]
	lsls	r2, r2, #24
	orrs	r2, r0
	adds	r3, r3, #4
	str	r2, [r1, #60]
	str	r3, [r1, #64]
	bx	lr
	.size	ply_xcmd_0D, .-ply_xcmd_0D
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryTone
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryTone, %function
SetPokemonCryTone:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7, lr}
	ldr	r3, .L609
	ldrb	r2, [r3]
	sub	sp, sp, #8
	str	r0, [sp, #4]
	cmp	r2, #0
	bne	.L600
	ldr	r2, [r3, #32]
	cmp	r2, #0
	beq	.L606
	ldr	r2, [r2, #44]
	cmp	r2, r3
	bne	.L606
.L600:
	ldr	r2, .L609+4
	mov	r8, r2
	ldr	r5, [r2, #12]
	movs	r2, #160
	ldrb	r2, [r3, r2]
	cmp	r2, #0
	bne	.L602
	adds	r2, r2, #192
	ldr	r2, [r3, r2]
	cmp	r2, #0
	beq	.L608
	ldr	r2, [r2, #44]
	adds	r3, r3, #160
	cmp	r2, r3
	bne	.L608
.L602:
	mov	r3, r8
	ldr	r3, [r3, #76]
	cmp	r5, r3
	sbcs	r5, r5, r5
	movs	r2, #51
	rsbs	r5, r5, #0
	subs	r3, r5, #1
	bics	r3, r2
	subs	r2, r2, #34
	mov	r9, r2
	adds	r2, r2, #7
	mov	ip, r2
	adds	r3, r3, #52
	add	ip, ip, r3
	mov	r2, ip
	str	r2, [sp]
	movs	r2, #26
	ldr	r4, .L609+8
	mov	fp, r2
	movs	r2, r4
	adds	r2, r2, #68
	mov	r10, r2
	lsls	r7, r5, #6
	add	r9, r9, r3
	add	fp, fp, r3
	add	r10, r10, r3
	add	r7, r7, r8
.L601:
	movs	r6, #52
	muls	r6, r5
	adds	r6, r4, r6
	movs	r0, r6
	movs	r1, r4
	movs	r2, #52
	adds	r1, r1, #16
	adds	r0, r0, #68
	bl	memcpy
	ldr	r3, [sp, #4]
	str	r3, [r6, #72]
	mov	r3, r9
	adds	r4, r4, #68
	adds	r3, r4, r3
	str	r3, [r6, #76]
	ldr	r3, [sp]
	adds	r3, r4, r3
	str	r3, [r6, #80]
	lsls	r5, r5, #6
	ldr	r3, .L609+12
	movs	r0, r7
	mov	r1, r10
	add	r4, r4, fp
	add	r5, r5, r8
	str	r4, [r6, #88]
	str	r3, [r5, #52]
	bl	MPlayStart.part.0
	movs	r0, r7
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L606:
	ldr	r3, .L609+4
	mov	r8, r3
	movs	r7, r3
	movs	r3, #68
	mov	r10, r3
	subs	r3, r3, #42
	mov	fp, r3
	ldr	r4, .L609+8
	subs	r3, r3, #2
	str	r3, [sp]
	subs	r3, r3, #7
	mov	r9, r3
	movs	r5, #0
	add	r10, r10, r4
	b	.L601
.L608:
	movs	r3, #120
	mov	r7, r8
	mov	r10, r3
	subs	r3, r3, #42
	mov	fp, r3
	ldr	r4, .L609+8
	subs	r3, r3, #2
	str	r3, [sp]
	subs	r3, r3, #7
	mov	r9, r3
	movs	r5, #1
	adds	r7, r7, #64
	add	r10, r10, r4
	b	.L601
.L610:
	.align	2
.L609:
	.word	gPokemonCryTracks
	.word	gPokemonCryMusicPlayers
	.word	.LANCHOR0
	.word	1752395091
	.size	SetPokemonCryTone, .-SetPokemonCryTone
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryVolume
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryVolume, %function
SetPokemonCryVolume:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #127
	@ sp needed
	ldr	r3, .L612
	ands	r0, r2
	subs	r2, r2, #82
	strb	r0, [r3, r2]
	bx	lr
.L613:
	.align	2
.L612:
	.word	.LANCHOR0
	.size	SetPokemonCryVolume, .-SetPokemonCryVolume
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryPanpot
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryPanpot, %function
SetPokemonCryPanpot:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #127
	@ sp needed
	movs	r1, #56
	lsls	r0, r0, #24
	asrs	r0, r0, #24
	ldr	r3, .L615
	adds	r0, r0, #64
	ands	r2, r0
	strb	r2, [r3, r1]
	bx	lr
.L616:
	.align	2
.L615:
	.word	.LANCHOR0
	.size	SetPokemonCryPanpot, .-SetPokemonCryPanpot
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryPitch
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryPitch, %function
SetPokemonCryPitch:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	movs	r5, #41
	@ sp needed
	movs	r6, #34
	ldr	r3, .L618
	ldrb	r1, [r3, r6]
	ldrb	r2, [r3, r5]
	subs	r2, r2, r1
	movs	r1, #127
	movs	r7, #58
	adds	r0, r0, #128
	lsls	r0, r0, #16
	asrs	r0, r0, #16
	asrs	r4, r0, #8
	ands	r4, r1
	strb	r4, [r3, r7]
	movs	r4, r1
	lsls	r2, r2, #24
	lsls	r0, r0, #23
	lsrs	r2, r2, #24
	lsrs	r0, r0, #24
	ands	r4, r0
	adds	r0, r0, r2
	ands	r1, r0
	strb	r4, [r3, r6]
	strb	r1, [r3, r5]
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L619:
	.align	2
.L618:
	.word	.LANCHOR0
	.size	SetPokemonCryPitch, .-SetPokemonCryPitch
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryLength
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryLength, %function
SetPokemonCryLength:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L621
	@ sp needed
	strh	r0, [r3, #62]
	bx	lr
.L622:
	.align	2
.L621:
	.word	.LANCHOR0
	.size	SetPokemonCryLength, .-SetPokemonCryLength
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryRelease
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryRelease, %function
SetPokemonCryRelease:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r2, #54
	@ sp needed
	ldr	r3, .L624
	strb	r0, [r3, r2]
	bx	lr
.L625:
	.align	2
.L624:
	.word	.LANCHOR0
	.size	SetPokemonCryRelease, .-SetPokemonCryRelease
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryProgress
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryProgress, %function
SetPokemonCryProgress:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L627
	@ sp needed
	str	r0, [r3, #48]
	bx	lr
.L628:
	.align	2
.L627:
	.word	.LANCHOR0
	.size	SetPokemonCryProgress, .-SetPokemonCryProgress
	.align	1
	.p2align 2,,3
	.global	IsPokemonCryPlaying
	.syntax unified
	.code	16
	.thumb_func
	.type	IsPokemonCryPlaying, %function
IsPokemonCryPlaying:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, [r0, #44]
	ldr	r2, [r3, #32]
	cmp	r2, #0
	beq	.L631
	ldr	r0, [r2, #44]
	subs	r0, r0, r3
	rsbs	r3, r0, #0
	adcs	r0, r0, r3
.L629:
	@ sp needed
	bx	lr
.L631:
	movs	r0, #0
	b	.L629
	.size	IsPokemonCryPlaying, .-IsPokemonCryPlaying
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryChorus
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryChorus, %function
SetPokemonCryChorus:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	lsls	r0, r0, #24
	asrs	r2, r0, #24
	cmp	r0, #0
	beq	.L634
	movs	r1, #34
	ldr	r3, .L635
	ldrb	r1, [r3, r1]
	adds	r1, r1, r2
	movs	r2, #127
	ands	r2, r1
	movs	r1, #41
	strb	r2, [r3, r1]
	movs	r2, #2
.L633:
	@ sp needed
	strb	r2, [r3, #16]
	bx	lr
.L634:
	movs	r2, #1
	ldr	r3, .L635
	b	.L633
.L636:
	.align	2
.L635:
	.word	.LANCHOR0
	.size	SetPokemonCryChorus, .-SetPokemonCryChorus
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryStereo
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryStereo, %function
SetPokemonCryStereo:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L640
	ldr	r2, [r3]
	ldr	r3, .L640+4
	cmp	r0, #0
	beq	.L638
	ldr	r1, .L640+8
	strh	r1, [r3]
	movs	r1, #1
	ldrb	r3, [r2, #9]
	bics	r3, r1
.L639:
	strb	r3, [r2, #9]
	@ sp needed
	bx	lr
.L638:
	ldr	r1, .L640+12
	strh	r1, [r3]
	movs	r1, #1
	ldrb	r3, [r2, #9]
	orrs	r3, r1
	b	.L639
.L641:
	.align	2
.L640:
	.word	50364400
	.word	67108994
	.word	8462
	.word	13058
	.size	SetPokemonCryStereo, .-SetPokemonCryStereo
	.align	1
	.p2align 2,,3
	.global	SetPokemonCryPriority
	.syntax unified
	.code	16
	.thumb_func
	.type	SetPokemonCryPriority, %function
SetPokemonCryPriority:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	r3, .L643
	@ sp needed
	strb	r0, [r3, #18]
	bx	lr
.L644:
	.align	2
.L643:
	.word	.LANCHOR0
	.size	SetPokemonCryPriority, .-SetPokemonCryPriority
	.global	gMPlayInfo_SE3
	.global	gMPlayMemAccArea
	.global	gPokemonCrySong
	.global	gPokemonCryTracks
	.global	gMPlayInfo_SE2
	.global	gMPlayInfo_SE1
	.global	gCgbChans
	.global	gMPlayJumpTable
	.global	gMPlayInfo_BGM
	.global	gPokemonCryMusicPlayers
	.global	gPokemonCrySongs
	.global	gSoundInfo
	.section	.rodata
	.align	2
	.set	.LANCHOR1,. + 0
	.type	CSWTCH.52, %object
	.size	CSWTCH.52, 12
CSWTCH.52:
	.word	67108960
	.word	67108961
	.word	67108976
	.type	CSWTCH.53, %object
	.size	CSWTCH.53, 12
CSWTCH.53:
	.word	67108962
	.word	67108968
	.word	67108978
	.type	CSWTCH.54, %object
	.size	CSWTCH.54, 12
CSWTCH.54:
	.word	67108963
	.word	67108969
	.word	67108979
	.section	.sbss,"aw",%nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	gMPlayMemAccArea, %object
	.size	gMPlayMemAccArea, 16
gMPlayMemAccArea:
	.space	16
	.type	gPokemonCrySong, %object
	.size	gPokemonCrySong, 52
gPokemonCrySong:
	.space	52
	.type	gPokemonCrySongs, %object
	.size	gPokemonCrySongs, 104
gPokemonCrySongs:
	.space	104
	.type	gMPlayInfo_SE3, %object
	.size	gMPlayInfo_SE3, 64
gMPlayInfo_SE3:
	.space	64
	.type	gPokemonCryTracks, %object
	.size	gPokemonCryTracks, 320
gPokemonCryTracks:
	.space	320
	.type	gMPlayInfo_SE2, %object
	.size	gMPlayInfo_SE2, 64
gMPlayInfo_SE2:
	.space	64
	.type	gMPlayInfo_SE1, %object
	.size	gMPlayInfo_SE1, 64
gMPlayInfo_SE1:
	.space	64
	.type	gCgbChans, %object
	.size	gCgbChans, 256
gCgbChans:
	.space	256
	.type	gMPlayJumpTable, %object
	.size	gMPlayJumpTable, 144
gMPlayJumpTable:
	.space	144
	.type	gMPlayInfo_BGM, %object
	.size	gMPlayInfo_BGM, 64
gMPlayInfo_BGM:
	.space	64
	.type	gPokemonCryMusicPlayers, %object
	.size	gPokemonCryMusicPlayers, 128
gPokemonCryMusicPlayers:
	.space	128
	.type	gSoundInfo, %object
	.size	gSoundInfo, 4016
gSoundInfo:
	.space	4016
	.ident	"GCC: (devkitARM release 63) 13.2.0"
	.text
	.code 16
	.align	1
.L46:
	bx	r3
.text
	.align	2, 0

