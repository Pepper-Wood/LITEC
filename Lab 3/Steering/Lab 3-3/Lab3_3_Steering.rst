                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Tue Apr 21 18:09:33 2015
                                      5 ;--------------------------------------------------------
                                      6 	.module Lab3_3_Steering
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _read_keypad
                                     14 	.globl _strlen
                                     15 	.globl _putchar
                                     16 	.globl _vsprintf
                                     17 	.globl _printf
                                     18 	.globl _Sys_Init
                                     19 	.globl _UART0_Init
                                     20 	.globl _SYSCLK_Init
                                     21 	.globl _SWITCH
                                     22 	.globl _BUS_SCL
                                     23 	.globl _BUS_TOE
                                     24 	.globl _BUS_FTE
                                     25 	.globl _BUS_AA
                                     26 	.globl _BUS_INT
                                     27 	.globl _BUS_STOP
                                     28 	.globl _BUS_START
                                     29 	.globl _BUS_EN
                                     30 	.globl _BUS_BUSY
                                     31 	.globl _SPIF
                                     32 	.globl _WCOL
                                     33 	.globl _MODF
                                     34 	.globl _RXOVRN
                                     35 	.globl _TXBSY
                                     36 	.globl _SLVSEL
                                     37 	.globl _MSTEN
                                     38 	.globl _SPIEN
                                     39 	.globl _AD0EN
                                     40 	.globl _ADCEN
                                     41 	.globl _AD0TM
                                     42 	.globl _ADCTM
                                     43 	.globl _AD0INT
                                     44 	.globl _ADCINT
                                     45 	.globl _AD0BUSY
                                     46 	.globl _ADBUSY
                                     47 	.globl _AD0CM1
                                     48 	.globl _ADSTM1
                                     49 	.globl _AD0CM0
                                     50 	.globl _ADSTM0
                                     51 	.globl _AD0WINT
                                     52 	.globl _ADWINT
                                     53 	.globl _AD0LJST
                                     54 	.globl _ADLJST
                                     55 	.globl _CF
                                     56 	.globl _CR
                                     57 	.globl _CCF4
                                     58 	.globl _CCF3
                                     59 	.globl _CCF2
                                     60 	.globl _CCF1
                                     61 	.globl _CCF0
                                     62 	.globl _CY
                                     63 	.globl _AC
                                     64 	.globl _F0
                                     65 	.globl _RS1
                                     66 	.globl _RS0
                                     67 	.globl _OV
                                     68 	.globl _F1
                                     69 	.globl _P
                                     70 	.globl _TF2
                                     71 	.globl _EXF2
                                     72 	.globl _RCLK
                                     73 	.globl _TCLK
                                     74 	.globl _EXEN2
                                     75 	.globl _TR2
                                     76 	.globl _CT2
                                     77 	.globl _CPRL2
                                     78 	.globl _BUSY
                                     79 	.globl _ENSMB
                                     80 	.globl _STA
                                     81 	.globl _STO
                                     82 	.globl _SI
                                     83 	.globl _AA
                                     84 	.globl _SMBFTE
                                     85 	.globl _SMBTOE
                                     86 	.globl _PT2
                                     87 	.globl _PS
                                     88 	.globl _PS0
                                     89 	.globl _PT1
                                     90 	.globl _PX1
                                     91 	.globl _PT0
                                     92 	.globl _PX0
                                     93 	.globl _P3_7
                                     94 	.globl _P3_6
                                     95 	.globl _P3_5
                                     96 	.globl _P3_4
                                     97 	.globl _P3_3
                                     98 	.globl _P3_2
                                     99 	.globl _P3_1
                                    100 	.globl _P3_0
                                    101 	.globl _EA
                                    102 	.globl _ET2
                                    103 	.globl _ES
                                    104 	.globl _ES0
                                    105 	.globl _ET1
                                    106 	.globl _EX1
                                    107 	.globl _ET0
                                    108 	.globl _EX0
                                    109 	.globl _P2_7
                                    110 	.globl _P2_6
                                    111 	.globl _P2_5
                                    112 	.globl _P2_4
                                    113 	.globl _P2_3
                                    114 	.globl _P2_2
                                    115 	.globl _P2_1
                                    116 	.globl _P2_0
                                    117 	.globl _S0MODE
                                    118 	.globl _SM00
                                    119 	.globl _SM0
                                    120 	.globl _SM10
                                    121 	.globl _SM1
                                    122 	.globl _MCE0
                                    123 	.globl _SM20
                                    124 	.globl _SM2
                                    125 	.globl _REN0
                                    126 	.globl _REN
                                    127 	.globl _TB80
                                    128 	.globl _TB8
                                    129 	.globl _RB80
                                    130 	.globl _RB8
                                    131 	.globl _TI0
                                    132 	.globl _TI
                                    133 	.globl _RI0
                                    134 	.globl _RI
                                    135 	.globl _P1_7
                                    136 	.globl _P1_6
                                    137 	.globl _P1_5
                                    138 	.globl _P1_4
                                    139 	.globl _P1_3
                                    140 	.globl _P1_2
                                    141 	.globl _P1_1
                                    142 	.globl _P1_0
                                    143 	.globl _TF1
                                    144 	.globl _TR1
                                    145 	.globl _TF0
                                    146 	.globl _TR0
                                    147 	.globl _IE1
                                    148 	.globl _IT1
                                    149 	.globl _IE0
                                    150 	.globl _IT0
                                    151 	.globl _P0_7
                                    152 	.globl _P0_6
                                    153 	.globl _P0_5
                                    154 	.globl _P0_4
                                    155 	.globl _P0_3
                                    156 	.globl _P0_2
                                    157 	.globl _P0_1
                                    158 	.globl _P0_0
                                    159 	.globl _PCA0CP4
                                    160 	.globl _PCA0CP3
                                    161 	.globl _PCA0CP2
                                    162 	.globl _PCA0CP1
                                    163 	.globl _PCA0CP0
                                    164 	.globl _PCA0
                                    165 	.globl _DAC1
                                    166 	.globl _DAC0
                                    167 	.globl _ADC0LT
                                    168 	.globl _ADC0GT
                                    169 	.globl _ADC0
                                    170 	.globl _RCAP4
                                    171 	.globl _TMR4
                                    172 	.globl _TMR3RL
                                    173 	.globl _TMR3
                                    174 	.globl _RCAP2
                                    175 	.globl _TMR2
                                    176 	.globl _TMR1
                                    177 	.globl _TMR0
                                    178 	.globl _WDTCN
                                    179 	.globl _PCA0CPH4
                                    180 	.globl _PCA0CPH3
                                    181 	.globl _PCA0CPH2
                                    182 	.globl _PCA0CPH1
                                    183 	.globl _PCA0CPH0
                                    184 	.globl _PCA0H
                                    185 	.globl _SPI0CN
                                    186 	.globl _EIP2
                                    187 	.globl _EIP1
                                    188 	.globl _TH4
                                    189 	.globl _TL4
                                    190 	.globl _SADDR1
                                    191 	.globl _SBUF1
                                    192 	.globl _SCON1
                                    193 	.globl _B
                                    194 	.globl _RSTSRC
                                    195 	.globl _PCA0CPL4
                                    196 	.globl _PCA0CPL3
                                    197 	.globl _PCA0CPL2
                                    198 	.globl _PCA0CPL1
                                    199 	.globl _PCA0CPL0
                                    200 	.globl _PCA0L
                                    201 	.globl _ADC0CN
                                    202 	.globl _EIE2
                                    203 	.globl _EIE1
                                    204 	.globl _RCAP4H
                                    205 	.globl _RCAP4L
                                    206 	.globl _XBR2
                                    207 	.globl _XBR1
                                    208 	.globl _XBR0
                                    209 	.globl _ACC
                                    210 	.globl _PCA0CPM4
                                    211 	.globl _PCA0CPM3
                                    212 	.globl _PCA0CPM2
                                    213 	.globl _PCA0CPM1
                                    214 	.globl _PCA0CPM0
                                    215 	.globl _PCA0MD
                                    216 	.globl _PCA0CN
                                    217 	.globl _DAC1CN
                                    218 	.globl _DAC1H
                                    219 	.globl _DAC1L
                                    220 	.globl _DAC0CN
                                    221 	.globl _DAC0H
                                    222 	.globl _DAC0L
                                    223 	.globl _REF0CN
                                    224 	.globl _PSW
                                    225 	.globl _SMB0CR
                                    226 	.globl _TH2
                                    227 	.globl _TL2
                                    228 	.globl _RCAP2H
                                    229 	.globl _RCAP2L
                                    230 	.globl _T4CON
                                    231 	.globl _T2CON
                                    232 	.globl _ADC0LTH
                                    233 	.globl _ADC0LTL
                                    234 	.globl _ADC0GTH
                                    235 	.globl _ADC0GTL
                                    236 	.globl _SMB0ADR
                                    237 	.globl _SMB0DAT
                                    238 	.globl _SMB0STA
                                    239 	.globl _SMB0CN
                                    240 	.globl _ADC0H
                                    241 	.globl _ADC0L
                                    242 	.globl _P1MDIN
                                    243 	.globl _ADC0CF
                                    244 	.globl _AMX0SL
                                    245 	.globl _AMX0CF
                                    246 	.globl _SADEN0
                                    247 	.globl _IP
                                    248 	.globl _FLACL
                                    249 	.globl _FLSCL
                                    250 	.globl _P74OUT
                                    251 	.globl _OSCICN
                                    252 	.globl _OSCXCN
                                    253 	.globl _P3
                                    254 	.globl __XPAGE
                                    255 	.globl _EMI0CN
                                    256 	.globl _SADEN1
                                    257 	.globl _P3IF
                                    258 	.globl _AMX1SL
                                    259 	.globl _ADC1CF
                                    260 	.globl _ADC1CN
                                    261 	.globl _SADDR0
                                    262 	.globl _IE
                                    263 	.globl _P3MDOUT
                                    264 	.globl _PRT3CF
                                    265 	.globl _P2MDOUT
                                    266 	.globl _PRT2CF
                                    267 	.globl _P1MDOUT
                                    268 	.globl _PRT1CF
                                    269 	.globl _P0MDOUT
                                    270 	.globl _PRT0CF
                                    271 	.globl _EMI0CF
                                    272 	.globl _EMI0TC
                                    273 	.globl _P2
                                    274 	.globl _CPT1CN
                                    275 	.globl _CPT0CN
                                    276 	.globl _SPI0CKR
                                    277 	.globl _ADC1
                                    278 	.globl _SPI0DAT
                                    279 	.globl _SPI0CFG
                                    280 	.globl _SBUF0
                                    281 	.globl _SBUF
                                    282 	.globl _SCON0
                                    283 	.globl _SCON
                                    284 	.globl _P7
                                    285 	.globl _TMR3H
                                    286 	.globl _TMR3L
                                    287 	.globl _TMR3RLH
                                    288 	.globl _TMR3RLL
                                    289 	.globl _TMR3CN
                                    290 	.globl _P1
                                    291 	.globl _PSCTL
                                    292 	.globl _CKCON
                                    293 	.globl _TH1
                                    294 	.globl _TH0
                                    295 	.globl _TL1
                                    296 	.globl _TL0
                                    297 	.globl _TMOD
                                    298 	.globl _TCON
                                    299 	.globl _PCON
                                    300 	.globl _P6
                                    301 	.globl _P5
                                    302 	.globl _P4
                                    303 	.globl _DPH
                                    304 	.globl _DPL
                                    305 	.globl _SP
                                    306 	.globl _P0
                                    307 	.globl _Desired_Heading
                                    308 	.globl _heading_delay
                                    309 	.globl _heading
                                    310 	.globl _h_count
                                    311 	.globl _new_heading
                                    312 	.globl _counts
                                    313 	.globl _PW
                                    314 	.globl _PW_MAX
                                    315 	.globl _PW_MIN
                                    316 	.globl _PW_CENTER
                                    317 	.globl _PCA_START
                                    318 	.globl _i2c_read_data_PARM_4
                                    319 	.globl _i2c_read_data_PARM_3
                                    320 	.globl _i2c_read_data_PARM_2
                                    321 	.globl _i2c_write_data_PARM_4
                                    322 	.globl _i2c_write_data_PARM_3
                                    323 	.globl _i2c_write_data_PARM_2
                                    324 	.globl _lcd_print
                                    325 	.globl _lcd_clear
                                    326 	.globl _kpd_input
                                    327 	.globl _delay_time
                                    328 	.globl _i2c_start
                                    329 	.globl _i2c_write
                                    330 	.globl _i2c_write_and_stop
                                    331 	.globl _i2c_read
                                    332 	.globl _i2c_read_and_stop
                                    333 	.globl _i2c_write_data
                                    334 	.globl _i2c_read_data
                                    335 	.globl _Accel_Init
                                    336 	.globl _Port_Init
                                    337 	.globl _XBR0_Init
                                    338 	.globl _SMB_Init
                                    339 	.globl _PCA_Init
                                    340 	.globl _PCA_ISR
                                    341 	.globl _ReadCompass
                                    342 	.globl _DeterminePWM
                                    343 	.globl _Steering_Servo
                                    344 ;--------------------------------------------------------
                                    345 ; special function registers
                                    346 ;--------------------------------------------------------
                                    347 	.area RSEG    (ABS,DATA)
      000000                        348 	.org 0x0000
                           000080   349 G$P0$0$0 == 0x0080
                           000080   350 _P0	=	0x0080
                           000081   351 G$SP$0$0 == 0x0081
                           000081   352 _SP	=	0x0081
                           000082   353 G$DPL$0$0 == 0x0082
                           000082   354 _DPL	=	0x0082
                           000083   355 G$DPH$0$0 == 0x0083
                           000083   356 _DPH	=	0x0083
                           000084   357 G$P4$0$0 == 0x0084
                           000084   358 _P4	=	0x0084
                           000085   359 G$P5$0$0 == 0x0085
                           000085   360 _P5	=	0x0085
                           000086   361 G$P6$0$0 == 0x0086
                           000086   362 _P6	=	0x0086
                           000087   363 G$PCON$0$0 == 0x0087
                           000087   364 _PCON	=	0x0087
                           000088   365 G$TCON$0$0 == 0x0088
                           000088   366 _TCON	=	0x0088
                           000089   367 G$TMOD$0$0 == 0x0089
                           000089   368 _TMOD	=	0x0089
                           00008A   369 G$TL0$0$0 == 0x008a
                           00008A   370 _TL0	=	0x008a
                           00008B   371 G$TL1$0$0 == 0x008b
                           00008B   372 _TL1	=	0x008b
                           00008C   373 G$TH0$0$0 == 0x008c
                           00008C   374 _TH0	=	0x008c
                           00008D   375 G$TH1$0$0 == 0x008d
                           00008D   376 _TH1	=	0x008d
                           00008E   377 G$CKCON$0$0 == 0x008e
                           00008E   378 _CKCON	=	0x008e
                           00008F   379 G$PSCTL$0$0 == 0x008f
                           00008F   380 _PSCTL	=	0x008f
                           000090   381 G$P1$0$0 == 0x0090
                           000090   382 _P1	=	0x0090
                           000091   383 G$TMR3CN$0$0 == 0x0091
                           000091   384 _TMR3CN	=	0x0091
                           000092   385 G$TMR3RLL$0$0 == 0x0092
                           000092   386 _TMR3RLL	=	0x0092
                           000093   387 G$TMR3RLH$0$0 == 0x0093
                           000093   388 _TMR3RLH	=	0x0093
                           000094   389 G$TMR3L$0$0 == 0x0094
                           000094   390 _TMR3L	=	0x0094
                           000095   391 G$TMR3H$0$0 == 0x0095
                           000095   392 _TMR3H	=	0x0095
                           000096   393 G$P7$0$0 == 0x0096
                           000096   394 _P7	=	0x0096
                           000098   395 G$SCON$0$0 == 0x0098
                           000098   396 _SCON	=	0x0098
                           000098   397 G$SCON0$0$0 == 0x0098
                           000098   398 _SCON0	=	0x0098
                           000099   399 G$SBUF$0$0 == 0x0099
                           000099   400 _SBUF	=	0x0099
                           000099   401 G$SBUF0$0$0 == 0x0099
                           000099   402 _SBUF0	=	0x0099
                           00009A   403 G$SPI0CFG$0$0 == 0x009a
                           00009A   404 _SPI0CFG	=	0x009a
                           00009B   405 G$SPI0DAT$0$0 == 0x009b
                           00009B   406 _SPI0DAT	=	0x009b
                           00009C   407 G$ADC1$0$0 == 0x009c
                           00009C   408 _ADC1	=	0x009c
                           00009D   409 G$SPI0CKR$0$0 == 0x009d
                           00009D   410 _SPI0CKR	=	0x009d
                           00009E   411 G$CPT0CN$0$0 == 0x009e
                           00009E   412 _CPT0CN	=	0x009e
                           00009F   413 G$CPT1CN$0$0 == 0x009f
                           00009F   414 _CPT1CN	=	0x009f
                           0000A0   415 G$P2$0$0 == 0x00a0
                           0000A0   416 _P2	=	0x00a0
                           0000A1   417 G$EMI0TC$0$0 == 0x00a1
                           0000A1   418 _EMI0TC	=	0x00a1
                           0000A3   419 G$EMI0CF$0$0 == 0x00a3
                           0000A3   420 _EMI0CF	=	0x00a3
                           0000A4   421 G$PRT0CF$0$0 == 0x00a4
                           0000A4   422 _PRT0CF	=	0x00a4
                           0000A4   423 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   424 _P0MDOUT	=	0x00a4
                           0000A5   425 G$PRT1CF$0$0 == 0x00a5
                           0000A5   426 _PRT1CF	=	0x00a5
                           0000A5   427 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   428 _P1MDOUT	=	0x00a5
                           0000A6   429 G$PRT2CF$0$0 == 0x00a6
                           0000A6   430 _PRT2CF	=	0x00a6
                           0000A6   431 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   432 _P2MDOUT	=	0x00a6
                           0000A7   433 G$PRT3CF$0$0 == 0x00a7
                           0000A7   434 _PRT3CF	=	0x00a7
                           0000A7   435 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   436 _P3MDOUT	=	0x00a7
                           0000A8   437 G$IE$0$0 == 0x00a8
                           0000A8   438 _IE	=	0x00a8
                           0000A9   439 G$SADDR0$0$0 == 0x00a9
                           0000A9   440 _SADDR0	=	0x00a9
                           0000AA   441 G$ADC1CN$0$0 == 0x00aa
                           0000AA   442 _ADC1CN	=	0x00aa
                           0000AB   443 G$ADC1CF$0$0 == 0x00ab
                           0000AB   444 _ADC1CF	=	0x00ab
                           0000AC   445 G$AMX1SL$0$0 == 0x00ac
                           0000AC   446 _AMX1SL	=	0x00ac
                           0000AD   447 G$P3IF$0$0 == 0x00ad
                           0000AD   448 _P3IF	=	0x00ad
                           0000AE   449 G$SADEN1$0$0 == 0x00ae
                           0000AE   450 _SADEN1	=	0x00ae
                           0000AF   451 G$EMI0CN$0$0 == 0x00af
                           0000AF   452 _EMI0CN	=	0x00af
                           0000AF   453 G$_XPAGE$0$0 == 0x00af
                           0000AF   454 __XPAGE	=	0x00af
                           0000B0   455 G$P3$0$0 == 0x00b0
                           0000B0   456 _P3	=	0x00b0
                           0000B1   457 G$OSCXCN$0$0 == 0x00b1
                           0000B1   458 _OSCXCN	=	0x00b1
                           0000B2   459 G$OSCICN$0$0 == 0x00b2
                           0000B2   460 _OSCICN	=	0x00b2
                           0000B5   461 G$P74OUT$0$0 == 0x00b5
                           0000B5   462 _P74OUT	=	0x00b5
                           0000B6   463 G$FLSCL$0$0 == 0x00b6
                           0000B6   464 _FLSCL	=	0x00b6
                           0000B7   465 G$FLACL$0$0 == 0x00b7
                           0000B7   466 _FLACL	=	0x00b7
                           0000B8   467 G$IP$0$0 == 0x00b8
                           0000B8   468 _IP	=	0x00b8
                           0000B9   469 G$SADEN0$0$0 == 0x00b9
                           0000B9   470 _SADEN0	=	0x00b9
                           0000BA   471 G$AMX0CF$0$0 == 0x00ba
                           0000BA   472 _AMX0CF	=	0x00ba
                           0000BB   473 G$AMX0SL$0$0 == 0x00bb
                           0000BB   474 _AMX0SL	=	0x00bb
                           0000BC   475 G$ADC0CF$0$0 == 0x00bc
                           0000BC   476 _ADC0CF	=	0x00bc
                           0000BD   477 G$P1MDIN$0$0 == 0x00bd
                           0000BD   478 _P1MDIN	=	0x00bd
                           0000BE   479 G$ADC0L$0$0 == 0x00be
                           0000BE   480 _ADC0L	=	0x00be
                           0000BF   481 G$ADC0H$0$0 == 0x00bf
                           0000BF   482 _ADC0H	=	0x00bf
                           0000C0   483 G$SMB0CN$0$0 == 0x00c0
                           0000C0   484 _SMB0CN	=	0x00c0
                           0000C1   485 G$SMB0STA$0$0 == 0x00c1
                           0000C1   486 _SMB0STA	=	0x00c1
                           0000C2   487 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   488 _SMB0DAT	=	0x00c2
                           0000C3   489 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   490 _SMB0ADR	=	0x00c3
                           0000C4   491 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   492 _ADC0GTL	=	0x00c4
                           0000C5   493 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   494 _ADC0GTH	=	0x00c5
                           0000C6   495 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   496 _ADC0LTL	=	0x00c6
                           0000C7   497 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   498 _ADC0LTH	=	0x00c7
                           0000C8   499 G$T2CON$0$0 == 0x00c8
                           0000C8   500 _T2CON	=	0x00c8
                           0000C9   501 G$T4CON$0$0 == 0x00c9
                           0000C9   502 _T4CON	=	0x00c9
                           0000CA   503 G$RCAP2L$0$0 == 0x00ca
                           0000CA   504 _RCAP2L	=	0x00ca
                           0000CB   505 G$RCAP2H$0$0 == 0x00cb
                           0000CB   506 _RCAP2H	=	0x00cb
                           0000CC   507 G$TL2$0$0 == 0x00cc
                           0000CC   508 _TL2	=	0x00cc
                           0000CD   509 G$TH2$0$0 == 0x00cd
                           0000CD   510 _TH2	=	0x00cd
                           0000CF   511 G$SMB0CR$0$0 == 0x00cf
                           0000CF   512 _SMB0CR	=	0x00cf
                           0000D0   513 G$PSW$0$0 == 0x00d0
                           0000D0   514 _PSW	=	0x00d0
                           0000D1   515 G$REF0CN$0$0 == 0x00d1
                           0000D1   516 _REF0CN	=	0x00d1
                           0000D2   517 G$DAC0L$0$0 == 0x00d2
                           0000D2   518 _DAC0L	=	0x00d2
                           0000D3   519 G$DAC0H$0$0 == 0x00d3
                           0000D3   520 _DAC0H	=	0x00d3
                           0000D4   521 G$DAC0CN$0$0 == 0x00d4
                           0000D4   522 _DAC0CN	=	0x00d4
                           0000D5   523 G$DAC1L$0$0 == 0x00d5
                           0000D5   524 _DAC1L	=	0x00d5
                           0000D6   525 G$DAC1H$0$0 == 0x00d6
                           0000D6   526 _DAC1H	=	0x00d6
                           0000D7   527 G$DAC1CN$0$0 == 0x00d7
                           0000D7   528 _DAC1CN	=	0x00d7
                           0000D8   529 G$PCA0CN$0$0 == 0x00d8
                           0000D8   530 _PCA0CN	=	0x00d8
                           0000D9   531 G$PCA0MD$0$0 == 0x00d9
                           0000D9   532 _PCA0MD	=	0x00d9
                           0000DA   533 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   534 _PCA0CPM0	=	0x00da
                           0000DB   535 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   536 _PCA0CPM1	=	0x00db
                           0000DC   537 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   538 _PCA0CPM2	=	0x00dc
                           0000DD   539 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   540 _PCA0CPM3	=	0x00dd
                           0000DE   541 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   542 _PCA0CPM4	=	0x00de
                           0000E0   543 G$ACC$0$0 == 0x00e0
                           0000E0   544 _ACC	=	0x00e0
                           0000E1   545 G$XBR0$0$0 == 0x00e1
                           0000E1   546 _XBR0	=	0x00e1
                           0000E2   547 G$XBR1$0$0 == 0x00e2
                           0000E2   548 _XBR1	=	0x00e2
                           0000E3   549 G$XBR2$0$0 == 0x00e3
                           0000E3   550 _XBR2	=	0x00e3
                           0000E4   551 G$RCAP4L$0$0 == 0x00e4
                           0000E4   552 _RCAP4L	=	0x00e4
                           0000E5   553 G$RCAP4H$0$0 == 0x00e5
                           0000E5   554 _RCAP4H	=	0x00e5
                           0000E6   555 G$EIE1$0$0 == 0x00e6
                           0000E6   556 _EIE1	=	0x00e6
                           0000E7   557 G$EIE2$0$0 == 0x00e7
                           0000E7   558 _EIE2	=	0x00e7
                           0000E8   559 G$ADC0CN$0$0 == 0x00e8
                           0000E8   560 _ADC0CN	=	0x00e8
                           0000E9   561 G$PCA0L$0$0 == 0x00e9
                           0000E9   562 _PCA0L	=	0x00e9
                           0000EA   563 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   564 _PCA0CPL0	=	0x00ea
                           0000EB   565 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   566 _PCA0CPL1	=	0x00eb
                           0000EC   567 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   568 _PCA0CPL2	=	0x00ec
                           0000ED   569 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   570 _PCA0CPL3	=	0x00ed
                           0000EE   571 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   572 _PCA0CPL4	=	0x00ee
                           0000EF   573 G$RSTSRC$0$0 == 0x00ef
                           0000EF   574 _RSTSRC	=	0x00ef
                           0000F0   575 G$B$0$0 == 0x00f0
                           0000F0   576 _B	=	0x00f0
                           0000F1   577 G$SCON1$0$0 == 0x00f1
                           0000F1   578 _SCON1	=	0x00f1
                           0000F2   579 G$SBUF1$0$0 == 0x00f2
                           0000F2   580 _SBUF1	=	0x00f2
                           0000F3   581 G$SADDR1$0$0 == 0x00f3
                           0000F3   582 _SADDR1	=	0x00f3
                           0000F4   583 G$TL4$0$0 == 0x00f4
                           0000F4   584 _TL4	=	0x00f4
                           0000F5   585 G$TH4$0$0 == 0x00f5
                           0000F5   586 _TH4	=	0x00f5
                           0000F6   587 G$EIP1$0$0 == 0x00f6
                           0000F6   588 _EIP1	=	0x00f6
                           0000F7   589 G$EIP2$0$0 == 0x00f7
                           0000F7   590 _EIP2	=	0x00f7
                           0000F8   591 G$SPI0CN$0$0 == 0x00f8
                           0000F8   592 _SPI0CN	=	0x00f8
                           0000F9   593 G$PCA0H$0$0 == 0x00f9
                           0000F9   594 _PCA0H	=	0x00f9
                           0000FA   595 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   596 _PCA0CPH0	=	0x00fa
                           0000FB   597 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   598 _PCA0CPH1	=	0x00fb
                           0000FC   599 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   600 _PCA0CPH2	=	0x00fc
                           0000FD   601 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   602 _PCA0CPH3	=	0x00fd
                           0000FE   603 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   604 _PCA0CPH4	=	0x00fe
                           0000FF   605 G$WDTCN$0$0 == 0x00ff
                           0000FF   606 _WDTCN	=	0x00ff
                           008C8A   607 G$TMR0$0$0 == 0x8c8a
                           008C8A   608 _TMR0	=	0x8c8a
                           008D8B   609 G$TMR1$0$0 == 0x8d8b
                           008D8B   610 _TMR1	=	0x8d8b
                           00CDCC   611 G$TMR2$0$0 == 0xcdcc
                           00CDCC   612 _TMR2	=	0xcdcc
                           00CBCA   613 G$RCAP2$0$0 == 0xcbca
                           00CBCA   614 _RCAP2	=	0xcbca
                           009594   615 G$TMR3$0$0 == 0x9594
                           009594   616 _TMR3	=	0x9594
                           009392   617 G$TMR3RL$0$0 == 0x9392
                           009392   618 _TMR3RL	=	0x9392
                           00F5F4   619 G$TMR4$0$0 == 0xf5f4
                           00F5F4   620 _TMR4	=	0xf5f4
                           00E5E4   621 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   622 _RCAP4	=	0xe5e4
                           00BFBE   623 G$ADC0$0$0 == 0xbfbe
                           00BFBE   624 _ADC0	=	0xbfbe
                           00C5C4   625 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   626 _ADC0GT	=	0xc5c4
                           00C7C6   627 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   628 _ADC0LT	=	0xc7c6
                           00D3D2   629 G$DAC0$0$0 == 0xd3d2
                           00D3D2   630 _DAC0	=	0xd3d2
                           00D6D5   631 G$DAC1$0$0 == 0xd6d5
                           00D6D5   632 _DAC1	=	0xd6d5
                           00F9E9   633 G$PCA0$0$0 == 0xf9e9
                           00F9E9   634 _PCA0	=	0xf9e9
                           00FAEA   635 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   636 _PCA0CP0	=	0xfaea
                           00FBEB   637 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   638 _PCA0CP1	=	0xfbeb
                           00FCEC   639 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   640 _PCA0CP2	=	0xfcec
                           00FDED   641 G$PCA0CP3$0$0 == 0xfded
                           00FDED   642 _PCA0CP3	=	0xfded
                           00FEEE   643 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   644 _PCA0CP4	=	0xfeee
                                    645 ;--------------------------------------------------------
                                    646 ; special function bits
                                    647 ;--------------------------------------------------------
                                    648 	.area RSEG    (ABS,DATA)
      000000                        649 	.org 0x0000
                           000080   650 G$P0_0$0$0 == 0x0080
                           000080   651 _P0_0	=	0x0080
                           000081   652 G$P0_1$0$0 == 0x0081
                           000081   653 _P0_1	=	0x0081
                           000082   654 G$P0_2$0$0 == 0x0082
                           000082   655 _P0_2	=	0x0082
                           000083   656 G$P0_3$0$0 == 0x0083
                           000083   657 _P0_3	=	0x0083
                           000084   658 G$P0_4$0$0 == 0x0084
                           000084   659 _P0_4	=	0x0084
                           000085   660 G$P0_5$0$0 == 0x0085
                           000085   661 _P0_5	=	0x0085
                           000086   662 G$P0_6$0$0 == 0x0086
                           000086   663 _P0_6	=	0x0086
                           000087   664 G$P0_7$0$0 == 0x0087
                           000087   665 _P0_7	=	0x0087
                           000088   666 G$IT0$0$0 == 0x0088
                           000088   667 _IT0	=	0x0088
                           000089   668 G$IE0$0$0 == 0x0089
                           000089   669 _IE0	=	0x0089
                           00008A   670 G$IT1$0$0 == 0x008a
                           00008A   671 _IT1	=	0x008a
                           00008B   672 G$IE1$0$0 == 0x008b
                           00008B   673 _IE1	=	0x008b
                           00008C   674 G$TR0$0$0 == 0x008c
                           00008C   675 _TR0	=	0x008c
                           00008D   676 G$TF0$0$0 == 0x008d
                           00008D   677 _TF0	=	0x008d
                           00008E   678 G$TR1$0$0 == 0x008e
                           00008E   679 _TR1	=	0x008e
                           00008F   680 G$TF1$0$0 == 0x008f
                           00008F   681 _TF1	=	0x008f
                           000090   682 G$P1_0$0$0 == 0x0090
                           000090   683 _P1_0	=	0x0090
                           000091   684 G$P1_1$0$0 == 0x0091
                           000091   685 _P1_1	=	0x0091
                           000092   686 G$P1_2$0$0 == 0x0092
                           000092   687 _P1_2	=	0x0092
                           000093   688 G$P1_3$0$0 == 0x0093
                           000093   689 _P1_3	=	0x0093
                           000094   690 G$P1_4$0$0 == 0x0094
                           000094   691 _P1_4	=	0x0094
                           000095   692 G$P1_5$0$0 == 0x0095
                           000095   693 _P1_5	=	0x0095
                           000096   694 G$P1_6$0$0 == 0x0096
                           000096   695 _P1_6	=	0x0096
                           000097   696 G$P1_7$0$0 == 0x0097
                           000097   697 _P1_7	=	0x0097
                           000098   698 G$RI$0$0 == 0x0098
                           000098   699 _RI	=	0x0098
                           000098   700 G$RI0$0$0 == 0x0098
                           000098   701 _RI0	=	0x0098
                           000099   702 G$TI$0$0 == 0x0099
                           000099   703 _TI	=	0x0099
                           000099   704 G$TI0$0$0 == 0x0099
                           000099   705 _TI0	=	0x0099
                           00009A   706 G$RB8$0$0 == 0x009a
                           00009A   707 _RB8	=	0x009a
                           00009A   708 G$RB80$0$0 == 0x009a
                           00009A   709 _RB80	=	0x009a
                           00009B   710 G$TB8$0$0 == 0x009b
                           00009B   711 _TB8	=	0x009b
                           00009B   712 G$TB80$0$0 == 0x009b
                           00009B   713 _TB80	=	0x009b
                           00009C   714 G$REN$0$0 == 0x009c
                           00009C   715 _REN	=	0x009c
                           00009C   716 G$REN0$0$0 == 0x009c
                           00009C   717 _REN0	=	0x009c
                           00009D   718 G$SM2$0$0 == 0x009d
                           00009D   719 _SM2	=	0x009d
                           00009D   720 G$SM20$0$0 == 0x009d
                           00009D   721 _SM20	=	0x009d
                           00009D   722 G$MCE0$0$0 == 0x009d
                           00009D   723 _MCE0	=	0x009d
                           00009E   724 G$SM1$0$0 == 0x009e
                           00009E   725 _SM1	=	0x009e
                           00009E   726 G$SM10$0$0 == 0x009e
                           00009E   727 _SM10	=	0x009e
                           00009F   728 G$SM0$0$0 == 0x009f
                           00009F   729 _SM0	=	0x009f
                           00009F   730 G$SM00$0$0 == 0x009f
                           00009F   731 _SM00	=	0x009f
                           00009F   732 G$S0MODE$0$0 == 0x009f
                           00009F   733 _S0MODE	=	0x009f
                           0000A0   734 G$P2_0$0$0 == 0x00a0
                           0000A0   735 _P2_0	=	0x00a0
                           0000A1   736 G$P2_1$0$0 == 0x00a1
                           0000A1   737 _P2_1	=	0x00a1
                           0000A2   738 G$P2_2$0$0 == 0x00a2
                           0000A2   739 _P2_2	=	0x00a2
                           0000A3   740 G$P2_3$0$0 == 0x00a3
                           0000A3   741 _P2_3	=	0x00a3
                           0000A4   742 G$P2_4$0$0 == 0x00a4
                           0000A4   743 _P2_4	=	0x00a4
                           0000A5   744 G$P2_5$0$0 == 0x00a5
                           0000A5   745 _P2_5	=	0x00a5
                           0000A6   746 G$P2_6$0$0 == 0x00a6
                           0000A6   747 _P2_6	=	0x00a6
                           0000A7   748 G$P2_7$0$0 == 0x00a7
                           0000A7   749 _P2_7	=	0x00a7
                           0000A8   750 G$EX0$0$0 == 0x00a8
                           0000A8   751 _EX0	=	0x00a8
                           0000A9   752 G$ET0$0$0 == 0x00a9
                           0000A9   753 _ET0	=	0x00a9
                           0000AA   754 G$EX1$0$0 == 0x00aa
                           0000AA   755 _EX1	=	0x00aa
                           0000AB   756 G$ET1$0$0 == 0x00ab
                           0000AB   757 _ET1	=	0x00ab
                           0000AC   758 G$ES0$0$0 == 0x00ac
                           0000AC   759 _ES0	=	0x00ac
                           0000AC   760 G$ES$0$0 == 0x00ac
                           0000AC   761 _ES	=	0x00ac
                           0000AD   762 G$ET2$0$0 == 0x00ad
                           0000AD   763 _ET2	=	0x00ad
                           0000AF   764 G$EA$0$0 == 0x00af
                           0000AF   765 _EA	=	0x00af
                           0000B0   766 G$P3_0$0$0 == 0x00b0
                           0000B0   767 _P3_0	=	0x00b0
                           0000B1   768 G$P3_1$0$0 == 0x00b1
                           0000B1   769 _P3_1	=	0x00b1
                           0000B2   770 G$P3_2$0$0 == 0x00b2
                           0000B2   771 _P3_2	=	0x00b2
                           0000B3   772 G$P3_3$0$0 == 0x00b3
                           0000B3   773 _P3_3	=	0x00b3
                           0000B4   774 G$P3_4$0$0 == 0x00b4
                           0000B4   775 _P3_4	=	0x00b4
                           0000B5   776 G$P3_5$0$0 == 0x00b5
                           0000B5   777 _P3_5	=	0x00b5
                           0000B6   778 G$P3_6$0$0 == 0x00b6
                           0000B6   779 _P3_6	=	0x00b6
                           0000B7   780 G$P3_7$0$0 == 0x00b7
                           0000B7   781 _P3_7	=	0x00b7
                           0000B8   782 G$PX0$0$0 == 0x00b8
                           0000B8   783 _PX0	=	0x00b8
                           0000B9   784 G$PT0$0$0 == 0x00b9
                           0000B9   785 _PT0	=	0x00b9
                           0000BA   786 G$PX1$0$0 == 0x00ba
                           0000BA   787 _PX1	=	0x00ba
                           0000BB   788 G$PT1$0$0 == 0x00bb
                           0000BB   789 _PT1	=	0x00bb
                           0000BC   790 G$PS0$0$0 == 0x00bc
                           0000BC   791 _PS0	=	0x00bc
                           0000BC   792 G$PS$0$0 == 0x00bc
                           0000BC   793 _PS	=	0x00bc
                           0000BD   794 G$PT2$0$0 == 0x00bd
                           0000BD   795 _PT2	=	0x00bd
                           0000C0   796 G$SMBTOE$0$0 == 0x00c0
                           0000C0   797 _SMBTOE	=	0x00c0
                           0000C1   798 G$SMBFTE$0$0 == 0x00c1
                           0000C1   799 _SMBFTE	=	0x00c1
                           0000C2   800 G$AA$0$0 == 0x00c2
                           0000C2   801 _AA	=	0x00c2
                           0000C3   802 G$SI$0$0 == 0x00c3
                           0000C3   803 _SI	=	0x00c3
                           0000C4   804 G$STO$0$0 == 0x00c4
                           0000C4   805 _STO	=	0x00c4
                           0000C5   806 G$STA$0$0 == 0x00c5
                           0000C5   807 _STA	=	0x00c5
                           0000C6   808 G$ENSMB$0$0 == 0x00c6
                           0000C6   809 _ENSMB	=	0x00c6
                           0000C7   810 G$BUSY$0$0 == 0x00c7
                           0000C7   811 _BUSY	=	0x00c7
                           0000C8   812 G$CPRL2$0$0 == 0x00c8
                           0000C8   813 _CPRL2	=	0x00c8
                           0000C9   814 G$CT2$0$0 == 0x00c9
                           0000C9   815 _CT2	=	0x00c9
                           0000CA   816 G$TR2$0$0 == 0x00ca
                           0000CA   817 _TR2	=	0x00ca
                           0000CB   818 G$EXEN2$0$0 == 0x00cb
                           0000CB   819 _EXEN2	=	0x00cb
                           0000CC   820 G$TCLK$0$0 == 0x00cc
                           0000CC   821 _TCLK	=	0x00cc
                           0000CD   822 G$RCLK$0$0 == 0x00cd
                           0000CD   823 _RCLK	=	0x00cd
                           0000CE   824 G$EXF2$0$0 == 0x00ce
                           0000CE   825 _EXF2	=	0x00ce
                           0000CF   826 G$TF2$0$0 == 0x00cf
                           0000CF   827 _TF2	=	0x00cf
                           0000D0   828 G$P$0$0 == 0x00d0
                           0000D0   829 _P	=	0x00d0
                           0000D1   830 G$F1$0$0 == 0x00d1
                           0000D1   831 _F1	=	0x00d1
                           0000D2   832 G$OV$0$0 == 0x00d2
                           0000D2   833 _OV	=	0x00d2
                           0000D3   834 G$RS0$0$0 == 0x00d3
                           0000D3   835 _RS0	=	0x00d3
                           0000D4   836 G$RS1$0$0 == 0x00d4
                           0000D4   837 _RS1	=	0x00d4
                           0000D5   838 G$F0$0$0 == 0x00d5
                           0000D5   839 _F0	=	0x00d5
                           0000D6   840 G$AC$0$0 == 0x00d6
                           0000D6   841 _AC	=	0x00d6
                           0000D7   842 G$CY$0$0 == 0x00d7
                           0000D7   843 _CY	=	0x00d7
                           0000D8   844 G$CCF0$0$0 == 0x00d8
                           0000D8   845 _CCF0	=	0x00d8
                           0000D9   846 G$CCF1$0$0 == 0x00d9
                           0000D9   847 _CCF1	=	0x00d9
                           0000DA   848 G$CCF2$0$0 == 0x00da
                           0000DA   849 _CCF2	=	0x00da
                           0000DB   850 G$CCF3$0$0 == 0x00db
                           0000DB   851 _CCF3	=	0x00db
                           0000DC   852 G$CCF4$0$0 == 0x00dc
                           0000DC   853 _CCF4	=	0x00dc
                           0000DE   854 G$CR$0$0 == 0x00de
                           0000DE   855 _CR	=	0x00de
                           0000DF   856 G$CF$0$0 == 0x00df
                           0000DF   857 _CF	=	0x00df
                           0000E8   858 G$ADLJST$0$0 == 0x00e8
                           0000E8   859 _ADLJST	=	0x00e8
                           0000E8   860 G$AD0LJST$0$0 == 0x00e8
                           0000E8   861 _AD0LJST	=	0x00e8
                           0000E9   862 G$ADWINT$0$0 == 0x00e9
                           0000E9   863 _ADWINT	=	0x00e9
                           0000E9   864 G$AD0WINT$0$0 == 0x00e9
                           0000E9   865 _AD0WINT	=	0x00e9
                           0000EA   866 G$ADSTM0$0$0 == 0x00ea
                           0000EA   867 _ADSTM0	=	0x00ea
                           0000EA   868 G$AD0CM0$0$0 == 0x00ea
                           0000EA   869 _AD0CM0	=	0x00ea
                           0000EB   870 G$ADSTM1$0$0 == 0x00eb
                           0000EB   871 _ADSTM1	=	0x00eb
                           0000EB   872 G$AD0CM1$0$0 == 0x00eb
                           0000EB   873 _AD0CM1	=	0x00eb
                           0000EC   874 G$ADBUSY$0$0 == 0x00ec
                           0000EC   875 _ADBUSY	=	0x00ec
                           0000EC   876 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   877 _AD0BUSY	=	0x00ec
                           0000ED   878 G$ADCINT$0$0 == 0x00ed
                           0000ED   879 _ADCINT	=	0x00ed
                           0000ED   880 G$AD0INT$0$0 == 0x00ed
                           0000ED   881 _AD0INT	=	0x00ed
                           0000EE   882 G$ADCTM$0$0 == 0x00ee
                           0000EE   883 _ADCTM	=	0x00ee
                           0000EE   884 G$AD0TM$0$0 == 0x00ee
                           0000EE   885 _AD0TM	=	0x00ee
                           0000EF   886 G$ADCEN$0$0 == 0x00ef
                           0000EF   887 _ADCEN	=	0x00ef
                           0000EF   888 G$AD0EN$0$0 == 0x00ef
                           0000EF   889 _AD0EN	=	0x00ef
                           0000F8   890 G$SPIEN$0$0 == 0x00f8
                           0000F8   891 _SPIEN	=	0x00f8
                           0000F9   892 G$MSTEN$0$0 == 0x00f9
                           0000F9   893 _MSTEN	=	0x00f9
                           0000FA   894 G$SLVSEL$0$0 == 0x00fa
                           0000FA   895 _SLVSEL	=	0x00fa
                           0000FB   896 G$TXBSY$0$0 == 0x00fb
                           0000FB   897 _TXBSY	=	0x00fb
                           0000FC   898 G$RXOVRN$0$0 == 0x00fc
                           0000FC   899 _RXOVRN	=	0x00fc
                           0000FD   900 G$MODF$0$0 == 0x00fd
                           0000FD   901 _MODF	=	0x00fd
                           0000FE   902 G$WCOL$0$0 == 0x00fe
                           0000FE   903 _WCOL	=	0x00fe
                           0000FF   904 G$SPIF$0$0 == 0x00ff
                           0000FF   905 _SPIF	=	0x00ff
                           0000C7   906 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   907 _BUS_BUSY	=	0x00c7
                           0000C6   908 G$BUS_EN$0$0 == 0x00c6
                           0000C6   909 _BUS_EN	=	0x00c6
                           0000C5   910 G$BUS_START$0$0 == 0x00c5
                           0000C5   911 _BUS_START	=	0x00c5
                           0000C4   912 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   913 _BUS_STOP	=	0x00c4
                           0000C3   914 G$BUS_INT$0$0 == 0x00c3
                           0000C3   915 _BUS_INT	=	0x00c3
                           0000C2   916 G$BUS_AA$0$0 == 0x00c2
                           0000C2   917 _BUS_AA	=	0x00c2
                           0000C1   918 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   919 _BUS_FTE	=	0x00c1
                           0000C0   920 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   921 _BUS_TOE	=	0x00c0
                           000083   922 G$BUS_SCL$0$0 == 0x0083
                           000083   923 _BUS_SCL	=	0x0083
                           0000B7   924 G$SWITCH$0$0 == 0x00b7
                           0000B7   925 _SWITCH	=	0x00b7
                                    926 ;--------------------------------------------------------
                                    927 ; overlayable register banks
                                    928 ;--------------------------------------------------------
                                    929 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        930 	.ds 8
                                    931 ;--------------------------------------------------------
                                    932 ; internal ram data
                                    933 ;--------------------------------------------------------
                                    934 	.area DSEG    (DATA)
                           000000   935 LLab3_3_Steering.lcd_clear$NumBytes$1$77==.
      000022                        936 _lcd_clear_NumBytes_1_77:
      000022                        937 	.ds 1
                           000001   938 LLab3_3_Steering.lcd_clear$Cmd$1$77==.
      000023                        939 _lcd_clear_Cmd_1_77:
      000023                        940 	.ds 2
                           000003   941 LLab3_3_Steering.read_keypad$Data$1$78==.
      000025                        942 _read_keypad_Data_1_78:
      000025                        943 	.ds 2
                           000005   944 LLab3_3_Steering.i2c_write_data$start_reg$1$97==.
      000027                        945 _i2c_write_data_PARM_2:
      000027                        946 	.ds 1
                           000006   947 LLab3_3_Steering.i2c_write_data$buffer$1$97==.
      000028                        948 _i2c_write_data_PARM_3:
      000028                        949 	.ds 3
                           000009   950 LLab3_3_Steering.i2c_write_data$num_bytes$1$97==.
      00002B                        951 _i2c_write_data_PARM_4:
      00002B                        952 	.ds 1
                           00000A   953 LLab3_3_Steering.i2c_read_data$start_reg$1$99==.
      00002C                        954 _i2c_read_data_PARM_2:
      00002C                        955 	.ds 1
                           00000B   956 LLab3_3_Steering.i2c_read_data$buffer$1$99==.
      00002D                        957 _i2c_read_data_PARM_3:
      00002D                        958 	.ds 3
                           00000E   959 LLab3_3_Steering.i2c_read_data$num_bytes$1$99==.
      000030                        960 _i2c_read_data_PARM_4:
      000030                        961 	.ds 1
                           00000F   962 LLab3_3_Steering.Accel_Init$Data2$1$103==.
      000031                        963 _Accel_Init_Data2_1_103:
      000031                        964 	.ds 1
                           000010   965 G$PCA_START$0$0==.
      000032                        966 _PCA_START::
      000032                        967 	.ds 2
                           000012   968 G$PW_CENTER$0$0==.
      000034                        969 _PW_CENTER::
      000034                        970 	.ds 2
                           000014   971 G$PW_MIN$0$0==.
      000036                        972 _PW_MIN::
      000036                        973 	.ds 2
                           000016   974 G$PW_MAX$0$0==.
      000038                        975 _PW_MAX::
      000038                        976 	.ds 2
                           000018   977 G$PW$0$0==.
      00003A                        978 _PW::
      00003A                        979 	.ds 2
                           00001A   980 G$counts$0$0==.
      00003C                        981 _counts::
      00003C                        982 	.ds 2
                           00001C   983 G$new_heading$0$0==.
      00003E                        984 _new_heading::
      00003E                        985 	.ds 1
                           00001D   986 G$h_count$0$0==.
      00003F                        987 _h_count::
      00003F                        988 	.ds 1
                           00001E   989 G$heading$0$0==.
      000040                        990 _heading::
      000040                        991 	.ds 2
                           000020   992 G$heading_delay$0$0==.
      000042                        993 _heading_delay::
      000042                        994 	.ds 1
                           000021   995 G$Desired_Heading$0$0==.
      000043                        996 _Desired_Heading::
      000043                        997 	.ds 2
                           000023   998 LLab3_3_Steering.ReadCompass$Data$1$127==.
      000045                        999 _ReadCompass_Data_1_127:
      000045                       1000 	.ds 2
                                   1001 ;--------------------------------------------------------
                                   1002 ; overlayable items in internal ram 
                                   1003 ;--------------------------------------------------------
                                   1004 	.area	OSEG    (OVR,DATA)
                                   1005 	.area	OSEG    (OVR,DATA)
                                   1006 	.area	OSEG    (OVR,DATA)
                                   1007 	.area	OSEG    (OVR,DATA)
                                   1008 	.area	OSEG    (OVR,DATA)
                                   1009 	.area	OSEG    (OVR,DATA)
                                   1010 	.area	OSEG    (OVR,DATA)
                                   1011 ;--------------------------------------------------------
                                   1012 ; Stack segment in internal ram 
                                   1013 ;--------------------------------------------------------
                                   1014 	.area	SSEG
      000061                       1015 __start__stack:
      000061                       1016 	.ds	1
                                   1017 
                                   1018 ;--------------------------------------------------------
                                   1019 ; indirectly addressable internal ram data
                                   1020 ;--------------------------------------------------------
                                   1021 	.area ISEG    (DATA)
                                   1022 ;--------------------------------------------------------
                                   1023 ; absolute internal ram data
                                   1024 ;--------------------------------------------------------
                                   1025 	.area IABS    (ABS,DATA)
                                   1026 	.area IABS    (ABS,DATA)
                                   1027 ;--------------------------------------------------------
                                   1028 ; bit data
                                   1029 ;--------------------------------------------------------
                                   1030 	.area BSEG    (BIT)
                                   1031 ;--------------------------------------------------------
                                   1032 ; paged external ram data
                                   1033 ;--------------------------------------------------------
                                   1034 	.area PSEG    (PAG,XDATA)
                                   1035 ;--------------------------------------------------------
                                   1036 ; external ram data
                                   1037 ;--------------------------------------------------------
                                   1038 	.area XSEG    (XDATA)
                           000000  1039 LLab3_3_Steering.lcd_print$text$1$73==.
      000001                       1040 _lcd_print_text_1_73:
      000001                       1041 	.ds 80
                                   1042 ;--------------------------------------------------------
                                   1043 ; absolute external ram data
                                   1044 ;--------------------------------------------------------
                                   1045 	.area XABS    (ABS,XDATA)
                                   1046 ;--------------------------------------------------------
                                   1047 ; external initialized ram data
                                   1048 ;--------------------------------------------------------
                                   1049 	.area XISEG   (XDATA)
                                   1050 	.area HOME    (CODE)
                                   1051 	.area GSINIT0 (CODE)
                                   1052 	.area GSINIT1 (CODE)
                                   1053 	.area GSINIT2 (CODE)
                                   1054 	.area GSINIT3 (CODE)
                                   1055 	.area GSINIT4 (CODE)
                                   1056 	.area GSINIT5 (CODE)
                                   1057 	.area GSINIT  (CODE)
                                   1058 	.area GSFINAL (CODE)
                                   1059 	.area CSEG    (CODE)
                                   1060 ;--------------------------------------------------------
                                   1061 ; interrupt vector 
                                   1062 ;--------------------------------------------------------
                                   1063 	.area HOME    (CODE)
      000000                       1064 __interrupt_vect:
      000000 02 00 51         [24] 1065 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1066 	reti
      000004                       1067 	.ds	7
      00000B 32               [24] 1068 	reti
      00000C                       1069 	.ds	7
      000013 32               [24] 1070 	reti
      000014                       1071 	.ds	7
      00001B 32               [24] 1072 	reti
      00001C                       1073 	.ds	7
      000023 32               [24] 1074 	reti
      000024                       1075 	.ds	7
      00002B 32               [24] 1076 	reti
      00002C                       1077 	.ds	7
      000033 32               [24] 1078 	reti
      000034                       1079 	.ds	7
      00003B 32               [24] 1080 	reti
      00003C                       1081 	.ds	7
      000043 32               [24] 1082 	reti
      000044                       1083 	.ds	7
      00004B 02 06 28         [24] 1084 	ljmp	_PCA_ISR
                                   1085 ;--------------------------------------------------------
                                   1086 ; global & static initialisations
                                   1087 ;--------------------------------------------------------
                                   1088 	.area HOME    (CODE)
                                   1089 	.area GSINIT  (CODE)
                                   1090 	.area GSFINAL (CODE)
                                   1091 	.area GSINIT  (CODE)
                                   1092 	.globl __sdcc_gsinit_startup
                                   1093 	.globl __sdcc_program_startup
                                   1094 	.globl __start__stack
                                   1095 	.globl __mcs51_genXINIT
                                   1096 	.globl __mcs51_genXRAMCLEAR
                                   1097 	.globl __mcs51_genRAMCLEAR
                           000000  1098 	C$Lab3_3_Steering.c$28$1$130 ==.
                                   1099 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:28: unsigned int PCA_START = 28672;
      0000AA 75 32 00         [24] 1100 	mov	_PCA_START,#0x00
      0000AD 75 33 70         [24] 1101 	mov	(_PCA_START + 1),#0x70
                           000006  1102 	C$Lab3_3_Steering.c$29$1$130 ==.
                                   1103 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:29: unsigned int PW_CENTER = 2760;
      0000B0 75 34 C8         [24] 1104 	mov	_PW_CENTER,#0xC8
      0000B3 75 35 0A         [24] 1105 	mov	(_PW_CENTER + 1),#0x0A
                           00000C  1106 	C$Lab3_3_Steering.c$30$1$130 ==.
                                   1107 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:30: unsigned int PW_MIN = 2030;
      0000B6 75 36 EE         [24] 1108 	mov	_PW_MIN,#0xEE
      0000B9 75 37 07         [24] 1109 	mov	(_PW_MIN + 1),#0x07
                           000012  1110 	C$Lab3_3_Steering.c$31$1$130 ==.
                                   1111 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:31: unsigned int PW_MAX = 3500;
      0000BC 75 38 AC         [24] 1112 	mov	_PW_MAX,#0xAC
      0000BF 75 39 0D         [24] 1113 	mov	(_PW_MAX + 1),#0x0D
                           000018  1114 	C$Lab3_3_Steering.c$32$1$130 ==.
                                   1115 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:32: unsigned int PW = 0;
      0000C2 E4               [12] 1116 	clr	a
      0000C3 F5 3A            [12] 1117 	mov	_PW,a
      0000C5 F5 3B            [12] 1118 	mov	(_PW + 1),a
                           00001D  1119 	C$Lab3_3_Steering.c$33$1$130 ==.
                                   1120 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:33: unsigned int counts = 0;
      0000C7 F5 3C            [12] 1121 	mov	_counts,a
      0000C9 F5 3D            [12] 1122 	mov	(_counts + 1),a
                           000021  1123 	C$Lab3_3_Steering.c$34$1$130 ==.
                                   1124 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:34: unsigned char new_heading = 0;
                                   1125 ;	1-genFromRTrack replaced	mov	_new_heading,#0x00
      0000CB F5 3E            [12] 1126 	mov	_new_heading,a
                           000023  1127 	C$Lab3_3_Steering.c$35$1$130 ==.
                                   1128 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:35: unsigned char h_count = 0;
                                   1129 ;	1-genFromRTrack replaced	mov	_h_count,#0x00
      0000CD F5 3F            [12] 1130 	mov	_h_count,a
                           000025  1131 	C$Lab3_3_Steering.c$37$1$130 ==.
                                   1132 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:37: unsigned char heading_delay = 0;
                                   1133 ;	1-genFromRTrack replaced	mov	_heading_delay,#0x00
      0000CF F5 42            [12] 1134 	mov	_heading_delay,a
                           000027  1135 	C$Lab3_3_Steering.c$38$1$130 ==.
                                   1136 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:38: unsigned int Desired_Heading = 0;
      0000D1 F5 43            [12] 1137 	mov	_Desired_Heading,a
      0000D3 F5 44            [12] 1138 	mov	(_Desired_Heading + 1),a
                                   1139 	.area GSFINAL (CODE)
      0000D5 02 00 4E         [24] 1140 	ljmp	__sdcc_program_startup
                                   1141 ;--------------------------------------------------------
                                   1142 ; Home
                                   1143 ;--------------------------------------------------------
                                   1144 	.area HOME    (CODE)
                                   1145 	.area HOME    (CODE)
      00004E                       1146 __sdcc_program_startup:
      00004E 02 05 AE         [24] 1147 	ljmp	_main
                                   1148 ;	return from main will return to caller
                                   1149 ;--------------------------------------------------------
                                   1150 ; code
                                   1151 ;--------------------------------------------------------
                                   1152 	.area CSEG    (CODE)
                                   1153 ;------------------------------------------------------------
                                   1154 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1155 ;------------------------------------------------------------
                                   1156 ;i                         Allocated to registers 
                                   1157 ;------------------------------------------------------------
                           000000  1158 	G$SYSCLK_Init$0$0 ==.
                           000000  1159 	C$c8051_SDCC.h$42$0$0 ==.
                                   1160 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1161 ;	-----------------------------------------
                                   1162 ;	 function SYSCLK_Init
                                   1163 ;	-----------------------------------------
      0000D8                       1164 _SYSCLK_Init:
                           000007  1165 	ar7 = 0x07
                           000006  1166 	ar6 = 0x06
                           000005  1167 	ar5 = 0x05
                           000004  1168 	ar4 = 0x04
                           000003  1169 	ar3 = 0x03
                           000002  1170 	ar2 = 0x02
                           000001  1171 	ar1 = 0x01
                           000000  1172 	ar0 = 0x00
                           000000  1173 	C$c8051_SDCC.h$46$1$2 ==.
                                   1174 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000D8 75 B1 67         [24] 1175 	mov	_OSCXCN,#0x67
                           000003  1176 	C$c8051_SDCC.h$49$1$2 ==.
                                   1177 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000DB 7E 00            [12] 1178 	mov	r6,#0x00
      0000DD 7F 01            [12] 1179 	mov	r7,#0x01
      0000DF                       1180 00107$:
      0000DF 1E               [12] 1181 	dec	r6
      0000E0 BE FF 01         [24] 1182 	cjne	r6,#0xFF,00121$
      0000E3 1F               [12] 1183 	dec	r7
      0000E4                       1184 00121$:
      0000E4 EE               [12] 1185 	mov	a,r6
      0000E5 4F               [12] 1186 	orl	a,r7
      0000E6 70 F7            [24] 1187 	jnz	00107$
                           000010  1188 	C$c8051_SDCC.h$51$1$2 ==.
                                   1189 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000E8                       1190 00102$:
      0000E8 E5 B1            [12] 1191 	mov	a,_OSCXCN
      0000EA 30 E7 FB         [24] 1192 	jnb	acc.7,00102$
                           000015  1193 	C$c8051_SDCC.h$53$1$2 ==.
                                   1194 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000ED 75 B2 88         [24] 1195 	mov	_OSCICN,#0x88
                           000018  1196 	C$c8051_SDCC.h$56$1$2 ==.
                           000018  1197 	XG$SYSCLK_Init$0$0 ==.
      0000F0 22               [24] 1198 	ret
                                   1199 ;------------------------------------------------------------
                                   1200 ;Allocation info for local variables in function 'UART0_Init'
                                   1201 ;------------------------------------------------------------
                           000019  1202 	G$UART0_Init$0$0 ==.
                           000019  1203 	C$c8051_SDCC.h$64$1$2 ==.
                                   1204 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1205 ;	-----------------------------------------
                                   1206 ;	 function UART0_Init
                                   1207 ;	-----------------------------------------
      0000F1                       1208 _UART0_Init:
                           000019  1209 	C$c8051_SDCC.h$66$1$4 ==.
                                   1210 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000F1 75 98 50         [24] 1211 	mov	_SCON0,#0x50
                           00001C  1212 	C$c8051_SDCC.h$67$1$4 ==.
                                   1213 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000F4 75 89 20         [24] 1214 	mov	_TMOD,#0x20
                           00001F  1215 	C$c8051_SDCC.h$68$1$4 ==.
                                   1216 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = -(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000F7 75 8D DC         [24] 1217 	mov	_TH1,#0xDC
                           000022  1218 	C$c8051_SDCC.h$69$1$4 ==.
                                   1219 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000FA D2 8E            [12] 1220 	setb	_TR1
                           000024  1221 	C$c8051_SDCC.h$70$1$4 ==.
                                   1222 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000FC 43 8E 10         [24] 1223 	orl	_CKCON,#0x10
                           000027  1224 	C$c8051_SDCC.h$71$1$4 ==.
                                   1225 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      0000FF 43 87 80         [24] 1226 	orl	_PCON,#0x80
                           00002A  1227 	C$c8051_SDCC.h$73$1$4 ==.
                                   1228 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000102 D2 99            [12] 1229 	setb	_TI0
                           00002C  1230 	C$c8051_SDCC.h$74$1$4 ==.
                                   1231 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000104 43 A4 01         [24] 1232 	orl	_P0MDOUT,#0x01
                           00002F  1233 	C$c8051_SDCC.h$75$1$4 ==.
                           00002F  1234 	XG$UART0_Init$0$0 ==.
      000107 22               [24] 1235 	ret
                                   1236 ;------------------------------------------------------------
                                   1237 ;Allocation info for local variables in function 'Sys_Init'
                                   1238 ;------------------------------------------------------------
                           000030  1239 	G$Sys_Init$0$0 ==.
                           000030  1240 	C$c8051_SDCC.h$83$1$4 ==.
                                   1241 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1242 ;	-----------------------------------------
                                   1243 ;	 function Sys_Init
                                   1244 ;	-----------------------------------------
      000108                       1245 _Sys_Init:
                           000030  1246 	C$c8051_SDCC.h$85$1$6 ==.
                                   1247 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000108 75 FF DE         [24] 1248 	mov	_WDTCN,#0xDE
                           000033  1249 	C$c8051_SDCC.h$86$1$6 ==.
                                   1250 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00010B 75 FF AD         [24] 1251 	mov	_WDTCN,#0xAD
                           000036  1252 	C$c8051_SDCC.h$88$1$6 ==.
                                   1253 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00010E 12 00 D8         [24] 1254 	lcall	_SYSCLK_Init
                           000039  1255 	C$c8051_SDCC.h$89$1$6 ==.
                                   1256 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000111 12 00 F1         [24] 1257 	lcall	_UART0_Init
                           00003C  1258 	C$c8051_SDCC.h$91$1$6 ==.
                                   1259 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000114 43 E1 04         [24] 1260 	orl	_XBR0,#0x04
                           00003F  1261 	C$c8051_SDCC.h$92$1$6 ==.
                                   1262 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000117 43 E3 40         [24] 1263 	orl	_XBR2,#0x40
                           000042  1264 	C$c8051_SDCC.h$93$1$6 ==.
                           000042  1265 	XG$Sys_Init$0$0 ==.
      00011A 22               [24] 1266 	ret
                                   1267 ;------------------------------------------------------------
                                   1268 ;Allocation info for local variables in function 'putchar'
                                   1269 ;------------------------------------------------------------
                                   1270 ;c                         Allocated to registers r7 
                                   1271 ;------------------------------------------------------------
                           000043  1272 	G$putchar$0$0 ==.
                           000043  1273 	C$c8051_SDCC.h$98$1$6 ==.
                                   1274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1275 ;	-----------------------------------------
                                   1276 ;	 function putchar
                                   1277 ;	-----------------------------------------
      00011B                       1278 _putchar:
      00011B AF 82            [24] 1279 	mov	r7,dpl
                           000045  1280 	C$c8051_SDCC.h$100$1$8 ==.
                                   1281 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00011D                       1282 00101$:
                           000045  1283 	C$c8051_SDCC.h$101$1$8 ==.
                                   1284 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00011D 10 99 02         [24] 1285 	jbc	_TI0,00112$
      000120 80 FB            [24] 1286 	sjmp	00101$
      000122                       1287 00112$:
                           00004A  1288 	C$c8051_SDCC.h$102$1$8 ==.
                                   1289 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000122 8F 99            [24] 1290 	mov	_SBUF0,r7
                           00004C  1291 	C$c8051_SDCC.h$103$1$8 ==.
                           00004C  1292 	XG$putchar$0$0 ==.
      000124 22               [24] 1293 	ret
                                   1294 ;------------------------------------------------------------
                                   1295 ;Allocation info for local variables in function 'getchar'
                                   1296 ;------------------------------------------------------------
                                   1297 ;c                         Allocated to registers 
                                   1298 ;------------------------------------------------------------
                           00004D  1299 	G$getchar$0$0 ==.
                           00004D  1300 	C$c8051_SDCC.h$108$1$8 ==.
                                   1301 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1302 ;	-----------------------------------------
                                   1303 ;	 function getchar
                                   1304 ;	-----------------------------------------
      000125                       1305 _getchar:
                           00004D  1306 	C$c8051_SDCC.h$111$1$10 ==.
                                   1307 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000125                       1308 00101$:
                           00004D  1309 	C$c8051_SDCC.h$112$1$10 ==.
                                   1310 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000125 10 98 02         [24] 1311 	jbc	_RI0,00112$
      000128 80 FB            [24] 1312 	sjmp	00101$
      00012A                       1313 00112$:
                           000052  1314 	C$c8051_SDCC.h$113$1$10 ==.
                                   1315 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00012A 85 99 82         [24] 1316 	mov	dpl,_SBUF0
                           000055  1317 	C$c8051_SDCC.h$114$1$10 ==.
                                   1318 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00012D 12 01 1B         [24] 1319 	lcall	_putchar
                           000058  1320 	C$c8051_SDCC.h$115$1$10 ==.
                                   1321 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000130 85 99 82         [24] 1322 	mov	dpl,_SBUF0
                           00005B  1323 	C$c8051_SDCC.h$116$1$10 ==.
                           00005B  1324 	XG$getchar$0$0 ==.
      000133 22               [24] 1325 	ret
                                   1326 ;------------------------------------------------------------
                                   1327 ;Allocation info for local variables in function 'lcd_print'
                                   1328 ;------------------------------------------------------------
                                   1329 ;fmt                       Allocated to stack - _bp -5
                                   1330 ;len                       Allocated to registers r6 
                                   1331 ;i                         Allocated to registers 
                                   1332 ;ap                        Allocated to registers 
                                   1333 ;text                      Allocated with name '_lcd_print_text_1_73'
                                   1334 ;------------------------------------------------------------
                           00005C  1335 	G$lcd_print$0$0 ==.
                           00005C  1336 	C$i2c.h$81$1$10 ==.
                                   1337 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:81: void lcd_print(const char *fmt, ...)
                                   1338 ;	-----------------------------------------
                                   1339 ;	 function lcd_print
                                   1340 ;	-----------------------------------------
      000134                       1341 _lcd_print:
      000134 C0 0F            [24] 1342 	push	_bp
      000136 85 81 0F         [24] 1343 	mov	_bp,sp
                           000061  1344 	C$i2c.h$87$1$73 ==.
                                   1345 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:87: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      000139 E5 0F            [12] 1346 	mov	a,_bp
      00013B 24 FB            [12] 1347 	add	a,#0xfb
      00013D F8               [12] 1348 	mov	r0,a
      00013E 86 82            [24] 1349 	mov	dpl,@r0
      000140 08               [12] 1350 	inc	r0
      000141 86 83            [24] 1351 	mov	dph,@r0
      000143 08               [12] 1352 	inc	r0
      000144 86 F0            [24] 1353 	mov	b,@r0
      000146 12 0E A6         [24] 1354 	lcall	_strlen
      000149 E5 82            [12] 1355 	mov	a,dpl
      00014B 85 83 F0         [24] 1356 	mov	b,dph
      00014E 45 F0            [12] 1357 	orl	a,b
      000150 70 02            [24] 1358 	jnz	00102$
      000152 80 62            [24] 1359 	sjmp	00109$
      000154                       1360 00102$:
                           00007C  1361 	C$i2c.h$89$2$74 ==.
                                   1362 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:89: va_start(ap, fmt);
      000154 E5 0F            [12] 1363 	mov	a,_bp
      000156 24 FB            [12] 1364 	add	a,#0xFB
      000158 FF               [12] 1365 	mov	r7,a
      000159 8F 0B            [24] 1366 	mov	_vsprintf_PARM_3,r7
                           000083  1367 	C$i2c.h$90$1$73 ==.
                                   1368 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:90: vsprintf(text, fmt, ap);
      00015B E5 0F            [12] 1369 	mov	a,_bp
      00015D 24 FB            [12] 1370 	add	a,#0xfb
      00015F F8               [12] 1371 	mov	r0,a
      000160 86 08            [24] 1372 	mov	_vsprintf_PARM_2,@r0
      000162 08               [12] 1373 	inc	r0
      000163 86 09            [24] 1374 	mov	(_vsprintf_PARM_2 + 1),@r0
      000165 08               [12] 1375 	inc	r0
      000166 86 0A            [24] 1376 	mov	(_vsprintf_PARM_2 + 2),@r0
      000168 90 00 01         [24] 1377 	mov	dptr,#_lcd_print_text_1_73
      00016B 75 F0 00         [24] 1378 	mov	b,#0x00
      00016E 12 08 1B         [24] 1379 	lcall	_vsprintf
                           000099  1380 	C$i2c.h$93$1$73 ==.
                                   1381 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:93: len = strlen(text);
      000171 90 00 01         [24] 1382 	mov	dptr,#_lcd_print_text_1_73
      000174 75 F0 00         [24] 1383 	mov	b,#0x00
      000177 12 0E A6         [24] 1384 	lcall	_strlen
      00017A AE 82            [24] 1385 	mov	r6,dpl
                           0000A4  1386 	C$i2c.h$94$1$73 ==.
                                   1387 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00017C 7F 00            [12] 1388 	mov	r7,#0x00
      00017E                       1389 00107$:
      00017E C3               [12] 1390 	clr	c
      00017F EF               [12] 1391 	mov	a,r7
      000180 9E               [12] 1392 	subb	a,r6
      000181 50 1F            [24] 1393 	jnc	00105$
                           0000AB  1394 	C$i2c.h$96$2$76 ==.
                                   1395 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:96: if(text[i] == (unsigned char)'\n') text[i] = 13;
      000183 EF               [12] 1396 	mov	a,r7
      000184 24 01            [12] 1397 	add	a,#_lcd_print_text_1_73
      000186 F5 82            [12] 1398 	mov	dpl,a
      000188 E4               [12] 1399 	clr	a
      000189 34 00            [12] 1400 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00018B F5 83            [12] 1401 	mov	dph,a
      00018D E0               [24] 1402 	movx	a,@dptr
      00018E FD               [12] 1403 	mov	r5,a
      00018F BD 0A 0D         [24] 1404 	cjne	r5,#0x0A,00108$
      000192 EF               [12] 1405 	mov	a,r7
      000193 24 01            [12] 1406 	add	a,#_lcd_print_text_1_73
      000195 F5 82            [12] 1407 	mov	dpl,a
      000197 E4               [12] 1408 	clr	a
      000198 34 00            [12] 1409 	addc	a,#(_lcd_print_text_1_73 >> 8)
      00019A F5 83            [12] 1410 	mov	dph,a
      00019C 74 0D            [12] 1411 	mov	a,#0x0D
      00019E F0               [24] 1412 	movx	@dptr,a
      00019F                       1413 00108$:
                           0000C7  1414 	C$i2c.h$94$1$73 ==.
                                   1415 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:94: for(i=0; i<len; i++)
      00019F 0F               [12] 1416 	inc	r7
      0001A0 80 DC            [24] 1417 	sjmp	00107$
      0001A2                       1418 00105$:
                           0000CA  1419 	C$i2c.h$99$1$73 ==.
                                   1420 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:99: i2c_write_data(0xC6, 0x00, text, len);
      0001A2 75 28 01         [24] 1421 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_73
      0001A5 75 29 00         [24] 1422 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_73 >> 8)
      0001A8 75 2A 00         [24] 1423 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001AB 75 27 00         [24] 1424 	mov	_i2c_write_data_PARM_2,#0x00
      0001AE 8E 2B            [24] 1425 	mov	_i2c_write_data_PARM_4,r6
      0001B0 75 82 C6         [24] 1426 	mov	dpl,#0xC6
      0001B3 12 04 4A         [24] 1427 	lcall	_i2c_write_data
      0001B6                       1428 00109$:
      0001B6 D0 0F            [24] 1429 	pop	_bp
                           0000E0  1430 	C$i2c.h$100$1$73 ==.
                           0000E0  1431 	XG$lcd_print$0$0 ==.
      0001B8 22               [24] 1432 	ret
                                   1433 ;------------------------------------------------------------
                                   1434 ;Allocation info for local variables in function 'lcd_clear'
                                   1435 ;------------------------------------------------------------
                                   1436 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_77'
                                   1437 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_77'
                                   1438 ;------------------------------------------------------------
                           0000E1  1439 	G$lcd_clear$0$0 ==.
                           0000E1  1440 	C$i2c.h$103$1$73 ==.
                                   1441 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:103: void lcd_clear()
                                   1442 ;	-----------------------------------------
                                   1443 ;	 function lcd_clear
                                   1444 ;	-----------------------------------------
      0001B9                       1445 _lcd_clear:
                           0000E1  1446 	C$i2c.h$105$1$73 ==.
                                   1447 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:105: unsigned char NumBytes=0, Cmd[2];
      0001B9 75 22 00         [24] 1448 	mov	_lcd_clear_NumBytes_1_77,#0x00
                           0000E4  1449 	C$i2c.h$107$1$77 ==.
                                   1450 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:107: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001BC                       1451 00101$:
      0001BC 74 C0            [12] 1452 	mov	a,#0x100 - 0x40
      0001BE 25 22            [12] 1453 	add	a,_lcd_clear_NumBytes_1_77
      0001C0 40 17            [24] 1454 	jc	00103$
      0001C2 75 2D 22         [24] 1455 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_77
      0001C5 75 2E 00         [24] 1456 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001C8 75 2F 40         [24] 1457 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001CB 75 2C 00         [24] 1458 	mov	_i2c_read_data_PARM_2,#0x00
      0001CE 75 30 01         [24] 1459 	mov	_i2c_read_data_PARM_4,#0x01
      0001D1 75 82 C6         [24] 1460 	mov	dpl,#0xC6
      0001D4 12 04 C0         [24] 1461 	lcall	_i2c_read_data
      0001D7 80 E3            [24] 1462 	sjmp	00101$
      0001D9                       1463 00103$:
                           000101  1464 	C$i2c.h$109$1$77 ==.
                                   1465 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:109: Cmd[0] = 12;
      0001D9 75 23 0C         [24] 1466 	mov	_lcd_clear_Cmd_1_77,#0x0C
                           000104  1467 	C$i2c.h$110$1$77 ==.
                                   1468 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:110: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001DC 75 28 23         [24] 1469 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_77
      0001DF 75 29 00         [24] 1470 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0001E2 75 2A 40         [24] 1471 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0001E5 75 27 00         [24] 1472 	mov	_i2c_write_data_PARM_2,#0x00
      0001E8 75 2B 01         [24] 1473 	mov	_i2c_write_data_PARM_4,#0x01
      0001EB 75 82 C6         [24] 1474 	mov	dpl,#0xC6
      0001EE 12 04 4A         [24] 1475 	lcall	_i2c_write_data
                           000119  1476 	C$i2c.h$111$1$77 ==.
                           000119  1477 	XG$lcd_clear$0$0 ==.
      0001F1 22               [24] 1478 	ret
                                   1479 ;------------------------------------------------------------
                                   1480 ;Allocation info for local variables in function 'read_keypad'
                                   1481 ;------------------------------------------------------------
                                   1482 ;i                         Allocated to registers r7 
                                   1483 ;Data                      Allocated with name '_read_keypad_Data_1_78'
                                   1484 ;------------------------------------------------------------
                           00011A  1485 	G$read_keypad$0$0 ==.
                           00011A  1486 	C$i2c.h$114$1$77 ==.
                                   1487 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:114: char read_keypad()
                                   1488 ;	-----------------------------------------
                                   1489 ;	 function read_keypad
                                   1490 ;	-----------------------------------------
      0001F2                       1491 _read_keypad:
                           00011A  1492 	C$i2c.h$118$1$78 ==.
                                   1493 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:118: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      0001F2 75 2D 25         [24] 1494 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_78
      0001F5 75 2E 00         [24] 1495 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001F8 75 2F 40         [24] 1496 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001FB 75 2C 01         [24] 1497 	mov	_i2c_read_data_PARM_2,#0x01
      0001FE 75 30 02         [24] 1498 	mov	_i2c_read_data_PARM_4,#0x02
      000201 75 82 C6         [24] 1499 	mov	dpl,#0xC6
      000204 12 04 C0         [24] 1500 	lcall	_i2c_read_data
                           00012F  1501 	C$i2c.h$119$1$78 ==.
                                   1502 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:119: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000207 74 FF            [12] 1503 	mov	a,#0xFF
      000209 B5 25 05         [24] 1504 	cjne	a,_read_keypad_Data_1_78,00102$
      00020C 75 82 00         [24] 1505 	mov	dpl,#0x00
      00020F 80 5F            [24] 1506 	sjmp	00116$
      000211                       1507 00102$:
                           000139  1508 	C$i2c.h$121$1$78 ==.
                                   1509 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      000211 7F 00            [12] 1510 	mov	r7,#0x00
      000213 8F 06            [24] 1511 	mov	ar6,r7
      000215                       1512 00114$:
                           00013D  1513 	C$i2c.h$123$2$79 ==.
                                   1514 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:123: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000215 8E F0            [24] 1515 	mov	b,r6
      000217 05 F0            [12] 1516 	inc	b
      000219 7C 01            [12] 1517 	mov	r4,#0x01
      00021B 7D 00            [12] 1518 	mov	r5,#0x00
      00021D 80 06            [24] 1519 	sjmp	00145$
      00021F                       1520 00144$:
      00021F EC               [12] 1521 	mov	a,r4
      000220 2C               [12] 1522 	add	a,r4
      000221 FC               [12] 1523 	mov	r4,a
      000222 ED               [12] 1524 	mov	a,r5
      000223 33               [12] 1525 	rlc	a
      000224 FD               [12] 1526 	mov	r5,a
      000225                       1527 00145$:
      000225 D5 F0 F7         [24] 1528 	djnz	b,00144$
      000228 AA 25            [24] 1529 	mov	r2,_read_keypad_Data_1_78
      00022A 7B 00            [12] 1530 	mov	r3,#0x00
      00022C EA               [12] 1531 	mov	a,r2
      00022D 52 04            [12] 1532 	anl	ar4,a
      00022F EB               [12] 1533 	mov	a,r3
      000230 52 05            [12] 1534 	anl	ar5,a
      000232 EC               [12] 1535 	mov	a,r4
      000233 4D               [12] 1536 	orl	a,r5
      000234 60 07            [24] 1537 	jz	00115$
                           00015E  1538 	C$i2c.h$124$2$79 ==.
                                   1539 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:124: return i+49;
      000236 74 31            [12] 1540 	mov	a,#0x31
      000238 2F               [12] 1541 	add	a,r7
      000239 F5 82            [12] 1542 	mov	dpl,a
      00023B 80 33            [24] 1543 	sjmp	00116$
      00023D                       1544 00115$:
                           000165  1545 	C$i2c.h$121$1$78 ==.
                                   1546 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:121: for(i=0; i<8; i++)             //loop 8 times
      00023D 0E               [12] 1547 	inc	r6
      00023E 8E 07            [24] 1548 	mov	ar7,r6
      000240 BE 08 00         [24] 1549 	cjne	r6,#0x08,00147$
      000243                       1550 00147$:
      000243 40 D0            [24] 1551 	jc	00114$
                           00016D  1552 	C$i2c.h$127$1$78 ==.
                                   1553 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:127: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000245 E5 26            [12] 1554 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000247 30 E0 05         [24] 1555 	jnb	acc.0,00107$
      00024A 75 82 39         [24] 1556 	mov	dpl,#0x39
      00024D 80 21            [24] 1557 	sjmp	00116$
      00024F                       1558 00107$:
                           000177  1559 	C$i2c.h$129$1$78 ==.
                                   1560 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:129: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      00024F E5 26            [12] 1561 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000251 30 E1 05         [24] 1562 	jnb	acc.1,00109$
      000254 75 82 2A         [24] 1563 	mov	dpl,#0x2A
      000257 80 17            [24] 1564 	sjmp	00116$
      000259                       1565 00109$:
                           000181  1566 	C$i2c.h$131$1$78 ==.
                                   1567 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:131: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      000259 E5 26            [12] 1568 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      00025B 30 E2 05         [24] 1569 	jnb	acc.2,00111$
      00025E 75 82 30         [24] 1570 	mov	dpl,#0x30
      000261 80 0D            [24] 1571 	sjmp	00116$
      000263                       1572 00111$:
                           00018B  1573 	C$i2c.h$133$1$78 ==.
                                   1574 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:133: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000263 E5 26            [12] 1575 	mov	a,(_read_keypad_Data_1_78 + 0x0001)
      000265 30 E3 05         [24] 1576 	jnb	acc.3,00113$
      000268 75 82 23         [24] 1577 	mov	dpl,#0x23
      00026B 80 03            [24] 1578 	sjmp	00116$
      00026D                       1579 00113$:
                           000195  1580 	C$i2c.h$135$1$78 ==.
                                   1581 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:135: return -1;                     //else return a numerical -1 (0xFF)
      00026D 75 82 FF         [24] 1582 	mov	dpl,#0xFF
      000270                       1583 00116$:
                           000198  1584 	C$i2c.h$136$1$78 ==.
                           000198  1585 	XG$read_keypad$0$0 ==.
      000270 22               [24] 1586 	ret
                                   1587 ;------------------------------------------------------------
                                   1588 ;Allocation info for local variables in function 'kpd_input'
                                   1589 ;------------------------------------------------------------
                                   1590 ;mode                      Allocated to registers r7 
                                   1591 ;sum                       Allocated to registers r5 r6 
                                   1592 ;key                       Allocated to registers r3 
                                   1593 ;i                         Allocated to registers 
                                   1594 ;------------------------------------------------------------
                           000199  1595 	G$kpd_input$0$0 ==.
                           000199  1596 	C$i2c.h$148$1$78 ==.
                                   1597 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:148: unsigned int kpd_input(char mode)
                                   1598 ;	-----------------------------------------
                                   1599 ;	 function kpd_input
                                   1600 ;	-----------------------------------------
      000271                       1601 _kpd_input:
      000271 AF 82            [24] 1602 	mov	r7,dpl
                           00019B  1603 	C$i2c.h$153$1$81 ==.
                                   1604 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:153: sum = 0;
                           00019B  1605 	C$i2c.h$156$1$81 ==.
                                   1606 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:156: if(mode==0)lcd_print("\nType digits; end w/#");
      000273 E4               [12] 1607 	clr	a
      000274 FD               [12] 1608 	mov	r5,a
      000275 FE               [12] 1609 	mov	r6,a
      000276 EF               [12] 1610 	mov	a,r7
      000277 70 1D            [24] 1611 	jnz	00102$
      000279 C0 06            [24] 1612 	push	ar6
      00027B C0 05            [24] 1613 	push	ar5
      00027D 74 DE            [12] 1614 	mov	a,#___str_0
      00027F C0 E0            [24] 1615 	push	acc
      000281 74 0E            [12] 1616 	mov	a,#(___str_0 >> 8)
      000283 C0 E0            [24] 1617 	push	acc
      000285 74 80            [12] 1618 	mov	a,#0x80
      000287 C0 E0            [24] 1619 	push	acc
      000289 12 01 34         [24] 1620 	lcall	_lcd_print
      00028C 15 81            [12] 1621 	dec	sp
      00028E 15 81            [12] 1622 	dec	sp
      000290 15 81            [12] 1623 	dec	sp
      000292 D0 05            [24] 1624 	pop	ar5
      000294 D0 06            [24] 1625 	pop	ar6
      000296                       1626 00102$:
                           0001BE  1627 	C$i2c.h$158$1$81 ==.
                                   1628 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:158: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      000296 C0 06            [24] 1629 	push	ar6
      000298 C0 05            [24] 1630 	push	ar5
      00029A 74 08            [12] 1631 	mov	a,#0x08
      00029C C0 E0            [24] 1632 	push	acc
      00029E E4               [12] 1633 	clr	a
      00029F C0 E0            [24] 1634 	push	acc
      0002A1 74 08            [12] 1635 	mov	a,#0x08
      0002A3 C0 E0            [24] 1636 	push	acc
      0002A5 E4               [12] 1637 	clr	a
      0002A6 C0 E0            [24] 1638 	push	acc
      0002A8 74 08            [12] 1639 	mov	a,#0x08
      0002AA C0 E0            [24] 1640 	push	acc
      0002AC E4               [12] 1641 	clr	a
      0002AD C0 E0            [24] 1642 	push	acc
      0002AF 74 08            [12] 1643 	mov	a,#0x08
      0002B1 C0 E0            [24] 1644 	push	acc
      0002B3 E4               [12] 1645 	clr	a
      0002B4 C0 E0            [24] 1646 	push	acc
      0002B6 74 08            [12] 1647 	mov	a,#0x08
      0002B8 C0 E0            [24] 1648 	push	acc
      0002BA E4               [12] 1649 	clr	a
      0002BB C0 E0            [24] 1650 	push	acc
      0002BD 74 F4            [12] 1651 	mov	a,#___str_1
      0002BF C0 E0            [24] 1652 	push	acc
      0002C1 74 0E            [12] 1653 	mov	a,#(___str_1 >> 8)
      0002C3 C0 E0            [24] 1654 	push	acc
      0002C5 74 80            [12] 1655 	mov	a,#0x80
      0002C7 C0 E0            [24] 1656 	push	acc
      0002C9 12 01 34         [24] 1657 	lcall	_lcd_print
      0002CC E5 81            [12] 1658 	mov	a,sp
      0002CE 24 F3            [12] 1659 	add	a,#0xf3
      0002D0 F5 81            [12] 1660 	mov	sp,a
                           0001FA  1661 	C$i2c.h$160$1$81 ==.
                                   1662 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:160: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002D2 90 A1 20         [24] 1663 	mov	dptr,#0xA120
      0002D5 75 F0 07         [24] 1664 	mov	b,#0x07
      0002D8 E4               [12] 1665 	clr	a
      0002D9 12 03 E5         [24] 1666 	lcall	_delay_time
      0002DC D0 05            [24] 1667 	pop	ar5
      0002DE D0 06            [24] 1668 	pop	ar6
                           000208  1669 	C$i2c.h$164$1$81 ==.
                                   1670 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0002E0 7F 00            [12] 1671 	mov	r7,#0x00
                           00020A  1672 	C$i2c.h$166$3$84 ==.
                                   1673 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:166: while(((key=read_keypad()) == -1) || (key == '*'))delay_time(10000);
      0002E2                       1674 00104$:
      0002E2 C0 07            [24] 1675 	push	ar7
      0002E4 C0 06            [24] 1676 	push	ar6
      0002E6 C0 05            [24] 1677 	push	ar5
      0002E8 12 01 F2         [24] 1678 	lcall	_read_keypad
      0002EB AC 82            [24] 1679 	mov	r4,dpl
      0002ED D0 05            [24] 1680 	pop	ar5
      0002EF D0 06            [24] 1681 	pop	ar6
      0002F1 D0 07            [24] 1682 	pop	ar7
      0002F3 8C 03            [24] 1683 	mov	ar3,r4
      0002F5 BC FF 02         [24] 1684 	cjne	r4,#0xFF,00146$
      0002F8 80 03            [24] 1685 	sjmp	00105$
      0002FA                       1686 00146$:
      0002FA BB 2A 17         [24] 1687 	cjne	r3,#0x2A,00106$
      0002FD                       1688 00105$:
      0002FD 90 27 10         [24] 1689 	mov	dptr,#0x2710
      000300 E4               [12] 1690 	clr	a
      000301 F5 F0            [12] 1691 	mov	b,a
      000303 C0 07            [24] 1692 	push	ar7
      000305 C0 06            [24] 1693 	push	ar6
      000307 C0 05            [24] 1694 	push	ar5
      000309 12 03 E5         [24] 1695 	lcall	_delay_time
      00030C D0 05            [24] 1696 	pop	ar5
      00030E D0 06            [24] 1697 	pop	ar6
      000310 D0 07            [24] 1698 	pop	ar7
      000312 80 CE            [24] 1699 	sjmp	00104$
      000314                       1700 00106$:
                           00023C  1701 	C$i2c.h$167$2$82 ==.
                                   1702 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:167: if(key == '#')
      000314 BB 23 2A         [24] 1703 	cjne	r3,#0x23,00114$
                           00023F  1704 	C$i2c.h$169$3$83 ==.
                                   1705 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:169: while(read_keypad() == '#')delay_time(10000);
      000317                       1706 00107$:
      000317 C0 06            [24] 1707 	push	ar6
      000319 C0 05            [24] 1708 	push	ar5
      00031B 12 01 F2         [24] 1709 	lcall	_read_keypad
      00031E AC 82            [24] 1710 	mov	r4,dpl
      000320 D0 05            [24] 1711 	pop	ar5
      000322 D0 06            [24] 1712 	pop	ar6
      000324 BC 23 13         [24] 1713 	cjne	r4,#0x23,00109$
      000327 90 27 10         [24] 1714 	mov	dptr,#0x2710
      00032A E4               [12] 1715 	clr	a
      00032B F5 F0            [12] 1716 	mov	b,a
      00032D C0 06            [24] 1717 	push	ar6
      00032F C0 05            [24] 1718 	push	ar5
      000331 12 03 E5         [24] 1719 	lcall	_delay_time
      000334 D0 05            [24] 1720 	pop	ar5
      000336 D0 06            [24] 1721 	pop	ar6
      000338 80 DD            [24] 1722 	sjmp	00107$
      00033A                       1723 00109$:
                           000262  1724 	C$i2c.h$170$3$83 ==.
                                   1725 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:170: return sum;
      00033A 8D 82            [24] 1726 	mov	dpl,r5
      00033C 8E 83            [24] 1727 	mov	dph,r6
      00033E 02 03 E4         [24] 1728 	ljmp	00119$
      000341                       1729 00114$:
                           000269  1730 	C$i2c.h$174$3$84 ==.
                                   1731 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:174: lcd_print("%c", key);
      000341 EB               [12] 1732 	mov	a,r3
      000342 FA               [12] 1733 	mov	r2,a
      000343 33               [12] 1734 	rlc	a
      000344 95 E0            [12] 1735 	subb	a,acc
      000346 FC               [12] 1736 	mov	r4,a
      000347 C0 07            [24] 1737 	push	ar7
      000349 C0 06            [24] 1738 	push	ar6
      00034B C0 05            [24] 1739 	push	ar5
      00034D C0 04            [24] 1740 	push	ar4
      00034F C0 03            [24] 1741 	push	ar3
      000351 C0 02            [24] 1742 	push	ar2
      000353 C0 02            [24] 1743 	push	ar2
      000355 C0 04            [24] 1744 	push	ar4
      000357 74 04            [12] 1745 	mov	a,#___str_2
      000359 C0 E0            [24] 1746 	push	acc
      00035B 74 0F            [12] 1747 	mov	a,#(___str_2 >> 8)
      00035D C0 E0            [24] 1748 	push	acc
      00035F 74 80            [12] 1749 	mov	a,#0x80
      000361 C0 E0            [24] 1750 	push	acc
      000363 12 01 34         [24] 1751 	lcall	_lcd_print
      000366 E5 81            [12] 1752 	mov	a,sp
      000368 24 FB            [12] 1753 	add	a,#0xfb
      00036A F5 81            [12] 1754 	mov	sp,a
      00036C D0 02            [24] 1755 	pop	ar2
      00036E D0 03            [24] 1756 	pop	ar3
      000370 D0 04            [24] 1757 	pop	ar4
      000372 D0 05            [24] 1758 	pop	ar5
      000374 D0 06            [24] 1759 	pop	ar6
                           00029E  1760 	C$i2c.h$175$1$81 ==.
                                   1761 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:175: sum = sum*10 + key - '0';
      000376 8D 11            [24] 1762 	mov	__mulint_PARM_2,r5
      000378 8E 12            [24] 1763 	mov	(__mulint_PARM_2 + 1),r6
      00037A 90 00 0A         [24] 1764 	mov	dptr,#0x000A
      00037D C0 04            [24] 1765 	push	ar4
      00037F C0 03            [24] 1766 	push	ar3
      000381 C0 02            [24] 1767 	push	ar2
      000383 12 07 8E         [24] 1768 	lcall	__mulint
      000386 A8 82            [24] 1769 	mov	r0,dpl
      000388 A9 83            [24] 1770 	mov	r1,dph
      00038A D0 02            [24] 1771 	pop	ar2
      00038C D0 03            [24] 1772 	pop	ar3
      00038E D0 04            [24] 1773 	pop	ar4
      000390 D0 07            [24] 1774 	pop	ar7
      000392 EA               [12] 1775 	mov	a,r2
      000393 28               [12] 1776 	add	a,r0
      000394 F8               [12] 1777 	mov	r0,a
      000395 EC               [12] 1778 	mov	a,r4
      000396 39               [12] 1779 	addc	a,r1
      000397 F9               [12] 1780 	mov	r1,a
      000398 E8               [12] 1781 	mov	a,r0
      000399 24 D0            [12] 1782 	add	a,#0xD0
      00039B FD               [12] 1783 	mov	r5,a
      00039C E9               [12] 1784 	mov	a,r1
      00039D 34 FF            [12] 1785 	addc	a,#0xFF
      00039F FE               [12] 1786 	mov	r6,a
                           0002C8  1787 	C$i2c.h$176$3$84 ==.
                                   1788 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:176: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003A0                       1789 00110$:
      0003A0 C0 07            [24] 1790 	push	ar7
      0003A2 C0 06            [24] 1791 	push	ar6
      0003A4 C0 05            [24] 1792 	push	ar5
      0003A6 C0 03            [24] 1793 	push	ar3
      0003A8 12 01 F2         [24] 1794 	lcall	_read_keypad
      0003AB AC 82            [24] 1795 	mov	r4,dpl
      0003AD D0 03            [24] 1796 	pop	ar3
      0003AF D0 05            [24] 1797 	pop	ar5
      0003B1 D0 06            [24] 1798 	pop	ar6
      0003B3 D0 07            [24] 1799 	pop	ar7
      0003B5 EC               [12] 1800 	mov	a,r4
      0003B6 B5 03 1B         [24] 1801 	cjne	a,ar3,00118$
      0003B9 90 27 10         [24] 1802 	mov	dptr,#0x2710
      0003BC E4               [12] 1803 	clr	a
      0003BD F5 F0            [12] 1804 	mov	b,a
      0003BF C0 07            [24] 1805 	push	ar7
      0003C1 C0 06            [24] 1806 	push	ar6
      0003C3 C0 05            [24] 1807 	push	ar5
      0003C5 C0 03            [24] 1808 	push	ar3
      0003C7 12 03 E5         [24] 1809 	lcall	_delay_time
      0003CA D0 03            [24] 1810 	pop	ar3
      0003CC D0 05            [24] 1811 	pop	ar5
      0003CE D0 06            [24] 1812 	pop	ar6
      0003D0 D0 07            [24] 1813 	pop	ar7
      0003D2 80 CC            [24] 1814 	sjmp	00110$
      0003D4                       1815 00118$:
                           0002FC  1816 	C$i2c.h$164$1$81 ==.
                                   1817 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:164: for(i=0; i<5; i++)
      0003D4 0F               [12] 1818 	inc	r7
      0003D5 C3               [12] 1819 	clr	c
      0003D6 EF               [12] 1820 	mov	a,r7
      0003D7 64 80            [12] 1821 	xrl	a,#0x80
      0003D9 94 85            [12] 1822 	subb	a,#0x85
      0003DB 50 03            [24] 1823 	jnc	00155$
      0003DD 02 02 E2         [24] 1824 	ljmp	00104$
      0003E0                       1825 00155$:
                           000308  1826 	C$i2c.h$179$1$81 ==.
                                   1827 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:179: return sum;
      0003E0 8D 82            [24] 1828 	mov	dpl,r5
      0003E2 8E 83            [24] 1829 	mov	dph,r6
      0003E4                       1830 00119$:
                           00030C  1831 	C$i2c.h$180$1$81 ==.
                           00030C  1832 	XG$kpd_input$0$0 ==.
      0003E4 22               [24] 1833 	ret
                                   1834 ;------------------------------------------------------------
                                   1835 ;Allocation info for local variables in function 'delay_time'
                                   1836 ;------------------------------------------------------------
                                   1837 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1838 ;index                     Allocated to registers 
                                   1839 ;------------------------------------------------------------
                           00030D  1840 	G$delay_time$0$0 ==.
                           00030D  1841 	C$i2c.h$189$1$81 ==.
                                   1842 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:189: void delay_time (unsigned long time_end)
                                   1843 ;	-----------------------------------------
                                   1844 ;	 function delay_time
                                   1845 ;	-----------------------------------------
      0003E5                       1846 _delay_time:
      0003E5 AC 82            [24] 1847 	mov	r4,dpl
      0003E7 AD 83            [24] 1848 	mov	r5,dph
      0003E9 AE F0            [24] 1849 	mov	r6,b
      0003EB FF               [12] 1850 	mov	r7,a
                           000314  1851 	C$i2c.h$192$1$86 ==.
                                   1852 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:192: for (index = 0; index < time_end; index++); //for loop delay
      0003EC 78 00            [12] 1853 	mov	r0,#0x00
      0003EE 79 00            [12] 1854 	mov	r1,#0x00
      0003F0 7A 00            [12] 1855 	mov	r2,#0x00
      0003F2 7B 00            [12] 1856 	mov	r3,#0x00
      0003F4                       1857 00103$:
      0003F4 C3               [12] 1858 	clr	c
      0003F5 E8               [12] 1859 	mov	a,r0
      0003F6 9C               [12] 1860 	subb	a,r4
      0003F7 E9               [12] 1861 	mov	a,r1
      0003F8 9D               [12] 1862 	subb	a,r5
      0003F9 EA               [12] 1863 	mov	a,r2
      0003FA 9E               [12] 1864 	subb	a,r6
      0003FB EB               [12] 1865 	mov	a,r3
      0003FC 9F               [12] 1866 	subb	a,r7
      0003FD 50 0F            [24] 1867 	jnc	00105$
      0003FF 08               [12] 1868 	inc	r0
      000400 B8 00 09         [24] 1869 	cjne	r0,#0x00,00115$
      000403 09               [12] 1870 	inc	r1
      000404 B9 00 05         [24] 1871 	cjne	r1,#0x00,00115$
      000407 0A               [12] 1872 	inc	r2
      000408 BA 00 E9         [24] 1873 	cjne	r2,#0x00,00103$
      00040B 0B               [12] 1874 	inc	r3
      00040C                       1875 00115$:
      00040C 80 E6            [24] 1876 	sjmp	00103$
      00040E                       1877 00105$:
                           000336  1878 	C$i2c.h$193$1$86 ==.
                           000336  1879 	XG$delay_time$0$0 ==.
      00040E 22               [24] 1880 	ret
                                   1881 ;------------------------------------------------------------
                                   1882 ;Allocation info for local variables in function 'i2c_start'
                                   1883 ;------------------------------------------------------------
                           000337  1884 	G$i2c_start$0$0 ==.
                           000337  1885 	C$i2c.h$196$1$86 ==.
                                   1886 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:196: void i2c_start(void)
                                   1887 ;	-----------------------------------------
                                   1888 ;	 function i2c_start
                                   1889 ;	-----------------------------------------
      00040F                       1890 _i2c_start:
                           000337  1891 	C$i2c.h$198$1$88 ==.
                                   1892 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:198: while(BUSY);              //Wait until SMBus0 is free
      00040F                       1893 00101$:
      00040F 20 C7 FD         [24] 1894 	jb	_BUSY,00101$
                           00033A  1895 	C$i2c.h$199$1$88 ==.
                                   1896 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:199: STA = 1;                  //Set Start Bit
      000412 D2 C5            [12] 1897 	setb	_STA
                           00033C  1898 	C$i2c.h$200$1$88 ==.
                                   1899 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:200: while(!SI);               //Wait until start sent
      000414                       1900 00104$:
      000414 30 C3 FD         [24] 1901 	jnb	_SI,00104$
                           00033F  1902 	C$i2c.h$201$1$88 ==.
                                   1903 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:201: STA = 0;                  //Clear start bit
      000417 C2 C5            [12] 1904 	clr	_STA
                           000341  1905 	C$i2c.h$202$1$88 ==.
                                   1906 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:202: SI = 0;                   //Clear SI
      000419 C2 C3            [12] 1907 	clr	_SI
                           000343  1908 	C$i2c.h$203$1$88 ==.
                           000343  1909 	XG$i2c_start$0$0 ==.
      00041B 22               [24] 1910 	ret
                                   1911 ;------------------------------------------------------------
                                   1912 ;Allocation info for local variables in function 'i2c_write'
                                   1913 ;------------------------------------------------------------
                                   1914 ;output_data               Allocated to registers 
                                   1915 ;------------------------------------------------------------
                           000344  1916 	G$i2c_write$0$0 ==.
                           000344  1917 	C$i2c.h$206$1$88 ==.
                                   1918 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:206: void i2c_write(unsigned char output_data)
                                   1919 ;	-----------------------------------------
                                   1920 ;	 function i2c_write
                                   1921 ;	-----------------------------------------
      00041C                       1922 _i2c_write:
      00041C 85 82 C2         [24] 1923 	mov	_SMB0DAT,dpl
                           000347  1924 	C$i2c.h$209$1$90 ==.
                                   1925 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:209: while(!SI);               //Wait until send is complete
      00041F                       1926 00101$:
                           000347  1927 	C$i2c.h$210$1$90 ==.
                                   1928 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:210: SI = 0;                   //Clear SI
      00041F 10 C3 02         [24] 1929 	jbc	_SI,00112$
      000422 80 FB            [24] 1930 	sjmp	00101$
      000424                       1931 00112$:
                           00034C  1932 	C$i2c.h$211$1$90 ==.
                           00034C  1933 	XG$i2c_write$0$0 ==.
      000424 22               [24] 1934 	ret
                                   1935 ;------------------------------------------------------------
                                   1936 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   1937 ;------------------------------------------------------------
                                   1938 ;output_data               Allocated to registers 
                                   1939 ;------------------------------------------------------------
                           00034D  1940 	G$i2c_write_and_stop$0$0 ==.
                           00034D  1941 	C$i2c.h$214$1$90 ==.
                                   1942 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:214: void i2c_write_and_stop(unsigned char output_data)
                                   1943 ;	-----------------------------------------
                                   1944 ;	 function i2c_write_and_stop
                                   1945 ;	-----------------------------------------
      000425                       1946 _i2c_write_and_stop:
      000425 85 82 C2         [24] 1947 	mov	_SMB0DAT,dpl
                           000350  1948 	C$i2c.h$217$1$92 ==.
                                   1949 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:217: STO = 1;                  //Set stop bit
      000428 D2 C4            [12] 1950 	setb	_STO
                           000352  1951 	C$i2c.h$218$1$92 ==.
                                   1952 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:218: while(!SI);               //Wait until send is complete
      00042A                       1953 00101$:
                           000352  1954 	C$i2c.h$219$1$92 ==.
                                   1955 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:219: SI = 0;                   //clear SI
      00042A 10 C3 02         [24] 1956 	jbc	_SI,00112$
      00042D 80 FB            [24] 1957 	sjmp	00101$
      00042F                       1958 00112$:
                           000357  1959 	C$i2c.h$220$1$92 ==.
                           000357  1960 	XG$i2c_write_and_stop$0$0 ==.
      00042F 22               [24] 1961 	ret
                                   1962 ;------------------------------------------------------------
                                   1963 ;Allocation info for local variables in function 'i2c_read'
                                   1964 ;------------------------------------------------------------
                                   1965 ;input_data                Allocated to registers 
                                   1966 ;------------------------------------------------------------
                           000358  1967 	G$i2c_read$0$0 ==.
                           000358  1968 	C$i2c.h$223$1$92 ==.
                                   1969 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:223: unsigned char i2c_read(void)
                                   1970 ;	-----------------------------------------
                                   1971 ;	 function i2c_read
                                   1972 ;	-----------------------------------------
      000430                       1973 _i2c_read:
                           000358  1974 	C$i2c.h$226$1$94 ==.
                                   1975 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:226: while(!SI);                //Wait until we have data to read
      000430                       1976 00101$:
      000430 30 C3 FD         [24] 1977 	jnb	_SI,00101$
                           00035B  1978 	C$i2c.h$227$1$94 ==.
                                   1979 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:227: input_data = SMB0DAT;      //Read the data
      000433 85 C2 82         [24] 1980 	mov	dpl,_SMB0DAT
                           00035E  1981 	C$i2c.h$228$1$94 ==.
                                   1982 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:228: SI = 0;                    //Clear SI
      000436 C2 C3            [12] 1983 	clr	_SI
                           000360  1984 	C$i2c.h$229$1$94 ==.
                                   1985 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:229: return input_data;         //Return the read data
                           000360  1986 	C$i2c.h$230$1$94 ==.
                           000360  1987 	XG$i2c_read$0$0 ==.
      000438 22               [24] 1988 	ret
                                   1989 ;------------------------------------------------------------
                                   1990 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   1991 ;------------------------------------------------------------
                                   1992 ;input_data                Allocated to registers r7 
                                   1993 ;------------------------------------------------------------
                           000361  1994 	G$i2c_read_and_stop$0$0 ==.
                           000361  1995 	C$i2c.h$233$1$94 ==.
                                   1996 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:233: unsigned char i2c_read_and_stop(void)
                                   1997 ;	-----------------------------------------
                                   1998 ;	 function i2c_read_and_stop
                                   1999 ;	-----------------------------------------
      000439                       2000 _i2c_read_and_stop:
                           000361  2001 	C$i2c.h$236$1$96 ==.
                                   2002 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:236: while(!SI);                //Wait until we have data to read
      000439                       2003 00101$:
      000439 30 C3 FD         [24] 2004 	jnb	_SI,00101$
                           000364  2005 	C$i2c.h$237$1$96 ==.
                                   2006 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:237: input_data = SMB0DAT;      //Read the data
      00043C AF C2            [24] 2007 	mov	r7,_SMB0DAT
                           000366  2008 	C$i2c.h$238$1$96 ==.
                                   2009 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:238: SI = 0;                    //Clear SI
      00043E C2 C3            [12] 2010 	clr	_SI
                           000368  2011 	C$i2c.h$239$1$96 ==.
                                   2012 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:239: STO = 1;                   //Set stop bit
      000440 D2 C4            [12] 2013 	setb	_STO
                           00036A  2014 	C$i2c.h$240$1$96 ==.
                                   2015 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:240: while(!SI);                //Wait for stop
      000442                       2016 00104$:
                           00036A  2017 	C$i2c.h$241$1$96 ==.
                                   2018 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;
      000442 10 C3 02         [24] 2019 	jbc	_SI,00122$
      000445 80 FB            [24] 2020 	sjmp	00104$
      000447                       2021 00122$:
                           00036F  2022 	C$i2c.h$242$1$96 ==.
                                   2023 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:242: return input_data;         //Return the read data
      000447 8F 82            [24] 2024 	mov	dpl,r7
                           000371  2025 	C$i2c.h$243$1$96 ==.
                           000371  2026 	XG$i2c_read_and_stop$0$0 ==.
      000449 22               [24] 2027 	ret
                                   2028 ;------------------------------------------------------------
                                   2029 ;Allocation info for local variables in function 'i2c_write_data'
                                   2030 ;------------------------------------------------------------
                                   2031 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2032 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2033 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2034 ;addr                      Allocated to registers r7 
                                   2035 ;i                         Allocated to registers 
                                   2036 ;------------------------------------------------------------
                           000372  2037 	G$i2c_write_data$0$0 ==.
                           000372  2038 	C$i2c.h$246$1$96 ==.
                                   2039 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:246: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2040 ;	-----------------------------------------
                                   2041 ;	 function i2c_write_data
                                   2042 ;	-----------------------------------------
      00044A                       2043 _i2c_write_data:
      00044A AF 82            [24] 2044 	mov	r7,dpl
                           000374  2045 	C$i2c.h$250$1$98 ==.
                                   2046 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:250: i2c_start();               //initiate I2C transfer
      00044C C0 07            [24] 2047 	push	ar7
      00044E 12 04 0F         [24] 2048 	lcall	_i2c_start
      000451 D0 07            [24] 2049 	pop	ar7
                           00037B  2050 	C$i2c.h$251$1$98 ==.
                                   2051 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:251: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000453 74 FE            [12] 2052 	mov	a,#0xFE
      000455 5F               [12] 2053 	anl	a,r7
      000456 F5 82            [12] 2054 	mov	dpl,a
      000458 12 04 1C         [24] 2055 	lcall	_i2c_write
                           000383  2056 	C$i2c.h$252$1$98 ==.
                                   2057 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:252: i2c_write(start_reg);      //write the start register to the bus
      00045B 85 27 82         [24] 2058 	mov	dpl,_i2c_write_data_PARM_2
      00045E 12 04 1C         [24] 2059 	lcall	_i2c_write
                           000389  2060 	C$i2c.h$253$1$98 ==.
                                   2061 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      000461 7F 00            [12] 2062 	mov	r7,#0x00
      000463                       2063 00103$:
      000463 AD 2B            [24] 2064 	mov	r5,_i2c_write_data_PARM_4
      000465 7E 00            [12] 2065 	mov	r6,#0x00
      000467 1D               [12] 2066 	dec	r5
      000468 BD FF 01         [24] 2067 	cjne	r5,#0xFF,00114$
      00046B 1E               [12] 2068 	dec	r6
      00046C                       2069 00114$:
      00046C 8F 03            [24] 2070 	mov	ar3,r7
      00046E 7C 00            [12] 2071 	mov	r4,#0x00
      000470 C3               [12] 2072 	clr	c
      000471 EB               [12] 2073 	mov	a,r3
      000472 9D               [12] 2074 	subb	a,r5
      000473 EC               [12] 2075 	mov	a,r4
      000474 64 80            [12] 2076 	xrl	a,#0x80
      000476 8E F0            [24] 2077 	mov	b,r6
      000478 63 F0 80         [24] 2078 	xrl	b,#0x80
      00047B 95 F0            [12] 2079 	subb	a,b
      00047D 50 1F            [24] 2080 	jnc	00101$
                           0003A7  2081 	C$i2c.h$254$1$98 ==.
                                   2082 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(buffer[i]);
      00047F EF               [12] 2083 	mov	a,r7
      000480 25 28            [12] 2084 	add	a,_i2c_write_data_PARM_3
      000482 FC               [12] 2085 	mov	r4,a
      000483 E4               [12] 2086 	clr	a
      000484 35 29            [12] 2087 	addc	a,(_i2c_write_data_PARM_3 + 1)
      000486 FD               [12] 2088 	mov	r5,a
      000487 AE 2A            [24] 2089 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      000489 8C 82            [24] 2090 	mov	dpl,r4
      00048B 8D 83            [24] 2091 	mov	dph,r5
      00048D 8E F0            [24] 2092 	mov	b,r6
      00048F 12 0E BE         [24] 2093 	lcall	__gptrget
      000492 F5 82            [12] 2094 	mov	dpl,a
      000494 C0 07            [24] 2095 	push	ar7
      000496 12 04 1C         [24] 2096 	lcall	_i2c_write
      000499 D0 07            [24] 2097 	pop	ar7
                           0003C3  2098 	C$i2c.h$253$1$98 ==.
                                   2099 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:253: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00049B 0F               [12] 2100 	inc	r7
      00049C 80 C5            [24] 2101 	sjmp	00103$
      00049E                       2102 00101$:
                           0003C6  2103 	C$i2c.h$255$1$98 ==.
                                   2104 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      00049E AE 2B            [24] 2105 	mov	r6,_i2c_write_data_PARM_4
      0004A0 7F 00            [12] 2106 	mov	r7,#0x00
      0004A2 1E               [12] 2107 	dec	r6
      0004A3 BE FF 01         [24] 2108 	cjne	r6,#0xFF,00116$
      0004A6 1F               [12] 2109 	dec	r7
      0004A7                       2110 00116$:
      0004A7 EE               [12] 2111 	mov	a,r6
      0004A8 25 28            [12] 2112 	add	a,_i2c_write_data_PARM_3
      0004AA FE               [12] 2113 	mov	r6,a
      0004AB EF               [12] 2114 	mov	a,r7
      0004AC 35 29            [12] 2115 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004AE FF               [12] 2116 	mov	r7,a
      0004AF AD 2A            [24] 2117 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004B1 8E 82            [24] 2118 	mov	dpl,r6
      0004B3 8F 83            [24] 2119 	mov	dph,r7
      0004B5 8D F0            [24] 2120 	mov	b,r5
      0004B7 12 0E BE         [24] 2121 	lcall	__gptrget
      0004BA F5 82            [12] 2122 	mov	dpl,a
      0004BC 12 04 25         [24] 2123 	lcall	_i2c_write_and_stop
                           0003E7  2124 	C$i2c.h$256$1$98 ==.
                           0003E7  2125 	XG$i2c_write_data$0$0 ==.
      0004BF 22               [24] 2126 	ret
                                   2127 ;------------------------------------------------------------
                                   2128 ;Allocation info for local variables in function 'i2c_read_data'
                                   2129 ;------------------------------------------------------------
                                   2130 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2131 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2132 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2133 ;addr                      Allocated to registers r7 
                                   2134 ;j                         Allocated to registers 
                                   2135 ;------------------------------------------------------------
                           0003E8  2136 	G$i2c_read_data$0$0 ==.
                           0003E8  2137 	C$i2c.h$259$1$98 ==.
                                   2138 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:259: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2139 ;	-----------------------------------------
                                   2140 ;	 function i2c_read_data
                                   2141 ;	-----------------------------------------
      0004C0                       2142 _i2c_read_data:
      0004C0 AF 82            [24] 2143 	mov	r7,dpl
                           0003EA  2144 	C$i2c.h$262$1$100 ==.
                                   2145 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:262: i2c_start();               //Start I2C transfer
      0004C2 C0 07            [24] 2146 	push	ar7
      0004C4 12 04 0F         [24] 2147 	lcall	_i2c_start
      0004C7 D0 07            [24] 2148 	pop	ar7
                           0003F1  2149 	C$i2c.h$263$1$100 ==.
                                   2150 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:263: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004C9 8F 06            [24] 2151 	mov	ar6,r7
      0004CB 74 FE            [12] 2152 	mov	a,#0xFE
      0004CD 5E               [12] 2153 	anl	a,r6
      0004CE F5 82            [12] 2154 	mov	dpl,a
      0004D0 C0 07            [24] 2155 	push	ar7
      0004D2 12 04 1C         [24] 2156 	lcall	_i2c_write
                           0003FD  2157 	C$i2c.h$264$1$100 ==.
                                   2158 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:264: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004D5 85 2C 82         [24] 2159 	mov	dpl,_i2c_read_data_PARM_2
      0004D8 12 04 25         [24] 2160 	lcall	_i2c_write_and_stop
                           000403  2161 	C$i2c.h$265$1$100 ==.
                                   2162 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004DB 12 04 0F         [24] 2163 	lcall	_i2c_start
      0004DE D0 07            [24] 2164 	pop	ar7
                           000408  2165 	C$i2c.h$266$1$100 ==.
                                   2166 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004E0 74 01            [12] 2167 	mov	a,#0x01
      0004E2 4F               [12] 2168 	orl	a,r7
      0004E3 F5 82            [12] 2169 	mov	dpl,a
      0004E5 12 04 1C         [24] 2170 	lcall	_i2c_write
                           000410  2171 	C$i2c.h$267$1$100 ==.
                                   2172 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      0004E8 7F 00            [12] 2173 	mov	r7,#0x00
      0004EA                       2174 00103$:
      0004EA AD 30            [24] 2175 	mov	r5,_i2c_read_data_PARM_4
      0004EC 7E 00            [12] 2176 	mov	r6,#0x00
      0004EE 1D               [12] 2177 	dec	r5
      0004EF BD FF 01         [24] 2178 	cjne	r5,#0xFF,00114$
      0004F2 1E               [12] 2179 	dec	r6
      0004F3                       2180 00114$:
      0004F3 8F 03            [24] 2181 	mov	ar3,r7
      0004F5 7C 00            [12] 2182 	mov	r4,#0x00
      0004F7 C3               [12] 2183 	clr	c
      0004F8 EB               [12] 2184 	mov	a,r3
      0004F9 9D               [12] 2185 	subb	a,r5
      0004FA EC               [12] 2186 	mov	a,r4
      0004FB 64 80            [12] 2187 	xrl	a,#0x80
      0004FD 8E F0            [24] 2188 	mov	b,r6
      0004FF 63 F0 80         [24] 2189 	xrl	b,#0x80
      000502 95 F0            [12] 2190 	subb	a,b
      000504 50 2E            [24] 2191 	jnc	00101$
                           00042E  2192 	C$i2c.h$269$2$101 ==.
                                   2193 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:269: AA = 1;                //Set acknowledge bit
      000506 D2 C2            [12] 2194 	setb	_AA
                           000430  2195 	C$i2c.h$270$2$101 ==.
                                   2196 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:270: buffer[j] = i2c_read();//Read data, save it in buffer
      000508 EF               [12] 2197 	mov	a,r7
      000509 25 2D            [12] 2198 	add	a,_i2c_read_data_PARM_3
      00050B FC               [12] 2199 	mov	r4,a
      00050C E4               [12] 2200 	clr	a
      00050D 35 2E            [12] 2201 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00050F FD               [12] 2202 	mov	r5,a
      000510 AE 2F            [24] 2203 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      000512 C0 07            [24] 2204 	push	ar7
      000514 C0 06            [24] 2205 	push	ar6
      000516 C0 05            [24] 2206 	push	ar5
      000518 C0 04            [24] 2207 	push	ar4
      00051A 12 04 30         [24] 2208 	lcall	_i2c_read
      00051D AB 82            [24] 2209 	mov	r3,dpl
      00051F D0 04            [24] 2210 	pop	ar4
      000521 D0 05            [24] 2211 	pop	ar5
      000523 D0 06            [24] 2212 	pop	ar6
      000525 D0 07            [24] 2213 	pop	ar7
      000527 8C 82            [24] 2214 	mov	dpl,r4
      000529 8D 83            [24] 2215 	mov	dph,r5
      00052B 8E F0            [24] 2216 	mov	b,r6
      00052D EB               [12] 2217 	mov	a,r3
      00052E 12 07 73         [24] 2218 	lcall	__gptrput
                           000459  2219 	C$i2c.h$267$1$100 ==.
                                   2220 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:267: for(j = 0; j < num_bytes - 1; j++)
      000531 0F               [12] 2221 	inc	r7
      000532 80 B6            [24] 2222 	sjmp	00103$
      000534                       2223 00101$:
                           00045C  2224 	C$i2c.h$272$1$100 ==.
                                   2225 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:272: AA = 0;
      000534 C2 C2            [12] 2226 	clr	_AA
                           00045E  2227 	C$i2c.h$273$1$100 ==.
                                   2228 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:273: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000536 AE 30            [24] 2229 	mov	r6,_i2c_read_data_PARM_4
      000538 7F 00            [12] 2230 	mov	r7,#0x00
      00053A 1E               [12] 2231 	dec	r6
      00053B BE FF 01         [24] 2232 	cjne	r6,#0xFF,00116$
      00053E 1F               [12] 2233 	dec	r7
      00053F                       2234 00116$:
      00053F EE               [12] 2235 	mov	a,r6
      000540 25 2D            [12] 2236 	add	a,_i2c_read_data_PARM_3
      000542 FE               [12] 2237 	mov	r6,a
      000543 EF               [12] 2238 	mov	a,r7
      000544 35 2E            [12] 2239 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000546 FF               [12] 2240 	mov	r7,a
      000547 AD 2F            [24] 2241 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000549 C0 07            [24] 2242 	push	ar7
      00054B C0 06            [24] 2243 	push	ar6
      00054D C0 05            [24] 2244 	push	ar5
      00054F 12 04 39         [24] 2245 	lcall	_i2c_read_and_stop
      000552 AC 82            [24] 2246 	mov	r4,dpl
      000554 D0 05            [24] 2247 	pop	ar5
      000556 D0 06            [24] 2248 	pop	ar6
      000558 D0 07            [24] 2249 	pop	ar7
      00055A 8E 82            [24] 2250 	mov	dpl,r6
      00055C 8F 83            [24] 2251 	mov	dph,r7
      00055E 8D F0            [24] 2252 	mov	b,r5
      000560 EC               [12] 2253 	mov	a,r4
      000561 12 07 73         [24] 2254 	lcall	__gptrput
                           00048C  2255 	C$i2c.h$274$1$100 ==.
                           00048C  2256 	XG$i2c_read_data$0$0 ==.
      000564 22               [24] 2257 	ret
                                   2258 ;------------------------------------------------------------
                                   2259 ;Allocation info for local variables in function 'Accel_Init'
                                   2260 ;------------------------------------------------------------
                                   2261 ;Data2                     Allocated with name '_Accel_Init_Data2_1_103'
                                   2262 ;------------------------------------------------------------
                           00048D  2263 	G$Accel_Init$0$0 ==.
                           00048D  2264 	C$i2c.h$283$1$100 ==.
                                   2265 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:283: void Accel_Init(void)
                                   2266 ;	-----------------------------------------
                                   2267 ;	 function Accel_Init
                                   2268 ;	-----------------------------------------
      000565                       2269 _Accel_Init:
                           00048D  2270 	C$i2c.h$287$1$103 ==.
                                   2271 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:287: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000565 75 31 23         [24] 2272 	mov	_Accel_Init_Data2_1_103,#0x23
                           000490  2273 	C$i2c.h$289$1$103 ==.
                                   2274 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:289: i2c_write_data(addr_accel, 0x20, Data2, 1);
      000568 75 28 31         [24] 2275 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00056B 75 29 00         [24] 2276 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00056E 75 2A 40         [24] 2277 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000571 75 27 20         [24] 2278 	mov	_i2c_write_data_PARM_2,#0x20
      000574 75 2B 01         [24] 2279 	mov	_i2c_write_data_PARM_4,#0x01
      000577 75 82 30         [24] 2280 	mov	dpl,#0x30
      00057A 12 04 4A         [24] 2281 	lcall	_i2c_write_data
                           0004A5  2282 	C$i2c.h$290$1$103 ==.
                                   2283 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x00;	//Default - no filtering
      00057D 75 31 00         [24] 2284 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004A8  2285 	C$i2c.h$292$1$103 ==.
                                   2286 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:292: i2c_write_data(addr_accel, 0x21, Data2, 1);
      000580 75 28 31         [24] 2287 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      000583 75 29 00         [24] 2288 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000586 75 2A 40         [24] 2289 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000589 75 27 21         [24] 2290 	mov	_i2c_write_data_PARM_2,#0x21
      00058C 75 2B 01         [24] 2291 	mov	_i2c_write_data_PARM_4,#0x01
      00058F 75 82 30         [24] 2292 	mov	dpl,#0x30
      000592 12 04 4A         [24] 2293 	lcall	_i2c_write_data
                           0004BD  2294 	C$i2c.h$293$1$103 ==.
                                   2295 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:293: Data2[0]=0x00;	//default - no interrupts enabled
      000595 75 31 00         [24] 2296 	mov	_Accel_Init_Data2_1_103,#0x00
                           0004C0  2297 	C$i2c.h$294$1$103 ==.
                                   2298 ;	C:/Program Files (x86)/SDCC/bin/../include/mcs51/i2c.h:294: i2c_write_data(addr_accel, 0x22, Data2, 1);
      000598 75 28 31         [24] 2299 	mov	_i2c_write_data_PARM_3,#_Accel_Init_Data2_1_103
      00059B 75 29 00         [24] 2300 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      00059E 75 2A 40         [24] 2301 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005A1 75 27 22         [24] 2302 	mov	_i2c_write_data_PARM_2,#0x22
      0005A4 75 2B 01         [24] 2303 	mov	_i2c_write_data_PARM_4,#0x01
      0005A7 75 82 30         [24] 2304 	mov	dpl,#0x30
      0005AA 12 04 4A         [24] 2305 	lcall	_i2c_write_data
                           0004D5  2306 	C$i2c.h$298$1$103 ==.
                           0004D5  2307 	XG$Accel_Init$0$0 ==.
      0005AD 22               [24] 2308 	ret
                                   2309 ;------------------------------------------------------------
                                   2310 ;Allocation info for local variables in function 'main'
                                   2311 ;------------------------------------------------------------
                           0004D6  2312 	G$main$0$0 ==.
                           0004D6  2313 	C$Lab3_3_Steering.c$44$1$103 ==.
                                   2314 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:44: void main(void)
                                   2315 ;	-----------------------------------------
                                   2316 ;	 function main
                                   2317 ;	-----------------------------------------
      0005AE                       2318 _main:
                           0004D6  2319 	C$Lab3_3_Steering.c$47$1$113 ==.
                                   2320 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:47: Sys_Init();
      0005AE 12 01 08         [24] 2321 	lcall	_Sys_Init
                           0004D9  2322 	C$Lab3_3_Steering.c$48$1$113 ==.
                                   2323 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:48: putchar(' '); //the quotes in this line may not format correctly
      0005B1 75 82 20         [24] 2324 	mov	dpl,#0x20
      0005B4 12 01 1B         [24] 2325 	lcall	_putchar
                           0004DF  2326 	C$Lab3_3_Steering.c$49$1$113 ==.
                                   2327 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:49: Port_Init();
      0005B7 12 06 01         [24] 2328 	lcall	_Port_Init
                           0004E2  2329 	C$Lab3_3_Steering.c$50$1$113 ==.
                                   2330 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:50: XBR0_Init();
      0005BA 12 06 0F         [24] 2331 	lcall	_XBR0_Init
                           0004E5  2332 	C$Lab3_3_Steering.c$51$1$113 ==.
                                   2333 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:51: PCA_Init();
      0005BD 12 06 19         [24] 2334 	lcall	_PCA_Init
                           0004E8  2335 	C$Lab3_3_Steering.c$52$1$113 ==.
                                   2336 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:52: SMB_Init();
      0005C0 12 06 13         [24] 2337 	lcall	_SMB_Init
                           0004EB  2338 	C$Lab3_3_Steering.c$54$1$113 ==.
                                   2339 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:54: printf("\rEmbedded Control Compass Steering\n");
      0005C3 74 07            [12] 2340 	mov	a,#___str_3
      0005C5 C0 E0            [24] 2341 	push	acc
      0005C7 74 0F            [12] 2342 	mov	a,#(___str_3 >> 8)
      0005C9 C0 E0            [24] 2343 	push	acc
      0005CB 74 80            [12] 2344 	mov	a,#0x80
      0005CD C0 E0            [24] 2345 	push	acc
      0005CF 12 08 CA         [24] 2346 	lcall	_printf
      0005D2 15 81            [12] 2347 	dec	sp
      0005D4 15 81            [12] 2348 	dec	sp
      0005D6 15 81            [12] 2349 	dec	sp
                           000500  2350 	C$Lab3_3_Steering.c$55$1$113 ==.
                                   2351 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:55: PW = PW_CENTER;
      0005D8 85 34 3A         [24] 2352 	mov	_PW,_PW_CENTER
      0005DB 85 35 3B         [24] 2353 	mov	(_PW + 1),(_PW_CENTER + 1)
                           000506  2354 	C$Lab3_3_Steering.c$56$1$113 ==.
                                   2355 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:56: PCA0CP0 = 65535 - PW; //Set initial pulsewidth
      0005DE AC 3A            [24] 2356 	mov	r4,_PW
      0005E0 AD 3B            [24] 2357 	mov	r5,(_PW + 1)
      0005E2 E4               [12] 2358 	clr	a
      0005E3 FE               [12] 2359 	mov	r6,a
      0005E4 FF               [12] 2360 	mov	r7,a
      0005E5 74 FF            [12] 2361 	mov	a,#0xFF
      0005E7 C3               [12] 2362 	clr	c
      0005E8 9C               [12] 2363 	subb	a,r4
      0005E9 FC               [12] 2364 	mov	r4,a
      0005EA 74 FF            [12] 2365 	mov	a,#0xFF
      0005EC 9D               [12] 2366 	subb	a,r5
      0005ED FD               [12] 2367 	mov	r5,a
      0005EE E4               [12] 2368 	clr	a
      0005EF 9E               [12] 2369 	subb	a,r6
      0005F0 FE               [12] 2370 	mov	r6,a
      0005F1 E4               [12] 2371 	clr	a
      0005F2 9F               [12] 2372 	subb	a,r7
      0005F3 FF               [12] 2373 	mov	r7,a
      0005F4 8C EA            [24] 2374 	mov	((_PCA0CP0 >> 0) & 0xFF),r4
      0005F6 8D FA            [24] 2375 	mov	((_PCA0CP0 >> 8) & 0xFF),r5
                           000520  2376 	C$Lab3_3_Steering.c$59$2$114 ==.
                                   2377 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:59: while(!SWITCH) Steering_Servo();
      0005F8                       2378 00101$:
      0005F8 20 B7 FD         [24] 2379 	jb	_SWITCH,00101$
      0005FB 12 06 F1         [24] 2380 	lcall	_Steering_Servo
      0005FE 80 F8            [24] 2381 	sjmp	00101$
                           000528  2382 	C$Lab3_3_Steering.c$61$1$113 ==.
                           000528  2383 	XG$main$0$0 ==.
      000600 22               [24] 2384 	ret
                                   2385 ;------------------------------------------------------------
                                   2386 ;Allocation info for local variables in function 'Port_Init'
                                   2387 ;------------------------------------------------------------
                           000529  2388 	G$Port_Init$0$0 ==.
                           000529  2389 	C$Lab3_3_Steering.c$67$1$113 ==.
                                   2390 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:67: void Port_Init()
                                   2391 ;	-----------------------------------------
                                   2392 ;	 function Port_Init
                                   2393 ;	-----------------------------------------
      000601                       2394 _Port_Init:
                           000529  2395 	C$Lab3_3_Steering.c$69$1$115 ==.
                                   2396 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:69: P1MDOUT |= 0x01; //set output pin for CEX0 in push-pull mode
      000601 43 A5 01         [24] 2397 	orl	_P1MDOUT,#0x01
                           00052C  2398 	C$Lab3_3_Steering.c$70$1$115 ==.
                                   2399 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:70: P3MDOUT &= 0x7F; // set input pin for 3.7 to open-drain
      000604 53 A7 7F         [24] 2400 	anl	_P3MDOUT,#0x7F
                           00052F  2401 	C$Lab3_3_Steering.c$71$1$115 ==.
                                   2402 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:71: P3		|= ~0x7F;// set input pin for 3.7 to high impedence
      000607 AF B0            [24] 2403 	mov	r7,_P3
      000609 74 80            [12] 2404 	mov	a,#0x80
      00060B 4F               [12] 2405 	orl	a,r7
      00060C F5 B0            [12] 2406 	mov	_P3,a
                           000536  2407 	C$Lab3_3_Steering.c$72$1$115 ==.
                           000536  2408 	XG$Port_Init$0$0 ==.
      00060E 22               [24] 2409 	ret
                                   2410 ;------------------------------------------------------------
                                   2411 ;Allocation info for local variables in function 'XBR0_Init'
                                   2412 ;------------------------------------------------------------
                           000537  2413 	G$XBR0_Init$0$0 ==.
                           000537  2414 	C$Lab3_3_Steering.c$77$1$115 ==.
                                   2415 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:77: void XBR0_Init(void)
                                   2416 ;	-----------------------------------------
                                   2417 ;	 function XBR0_Init
                                   2418 ;	-----------------------------------------
      00060F                       2419 _XBR0_Init:
                           000537  2420 	C$Lab3_3_Steering.c$79$1$117 ==.
                                   2421 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:79: XBR0 = 0x27;	//configure crossbar as directed in the laboratory
      00060F 75 E1 27         [24] 2422 	mov	_XBR0,#0x27
                           00053A  2423 	C$Lab3_3_Steering.c$80$1$117 ==.
                           00053A  2424 	XG$XBR0_Init$0$0 ==.
      000612 22               [24] 2425 	ret
                                   2426 ;------------------------------------------------------------
                                   2427 ;Allocation info for local variables in function 'SMB_Init'
                                   2428 ;------------------------------------------------------------
                           00053B  2429 	G$SMB_Init$0$0 ==.
                           00053B  2430 	C$Lab3_3_Steering.c$84$1$117 ==.
                                   2431 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:84: void SMB_Init(void)
                                   2432 ;	-----------------------------------------
                                   2433 ;	 function SMB_Init
                                   2434 ;	-----------------------------------------
      000613                       2435 _SMB_Init:
                           00053B  2436 	C$Lab3_3_Steering.c$86$1$119 ==.
                                   2437 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:86: SMB0CR=0x93;	//Set SCL to 100KHz
      000613 75 CF 93         [24] 2438 	mov	_SMB0CR,#0x93
                           00053E  2439 	C$Lab3_3_Steering.c$87$1$119 ==.
                                   2440 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:87: ENSMB=1; 		//Bit 6 of SMB0CN, enable the SMBus
      000616 D2 C6            [12] 2441 	setb	_ENSMB
                           000540  2442 	C$Lab3_3_Steering.c$88$1$119 ==.
                           000540  2443 	XG$SMB_Init$0$0 ==.
      000618 22               [24] 2444 	ret
                                   2445 ;------------------------------------------------------------
                                   2446 ;Allocation info for local variables in function 'PCA_Init'
                                   2447 ;------------------------------------------------------------
                           000541  2448 	G$PCA_Init$0$0 ==.
                           000541  2449 	C$Lab3_3_Steering.c$92$1$119 ==.
                                   2450 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:92: void PCA_Init(void)
                                   2451 ;	-----------------------------------------
                                   2452 ;	 function PCA_Init
                                   2453 ;	-----------------------------------------
      000619                       2454 _PCA_Init:
                           000541  2455 	C$Lab3_3_Steering.c$94$1$121 ==.
                                   2456 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:94: PCA0CPM0 = 0xC2;	// CCM0 in 16-bit compare mode
      000619 75 DA C2         [24] 2457 	mov	_PCA0CPM0,#0xC2
                           000544  2458 	C$Lab3_3_Steering.c$95$1$121 ==.
                                   2459 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:95: PCA0CN = 0x40;		// Enable PCA Counter
      00061C 75 D8 40         [24] 2460 	mov	_PCA0CN,#0x40
                           000547  2461 	C$Lab3_3_Steering.c$96$1$121 ==.
                                   2462 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:96: PCA0MD = 0x81;		// Enable CF Interrupt and SYSCLK/12
      00061F 75 D9 81         [24] 2463 	mov	_PCA0MD,#0x81
                           00054A  2464 	C$Lab3_3_Steering.c$97$1$121 ==.
                                   2465 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:97: EA = 1;				// Enable Global Interrupts
      000622 D2 AF            [12] 2466 	setb	_EA
                           00054C  2467 	C$Lab3_3_Steering.c$98$1$121 ==.
                                   2468 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:98: EIE1 |= 0x08;		// Enable PCA Interrupt
      000624 43 E6 08         [24] 2469 	orl	_EIE1,#0x08
                           00054F  2470 	C$Lab3_3_Steering.c$99$1$121 ==.
                           00054F  2471 	XG$PCA_Init$0$0 ==.
      000627 22               [24] 2472 	ret
                                   2473 ;------------------------------------------------------------
                                   2474 ;Allocation info for local variables in function 'PCA_ISR'
                                   2475 ;------------------------------------------------------------
                           000550  2476 	G$PCA_ISR$0$0 ==.
                           000550  2477 	C$Lab3_3_Steering.c$103$1$121 ==.
                                   2478 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:103: void PCA_ISR ( void ) __interrupt 9
                                   2479 ;	-----------------------------------------
                                   2480 ;	 function PCA_ISR
                                   2481 ;	-----------------------------------------
      000628                       2482 _PCA_ISR:
      000628 C0 E0            [24] 2483 	push	acc
      00062A C0 D0            [24] 2484 	push	psw
                           000554  2485 	C$Lab3_3_Steering.c$105$1$123 ==.
                                   2486 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:105: if (CF)
      00062C 30 DF 23         [24] 2487 	jnb	_CF,00106$
                           000557  2488 	C$Lab3_3_Steering.c$107$2$124 ==.
                                   2489 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:107: h_count++;
      00062F 05 3F            [12] 2490 	inc	_h_count
                           000559  2491 	C$Lab3_3_Steering.c$108$2$124 ==.
                                   2492 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:108: if(h_count>=2)	//This gives a delay for getting a new heading
      000631 74 FE            [12] 2493 	mov	a,#0x100 - 0x02
      000633 25 3F            [12] 2494 	add	a,_h_count
      000635 50 06            [24] 2495 	jnc	00102$
                           00055F  2496 	C$Lab3_3_Steering.c$110$3$125 ==.
                                   2497 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:110: new_heading=1;
      000637 75 3E 01         [24] 2498 	mov	_new_heading,#0x01
                           000562  2499 	C$Lab3_3_Steering.c$111$3$125 ==.
                                   2500 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:111: h_count = 0;
      00063A 75 3F 00         [24] 2501 	mov	_h_count,#0x00
      00063D                       2502 00102$:
                           000565  2503 	C$Lab3_3_Steering.c$113$2$124 ==.
                                   2504 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:113: heading_delay++;
      00063D 05 42            [12] 2505 	inc	_heading_delay
                           000567  2506 	C$Lab3_3_Steering.c$114$2$124 ==.
                                   2507 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:114: if(heading_delay>5) heading_delay=0;
      00063F E5 42            [12] 2508 	mov	a,_heading_delay
      000641 24 FA            [12] 2509 	add	a,#0xff - 0x05
      000643 50 03            [24] 2510 	jnc	00104$
      000645 75 42 00         [24] 2511 	mov	_heading_delay,#0x00
      000648                       2512 00104$:
                           000570  2513 	C$Lab3_3_Steering.c$115$2$124 ==.
                                   2514 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:115: PCA0 = PCA_START;	// Start count for 20ms period
      000648 85 32 E9         [24] 2515 	mov	((_PCA0 >> 0) & 0xFF),_PCA_START
      00064B 85 33 F9         [24] 2516 	mov	((_PCA0 >> 8) & 0xFF),(_PCA_START + 1)
                           000576  2517 	C$Lab3_3_Steering.c$116$2$124 ==.
                                   2518 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:116: CF = 0;			// Clear overflow flag
      00064E C2 DF            [12] 2519 	clr	_CF
      000650 80 03            [24] 2520 	sjmp	00108$
      000652                       2521 00106$:
                           00057A  2522 	C$Lab3_3_Steering.c$118$1$123 ==.
                                   2523 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:118: else PCA0CN &= 0xC0;		// Handle other PCA interrupt sources
      000652 53 D8 C0         [24] 2524 	anl	_PCA0CN,#0xC0
      000655                       2525 00108$:
      000655 D0 D0            [24] 2526 	pop	psw
      000657 D0 E0            [24] 2527 	pop	acc
                           000581  2528 	C$Lab3_3_Steering.c$119$1$123 ==.
                           000581  2529 	XG$PCA_ISR$0$0 ==.
      000659 32               [24] 2530 	reti
                                   2531 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2532 ;	eliminated unneeded push/pop dpl
                                   2533 ;	eliminated unneeded push/pop dph
                                   2534 ;	eliminated unneeded push/pop b
                                   2535 ;------------------------------------------------------------
                                   2536 ;Allocation info for local variables in function 'ReadCompass'
                                   2537 ;------------------------------------------------------------
                                   2538 ;addr                      Allocated to registers 
                                   2539 ;Data                      Allocated with name '_ReadCompass_Data_1_127'
                                   2540 ;read_heading              Allocated to registers 
                                   2541 ;------------------------------------------------------------
                           000582  2542 	G$ReadCompass$0$0 ==.
                           000582  2543 	C$Lab3_3_Steering.c$123$1$123 ==.
                                   2544 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:123: unsigned int ReadCompass(void)
                                   2545 ;	-----------------------------------------
                                   2546 ;	 function ReadCompass
                                   2547 ;	-----------------------------------------
      00065A                       2548 _ReadCompass:
                           000582  2549 	C$Lab3_3_Steering.c$128$1$127 ==.
                                   2550 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:128: i2c_read_data(addr, 2, Data, 2); // read two byte, starting at reg 2
      00065A 75 2D 45         [24] 2551 	mov	_i2c_read_data_PARM_3,#_ReadCompass_Data_1_127
      00065D 75 2E 00         [24] 2552 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000660 75 2F 40         [24] 2553 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      000663 75 2C 02         [24] 2554 	mov	_i2c_read_data_PARM_2,#0x02
      000666 75 30 02         [24] 2555 	mov	_i2c_read_data_PARM_4,#0x02
      000669 75 82 C0         [24] 2556 	mov	dpl,#0xC0
      00066C 12 04 C0         [24] 2557 	lcall	_i2c_read_data
                           000597  2558 	C$Lab3_3_Steering.c$129$1$127 ==.
                                   2559 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:129: read_heading =(((unsigned int)Data[0] << 8) | Data[1]); //combine the two values
      00066F AF 45            [24] 2560 	mov	r7,_ReadCompass_Data_1_127
      000671 7E 00            [12] 2561 	mov	r6,#0x00
      000673 AC 46            [24] 2562 	mov	r4,(_ReadCompass_Data_1_127 + 0x0001)
      000675 7D 00            [12] 2563 	mov	r5,#0x00
      000677 EC               [12] 2564 	mov	a,r4
      000678 4E               [12] 2565 	orl	a,r6
      000679 F5 82            [12] 2566 	mov	dpl,a
      00067B ED               [12] 2567 	mov	a,r5
      00067C 4F               [12] 2568 	orl	a,r7
      00067D F5 83            [12] 2569 	mov	dph,a
                           0005A7  2570 	C$Lab3_3_Steering.c$130$1$127 ==.
                                   2571 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:130: return read_heading; // the heading returned in degrees between 0 and 3599
                           0005A7  2572 	C$Lab3_3_Steering.c$131$1$127 ==.
                           0005A7  2573 	XG$ReadCompass$0$0 ==.
      00067F 22               [24] 2574 	ret
                                   2575 ;------------------------------------------------------------
                                   2576 ;Allocation info for local variables in function 'DeterminePWM'
                                   2577 ;------------------------------------------------------------
                                   2578 ;heading                   Allocated to registers r6 r7 
                                   2579 ;Error                     Allocated to registers r6 r7 
                                   2580 ;PWMe                      Allocated to registers r6 r7 
                                   2581 ;k                         Allocated to registers r5 
                                   2582 ;------------------------------------------------------------
                           0005A8  2583 	G$DeterminePWM$0$0 ==.
                           0005A8  2584 	C$Lab3_3_Steering.c$137$1$127 ==.
                                   2585 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:137: signed int DeterminePWM(unsigned int heading)
                                   2586 ;	-----------------------------------------
                                   2587 ;	 function DeterminePWM
                                   2588 ;	-----------------------------------------
      000680                       2589 _DeterminePWM:
      000680 AE 82            [24] 2590 	mov	r6,dpl
      000682 AF 83            [24] 2591 	mov	r7,dph
                           0005AC  2592 	C$Lab3_3_Steering.c$141$1$127 ==.
                                   2593 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:141: unsigned char k = 1;				//Gain constant. Higher numbers turn more, lower numbers turn less.
      000684 7D 01            [12] 2594 	mov	r5,#0x01
                           0005AE  2595 	C$Lab3_3_Steering.c$142$1$129 ==.
                                   2596 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:142: Error = Desired_Heading - heading;	//Calculate the error
      000686 E5 43            [12] 2597 	mov	a,_Desired_Heading
      000688 C3               [12] 2598 	clr	c
      000689 9E               [12] 2599 	subb	a,r6
      00068A FE               [12] 2600 	mov	r6,a
      00068B E5 44            [12] 2601 	mov	a,(_Desired_Heading + 1)
      00068D 9F               [12] 2602 	subb	a,r7
      00068E FF               [12] 2603 	mov	r7,a
                           0005B7  2604 	C$Lab3_3_Steering.c$143$1$129 ==.
                                   2605 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:143: if(Error < 1800) Error = Error + 3600;	//Adjust the Error for +/- 180 degrees
      00068F C3               [12] 2606 	clr	c
      000690 EE               [12] 2607 	mov	a,r6
      000691 94 08            [12] 2608 	subb	a,#0x08
      000693 EF               [12] 2609 	mov	a,r7
      000694 64 80            [12] 2610 	xrl	a,#0x80
      000696 94 87            [12] 2611 	subb	a,#0x87
      000698 50 08            [24] 2612 	jnc	00102$
      00069A 74 10            [12] 2613 	mov	a,#0x10
      00069C 2E               [12] 2614 	add	a,r6
      00069D FE               [12] 2615 	mov	r6,a
      00069E 74 0E            [12] 2616 	mov	a,#0x0E
      0006A0 3F               [12] 2617 	addc	a,r7
      0006A1 FF               [12] 2618 	mov	r7,a
      0006A2                       2619 00102$:
                           0005CA  2620 	C$Lab3_3_Steering.c$144$1$129 ==.
                                   2621 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:144: if(Error > 1800) Error = Error - 3600;
      0006A2 C3               [12] 2622 	clr	c
      0006A3 74 08            [12] 2623 	mov	a,#0x08
      0006A5 9E               [12] 2624 	subb	a,r6
      0006A6 74 87            [12] 2625 	mov	a,#(0x07 ^ 0x80)
      0006A8 8F F0            [24] 2626 	mov	b,r7
      0006AA 63 F0 80         [24] 2627 	xrl	b,#0x80
      0006AD 95 F0            [12] 2628 	subb	a,b
      0006AF 50 08            [24] 2629 	jnc	00104$
      0006B1 EE               [12] 2630 	mov	a,r6
      0006B2 24 F0            [12] 2631 	add	a,#0xF0
      0006B4 FE               [12] 2632 	mov	r6,a
      0006B5 EF               [12] 2633 	mov	a,r7
      0006B6 34 F1            [12] 2634 	addc	a,#0xF1
      0006B8 FF               [12] 2635 	mov	r7,a
      0006B9                       2636 00104$:
                           0005E1  2637 	C$Lab3_3_Steering.c$145$1$129 ==.
                                   2638 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:145: PWMe = PW_CENTER + (k*Error);
      0006B9 7C 00            [12] 2639 	mov	r4,#0x00
      0006BB 8E 11            [24] 2640 	mov	__mulint_PARM_2,r6
      0006BD 8F 12            [24] 2641 	mov	(__mulint_PARM_2 + 1),r7
      0006BF 8D 82            [24] 2642 	mov	dpl,r5
      0006C1 8C 83            [24] 2643 	mov	dph,r4
      0006C3 12 07 8E         [24] 2644 	lcall	__mulint
      0006C6 AE 82            [24] 2645 	mov	r6,dpl
      0006C8 AF 83            [24] 2646 	mov	r7,dph
      0006CA EE               [12] 2647 	mov	a,r6
      0006CB 25 34            [12] 2648 	add	a,_PW_CENTER
      0006CD FE               [12] 2649 	mov	r6,a
      0006CE EF               [12] 2650 	mov	a,r7
      0006CF 35 35            [12] 2651 	addc	a,(_PW_CENTER + 1)
      0006D1 FF               [12] 2652 	mov	r7,a
                           0005FA  2653 	C$Lab3_3_Steering.c$146$1$129 ==.
                                   2654 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:146: if(PWMe < PW_MIN) PWMe = PW_MIN;
      0006D2 C3               [12] 2655 	clr	c
      0006D3 EE               [12] 2656 	mov	a,r6
      0006D4 95 36            [12] 2657 	subb	a,_PW_MIN
      0006D6 EF               [12] 2658 	mov	a,r7
      0006D7 95 37            [12] 2659 	subb	a,(_PW_MIN + 1)
      0006D9 50 04            [24] 2660 	jnc	00106$
      0006DB AE 36            [24] 2661 	mov	r6,_PW_MIN
      0006DD AF 37            [24] 2662 	mov	r7,(_PW_MIN + 1)
      0006DF                       2663 00106$:
                           000607  2664 	C$Lab3_3_Steering.c$147$1$129 ==.
                                   2665 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:147: if(PWMe > PW_MAX) PWMe = PW_MAX;
      0006DF C3               [12] 2666 	clr	c
      0006E0 E5 38            [12] 2667 	mov	a,_PW_MAX
      0006E2 9E               [12] 2668 	subb	a,r6
      0006E3 E5 39            [12] 2669 	mov	a,(_PW_MAX + 1)
      0006E5 9F               [12] 2670 	subb	a,r7
      0006E6 50 04            [24] 2671 	jnc	00108$
      0006E8 AE 38            [24] 2672 	mov	r6,_PW_MAX
      0006EA AF 39            [24] 2673 	mov	r7,(_PW_MAX + 1)
      0006EC                       2674 00108$:
                           000614  2675 	C$Lab3_3_Steering.c$148$1$129 ==.
                                   2676 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:148: return PWMe;
      0006EC 8E 82            [24] 2677 	mov	dpl,r6
      0006EE 8F 83            [24] 2678 	mov	dph,r7
                           000618  2679 	C$Lab3_3_Steering.c$149$1$129 ==.
                           000618  2680 	XG$DeterminePWM$0$0 ==.
      0006F0 22               [24] 2681 	ret
                                   2682 ;------------------------------------------------------------
                                   2683 ;Allocation info for local variables in function 'Steering_Servo'
                                   2684 ;------------------------------------------------------------
                           000619  2685 	G$Steering_Servo$0$0 ==.
                           000619  2686 	C$Lab3_3_Steering.c$153$1$129 ==.
                                   2687 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:153: void Steering_Servo()
                                   2688 ;	-----------------------------------------
                                   2689 ;	 function Steering_Servo
                                   2690 ;	-----------------------------------------
      0006F1                       2691 _Steering_Servo:
                           000619  2692 	C$Lab3_3_Steering.c$155$1$130 ==.
                                   2693 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:155: if(new_heading && (heading_delay>=5))
      0006F1 E5 3E            [12] 2694 	mov	a,_new_heading
      0006F3 60 54            [24] 2695 	jz	00104$
      0006F5 74 FB            [12] 2696 	mov	a,#0x100 - 0x05
      0006F7 25 42            [12] 2697 	add	a,_heading_delay
      0006F9 50 4E            [24] 2698 	jnc	00104$
                           000623  2699 	C$Lab3_3_Steering.c$157$2$131 ==.
                                   2700 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:157: heading = ReadCompass();
      0006FB 12 06 5A         [24] 2701 	lcall	_ReadCompass
                           000626  2702 	C$Lab3_3_Steering.c$158$1$130 ==.
                                   2703 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:158: printf("\rThe current direction is %u\n", heading/10);
      0006FE 85 82 40         [24] 2704 	mov	_heading,dpl
      000701 85 83 41         [24] 2705 	mov	(_heading + 1),dph
      000704 75 11 0A         [24] 2706 	mov	__divuint_PARM_2,#0x0A
      000707 75 12 00         [24] 2707 	mov	(__divuint_PARM_2 + 1),#0x00
      00070A 12 07 4A         [24] 2708 	lcall	__divuint
      00070D AE 82            [24] 2709 	mov	r6,dpl
      00070F AF 83            [24] 2710 	mov	r7,dph
      000711 C0 06            [24] 2711 	push	ar6
      000713 C0 07            [24] 2712 	push	ar7
      000715 74 2B            [12] 2713 	mov	a,#___str_4
      000717 C0 E0            [24] 2714 	push	acc
      000719 74 0F            [12] 2715 	mov	a,#(___str_4 >> 8)
      00071B C0 E0            [24] 2716 	push	acc
      00071D 74 80            [12] 2717 	mov	a,#0x80
      00071F C0 E0            [24] 2718 	push	acc
      000721 12 08 CA         [24] 2719 	lcall	_printf
      000724 E5 81            [12] 2720 	mov	a,sp
      000726 24 FB            [12] 2721 	add	a,#0xfb
      000728 F5 81            [12] 2722 	mov	sp,a
                           000652  2723 	C$Lab3_3_Steering.c$159$2$131 ==.
                                   2724 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:159: PW = DeterminePWM(heading); // Adjust pulsewidth based on error function
      00072A 85 40 82         [24] 2725 	mov	dpl,_heading
      00072D 85 41 83         [24] 2726 	mov	dph,(_heading + 1)
      000730 12 06 80         [24] 2727 	lcall	_DeterminePWM
      000733 85 82 3A         [24] 2728 	mov	_PW,dpl
      000736 85 83 3B         [24] 2729 	mov	(_PW + 1),dph
                           000661  2730 	C$Lab3_3_Steering.c$160$2$131 ==.
                                   2731 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:160: PCA0CP0 = 0xFFFF - PW; // Change pulse width
      000739 74 FF            [12] 2732 	mov	a,#0xFF
      00073B C3               [12] 2733 	clr	c
      00073C 95 3A            [12] 2734 	subb	a,_PW
      00073E F5 EA            [12] 2735 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      000740 74 FF            [12] 2736 	mov	a,#0xFF
      000742 95 3B            [12] 2737 	subb	a,(_PW + 1)
      000744 F5 FA            [12] 2738 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           00066E  2739 	C$Lab3_3_Steering.c$161$2$131 ==.
                                   2740 ;	C:\Users\rutmas\Documents\LITEC\LITEC\Lab 3\Steering\Lab 3-3\Lab3_3_Steering.c:161: new_heading = 0;
      000746 75 3E 00         [24] 2741 	mov	_new_heading,#0x00
      000749                       2742 00104$:
                           000671  2743 	C$Lab3_3_Steering.c$163$1$130 ==.
                           000671  2744 	XG$Steering_Servo$0$0 ==.
      000749 22               [24] 2745 	ret
                                   2746 	.area CSEG    (CODE)
                                   2747 	.area CONST   (CODE)
                           000000  2748 FLab3_3_Steering$__str_0$0$0 == .
      000EDE                       2749 ___str_0:
      000EDE 0A                    2750 	.db 0x0A
      000EDF 54 79 70 65 20 64 69  2751 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      000EF3 00                    2752 	.db 0x00
                           000016  2753 FLab3_3_Steering$__str_1$0$0 == .
      000EF4                       2754 ___str_1:
      000EF4 20 20 20 20 20 25 63  2755 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      000F03 00                    2756 	.db 0x00
                           000026  2757 FLab3_3_Steering$__str_2$0$0 == .
      000F04                       2758 ___str_2:
      000F04 25 63                 2759 	.ascii "%c"
      000F06 00                    2760 	.db 0x00
                           000029  2761 FLab3_3_Steering$__str_3$0$0 == .
      000F07                       2762 ___str_3:
      000F07 0D                    2763 	.db 0x0D
      000F08 45 6D 62 65 64 64 65  2764 	.ascii "Embedded Control Compass Steering"
             64 20 43 6F 6E 74 72
             6F 6C 20 43 6F 6D 70
             61 73 73 20 53 74 65
             65 72 69 6E 67
      000F29 0A                    2765 	.db 0x0A
      000F2A 00                    2766 	.db 0x00
                           00004D  2767 FLab3_3_Steering$__str_4$0$0 == .
      000F2B                       2768 ___str_4:
      000F2B 0D                    2769 	.db 0x0D
      000F2C 54 68 65 20 63 75 72  2770 	.ascii "The current direction is %u"
             72 65 6E 74 20 64 69
             72 65 63 74 69 6F 6E
             20 69 73 20 25 75
      000F47 0A                    2771 	.db 0x0A
      000F48 00                    2772 	.db 0x00
                                   2773 	.area XINIT   (CODE)
                                   2774 	.area CABS    (ABS,CODE)
