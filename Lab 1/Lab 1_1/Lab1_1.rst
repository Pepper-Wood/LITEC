                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Feb 23 19:37:46 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module Lab1_1
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _putchar
                                     14 	.globl _printf
                                     15 	.globl _Sys_Init
                                     16 	.globl _UART0_Init
                                     17 	.globl _SYSCLK_Init
                                     18 	.globl _PB2
                                     19 	.globl _PB1
                                     20 	.globl _SS
                                     21 	.globl _Buzzer
                                     22 	.globl _BILED1
                                     23 	.globl _BILED0
                                     24 	.globl _LED0
                                     25 	.globl _SPIF
                                     26 	.globl _WCOL
                                     27 	.globl _MODF
                                     28 	.globl _RXOVRN
                                     29 	.globl _TXBSY
                                     30 	.globl _SLVSEL
                                     31 	.globl _MSTEN
                                     32 	.globl _SPIEN
                                     33 	.globl _AD0EN
                                     34 	.globl _ADCEN
                                     35 	.globl _AD0TM
                                     36 	.globl _ADCTM
                                     37 	.globl _AD0INT
                                     38 	.globl _ADCINT
                                     39 	.globl _AD0BUSY
                                     40 	.globl _ADBUSY
                                     41 	.globl _AD0CM1
                                     42 	.globl _ADSTM1
                                     43 	.globl _AD0CM0
                                     44 	.globl _ADSTM0
                                     45 	.globl _AD0WINT
                                     46 	.globl _ADWINT
                                     47 	.globl _AD0LJST
                                     48 	.globl _ADLJST
                                     49 	.globl _CF
                                     50 	.globl _CR
                                     51 	.globl _CCF4
                                     52 	.globl _CCF3
                                     53 	.globl _CCF2
                                     54 	.globl _CCF1
                                     55 	.globl _CCF0
                                     56 	.globl _CY
                                     57 	.globl _AC
                                     58 	.globl _F0
                                     59 	.globl _RS1
                                     60 	.globl _RS0
                                     61 	.globl _OV
                                     62 	.globl _F1
                                     63 	.globl _P
                                     64 	.globl _TF2
                                     65 	.globl _EXF2
                                     66 	.globl _RCLK
                                     67 	.globl _TCLK
                                     68 	.globl _EXEN2
                                     69 	.globl _TR2
                                     70 	.globl _CT2
                                     71 	.globl _CPRL2
                                     72 	.globl _BUSY
                                     73 	.globl _ENSMB
                                     74 	.globl _STA
                                     75 	.globl _STO
                                     76 	.globl _SI
                                     77 	.globl _AA
                                     78 	.globl _SMBFTE
                                     79 	.globl _SMBTOE
                                     80 	.globl _PT2
                                     81 	.globl _PS
                                     82 	.globl _PS0
                                     83 	.globl _PT1
                                     84 	.globl _PX1
                                     85 	.globl _PT0
                                     86 	.globl _PX0
                                     87 	.globl _P3_7
                                     88 	.globl _P3_6
                                     89 	.globl _P3_5
                                     90 	.globl _P3_4
                                     91 	.globl _P3_3
                                     92 	.globl _P3_2
                                     93 	.globl _P3_1
                                     94 	.globl _P3_0
                                     95 	.globl _EA
                                     96 	.globl _ET2
                                     97 	.globl _ES
                                     98 	.globl _ES0
                                     99 	.globl _ET1
                                    100 	.globl _EX1
                                    101 	.globl _ET0
                                    102 	.globl _EX0
                                    103 	.globl _P2_7
                                    104 	.globl _P2_6
                                    105 	.globl _P2_5
                                    106 	.globl _P2_4
                                    107 	.globl _P2_3
                                    108 	.globl _P2_2
                                    109 	.globl _P2_1
                                    110 	.globl _P2_0
                                    111 	.globl _S0MODE
                                    112 	.globl _SM00
                                    113 	.globl _SM0
                                    114 	.globl _SM10
                                    115 	.globl _SM1
                                    116 	.globl _MCE0
                                    117 	.globl _SM20
                                    118 	.globl _SM2
                                    119 	.globl _REN0
                                    120 	.globl _REN
                                    121 	.globl _TB80
                                    122 	.globl _TB8
                                    123 	.globl _RB80
                                    124 	.globl _RB8
                                    125 	.globl _TI0
                                    126 	.globl _TI
                                    127 	.globl _RI0
                                    128 	.globl _RI
                                    129 	.globl _P1_7
                                    130 	.globl _P1_6
                                    131 	.globl _P1_5
                                    132 	.globl _P1_4
                                    133 	.globl _P1_3
                                    134 	.globl _P1_2
                                    135 	.globl _P1_1
                                    136 	.globl _P1_0
                                    137 	.globl _TF1
                                    138 	.globl _TR1
                                    139 	.globl _TF0
                                    140 	.globl _TR0
                                    141 	.globl _IE1
                                    142 	.globl _IT1
                                    143 	.globl _IE0
                                    144 	.globl _IT0
                                    145 	.globl _P0_7
                                    146 	.globl _P0_6
                                    147 	.globl _P0_5
                                    148 	.globl _P0_4
                                    149 	.globl _P0_3
                                    150 	.globl _P0_2
                                    151 	.globl _P0_1
                                    152 	.globl _P0_0
                                    153 	.globl _PCA0CP4
                                    154 	.globl _PCA0CP3
                                    155 	.globl _PCA0CP2
                                    156 	.globl _PCA0CP1
                                    157 	.globl _PCA0CP0
                                    158 	.globl _PCA0
                                    159 	.globl _DAC1
                                    160 	.globl _DAC0
                                    161 	.globl _ADC0LT
                                    162 	.globl _ADC0GT
                                    163 	.globl _ADC0
                                    164 	.globl _RCAP4
                                    165 	.globl _TMR4
                                    166 	.globl _TMR3RL
                                    167 	.globl _TMR3
                                    168 	.globl _RCAP2
                                    169 	.globl _TMR2
                                    170 	.globl _TMR1
                                    171 	.globl _TMR0
                                    172 	.globl _WDTCN
                                    173 	.globl _PCA0CPH4
                                    174 	.globl _PCA0CPH3
                                    175 	.globl _PCA0CPH2
                                    176 	.globl _PCA0CPH1
                                    177 	.globl _PCA0CPH0
                                    178 	.globl _PCA0H
                                    179 	.globl _SPI0CN
                                    180 	.globl _EIP2
                                    181 	.globl _EIP1
                                    182 	.globl _TH4
                                    183 	.globl _TL4
                                    184 	.globl _SADDR1
                                    185 	.globl _SBUF1
                                    186 	.globl _SCON1
                                    187 	.globl _B
                                    188 	.globl _RSTSRC
                                    189 	.globl _PCA0CPL4
                                    190 	.globl _PCA0CPL3
                                    191 	.globl _PCA0CPL2
                                    192 	.globl _PCA0CPL1
                                    193 	.globl _PCA0CPL0
                                    194 	.globl _PCA0L
                                    195 	.globl _ADC0CN
                                    196 	.globl _EIE2
                                    197 	.globl _EIE1
                                    198 	.globl _RCAP4H
                                    199 	.globl _RCAP4L
                                    200 	.globl _XBR2
                                    201 	.globl _XBR1
                                    202 	.globl _XBR0
                                    203 	.globl _ACC
                                    204 	.globl _PCA0CPM4
                                    205 	.globl _PCA0CPM3
                                    206 	.globl _PCA0CPM2
                                    207 	.globl _PCA0CPM1
                                    208 	.globl _PCA0CPM0
                                    209 	.globl _PCA0MD
                                    210 	.globl _PCA0CN
                                    211 	.globl _DAC1CN
                                    212 	.globl _DAC1H
                                    213 	.globl _DAC1L
                                    214 	.globl _DAC0CN
                                    215 	.globl _DAC0H
                                    216 	.globl _DAC0L
                                    217 	.globl _REF0CN
                                    218 	.globl _PSW
                                    219 	.globl _SMB0CR
                                    220 	.globl _TH2
                                    221 	.globl _TL2
                                    222 	.globl _RCAP2H
                                    223 	.globl _RCAP2L
                                    224 	.globl _T4CON
                                    225 	.globl _T2CON
                                    226 	.globl _ADC0LTH
                                    227 	.globl _ADC0LTL
                                    228 	.globl _ADC0GTH
                                    229 	.globl _ADC0GTL
                                    230 	.globl _SMB0ADR
                                    231 	.globl _SMB0DAT
                                    232 	.globl _SMB0STA
                                    233 	.globl _SMB0CN
                                    234 	.globl _ADC0H
                                    235 	.globl _ADC0L
                                    236 	.globl _P1MDIN
                                    237 	.globl _ADC0CF
                                    238 	.globl _AMX0SL
                                    239 	.globl _AMX0CF
                                    240 	.globl _SADEN0
                                    241 	.globl _IP
                                    242 	.globl _FLACL
                                    243 	.globl _FLSCL
                                    244 	.globl _P74OUT
                                    245 	.globl _OSCICN
                                    246 	.globl _OSCXCN
                                    247 	.globl _P3
                                    248 	.globl __XPAGE
                                    249 	.globl _EMI0CN
                                    250 	.globl _SADEN1
                                    251 	.globl _P3IF
                                    252 	.globl _AMX1SL
                                    253 	.globl _ADC1CF
                                    254 	.globl _ADC1CN
                                    255 	.globl _SADDR0
                                    256 	.globl _IE
                                    257 	.globl _P3MDOUT
                                    258 	.globl _PRT3CF
                                    259 	.globl _P2MDOUT
                                    260 	.globl _PRT2CF
                                    261 	.globl _P1MDOUT
                                    262 	.globl _PRT1CF
                                    263 	.globl _P0MDOUT
                                    264 	.globl _PRT0CF
                                    265 	.globl _EMI0CF
                                    266 	.globl _EMI0TC
                                    267 	.globl _P2
                                    268 	.globl _CPT1CN
                                    269 	.globl _CPT0CN
                                    270 	.globl _SPI0CKR
                                    271 	.globl _ADC1
                                    272 	.globl _SPI0DAT
                                    273 	.globl _SPI0CFG
                                    274 	.globl _SBUF0
                                    275 	.globl _SBUF
                                    276 	.globl _SCON0
                                    277 	.globl _SCON
                                    278 	.globl _P7
                                    279 	.globl _TMR3H
                                    280 	.globl _TMR3L
                                    281 	.globl _TMR3RLH
                                    282 	.globl _TMR3RLL
                                    283 	.globl _TMR3CN
                                    284 	.globl _P1
                                    285 	.globl _PSCTL
                                    286 	.globl _CKCON
                                    287 	.globl _TH1
                                    288 	.globl _TH0
                                    289 	.globl _TL1
                                    290 	.globl _TL0
                                    291 	.globl _TMOD
                                    292 	.globl _TCON
                                    293 	.globl _PCON
                                    294 	.globl _P6
                                    295 	.globl _P5
                                    296 	.globl _P4
                                    297 	.globl _DPH
                                    298 	.globl _DPL
                                    299 	.globl _SP
                                    300 	.globl _P0
                                    301 	.globl _Port_Init
                                    302 	.globl _Set_outputs
                                    303 	.globl _Debugging
                                    304 	.globl _Button1
                                    305 	.globl _Button2
                                    306 	.globl _Switch
                                    307 ;--------------------------------------------------------
                                    308 ; special function registers
                                    309 ;--------------------------------------------------------
                                    310 	.area RSEG    (ABS,DATA)
      000000                        311 	.org 0x0000
                           000080   312 G$P0$0$0 == 0x0080
                           000080   313 _P0	=	0x0080
                           000081   314 G$SP$0$0 == 0x0081
                           000081   315 _SP	=	0x0081
                           000082   316 G$DPL$0$0 == 0x0082
                           000082   317 _DPL	=	0x0082
                           000083   318 G$DPH$0$0 == 0x0083
                           000083   319 _DPH	=	0x0083
                           000084   320 G$P4$0$0 == 0x0084
                           000084   321 _P4	=	0x0084
                           000085   322 G$P5$0$0 == 0x0085
                           000085   323 _P5	=	0x0085
                           000086   324 G$P6$0$0 == 0x0086
                           000086   325 _P6	=	0x0086
                           000087   326 G$PCON$0$0 == 0x0087
                           000087   327 _PCON	=	0x0087
                           000088   328 G$TCON$0$0 == 0x0088
                           000088   329 _TCON	=	0x0088
                           000089   330 G$TMOD$0$0 == 0x0089
                           000089   331 _TMOD	=	0x0089
                           00008A   332 G$TL0$0$0 == 0x008a
                           00008A   333 _TL0	=	0x008a
                           00008B   334 G$TL1$0$0 == 0x008b
                           00008B   335 _TL1	=	0x008b
                           00008C   336 G$TH0$0$0 == 0x008c
                           00008C   337 _TH0	=	0x008c
                           00008D   338 G$TH1$0$0 == 0x008d
                           00008D   339 _TH1	=	0x008d
                           00008E   340 G$CKCON$0$0 == 0x008e
                           00008E   341 _CKCON	=	0x008e
                           00008F   342 G$PSCTL$0$0 == 0x008f
                           00008F   343 _PSCTL	=	0x008f
                           000090   344 G$P1$0$0 == 0x0090
                           000090   345 _P1	=	0x0090
                           000091   346 G$TMR3CN$0$0 == 0x0091
                           000091   347 _TMR3CN	=	0x0091
                           000092   348 G$TMR3RLL$0$0 == 0x0092
                           000092   349 _TMR3RLL	=	0x0092
                           000093   350 G$TMR3RLH$0$0 == 0x0093
                           000093   351 _TMR3RLH	=	0x0093
                           000094   352 G$TMR3L$0$0 == 0x0094
                           000094   353 _TMR3L	=	0x0094
                           000095   354 G$TMR3H$0$0 == 0x0095
                           000095   355 _TMR3H	=	0x0095
                           000096   356 G$P7$0$0 == 0x0096
                           000096   357 _P7	=	0x0096
                           000098   358 G$SCON$0$0 == 0x0098
                           000098   359 _SCON	=	0x0098
                           000098   360 G$SCON0$0$0 == 0x0098
                           000098   361 _SCON0	=	0x0098
                           000099   362 G$SBUF$0$0 == 0x0099
                           000099   363 _SBUF	=	0x0099
                           000099   364 G$SBUF0$0$0 == 0x0099
                           000099   365 _SBUF0	=	0x0099
                           00009A   366 G$SPI0CFG$0$0 == 0x009a
                           00009A   367 _SPI0CFG	=	0x009a
                           00009B   368 G$SPI0DAT$0$0 == 0x009b
                           00009B   369 _SPI0DAT	=	0x009b
                           00009C   370 G$ADC1$0$0 == 0x009c
                           00009C   371 _ADC1	=	0x009c
                           00009D   372 G$SPI0CKR$0$0 == 0x009d
                           00009D   373 _SPI0CKR	=	0x009d
                           00009E   374 G$CPT0CN$0$0 == 0x009e
                           00009E   375 _CPT0CN	=	0x009e
                           00009F   376 G$CPT1CN$0$0 == 0x009f
                           00009F   377 _CPT1CN	=	0x009f
                           0000A0   378 G$P2$0$0 == 0x00a0
                           0000A0   379 _P2	=	0x00a0
                           0000A1   380 G$EMI0TC$0$0 == 0x00a1
                           0000A1   381 _EMI0TC	=	0x00a1
                           0000A3   382 G$EMI0CF$0$0 == 0x00a3
                           0000A3   383 _EMI0CF	=	0x00a3
                           0000A4   384 G$PRT0CF$0$0 == 0x00a4
                           0000A4   385 _PRT0CF	=	0x00a4
                           0000A4   386 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   387 _P0MDOUT	=	0x00a4
                           0000A5   388 G$PRT1CF$0$0 == 0x00a5
                           0000A5   389 _PRT1CF	=	0x00a5
                           0000A5   390 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   391 _P1MDOUT	=	0x00a5
                           0000A6   392 G$PRT2CF$0$0 == 0x00a6
                           0000A6   393 _PRT2CF	=	0x00a6
                           0000A6   394 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   395 _P2MDOUT	=	0x00a6
                           0000A7   396 G$PRT3CF$0$0 == 0x00a7
                           0000A7   397 _PRT3CF	=	0x00a7
                           0000A7   398 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   399 _P3MDOUT	=	0x00a7
                           0000A8   400 G$IE$0$0 == 0x00a8
                           0000A8   401 _IE	=	0x00a8
                           0000A9   402 G$SADDR0$0$0 == 0x00a9
                           0000A9   403 _SADDR0	=	0x00a9
                           0000AA   404 G$ADC1CN$0$0 == 0x00aa
                           0000AA   405 _ADC1CN	=	0x00aa
                           0000AB   406 G$ADC1CF$0$0 == 0x00ab
                           0000AB   407 _ADC1CF	=	0x00ab
                           0000AC   408 G$AMX1SL$0$0 == 0x00ac
                           0000AC   409 _AMX1SL	=	0x00ac
                           0000AD   410 G$P3IF$0$0 == 0x00ad
                           0000AD   411 _P3IF	=	0x00ad
                           0000AE   412 G$SADEN1$0$0 == 0x00ae
                           0000AE   413 _SADEN1	=	0x00ae
                           0000AF   414 G$EMI0CN$0$0 == 0x00af
                           0000AF   415 _EMI0CN	=	0x00af
                           0000AF   416 G$_XPAGE$0$0 == 0x00af
                           0000AF   417 __XPAGE	=	0x00af
                           0000B0   418 G$P3$0$0 == 0x00b0
                           0000B0   419 _P3	=	0x00b0
                           0000B1   420 G$OSCXCN$0$0 == 0x00b1
                           0000B1   421 _OSCXCN	=	0x00b1
                           0000B2   422 G$OSCICN$0$0 == 0x00b2
                           0000B2   423 _OSCICN	=	0x00b2
                           0000B5   424 G$P74OUT$0$0 == 0x00b5
                           0000B5   425 _P74OUT	=	0x00b5
                           0000B6   426 G$FLSCL$0$0 == 0x00b6
                           0000B6   427 _FLSCL	=	0x00b6
                           0000B7   428 G$FLACL$0$0 == 0x00b7
                           0000B7   429 _FLACL	=	0x00b7
                           0000B8   430 G$IP$0$0 == 0x00b8
                           0000B8   431 _IP	=	0x00b8
                           0000B9   432 G$SADEN0$0$0 == 0x00b9
                           0000B9   433 _SADEN0	=	0x00b9
                           0000BA   434 G$AMX0CF$0$0 == 0x00ba
                           0000BA   435 _AMX0CF	=	0x00ba
                           0000BB   436 G$AMX0SL$0$0 == 0x00bb
                           0000BB   437 _AMX0SL	=	0x00bb
                           0000BC   438 G$ADC0CF$0$0 == 0x00bc
                           0000BC   439 _ADC0CF	=	0x00bc
                           0000BD   440 G$P1MDIN$0$0 == 0x00bd
                           0000BD   441 _P1MDIN	=	0x00bd
                           0000BE   442 G$ADC0L$0$0 == 0x00be
                           0000BE   443 _ADC0L	=	0x00be
                           0000BF   444 G$ADC0H$0$0 == 0x00bf
                           0000BF   445 _ADC0H	=	0x00bf
                           0000C0   446 G$SMB0CN$0$0 == 0x00c0
                           0000C0   447 _SMB0CN	=	0x00c0
                           0000C1   448 G$SMB0STA$0$0 == 0x00c1
                           0000C1   449 _SMB0STA	=	0x00c1
                           0000C2   450 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   451 _SMB0DAT	=	0x00c2
                           0000C3   452 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   453 _SMB0ADR	=	0x00c3
                           0000C4   454 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   455 _ADC0GTL	=	0x00c4
                           0000C5   456 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   457 _ADC0GTH	=	0x00c5
                           0000C6   458 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   459 _ADC0LTL	=	0x00c6
                           0000C7   460 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   461 _ADC0LTH	=	0x00c7
                           0000C8   462 G$T2CON$0$0 == 0x00c8
                           0000C8   463 _T2CON	=	0x00c8
                           0000C9   464 G$T4CON$0$0 == 0x00c9
                           0000C9   465 _T4CON	=	0x00c9
                           0000CA   466 G$RCAP2L$0$0 == 0x00ca
                           0000CA   467 _RCAP2L	=	0x00ca
                           0000CB   468 G$RCAP2H$0$0 == 0x00cb
                           0000CB   469 _RCAP2H	=	0x00cb
                           0000CC   470 G$TL2$0$0 == 0x00cc
                           0000CC   471 _TL2	=	0x00cc
                           0000CD   472 G$TH2$0$0 == 0x00cd
                           0000CD   473 _TH2	=	0x00cd
                           0000CF   474 G$SMB0CR$0$0 == 0x00cf
                           0000CF   475 _SMB0CR	=	0x00cf
                           0000D0   476 G$PSW$0$0 == 0x00d0
                           0000D0   477 _PSW	=	0x00d0
                           0000D1   478 G$REF0CN$0$0 == 0x00d1
                           0000D1   479 _REF0CN	=	0x00d1
                           0000D2   480 G$DAC0L$0$0 == 0x00d2
                           0000D2   481 _DAC0L	=	0x00d2
                           0000D3   482 G$DAC0H$0$0 == 0x00d3
                           0000D3   483 _DAC0H	=	0x00d3
                           0000D4   484 G$DAC0CN$0$0 == 0x00d4
                           0000D4   485 _DAC0CN	=	0x00d4
                           0000D5   486 G$DAC1L$0$0 == 0x00d5
                           0000D5   487 _DAC1L	=	0x00d5
                           0000D6   488 G$DAC1H$0$0 == 0x00d6
                           0000D6   489 _DAC1H	=	0x00d6
                           0000D7   490 G$DAC1CN$0$0 == 0x00d7
                           0000D7   491 _DAC1CN	=	0x00d7
                           0000D8   492 G$PCA0CN$0$0 == 0x00d8
                           0000D8   493 _PCA0CN	=	0x00d8
                           0000D9   494 G$PCA0MD$0$0 == 0x00d9
                           0000D9   495 _PCA0MD	=	0x00d9
                           0000DA   496 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   497 _PCA0CPM0	=	0x00da
                           0000DB   498 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   499 _PCA0CPM1	=	0x00db
                           0000DC   500 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   501 _PCA0CPM2	=	0x00dc
                           0000DD   502 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   503 _PCA0CPM3	=	0x00dd
                           0000DE   504 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   505 _PCA0CPM4	=	0x00de
                           0000E0   506 G$ACC$0$0 == 0x00e0
                           0000E0   507 _ACC	=	0x00e0
                           0000E1   508 G$XBR0$0$0 == 0x00e1
                           0000E1   509 _XBR0	=	0x00e1
                           0000E2   510 G$XBR1$0$0 == 0x00e2
                           0000E2   511 _XBR1	=	0x00e2
                           0000E3   512 G$XBR2$0$0 == 0x00e3
                           0000E3   513 _XBR2	=	0x00e3
                           0000E4   514 G$RCAP4L$0$0 == 0x00e4
                           0000E4   515 _RCAP4L	=	0x00e4
                           0000E5   516 G$RCAP4H$0$0 == 0x00e5
                           0000E5   517 _RCAP4H	=	0x00e5
                           0000E6   518 G$EIE1$0$0 == 0x00e6
                           0000E6   519 _EIE1	=	0x00e6
                           0000E7   520 G$EIE2$0$0 == 0x00e7
                           0000E7   521 _EIE2	=	0x00e7
                           0000E8   522 G$ADC0CN$0$0 == 0x00e8
                           0000E8   523 _ADC0CN	=	0x00e8
                           0000E9   524 G$PCA0L$0$0 == 0x00e9
                           0000E9   525 _PCA0L	=	0x00e9
                           0000EA   526 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   527 _PCA0CPL0	=	0x00ea
                           0000EB   528 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   529 _PCA0CPL1	=	0x00eb
                           0000EC   530 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   531 _PCA0CPL2	=	0x00ec
                           0000ED   532 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   533 _PCA0CPL3	=	0x00ed
                           0000EE   534 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   535 _PCA0CPL4	=	0x00ee
                           0000EF   536 G$RSTSRC$0$0 == 0x00ef
                           0000EF   537 _RSTSRC	=	0x00ef
                           0000F0   538 G$B$0$0 == 0x00f0
                           0000F0   539 _B	=	0x00f0
                           0000F1   540 G$SCON1$0$0 == 0x00f1
                           0000F1   541 _SCON1	=	0x00f1
                           0000F2   542 G$SBUF1$0$0 == 0x00f2
                           0000F2   543 _SBUF1	=	0x00f2
                           0000F3   544 G$SADDR1$0$0 == 0x00f3
                           0000F3   545 _SADDR1	=	0x00f3
                           0000F4   546 G$TL4$0$0 == 0x00f4
                           0000F4   547 _TL4	=	0x00f4
                           0000F5   548 G$TH4$0$0 == 0x00f5
                           0000F5   549 _TH4	=	0x00f5
                           0000F6   550 G$EIP1$0$0 == 0x00f6
                           0000F6   551 _EIP1	=	0x00f6
                           0000F7   552 G$EIP2$0$0 == 0x00f7
                           0000F7   553 _EIP2	=	0x00f7
                           0000F8   554 G$SPI0CN$0$0 == 0x00f8
                           0000F8   555 _SPI0CN	=	0x00f8
                           0000F9   556 G$PCA0H$0$0 == 0x00f9
                           0000F9   557 _PCA0H	=	0x00f9
                           0000FA   558 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   559 _PCA0CPH0	=	0x00fa
                           0000FB   560 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   561 _PCA0CPH1	=	0x00fb
                           0000FC   562 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   563 _PCA0CPH2	=	0x00fc
                           0000FD   564 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   565 _PCA0CPH3	=	0x00fd
                           0000FE   566 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   567 _PCA0CPH4	=	0x00fe
                           0000FF   568 G$WDTCN$0$0 == 0x00ff
                           0000FF   569 _WDTCN	=	0x00ff
                           008C8A   570 G$TMR0$0$0 == 0x8c8a
                           008C8A   571 _TMR0	=	0x8c8a
                           008D8B   572 G$TMR1$0$0 == 0x8d8b
                           008D8B   573 _TMR1	=	0x8d8b
                           00CDCC   574 G$TMR2$0$0 == 0xcdcc
                           00CDCC   575 _TMR2	=	0xcdcc
                           00CBCA   576 G$RCAP2$0$0 == 0xcbca
                           00CBCA   577 _RCAP2	=	0xcbca
                           009594   578 G$TMR3$0$0 == 0x9594
                           009594   579 _TMR3	=	0x9594
                           009392   580 G$TMR3RL$0$0 == 0x9392
                           009392   581 _TMR3RL	=	0x9392
                           00F5F4   582 G$TMR4$0$0 == 0xf5f4
                           00F5F4   583 _TMR4	=	0xf5f4
                           00E5E4   584 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   585 _RCAP4	=	0xe5e4
                           00BFBE   586 G$ADC0$0$0 == 0xbfbe
                           00BFBE   587 _ADC0	=	0xbfbe
                           00C5C4   588 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   589 _ADC0GT	=	0xc5c4
                           00C7C6   590 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   591 _ADC0LT	=	0xc7c6
                           00D3D2   592 G$DAC0$0$0 == 0xd3d2
                           00D3D2   593 _DAC0	=	0xd3d2
                           00D6D5   594 G$DAC1$0$0 == 0xd6d5
                           00D6D5   595 _DAC1	=	0xd6d5
                           00F9E9   596 G$PCA0$0$0 == 0xf9e9
                           00F9E9   597 _PCA0	=	0xf9e9
                           00FAEA   598 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   599 _PCA0CP0	=	0xfaea
                           00FBEB   600 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   601 _PCA0CP1	=	0xfbeb
                           00FCEC   602 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   603 _PCA0CP2	=	0xfcec
                           00FDED   604 G$PCA0CP3$0$0 == 0xfded
                           00FDED   605 _PCA0CP3	=	0xfded
                           00FEEE   606 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   607 _PCA0CP4	=	0xfeee
                                    608 ;--------------------------------------------------------
                                    609 ; special function bits
                                    610 ;--------------------------------------------------------
                                    611 	.area RSEG    (ABS,DATA)
      000000                        612 	.org 0x0000
                           000080   613 G$P0_0$0$0 == 0x0080
                           000080   614 _P0_0	=	0x0080
                           000081   615 G$P0_1$0$0 == 0x0081
                           000081   616 _P0_1	=	0x0081
                           000082   617 G$P0_2$0$0 == 0x0082
                           000082   618 _P0_2	=	0x0082
                           000083   619 G$P0_3$0$0 == 0x0083
                           000083   620 _P0_3	=	0x0083
                           000084   621 G$P0_4$0$0 == 0x0084
                           000084   622 _P0_4	=	0x0084
                           000085   623 G$P0_5$0$0 == 0x0085
                           000085   624 _P0_5	=	0x0085
                           000086   625 G$P0_6$0$0 == 0x0086
                           000086   626 _P0_6	=	0x0086
                           000087   627 G$P0_7$0$0 == 0x0087
                           000087   628 _P0_7	=	0x0087
                           000088   629 G$IT0$0$0 == 0x0088
                           000088   630 _IT0	=	0x0088
                           000089   631 G$IE0$0$0 == 0x0089
                           000089   632 _IE0	=	0x0089
                           00008A   633 G$IT1$0$0 == 0x008a
                           00008A   634 _IT1	=	0x008a
                           00008B   635 G$IE1$0$0 == 0x008b
                           00008B   636 _IE1	=	0x008b
                           00008C   637 G$TR0$0$0 == 0x008c
                           00008C   638 _TR0	=	0x008c
                           00008D   639 G$TF0$0$0 == 0x008d
                           00008D   640 _TF0	=	0x008d
                           00008E   641 G$TR1$0$0 == 0x008e
                           00008E   642 _TR1	=	0x008e
                           00008F   643 G$TF1$0$0 == 0x008f
                           00008F   644 _TF1	=	0x008f
                           000090   645 G$P1_0$0$0 == 0x0090
                           000090   646 _P1_0	=	0x0090
                           000091   647 G$P1_1$0$0 == 0x0091
                           000091   648 _P1_1	=	0x0091
                           000092   649 G$P1_2$0$0 == 0x0092
                           000092   650 _P1_2	=	0x0092
                           000093   651 G$P1_3$0$0 == 0x0093
                           000093   652 _P1_3	=	0x0093
                           000094   653 G$P1_4$0$0 == 0x0094
                           000094   654 _P1_4	=	0x0094
                           000095   655 G$P1_5$0$0 == 0x0095
                           000095   656 _P1_5	=	0x0095
                           000096   657 G$P1_6$0$0 == 0x0096
                           000096   658 _P1_6	=	0x0096
                           000097   659 G$P1_7$0$0 == 0x0097
                           000097   660 _P1_7	=	0x0097
                           000098   661 G$RI$0$0 == 0x0098
                           000098   662 _RI	=	0x0098
                           000098   663 G$RI0$0$0 == 0x0098
                           000098   664 _RI0	=	0x0098
                           000099   665 G$TI$0$0 == 0x0099
                           000099   666 _TI	=	0x0099
                           000099   667 G$TI0$0$0 == 0x0099
                           000099   668 _TI0	=	0x0099
                           00009A   669 G$RB8$0$0 == 0x009a
                           00009A   670 _RB8	=	0x009a
                           00009A   671 G$RB80$0$0 == 0x009a
                           00009A   672 _RB80	=	0x009a
                           00009B   673 G$TB8$0$0 == 0x009b
                           00009B   674 _TB8	=	0x009b
                           00009B   675 G$TB80$0$0 == 0x009b
                           00009B   676 _TB80	=	0x009b
                           00009C   677 G$REN$0$0 == 0x009c
                           00009C   678 _REN	=	0x009c
                           00009C   679 G$REN0$0$0 == 0x009c
                           00009C   680 _REN0	=	0x009c
                           00009D   681 G$SM2$0$0 == 0x009d
                           00009D   682 _SM2	=	0x009d
                           00009D   683 G$SM20$0$0 == 0x009d
                           00009D   684 _SM20	=	0x009d
                           00009D   685 G$MCE0$0$0 == 0x009d
                           00009D   686 _MCE0	=	0x009d
                           00009E   687 G$SM1$0$0 == 0x009e
                           00009E   688 _SM1	=	0x009e
                           00009E   689 G$SM10$0$0 == 0x009e
                           00009E   690 _SM10	=	0x009e
                           00009F   691 G$SM0$0$0 == 0x009f
                           00009F   692 _SM0	=	0x009f
                           00009F   693 G$SM00$0$0 == 0x009f
                           00009F   694 _SM00	=	0x009f
                           00009F   695 G$S0MODE$0$0 == 0x009f
                           00009F   696 _S0MODE	=	0x009f
                           0000A0   697 G$P2_0$0$0 == 0x00a0
                           0000A0   698 _P2_0	=	0x00a0
                           0000A1   699 G$P2_1$0$0 == 0x00a1
                           0000A1   700 _P2_1	=	0x00a1
                           0000A2   701 G$P2_2$0$0 == 0x00a2
                           0000A2   702 _P2_2	=	0x00a2
                           0000A3   703 G$P2_3$0$0 == 0x00a3
                           0000A3   704 _P2_3	=	0x00a3
                           0000A4   705 G$P2_4$0$0 == 0x00a4
                           0000A4   706 _P2_4	=	0x00a4
                           0000A5   707 G$P2_5$0$0 == 0x00a5
                           0000A5   708 _P2_5	=	0x00a5
                           0000A6   709 G$P2_6$0$0 == 0x00a6
                           0000A6   710 _P2_6	=	0x00a6
                           0000A7   711 G$P2_7$0$0 == 0x00a7
                           0000A7   712 _P2_7	=	0x00a7
                           0000A8   713 G$EX0$0$0 == 0x00a8
                           0000A8   714 _EX0	=	0x00a8
                           0000A9   715 G$ET0$0$0 == 0x00a9
                           0000A9   716 _ET0	=	0x00a9
                           0000AA   717 G$EX1$0$0 == 0x00aa
                           0000AA   718 _EX1	=	0x00aa
                           0000AB   719 G$ET1$0$0 == 0x00ab
                           0000AB   720 _ET1	=	0x00ab
                           0000AC   721 G$ES0$0$0 == 0x00ac
                           0000AC   722 _ES0	=	0x00ac
                           0000AC   723 G$ES$0$0 == 0x00ac
                           0000AC   724 _ES	=	0x00ac
                           0000AD   725 G$ET2$0$0 == 0x00ad
                           0000AD   726 _ET2	=	0x00ad
                           0000AF   727 G$EA$0$0 == 0x00af
                           0000AF   728 _EA	=	0x00af
                           0000B0   729 G$P3_0$0$0 == 0x00b0
                           0000B0   730 _P3_0	=	0x00b0
                           0000B1   731 G$P3_1$0$0 == 0x00b1
                           0000B1   732 _P3_1	=	0x00b1
                           0000B2   733 G$P3_2$0$0 == 0x00b2
                           0000B2   734 _P3_2	=	0x00b2
                           0000B3   735 G$P3_3$0$0 == 0x00b3
                           0000B3   736 _P3_3	=	0x00b3
                           0000B4   737 G$P3_4$0$0 == 0x00b4
                           0000B4   738 _P3_4	=	0x00b4
                           0000B5   739 G$P3_5$0$0 == 0x00b5
                           0000B5   740 _P3_5	=	0x00b5
                           0000B6   741 G$P3_6$0$0 == 0x00b6
                           0000B6   742 _P3_6	=	0x00b6
                           0000B7   743 G$P3_7$0$0 == 0x00b7
                           0000B7   744 _P3_7	=	0x00b7
                           0000B8   745 G$PX0$0$0 == 0x00b8
                           0000B8   746 _PX0	=	0x00b8
                           0000B9   747 G$PT0$0$0 == 0x00b9
                           0000B9   748 _PT0	=	0x00b9
                           0000BA   749 G$PX1$0$0 == 0x00ba
                           0000BA   750 _PX1	=	0x00ba
                           0000BB   751 G$PT1$0$0 == 0x00bb
                           0000BB   752 _PT1	=	0x00bb
                           0000BC   753 G$PS0$0$0 == 0x00bc
                           0000BC   754 _PS0	=	0x00bc
                           0000BC   755 G$PS$0$0 == 0x00bc
                           0000BC   756 _PS	=	0x00bc
                           0000BD   757 G$PT2$0$0 == 0x00bd
                           0000BD   758 _PT2	=	0x00bd
                           0000C0   759 G$SMBTOE$0$0 == 0x00c0
                           0000C0   760 _SMBTOE	=	0x00c0
                           0000C1   761 G$SMBFTE$0$0 == 0x00c1
                           0000C1   762 _SMBFTE	=	0x00c1
                           0000C2   763 G$AA$0$0 == 0x00c2
                           0000C2   764 _AA	=	0x00c2
                           0000C3   765 G$SI$0$0 == 0x00c3
                           0000C3   766 _SI	=	0x00c3
                           0000C4   767 G$STO$0$0 == 0x00c4
                           0000C4   768 _STO	=	0x00c4
                           0000C5   769 G$STA$0$0 == 0x00c5
                           0000C5   770 _STA	=	0x00c5
                           0000C6   771 G$ENSMB$0$0 == 0x00c6
                           0000C6   772 _ENSMB	=	0x00c6
                           0000C7   773 G$BUSY$0$0 == 0x00c7
                           0000C7   774 _BUSY	=	0x00c7
                           0000C8   775 G$CPRL2$0$0 == 0x00c8
                           0000C8   776 _CPRL2	=	0x00c8
                           0000C9   777 G$CT2$0$0 == 0x00c9
                           0000C9   778 _CT2	=	0x00c9
                           0000CA   779 G$TR2$0$0 == 0x00ca
                           0000CA   780 _TR2	=	0x00ca
                           0000CB   781 G$EXEN2$0$0 == 0x00cb
                           0000CB   782 _EXEN2	=	0x00cb
                           0000CC   783 G$TCLK$0$0 == 0x00cc
                           0000CC   784 _TCLK	=	0x00cc
                           0000CD   785 G$RCLK$0$0 == 0x00cd
                           0000CD   786 _RCLK	=	0x00cd
                           0000CE   787 G$EXF2$0$0 == 0x00ce
                           0000CE   788 _EXF2	=	0x00ce
                           0000CF   789 G$TF2$0$0 == 0x00cf
                           0000CF   790 _TF2	=	0x00cf
                           0000D0   791 G$P$0$0 == 0x00d0
                           0000D0   792 _P	=	0x00d0
                           0000D1   793 G$F1$0$0 == 0x00d1
                           0000D1   794 _F1	=	0x00d1
                           0000D2   795 G$OV$0$0 == 0x00d2
                           0000D2   796 _OV	=	0x00d2
                           0000D3   797 G$RS0$0$0 == 0x00d3
                           0000D3   798 _RS0	=	0x00d3
                           0000D4   799 G$RS1$0$0 == 0x00d4
                           0000D4   800 _RS1	=	0x00d4
                           0000D5   801 G$F0$0$0 == 0x00d5
                           0000D5   802 _F0	=	0x00d5
                           0000D6   803 G$AC$0$0 == 0x00d6
                           0000D6   804 _AC	=	0x00d6
                           0000D7   805 G$CY$0$0 == 0x00d7
                           0000D7   806 _CY	=	0x00d7
                           0000D8   807 G$CCF0$0$0 == 0x00d8
                           0000D8   808 _CCF0	=	0x00d8
                           0000D9   809 G$CCF1$0$0 == 0x00d9
                           0000D9   810 _CCF1	=	0x00d9
                           0000DA   811 G$CCF2$0$0 == 0x00da
                           0000DA   812 _CCF2	=	0x00da
                           0000DB   813 G$CCF3$0$0 == 0x00db
                           0000DB   814 _CCF3	=	0x00db
                           0000DC   815 G$CCF4$0$0 == 0x00dc
                           0000DC   816 _CCF4	=	0x00dc
                           0000DE   817 G$CR$0$0 == 0x00de
                           0000DE   818 _CR	=	0x00de
                           0000DF   819 G$CF$0$0 == 0x00df
                           0000DF   820 _CF	=	0x00df
                           0000E8   821 G$ADLJST$0$0 == 0x00e8
                           0000E8   822 _ADLJST	=	0x00e8
                           0000E8   823 G$AD0LJST$0$0 == 0x00e8
                           0000E8   824 _AD0LJST	=	0x00e8
                           0000E9   825 G$ADWINT$0$0 == 0x00e9
                           0000E9   826 _ADWINT	=	0x00e9
                           0000E9   827 G$AD0WINT$0$0 == 0x00e9
                           0000E9   828 _AD0WINT	=	0x00e9
                           0000EA   829 G$ADSTM0$0$0 == 0x00ea
                           0000EA   830 _ADSTM0	=	0x00ea
                           0000EA   831 G$AD0CM0$0$0 == 0x00ea
                           0000EA   832 _AD0CM0	=	0x00ea
                           0000EB   833 G$ADSTM1$0$0 == 0x00eb
                           0000EB   834 _ADSTM1	=	0x00eb
                           0000EB   835 G$AD0CM1$0$0 == 0x00eb
                           0000EB   836 _AD0CM1	=	0x00eb
                           0000EC   837 G$ADBUSY$0$0 == 0x00ec
                           0000EC   838 _ADBUSY	=	0x00ec
                           0000EC   839 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   840 _AD0BUSY	=	0x00ec
                           0000ED   841 G$ADCINT$0$0 == 0x00ed
                           0000ED   842 _ADCINT	=	0x00ed
                           0000ED   843 G$AD0INT$0$0 == 0x00ed
                           0000ED   844 _AD0INT	=	0x00ed
                           0000EE   845 G$ADCTM$0$0 == 0x00ee
                           0000EE   846 _ADCTM	=	0x00ee
                           0000EE   847 G$AD0TM$0$0 == 0x00ee
                           0000EE   848 _AD0TM	=	0x00ee
                           0000EF   849 G$ADCEN$0$0 == 0x00ef
                           0000EF   850 _ADCEN	=	0x00ef
                           0000EF   851 G$AD0EN$0$0 == 0x00ef
                           0000EF   852 _AD0EN	=	0x00ef
                           0000F8   853 G$SPIEN$0$0 == 0x00f8
                           0000F8   854 _SPIEN	=	0x00f8
                           0000F9   855 G$MSTEN$0$0 == 0x00f9
                           0000F9   856 _MSTEN	=	0x00f9
                           0000FA   857 G$SLVSEL$0$0 == 0x00fa
                           0000FA   858 _SLVSEL	=	0x00fa
                           0000FB   859 G$TXBSY$0$0 == 0x00fb
                           0000FB   860 _TXBSY	=	0x00fb
                           0000FC   861 G$RXOVRN$0$0 == 0x00fc
                           0000FC   862 _RXOVRN	=	0x00fc
                           0000FD   863 G$MODF$0$0 == 0x00fd
                           0000FD   864 _MODF	=	0x00fd
                           0000FE   865 G$WCOL$0$0 == 0x00fe
                           0000FE   866 _WCOL	=	0x00fe
                           0000FF   867 G$SPIF$0$0 == 0x00ff
                           0000FF   868 _SPIF	=	0x00ff
                           0000B6   869 G$LED0$0$0 == 0x00b6
                           0000B6   870 _LED0	=	0x00b6
                           0000B3   871 G$BILED0$0$0 == 0x00b3
                           0000B3   872 _BILED0	=	0x00b3
                           0000B4   873 G$BILED1$0$0 == 0x00b4
                           0000B4   874 _BILED1	=	0x00b4
                           0000B7   875 G$Buzzer$0$0 == 0x00b7
                           0000B7   876 _Buzzer	=	0x00b7
                           0000A0   877 G$SS$0$0 == 0x00a0
                           0000A0   878 _SS	=	0x00a0
                           0000B0   879 G$PB1$0$0 == 0x00b0
                           0000B0   880 _PB1	=	0x00b0
                           0000B1   881 G$PB2$0$0 == 0x00b1
                           0000B1   882 _PB2	=	0x00b1
                                    883 ;--------------------------------------------------------
                                    884 ; overlayable register banks
                                    885 ;--------------------------------------------------------
                                    886 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        887 	.ds 8
                                    888 ;--------------------------------------------------------
                                    889 ; internal ram data
                                    890 ;--------------------------------------------------------
                                    891 	.area DSEG    (DATA)
                                    892 ;--------------------------------------------------------
                                    893 ; overlayable items in internal ram 
                                    894 ;--------------------------------------------------------
                                    895 	.area	OSEG    (OVR,DATA)
                                    896 	.area	OSEG    (OVR,DATA)
                                    897 ;--------------------------------------------------------
                                    898 ; Stack segment in internal ram 
                                    899 ;--------------------------------------------------------
                                    900 	.area	SSEG
      00003C                        901 __start__stack:
      00003C                        902 	.ds	1
                                    903 
                                    904 ;--------------------------------------------------------
                                    905 ; indirectly addressable internal ram data
                                    906 ;--------------------------------------------------------
                                    907 	.area ISEG    (DATA)
                                    908 ;--------------------------------------------------------
                                    909 ; absolute internal ram data
                                    910 ;--------------------------------------------------------
                                    911 	.area IABS    (ABS,DATA)
                                    912 	.area IABS    (ABS,DATA)
                                    913 ;--------------------------------------------------------
                                    914 ; bit data
                                    915 ;--------------------------------------------------------
                                    916 	.area BSEG    (BIT)
                                    917 ;--------------------------------------------------------
                                    918 ; paged external ram data
                                    919 ;--------------------------------------------------------
                                    920 	.area PSEG    (PAG,XDATA)
                                    921 ;--------------------------------------------------------
                                    922 ; external ram data
                                    923 ;--------------------------------------------------------
                                    924 	.area XSEG    (XDATA)
                                    925 ;--------------------------------------------------------
                                    926 ; absolute external ram data
                                    927 ;--------------------------------------------------------
                                    928 	.area XABS    (ABS,XDATA)
                                    929 ;--------------------------------------------------------
                                    930 ; external initialized ram data
                                    931 ;--------------------------------------------------------
                                    932 	.area XISEG   (XDATA)
                                    933 	.area HOME    (CODE)
                                    934 	.area GSINIT0 (CODE)
                                    935 	.area GSINIT1 (CODE)
                                    936 	.area GSINIT2 (CODE)
                                    937 	.area GSINIT3 (CODE)
                                    938 	.area GSINIT4 (CODE)
                                    939 	.area GSINIT5 (CODE)
                                    940 	.area GSINIT  (CODE)
                                    941 	.area GSFINAL (CODE)
                                    942 	.area CSEG    (CODE)
                                    943 ;--------------------------------------------------------
                                    944 ; interrupt vector 
                                    945 ;--------------------------------------------------------
                                    946 	.area HOME    (CODE)
      000000                        947 __interrupt_vect:
      000000 02 00 06         [24]  948 	ljmp	__sdcc_gsinit_startup
                                    949 ;--------------------------------------------------------
                                    950 ; global & static initialisations
                                    951 ;--------------------------------------------------------
                                    952 	.area HOME    (CODE)
                                    953 	.area GSINIT  (CODE)
                                    954 	.area GSFINAL (CODE)
                                    955 	.area GSINIT  (CODE)
                                    956 	.globl __sdcc_gsinit_startup
                                    957 	.globl __sdcc_program_startup
                                    958 	.globl __start__stack
                                    959 	.globl __mcs51_genXINIT
                                    960 	.globl __mcs51_genXRAMCLEAR
                                    961 	.globl __mcs51_genRAMCLEAR
                                    962 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  963 	ljmp	__sdcc_program_startup
                                    964 ;--------------------------------------------------------
                                    965 ; Home
                                    966 ;--------------------------------------------------------
                                    967 	.area HOME    (CODE)
                                    968 	.area HOME    (CODE)
      000003                        969 __sdcc_program_startup:
      000003 02 00 BE         [24]  970 	ljmp	_main
                                    971 ;	return from main will return to caller
                                    972 ;--------------------------------------------------------
                                    973 ; code
                                    974 ;--------------------------------------------------------
                                    975 	.area CSEG    (CODE)
                                    976 ;------------------------------------------------------------
                                    977 ;Allocation info for local variables in function 'SYSCLK_Init'
                                    978 ;------------------------------------------------------------
                                    979 ;i                         Allocated to registers 
                                    980 ;------------------------------------------------------------
                           000000   981 	G$SYSCLK_Init$0$0 ==.
                           000000   982 	C$c8051_SDCC.h$42$0$0 ==.
                                    983 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                    984 ;	-----------------------------------------
                                    985 ;	 function SYSCLK_Init
                                    986 ;	-----------------------------------------
      000062                        987 _SYSCLK_Init:
                           000007   988 	ar7 = 0x07
                           000006   989 	ar6 = 0x06
                           000005   990 	ar5 = 0x05
                           000004   991 	ar4 = 0x04
                           000003   992 	ar3 = 0x03
                           000002   993 	ar2 = 0x02
                           000001   994 	ar1 = 0x01
                           000000   995 	ar0 = 0x00
                           000000   996 	C$c8051_SDCC.h$46$1$2 ==.
                                    997 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      000062 75 B1 67         [24]  998 	mov	_OSCXCN,#0x67
                           000003   999 	C$c8051_SDCC.h$49$1$2 ==.
                                   1000 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      000065 7E 00            [12] 1001 	mov	r6,#0x00
      000067 7F 01            [12] 1002 	mov	r7,#0x01
      000069                       1003 00107$:
      000069 1E               [12] 1004 	dec	r6
      00006A BE FF 01         [24] 1005 	cjne	r6,#0xFF,00121$
      00006D 1F               [12] 1006 	dec	r7
      00006E                       1007 00121$:
      00006E EE               [12] 1008 	mov	a,r6
      00006F 4F               [12] 1009 	orl	a,r7
      000070 70 F7            [24] 1010 	jnz	00107$
                           000010  1011 	C$c8051_SDCC.h$51$1$2 ==.
                                   1012 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      000072                       1013 00102$:
      000072 E5 B1            [12] 1014 	mov	a,_OSCXCN
      000074 30 E7 FB         [24] 1015 	jnb	acc.7,00102$
                           000015  1016 	C$c8051_SDCC.h$53$1$2 ==.
                                   1017 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      000077 75 B2 88         [24] 1018 	mov	_OSCICN,#0x88
                           000018  1019 	C$c8051_SDCC.h$56$1$2 ==.
                           000018  1020 	XG$SYSCLK_Init$0$0 ==.
      00007A 22               [24] 1021 	ret
                                   1022 ;------------------------------------------------------------
                                   1023 ;Allocation info for local variables in function 'UART0_Init'
                                   1024 ;------------------------------------------------------------
                           000019  1025 	G$UART0_Init$0$0 ==.
                           000019  1026 	C$c8051_SDCC.h$64$1$2 ==.
                                   1027 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1028 ;	-----------------------------------------
                                   1029 ;	 function UART0_Init
                                   1030 ;	-----------------------------------------
      00007B                       1031 _UART0_Init:
                           000019  1032 	C$c8051_SDCC.h$66$1$4 ==.
                                   1033 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      00007B 75 98 50         [24] 1034 	mov	_SCON0,#0x50
                           00001C  1035 	C$c8051_SDCC.h$67$1$4 ==.
                                   1036 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      00007E 75 89 20         [24] 1037 	mov	_TMOD,#0x20
                           00001F  1038 	C$c8051_SDCC.h$68$1$4 ==.
                                   1039 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      000081 75 8D DC         [24] 1040 	mov	_TH1,#0xDC
                           000022  1041 	C$c8051_SDCC.h$69$1$4 ==.
                                   1042 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      000084 D2 8E            [12] 1043 	setb	_TR1
                           000024  1044 	C$c8051_SDCC.h$70$1$4 ==.
                                   1045 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      000086 43 8E 10         [24] 1046 	orl	_CKCON,#0x10
                           000027  1047 	C$c8051_SDCC.h$71$1$4 ==.
                                   1048 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      000089 43 87 80         [24] 1049 	orl	_PCON,#0x80
                           00002A  1050 	C$c8051_SDCC.h$73$1$4 ==.
                                   1051 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      00008C D2 99            [12] 1052 	setb	_TI0
                           00002C  1053 	C$c8051_SDCC.h$74$1$4 ==.
                                   1054 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      00008E 43 A4 01         [24] 1055 	orl	_P0MDOUT,#0x01
                           00002F  1056 	C$c8051_SDCC.h$75$1$4 ==.
                           00002F  1057 	XG$UART0_Init$0$0 ==.
      000091 22               [24] 1058 	ret
                                   1059 ;------------------------------------------------------------
                                   1060 ;Allocation info for local variables in function 'Sys_Init'
                                   1061 ;------------------------------------------------------------
                           000030  1062 	G$Sys_Init$0$0 ==.
                           000030  1063 	C$c8051_SDCC.h$83$1$4 ==.
                                   1064 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1065 ;	-----------------------------------------
                                   1066 ;	 function Sys_Init
                                   1067 ;	-----------------------------------------
      000092                       1068 _Sys_Init:
                           000030  1069 	C$c8051_SDCC.h$85$1$6 ==.
                                   1070 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000092 75 FF DE         [24] 1071 	mov	_WDTCN,#0xDE
                           000033  1072 	C$c8051_SDCC.h$86$1$6 ==.
                                   1073 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      000095 75 FF AD         [24] 1074 	mov	_WDTCN,#0xAD
                           000036  1075 	C$c8051_SDCC.h$88$1$6 ==.
                                   1076 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      000098 12 00 62         [24] 1077 	lcall	_SYSCLK_Init
                           000039  1078 	C$c8051_SDCC.h$89$1$6 ==.
                                   1079 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      00009B 12 00 7B         [24] 1080 	lcall	_UART0_Init
                           00003C  1081 	C$c8051_SDCC.h$91$1$6 ==.
                                   1082 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      00009E 43 E1 04         [24] 1083 	orl	_XBR0,#0x04
                           00003F  1084 	C$c8051_SDCC.h$92$1$6 ==.
                                   1085 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      0000A1 43 E3 40         [24] 1086 	orl	_XBR2,#0x40
                           000042  1087 	C$c8051_SDCC.h$93$1$6 ==.
                           000042  1088 	XG$Sys_Init$0$0 ==.
      0000A4 22               [24] 1089 	ret
                                   1090 ;------------------------------------------------------------
                                   1091 ;Allocation info for local variables in function 'putchar'
                                   1092 ;------------------------------------------------------------
                                   1093 ;c                         Allocated to registers r7 
                                   1094 ;------------------------------------------------------------
                           000043  1095 	G$putchar$0$0 ==.
                           000043  1096 	C$c8051_SDCC.h$98$1$6 ==.
                                   1097 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1098 ;	-----------------------------------------
                                   1099 ;	 function putchar
                                   1100 ;	-----------------------------------------
      0000A5                       1101 _putchar:
      0000A5 AF 82            [24] 1102 	mov	r7,dpl
                           000045  1103 	C$c8051_SDCC.h$100$1$8 ==.
                                   1104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      0000A7                       1105 00101$:
                           000045  1106 	C$c8051_SDCC.h$101$1$8 ==.
                                   1107 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      0000A7 10 99 02         [24] 1108 	jbc	_TI0,00112$
      0000AA 80 FB            [24] 1109 	sjmp	00101$
      0000AC                       1110 00112$:
                           00004A  1111 	C$c8051_SDCC.h$102$1$8 ==.
                                   1112 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      0000AC 8F 99            [24] 1113 	mov	_SBUF0,r7
                           00004C  1114 	C$c8051_SDCC.h$103$1$8 ==.
                           00004C  1115 	XG$putchar$0$0 ==.
      0000AE 22               [24] 1116 	ret
                                   1117 ;------------------------------------------------------------
                                   1118 ;Allocation info for local variables in function 'getchar'
                                   1119 ;------------------------------------------------------------
                                   1120 ;c                         Allocated to registers 
                                   1121 ;------------------------------------------------------------
                           00004D  1122 	G$getchar$0$0 ==.
                           00004D  1123 	C$c8051_SDCC.h$108$1$8 ==.
                                   1124 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1125 ;	-----------------------------------------
                                   1126 ;	 function getchar
                                   1127 ;	-----------------------------------------
      0000AF                       1128 _getchar:
                           00004D  1129 	C$c8051_SDCC.h$111$1$10 ==.
                                   1130 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      0000AF                       1131 00101$:
                           00004D  1132 	C$c8051_SDCC.h$112$1$10 ==.
                                   1133 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      0000AF 10 98 02         [24] 1134 	jbc	_RI0,00112$
      0000B2 80 FB            [24] 1135 	sjmp	00101$
      0000B4                       1136 00112$:
                           000052  1137 	C$c8051_SDCC.h$113$1$10 ==.
                                   1138 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      0000B4 85 99 82         [24] 1139 	mov	dpl,_SBUF0
                           000055  1140 	C$c8051_SDCC.h$114$1$10 ==.
                                   1141 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      0000B7 12 00 A5         [24] 1142 	lcall	_putchar
                           000058  1143 	C$c8051_SDCC.h$115$1$10 ==.
                                   1144 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      0000BA 85 99 82         [24] 1145 	mov	dpl,_SBUF0
                           00005B  1146 	C$c8051_SDCC.h$116$1$10 ==.
                           00005B  1147 	XG$getchar$0$0 ==.
      0000BD 22               [24] 1148 	ret
                                   1149 ;------------------------------------------------------------
                                   1150 ;Allocation info for local variables in function 'main'
                                   1151 ;------------------------------------------------------------
                           00005C  1152 	G$main$0$0 ==.
                           00005C  1153 	C$Lab1_1.c$37$1$10 ==.
                                   1154 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:37: void main(void)
                                   1155 ;	-----------------------------------------
                                   1156 ;	 function main
                                   1157 ;	-----------------------------------------
      0000BE                       1158 _main:
                           00005C  1159 	C$Lab1_1.c$39$1$32 ==.
                                   1160 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:39: Sys_Init(); // System Initialization
      0000BE 12 00 92         [24] 1161 	lcall	_Sys_Init
                           00005F  1162 	C$Lab1_1.c$40$1$32 ==.
                                   1163 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:40: putchar(' '); // the quote fonts may not copy correctly into SiLabs IDE
      0000C1 75 82 20         [24] 1164 	mov	dpl,#0x20
      0000C4 12 00 A5         [24] 1165 	lcall	_putchar
                           000065  1166 	C$Lab1_1.c$41$1$32 ==.
                                   1167 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:41: Port_Init(); // Initialize ports 2 and 3
      0000C7 12 00 D3         [24] 1168 	lcall	_Port_Init
                           000068  1169 	C$Lab1_1.c$42$1$32 ==.
                                   1170 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:42: while (1) // infinite loop
      0000CA                       1171 00102$:
                           000068  1172 	C$Lab1_1.c$45$2$33 ==.
                                   1173 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:45: Set_outputs();
      0000CA 12 00 EB         [24] 1174 	lcall	_Set_outputs
                           00006B  1175 	C$Lab1_1.c$46$2$33 ==.
                                   1176 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:46: Debugging();
      0000CD 12 01 66         [24] 1177 	lcall	_Debugging
      0000D0 80 F8            [24] 1178 	sjmp	00102$
                           000070  1179 	C$Lab1_1.c$48$1$32 ==.
                           000070  1180 	XG$main$0$0 ==.
      0000D2 22               [24] 1181 	ret
                                   1182 ;------------------------------------------------------------
                                   1183 ;Allocation info for local variables in function 'Port_Init'
                                   1184 ;------------------------------------------------------------
                           000071  1185 	G$Port_Init$0$0 ==.
                           000071  1186 	C$Lab1_1.c$51$1$32 ==.
                                   1187 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:51: void Port_Init(void)
                                   1188 ;	-----------------------------------------
                                   1189 ;	 function Port_Init
                                   1190 ;	-----------------------------------------
      0000D3                       1191 _Port_Init:
                           000071  1192 	C$Lab1_1.c$54$1$35 ==.
                                   1193 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:54: P3MDOUT |= 0xD8;// set Port 3 output pins to push-pull mode 
      0000D3 43 A7 D8         [24] 1194 	orl	_P3MDOUT,#0xD8
                           000074  1195 	C$Lab1_1.c$55$1$35 ==.
                                   1196 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:55: P3MDOUT &= 0xFC; // set Port 3 input pins to open drain mode 
      0000D6 53 A7 FC         [24] 1197 	anl	_P3MDOUT,#0xFC
                           000077  1198 	C$Lab1_1.c$56$1$35 ==.
                                   1199 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:56: P3 |= ~0xFC; // set Port 3 input pins to high impedance state 
      0000D9 AF B0            [24] 1200 	mov	r7,_P3
      0000DB 74 03            [12] 1201 	mov	a,#0x03
      0000DD 4F               [12] 1202 	orl	a,r7
      0000DE F5 B0            [12] 1203 	mov	_P3,a
                           00007E  1204 	C$Lab1_1.c$58$1$35 ==.
                                   1205 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:58: P2MDOUT &= 0xFE; // set Port 2 input pins to push-pull mode
      0000E0 53 A6 FE         [24] 1206 	anl	_P2MDOUT,#0xFE
                           000081  1207 	C$Lab1_1.c$59$1$35 ==.
                                   1208 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:59: P2 |= ~0xFE; // set Port 2 input pins to high impedance state
      0000E3 AF A0            [24] 1209 	mov	r7,_P2
      0000E5 74 01            [12] 1210 	mov	a,#0x01
      0000E7 4F               [12] 1211 	orl	a,r7
      0000E8 F5 A0            [12] 1212 	mov	_P2,a
                           000088  1213 	C$Lab1_1.c$60$1$35 ==.
                           000088  1214 	XG$Port_Init$0$0 ==.
      0000EA 22               [24] 1215 	ret
                                   1216 ;------------------------------------------------------------
                                   1217 ;Allocation info for local variables in function 'Set_outputs'
                                   1218 ;------------------------------------------------------------
                           000089  1219 	G$Set_outputs$0$0 ==.
                           000089  1220 	C$Lab1_1.c$65$1$35 ==.
                                   1221 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:65: void Set_outputs(void)
                                   1222 ;	-----------------------------------------
                                   1223 ;	 function Set_outputs
                                   1224 ;	-----------------------------------------
      0000EB                       1225 _Set_outputs:
                           000089  1226 	C$Lab1_1.c$67$1$37 ==.
                                   1227 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:67: if (Switch()) // if Slide switch is not activated (off)
      0000EB 12 01 F9         [24] 1228 	lcall	_Switch
      0000EE E5 82            [12] 1229 	mov	a,dpl
      0000F0 85 83 F0         [24] 1230 	mov	b,dph
      0000F3 45 F0            [12] 1231 	orl	a,b
      0000F5 60 04            [24] 1232 	jz	00114$
                           000095  1233 	C$Lab1_1.c$69$2$38 ==.
                                   1234 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:69: LED0 = 0; // Light LED
      0000F7 C2 B6            [12] 1235 	clr	_LED0
      0000F9 80 6A            [24] 1236 	sjmp	00116$
      0000FB                       1237 00114$:
                           000099  1238 	C$Lab1_1.c$74$2$39 ==.
                                   1239 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:74: LED0 = 1; // turn off LED
      0000FB D2 B6            [12] 1240 	setb	_LED0
                           00009B  1241 	C$Lab1_1.c$91$2$39 ==.
                                   1242 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:91: if (Button1() && Button2()) // if both buttons are pushed
      0000FD 12 01 E1         [24] 1243 	lcall	_Button1
      000100 E5 82            [12] 1244 	mov	a,dpl
      000102 85 83 F0         [24] 1245 	mov	b,dph
      000105 45 F0            [12] 1246 	orl	a,b
      000107 60 14            [24] 1247 	jz	00110$
      000109 12 01 ED         [24] 1248 	lcall	_Button2
      00010C E5 82            [12] 1249 	mov	a,dpl
      00010E 85 83 F0         [24] 1250 	mov	b,dph
      000111 45 F0            [12] 1251 	orl	a,b
      000113 60 08            [24] 1252 	jz	00110$
                           0000B3  1253 	C$Lab1_1.c$93$3$40 ==.
                                   1254 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:93: Buzzer = 0; //make buzzer noise
      000115 C2 B7            [12] 1255 	clr	_Buzzer
                           0000B5  1256 	C$Lab1_1.c$94$3$40 ==.
                                   1257 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:94: BILED0 = 1; //shut BILED off altogether
      000117 D2 B3            [12] 1258 	setb	_BILED0
                           0000B7  1259 	C$Lab1_1.c$95$3$40 ==.
                                   1260 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:95: BILED1 = 1;
      000119 D2 B4            [12] 1261 	setb	_BILED1
      00011B 80 48            [24] 1262 	sjmp	00116$
      00011D                       1263 00110$:
                           0000BB  1264 	C$Lab1_1.c$99$3$41 ==.
                                   1265 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:99: Buzzer = 1; //SHUT UP BUZZER
      00011D D2 B7            [12] 1266 	setb	_Buzzer
                           0000BD  1267 	C$Lab1_1.c$100$3$41 ==.
                                   1268 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:100: if (Button1()&&!Button2()) //shut off buzzer and make led green
      00011F 12 01 E1         [24] 1269 	lcall	_Button1
      000122 E5 82            [12] 1270 	mov	a,dpl
      000124 85 83 F0         [24] 1271 	mov	b,dph
      000127 45 F0            [12] 1272 	orl	a,b
      000129 60 14            [24] 1273 	jz	00106$
      00012B 12 01 ED         [24] 1274 	lcall	_Button2
      00012E E5 82            [12] 1275 	mov	a,dpl
      000130 85 83 F0         [24] 1276 	mov	b,dph
      000133 45 F0            [12] 1277 	orl	a,b
      000135 70 08            [24] 1278 	jnz	00106$
                           0000D5  1279 	C$Lab1_1.c$102$4$42 ==.
                                   1280 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:102: Buzzer = 1; 
      000137 D2 B7            [12] 1281 	setb	_Buzzer
                           0000D7  1282 	C$Lab1_1.c$103$4$42 ==.
                                   1283 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:103: BILED0 = 1; 
      000139 D2 B3            [12] 1284 	setb	_BILED0
                           0000D9  1285 	C$Lab1_1.c$104$4$42 ==.
                                   1286 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:104: BILED1 = 0; 
      00013B C2 B4            [12] 1287 	clr	_BILED1
      00013D 80 26            [24] 1288 	sjmp	00116$
      00013F                       1289 00106$:
                           0000DD  1290 	C$Lab1_1.c$112$3$41 ==.
                                   1291 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:112: else if (Button2()&&!Button1()) //shut off buzzer and make led red
      00013F 12 01 ED         [24] 1292 	lcall	_Button2
      000142 E5 82            [12] 1293 	mov	a,dpl
      000144 85 83 F0         [24] 1294 	mov	b,dph
      000147 45 F0            [12] 1295 	orl	a,b
      000149 60 14            [24] 1296 	jz	00102$
      00014B 12 01 E1         [24] 1297 	lcall	_Button1
      00014E E5 82            [12] 1298 	mov	a,dpl
      000150 85 83 F0         [24] 1299 	mov	b,dph
      000153 45 F0            [12] 1300 	orl	a,b
      000155 70 08            [24] 1301 	jnz	00102$
                           0000F5  1302 	C$Lab1_1.c$114$4$43 ==.
                                   1303 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:114: Buzzer = 1;
      000157 D2 B7            [12] 1304 	setb	_Buzzer
                           0000F7  1305 	C$Lab1_1.c$115$4$43 ==.
                                   1306 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:115: BILED0 = 0;
      000159 C2 B3            [12] 1307 	clr	_BILED0
                           0000F9  1308 	C$Lab1_1.c$116$4$43 ==.
                                   1309 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:116: BILED1 = 1;
      00015B D2 B4            [12] 1310 	setb	_BILED1
      00015D 80 06            [24] 1311 	sjmp	00116$
      00015F                       1312 00102$:
                           0000FD  1313 	C$Lab1_1.c$120$4$44 ==.
                                   1314 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:120: Buzzer = 1;
      00015F D2 B7            [12] 1315 	setb	_Buzzer
                           0000FF  1316 	C$Lab1_1.c$121$4$44 ==.
                                   1317 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:121: BILED0 = 1;
      000161 D2 B3            [12] 1318 	setb	_BILED0
                           000101  1319 	C$Lab1_1.c$122$4$44 ==.
                                   1320 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:122: BILED1 = 1;
      000163 D2 B4            [12] 1321 	setb	_BILED1
      000165                       1322 00116$:
                           000103  1323 	C$Lab1_1.c$129$1$37 ==.
                           000103  1324 	XG$Set_outputs$0$0 ==.
      000165 22               [24] 1325 	ret
                                   1326 ;------------------------------------------------------------
                                   1327 ;Allocation info for local variables in function 'Debugging'
                                   1328 ;------------------------------------------------------------
                           000104  1329 	G$Debugging$0$0 ==.
                           000104  1330 	C$Lab1_1.c$135$1$37 ==.
                                   1331 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:135: void Debugging(void)
                                   1332 ;	-----------------------------------------
                                   1333 ;	 function Debugging
                                   1334 ;	-----------------------------------------
      000166                       1335 _Debugging:
                           000104  1336 	C$Lab1_1.c$137$1$46 ==.
                                   1337 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:137: if (Button1()) //if PB1 is pushed (on)
      000166 12 01 E1         [24] 1338 	lcall	_Button1
      000169 E5 82            [12] 1339 	mov	a,dpl
      00016B 85 83 F0         [24] 1340 	mov	b,dph
      00016E 45 F0            [12] 1341 	orl	a,b
      000170 60 15            [24] 1342 	jz	00102$
                           000110  1343 	C$Lab1_1.c$139$2$47 ==.
                                   1344 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:139: printf("\rPB1 is pushed \n");
      000172 74 3D            [12] 1345 	mov	a,#___str_0
      000174 C0 E0            [24] 1346 	push	acc
      000176 74 08            [12] 1347 	mov	a,#(___str_0 >> 8)
      000178 C0 E0            [24] 1348 	push	acc
      00017A 74 80            [12] 1349 	mov	a,#0x80
      00017C C0 E0            [24] 1350 	push	acc
      00017E 12 02 29         [24] 1351 	lcall	_printf
      000181 15 81            [12] 1352 	dec	sp
      000183 15 81            [12] 1353 	dec	sp
      000185 15 81            [12] 1354 	dec	sp
      000187                       1355 00102$:
                           000125  1356 	C$Lab1_1.c$141$1$46 ==.
                                   1357 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:141: if (Button2()) //if PB2 is pushed (on)
      000187 12 01 ED         [24] 1358 	lcall	_Button2
      00018A E5 82            [12] 1359 	mov	a,dpl
      00018C 85 83 F0         [24] 1360 	mov	b,dph
      00018F 45 F0            [12] 1361 	orl	a,b
      000191 60 15            [24] 1362 	jz	00104$
                           000131  1363 	C$Lab1_1.c$143$2$48 ==.
                                   1364 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:143: printf("\rPB2 is pushed \n");
      000193 74 4E            [12] 1365 	mov	a,#___str_1
      000195 C0 E0            [24] 1366 	push	acc
      000197 74 08            [12] 1367 	mov	a,#(___str_1 >> 8)
      000199 C0 E0            [24] 1368 	push	acc
      00019B 74 80            [12] 1369 	mov	a,#0x80
      00019D C0 E0            [24] 1370 	push	acc
      00019F 12 02 29         [24] 1371 	lcall	_printf
      0001A2 15 81            [12] 1372 	dec	sp
      0001A4 15 81            [12] 1373 	dec	sp
      0001A6 15 81            [12] 1374 	dec	sp
      0001A8                       1375 00104$:
                           000146  1376 	C$Lab1_1.c$145$1$46 ==.
                                   1377 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:145: if (Switch()) // if Slide switch is not activated (off)
      0001A8 12 01 F9         [24] 1378 	lcall	_Switch
      0001AB E5 82            [12] 1379 	mov	a,dpl
      0001AD 85 83 F0         [24] 1380 	mov	b,dph
      0001B0 45 F0            [12] 1381 	orl	a,b
      0001B2 60 17            [24] 1382 	jz	00106$
                           000152  1383 	C$Lab1_1.c$147$2$49 ==.
                                   1384 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:147: printf("\rSlide switch is off \n");
      0001B4 74 5F            [12] 1385 	mov	a,#___str_2
      0001B6 C0 E0            [24] 1386 	push	acc
      0001B8 74 08            [12] 1387 	mov	a,#(___str_2 >> 8)
      0001BA C0 E0            [24] 1388 	push	acc
      0001BC 74 80            [12] 1389 	mov	a,#0x80
      0001BE C0 E0            [24] 1390 	push	acc
      0001C0 12 02 29         [24] 1391 	lcall	_printf
      0001C3 15 81            [12] 1392 	dec	sp
      0001C5 15 81            [12] 1393 	dec	sp
      0001C7 15 81            [12] 1394 	dec	sp
      0001C9 80 15            [24] 1395 	sjmp	00108$
      0001CB                       1396 00106$:
                           000169  1397 	C$Lab1_1.c$151$2$50 ==.
                                   1398 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:151: printf("\rSlide switch is on \n");
      0001CB 74 76            [12] 1399 	mov	a,#___str_3
      0001CD C0 E0            [24] 1400 	push	acc
      0001CF 74 08            [12] 1401 	mov	a,#(___str_3 >> 8)
      0001D1 C0 E0            [24] 1402 	push	acc
      0001D3 74 80            [12] 1403 	mov	a,#0x80
      0001D5 C0 E0            [24] 1404 	push	acc
      0001D7 12 02 29         [24] 1405 	lcall	_printf
      0001DA 15 81            [12] 1406 	dec	sp
      0001DC 15 81            [12] 1407 	dec	sp
      0001DE 15 81            [12] 1408 	dec	sp
      0001E0                       1409 00108$:
                           00017E  1410 	C$Lab1_1.c$153$1$46 ==.
                           00017E  1411 	XG$Debugging$0$0 ==.
      0001E0 22               [24] 1412 	ret
                                   1413 ;------------------------------------------------------------
                                   1414 ;Allocation info for local variables in function 'Button1'
                                   1415 ;------------------------------------------------------------
                           00017F  1416 	G$Button1$0$0 ==.
                           00017F  1417 	C$Lab1_1.c$159$1$46 ==.
                                   1418 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:159: int Button1(void)
                                   1419 ;	-----------------------------------------
                                   1420 ;	 function Button1
                                   1421 ;	-----------------------------------------
      0001E1                       1422 _Button1:
                           00017F  1423 	C$Lab1_1.c$161$1$52 ==.
                                   1424 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:161: if (!PB1)
      0001E1 20 B0 05         [24] 1425 	jb	_PB1,00102$
                           000182  1426 	C$Lab1_1.c$163$2$53 ==.
                                   1427 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:163: return 1;
      0001E4 90 00 01         [24] 1428 	mov	dptr,#0x0001
      0001E7 80 03            [24] 1429 	sjmp	00104$
      0001E9                       1430 00102$:
                           000187  1431 	C$Lab1_1.c$165$1$52 ==.
                                   1432 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:165: else return 0;
      0001E9 90 00 00         [24] 1433 	mov	dptr,#0x0000
      0001EC                       1434 00104$:
                           00018A  1435 	C$Lab1_1.c$166$1$52 ==.
                           00018A  1436 	XG$Button1$0$0 ==.
      0001EC 22               [24] 1437 	ret
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'Button2'
                                   1440 ;------------------------------------------------------------
                           00018B  1441 	G$Button2$0$0 ==.
                           00018B  1442 	C$Lab1_1.c$168$1$52 ==.
                                   1443 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:168: int Button2(void)
                                   1444 ;	-----------------------------------------
                                   1445 ;	 function Button2
                                   1446 ;	-----------------------------------------
      0001ED                       1447 _Button2:
                           00018B  1448 	C$Lab1_1.c$170$1$55 ==.
                                   1449 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:170: if (!PB2)
      0001ED 20 B1 05         [24] 1450 	jb	_PB2,00102$
                           00018E  1451 	C$Lab1_1.c$172$2$56 ==.
                                   1452 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:172: return 1;
      0001F0 90 00 01         [24] 1453 	mov	dptr,#0x0001
      0001F3 80 03            [24] 1454 	sjmp	00104$
      0001F5                       1455 00102$:
                           000193  1456 	C$Lab1_1.c$174$1$55 ==.
                                   1457 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:174: else return 0;
      0001F5 90 00 00         [24] 1458 	mov	dptr,#0x0000
      0001F8                       1459 00104$:
                           000196  1460 	C$Lab1_1.c$175$1$55 ==.
                           000196  1461 	XG$Button2$0$0 ==.
      0001F8 22               [24] 1462 	ret
                                   1463 ;------------------------------------------------------------
                                   1464 ;Allocation info for local variables in function 'Switch'
                                   1465 ;------------------------------------------------------------
                           000197  1466 	G$Switch$0$0 ==.
                           000197  1467 	C$Lab1_1.c$180$1$55 ==.
                                   1468 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:180: int Switch(void)
                                   1469 ;	-----------------------------------------
                                   1470 ;	 function Switch
                                   1471 ;	-----------------------------------------
      0001F9                       1472 _Switch:
                           000197  1473 	C$Lab1_1.c$182$1$58 ==.
                                   1474 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:182: if (!SS) return 1;
      0001F9 20 A0 05         [24] 1475 	jb	_SS,00102$
      0001FC 90 00 01         [24] 1476 	mov	dptr,#0x0001
      0001FF 80 03            [24] 1477 	sjmp	00104$
      000201                       1478 00102$:
                           00019F  1479 	C$Lab1_1.c$183$1$58 ==.
                                   1480 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 1\Lab 1_1\Lab1_1.c:183: else return 0;
      000201 90 00 00         [24] 1481 	mov	dptr,#0x0000
      000204                       1482 00104$:
                           0001A2  1483 	C$Lab1_1.c$184$1$58 ==.
                           0001A2  1484 	XG$Switch$0$0 ==.
      000204 22               [24] 1485 	ret
                                   1486 	.area CSEG    (CODE)
                                   1487 	.area CONST   (CODE)
                           000000  1488 FLab1_1$__str_0$0$0 == .
      00083D                       1489 ___str_0:
      00083D 0D                    1490 	.db 0x0D
      00083E 50 42 31 20 69 73 20  1491 	.ascii "PB1 is pushed "
             70 75 73 68 65 64 20
      00084C 0A                    1492 	.db 0x0A
      00084D 00                    1493 	.db 0x00
                           000011  1494 FLab1_1$__str_1$0$0 == .
      00084E                       1495 ___str_1:
      00084E 0D                    1496 	.db 0x0D
      00084F 50 42 32 20 69 73 20  1497 	.ascii "PB2 is pushed "
             70 75 73 68 65 64 20
      00085D 0A                    1498 	.db 0x0A
      00085E 00                    1499 	.db 0x00
                           000022  1500 FLab1_1$__str_2$0$0 == .
      00085F                       1501 ___str_2:
      00085F 0D                    1502 	.db 0x0D
      000860 53 6C 69 64 65 20 73  1503 	.ascii "Slide switch is off "
             77 69 74 63 68 20 69
             73 20 6F 66 66 20
      000874 0A                    1504 	.db 0x0A
      000875 00                    1505 	.db 0x00
                           000039  1506 FLab1_1$__str_3$0$0 == .
      000876                       1507 ___str_3:
      000876 0D                    1508 	.db 0x0D
      000877 53 6C 69 64 65 20 73  1509 	.ascii "Slide switch is on "
             77 69 74 63 68 20 69
             73 20 6F 6E 20
      00088A 0A                    1510 	.db 0x0A
      00088B 00                    1511 	.db 0x00
                                   1512 	.area XINIT   (CODE)
                                   1513 	.area CABS    (ABS,CODE)
