
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0008 	ldr	r0, [pc, #8]	@ 18 <main+0x18>
   c:	ebfffffe 	bl	0 <Uart_Send_String>
  10:	e1a00000 	nop			@ (mov r0, r0)
  14:	e8bd8800 	pop	{fp, pc}
  18:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	6165642d 	cmnvs	r5, sp, lsr #8
   c:	3a687470 	bcc	1a1d1d4 <string_buffer+0x1a1d1d4>
  10:	684b3c20 	stmdavs	fp, {r5, sl, fp, ip, sp}^
  14:	64656c61 	strbtvs	r6, [r5], #-3169	@ 0xfffff39f
  18:	0000003e 	andeq	r0, r0, lr, lsr r0
	...

Disassembly of section .rodata:

00000000 <string_buffer2>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	6165642d 	cmnvs	r5, sp, lsr #8
   c:	3a687470 	bcc	1a1d1d4 <string_buffer2+0x1a1d1d4>
  10:	684b3c20 	stmdavs	fp, {r5, sl, fp, ip, sp}^
  14:	64656c61 	strbtvs	r6, [r5], #-3169	@ 0xfffff39f
  18:	0000003e 	andeq	r0, r0, lr, lsr r0
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	@ 0x3700
   4:	4128203a 			@ <UNDEFINED> instruction: 0x4128203a
   8:	47206d72 			@ <UNDEFINED> instruction: 0x47206d72
   c:	5420554e 	strtpl	r5, [r0], #-1358	@ 0xfffffab2
  10:	636c6f6f 	cmnvs	ip, #444	@ 0x1bc
  14:	6e696168 	powvsez	f6, f1, #0.0
  18:	2e333120 	rsfcssp	f3, f3, f0
  1c:	65722e32 	ldrbvs	r2, [r2, #-3634]!	@ 0xfffff1ce
  20:	2820316c 	stmdacs	r0!, {r2, r3, r5, r6, r8, ip, sp}
  24:	6c697542 	cfstr64vs	mvdx7, [r9], #-264	@ 0xfffffef8
  28:	72612064 	rsbvc	r2, r1, #100	@ 0x64
  2c:	33312d6d 	teqcc	r1, #6976	@ 0x1b40
  30:	2929372e 	stmdbcs	r9!, {r1, r2, r3, r5, r8, r9, sl, ip, sp}
  34:	2e333120 	rsfcssp	f3, f3, f0
  38:	20312e32 	eorscs	r2, r1, r2, lsr lr
  3c:	33323032 	teqcc	r2, #50	@ 0x32
  40:	39303031 	ldmdbcc	r0!, {r0, r4, r5, ip, sp}
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002b41 	andeq	r2, r0, r1, asr #22
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000021 	andeq	r0, r0, r1, lsr #32
  10:	45543505 	ldrbmi	r3, [r4, #-1285]	@ 0xfffffafb
  14:	0506004a 	streq	r0, [r6, #-74]	@ 0xffffffb6
  18:	01090108 	tsteq	r9, r8, lsl #2
  1c:	01140412 	tsteq	r4, r2, lsl r4
  20:	03170115 	tsteq	r7, #1073741829	@ 0x40000005
  24:	01190118 	tsteq	r9, r8, lsl r1
  28:	061e011a 			@ <UNDEFINED> instruction: 0x061e011a

app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0008 	ldr	r0, [pc, #8]	@ 18 <main+0x18>
   c:	ebfffffe 	bl	0 <Uart_Send_String>
  10:	e1a00000 	nop			@ (mov r0, r0)
  14:	e8bd8800 	pop	{fp, pc}
  18:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	6165642d 	cmnvs	r5, sp, lsr #8
   c:	3a687470 	bcc	1a1d1d4 <string_buffer+0x1a1d1d4>
  10:	684b3c20 	stmdavs	fp, {r5, sl, fp, ip, sp}^
  14:	64656c61 	strbtvs	r6, [r5], #-3169	@ 0xfffff39f
  18:	0000003e 	andeq	r0, r0, lr, lsr r0
	...

Disassembly of section .rodata:

00000000 <string_buffer2>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	@ 0x1b000000
   4:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   8:	6165642d 	cmnvs	r5, sp, lsr #8
   c:	3a687470 	bcc	1a1d1d4 <string_buffer2+0x1a1d1d4>
  10:	684b3c20 	stmdavs	fp, {r5, sl, fp, ip, sp}^
  14:	64656c61 	strbtvs	r6, [r5], #-3169	@ 0xfffff39f
  18:	0000003e 	andeq	r0, r0, lr, lsr r0
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	@ 0x3700
   4:	4128203a 			@ <UNDEFINED> instruction: 0x4128203a
   8:	47206d72 			@ <UNDEFINED> instruction: 0x47206d72
   c:	5420554e 	strtpl	r5, [r0], #-1358	@ 0xfffffab2
  10:	636c6f6f 	cmnvs	ip, #444	@ 0x1bc
  14:	6e696168 	powvsez	f6, f1, #0.0
  18:	2e333120 	rsfcssp	f3, f3, f0
  1c:	65722e32 	ldrbvs	r2, [r2, #-3634]!	@ 0xfffff1ce
  20:	2820316c 	stmdacs	r0!, {r2, r3, r5, r6, r8, ip, sp}
  24:	6c697542 	cfstr64vs	mvdx7, [r9], #-264	@ 0xfffffef8
  28:	72612064 	rsbvc	r2, r1, #100	@ 0x64
  2c:	33312d6d 	teqcc	r1, #6976	@ 0x1b40
  30:	2929372e 	stmdbcs	r9!, {r1, r2, r3, r5, r8, r9, sl, ip, sp}
  34:	2e333120 	rsfcssp	f3, f3, f0
  38:	20312e32 	eorscs	r2, r1, r2, lsr lr
  3c:	33323032 	teqcc	r2, #50	@ 0x32
  40:	39303031 	ldmdbcc	r0!, {r0, r4, r5, ip, sp}
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002b41 	andeq	r2, r0, r1, asr #22
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000021 	andeq	r0, r0, r1, lsr #32
  10:	45543505 	ldrbmi	r3, [r4, #-1285]	@ 0xfffffafb
  14:	0506004a 	streq	r0, [r6, #-74]	@ 0xffffffb6
  18:	01090108 	tsteq	r9, r8, lsl #2
  1c:	01140412 	tsteq	r4, r2, lsl r4
  20:	03170115 	tsteq	r7, #1073741829	@ 0x40000005
  24:	01190118 	tsteq	r9, r8, lsl r1
  28:	061e011a 			@ <UNDEFINED> instruction: 0x061e011a
