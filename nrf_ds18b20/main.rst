                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.9 #9960 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _CRC8
                                     13 	.globl _available
                                     14 	.globl _openAllPipe
                                     15 	.globl _setPALevel
                                     16 	.globl _setCRCLength
                                     17 	.globl _setAutoAck
                                     18 	.globl _setDataRate
                                     19 	.globl _setChannel
                                     20 	.globl _radiobegin
                                     21 	.globl _watchdog_start_and_set_timeout_in_ms
                                     22 	.globl _watchdog_set_wdsv_count
                                     23 	.globl _gpio_pin_val_write
                                     24 	.globl _gpio_pin_val_set
                                     25 	.globl _gpio_pin_val_clear
                                     26 	.globl _gpio_pin_val_read
                                     27 	.globl _FSR_SB_ENDBG
                                     28 	.globl _FSR_SB_STP
                                     29 	.globl _FSR_SB_WEN
                                     30 	.globl _FSR_SB_RDYN
                                     31 	.globl _FSR_SB_INFEN
                                     32 	.globl _FSR_SB_RDISMB
                                     33 	.globl _RFCON_SB_RFCKEN
                                     34 	.globl _RFCON_SB_RFCSN
                                     35 	.globl _RFCON_SB_RFCE
                                     36 	.globl _ADCON_SB_BD
                                     37 	.globl _PSW_SB_P
                                     38 	.globl _PSW_SB_F1
                                     39 	.globl _PSW_SB_OV
                                     40 	.globl _PSW_SB_RS0
                                     41 	.globl _PSW_SB_RS1
                                     42 	.globl _PSW_SB_F0
                                     43 	.globl _PSW_SB_AC
                                     44 	.globl _PSW_SB_CY
                                     45 	.globl _T2CON_SB_T2PS
                                     46 	.globl _T2CON_SB_I3FR
                                     47 	.globl _T2CON_SB_I2FR
                                     48 	.globl _T2CON_SB_T2R1
                                     49 	.globl _T2CON_SB_T2R0
                                     50 	.globl _T2CON_SB_T2CM
                                     51 	.globl _T2CON_SB_T2I1
                                     52 	.globl _T2CON_SB_T2I0
                                     53 	.globl _IRCON_SB_EXF2
                                     54 	.globl _IRCON_SB_TF2
                                     55 	.globl _IRCON_SB_TICK
                                     56 	.globl _IRCON_SB_MISCIRQ
                                     57 	.globl _IRCON_SB_WUOPIRQ
                                     58 	.globl _IRCON_SB_SPI_2WIRE
                                     59 	.globl _IRCON_SB_RFIRQ
                                     60 	.globl _IRCON_SB_RFRDY
                                     61 	.globl _IEN1_SB_T2EXTRLD
                                     62 	.globl _IEN1_SB_TICK
                                     63 	.globl _IEN1_SB_MISCIRQ
                                     64 	.globl _IEN1_SB_WUOPIRQ
                                     65 	.globl _IEN1_SB_SPI_2WIRE
                                     66 	.globl _IEN1_SB_RFIRQ
                                     67 	.globl _IEN1_SB_RFRDY
                                     68 	.globl _P3_SB_D7
                                     69 	.globl _P3_SB_D6
                                     70 	.globl _P3_SB_D5
                                     71 	.globl _P3_SB_D4
                                     72 	.globl _P3_SB_D3
                                     73 	.globl _P3_SB_D2
                                     74 	.globl _P3_SB_D1
                                     75 	.globl _P3_SB_D0
                                     76 	.globl _IEN0_SB_GLOBAL
                                     77 	.globl _IEN0_SB_T2
                                     78 	.globl _IEN0_SB_UART
                                     79 	.globl _IEN0_SB_T1
                                     80 	.globl _IEN0_SB_POFIRQ
                                     81 	.globl _IEN0_SB_T0
                                     82 	.globl _IEN0_SB_IFP
                                     83 	.globl _P2_SB_D7
                                     84 	.globl _P2_SB_D6
                                     85 	.globl _P2_SB_D5
                                     86 	.globl _P2_SB_D4
                                     87 	.globl _P2_SB_D3
                                     88 	.globl _P2_SB_D2
                                     89 	.globl _P2_SB_D1
                                     90 	.globl _P2_SB_D0
                                     91 	.globl _S0CON_SB_SM0
                                     92 	.globl _S0CON_SB_SM1
                                     93 	.globl _S0CON_SB_SM20
                                     94 	.globl _S0CON_SB_REN0
                                     95 	.globl _S0CON_SB_TB80
                                     96 	.globl _S0CON_SB_RB80
                                     97 	.globl _S0CON_SB_TI0
                                     98 	.globl _S0CON_SB_RI0
                                     99 	.globl _P1_SB_D7
                                    100 	.globl _P1_SB_D6
                                    101 	.globl _P1_SB_D5
                                    102 	.globl _P1_SB_D4
                                    103 	.globl _P1_SB_D3
                                    104 	.globl _P1_SB_D2
                                    105 	.globl _P1_SB_D1
                                    106 	.globl _P1_SB_D0
                                    107 	.globl _TCON_SB_TF1
                                    108 	.globl _TCON_SB_TR1
                                    109 	.globl _TCON_SB_TF0
                                    110 	.globl _TCON_SB_TR0
                                    111 	.globl _TCON_SB_IE1
                                    112 	.globl _TCON_SB_IT1
                                    113 	.globl _TCON_SB_IE0
                                    114 	.globl _TCON_SB_IT0
                                    115 	.globl _P0_SB_D7
                                    116 	.globl _P0_SB_D6
                                    117 	.globl _P0_SB_D5
                                    118 	.globl _P0_SB_D4
                                    119 	.globl _P0_SB_D3
                                    120 	.globl _P0_SB_D2
                                    121 	.globl _P0_SB_D1
                                    122 	.globl _P0_SB_D0
                                    123 	.globl _ADCDAT
                                    124 	.globl _S0REL
                                    125 	.globl _T2
                                    126 	.globl _T1
                                    127 	.globl _T0
                                    128 	.globl _CRC
                                    129 	.globl _CC3
                                    130 	.globl _CC2
                                    131 	.globl _CC1
                                    132 	.globl _SPIMDAT
                                    133 	.globl _SPIMSTAT
                                    134 	.globl _SPIMCON1
                                    135 	.globl _SPIMCON0
                                    136 	.globl _FCR
                                    137 	.globl _FPCR
                                    138 	.globl _FSR
                                    139 	.globl _B
                                    140 	.globl _ARCON
                                    141 	.globl _MD5
                                    142 	.globl _MD4
                                    143 	.globl _MD3
                                    144 	.globl _MD2
                                    145 	.globl _MD1
                                    146 	.globl _MD0
                                    147 	.globl _RFCON
                                    148 	.globl _SPIRDAT
                                    149 	.globl _SPIRSTAT
                                    150 	.globl _SPIRCON1
                                    151 	.globl _SPIRCON0
                                    152 	.globl _W2CON0
                                    153 	.globl _W2CON1
                                    154 	.globl _ACC
                                    155 	.globl _CCPDATO
                                    156 	.globl _CCPDATIB
                                    157 	.globl _CCPDATIA
                                    158 	.globl _POFCON
                                    159 	.globl _COMPCON
                                    160 	.globl _W2DAT
                                    161 	.globl _W2SADR
                                    162 	.globl _ADCON
                                    163 	.globl _RNGDAT
                                    164 	.globl _RNGCTL
                                    165 	.globl _ADCDATL
                                    166 	.globl _ADCDATH
                                    167 	.globl _ADCCON1
                                    168 	.globl _ADCCON2
                                    169 	.globl _ADCCON3
                                    170 	.globl _PSW
                                    171 	.globl _WUOPC0
                                    172 	.globl _WUOPC1
                                    173 	.globl _TH2
                                    174 	.globl _TL2
                                    175 	.globl _CRCH
                                    176 	.globl _CRCL
                                    177 	.globl __XPAGE
                                    178 	.globl _MPAGE
                                    179 	.globl _T2CON
                                    180 	.globl _CCH3
                                    181 	.globl _CCL3
                                    182 	.globl _CCH2
                                    183 	.globl _CCL2
                                    184 	.globl _CCH1
                                    185 	.globl _CCL1
                                    186 	.globl _CCEN
                                    187 	.globl _IRCON
                                    188 	.globl _SPISDAT
                                    189 	.globl _SPISSTAT
                                    190 	.globl _SPISCON1
                                    191 	.globl _SPISCON0
                                    192 	.globl _S0RELH
                                    193 	.globl _IP1
                                    194 	.globl _IEN1
                                    195 	.globl _SPISRDSZ
                                    196 	.globl _RTC2CPT00
                                    197 	.globl _RTC2CMP1
                                    198 	.globl _RTC2CMP0
                                    199 	.globl _RTC2CON
                                    200 	.globl _PWMCON
                                    201 	.globl _RSTREAS
                                    202 	.globl _P3
                                    203 	.globl _WDSV
                                    204 	.globl _OPMCON
                                    205 	.globl _CLKLFCTRL
                                    206 	.globl _RTC2CPT10
                                    207 	.globl _RTC2CPT01
                                    208 	.globl _S0RELL
                                    209 	.globl _IP0
                                    210 	.globl _IEN0
                                    211 	.globl _MEMCON
                                    212 	.globl _INTEXP
                                    213 	.globl _WUCON
                                    214 	.globl _PWRDWN
                                    215 	.globl _CLKCTRL
                                    216 	.globl _PWMDC1
                                    217 	.globl _PWMDC0
                                    218 	.globl _P2
                                    219 	.globl _P1CON
                                    220 	.globl _P0CON
                                    221 	.globl _S0BUF
                                    222 	.globl _S0CON
                                    223 	.globl _P2CON
                                    224 	.globl _P3DIR
                                    225 	.globl _P2DIR
                                    226 	.globl _P1DIR
                                    227 	.globl _P0DIR
                                    228 	.globl _DPS
                                    229 	.globl _P1
                                    230 	.globl _P3CON
                                    231 	.globl _TH1
                                    232 	.globl _TH0
                                    233 	.globl _TL1
                                    234 	.globl _TL0
                                    235 	.globl _TMOD
                                    236 	.globl _TCON
                                    237 	.globl _PCON
                                    238 	.globl _DPH1
                                    239 	.globl _DPL1
                                    240 	.globl _DPH
                                    241 	.globl _DPL
                                    242 	.globl _SP
                                    243 	.globl _P0
                                    244 	.globl _DSTemp
                                    245 	.globl _clientnf
                                    246 	.globl _rtc2_configure_PARM_2
                                    247 	.globl _timer1_configure_PARM_2
                                    248 	.globl _timer0_configure_PARM_2
                                    249 	.globl _interrupt_configure_ifp_PARM_2
                                    250 	.globl _pwr_clk_mgmt_wakeup_configure_PARM_2
                                    251 	.globl _pwm_start_PARM_2
                                    252 	.globl _gpio_pin_val_write_PARM_2
                                    253 	.globl _gpio_pin_configure_PARM_2
                                    254 	.globl _rf_set_rx_addr_PARM_3
                                    255 	.globl _rf_set_rx_addr_PARM_2
                                    256 	.globl _rf_read_register_PARM_3
                                    257 	.globl _rf_read_register_PARM_2
                                    258 	.globl _rf_power_up_param_PARM_2
                                    259 	.globl _rf_spi_send_read_PARM_3
                                    260 	.globl _rf_spi_send_read_PARM_2
                                    261 	.globl _rf_spi_execute_command_PARM_4
                                    262 	.globl _rf_spi_execute_command_PARM_3
                                    263 	.globl _rf_spi_execute_command_PARM_2
                                    264 	.globl _rf_write_tx_payload_PARM_3
                                    265 	.globl _rf_write_tx_payload_PARM_2
                                    266 	.globl _rf_write_register_PARM_3
                                    267 	.globl _rf_write_register_PARM_2
                                    268 	.globl _rf_read_rx_payload_PARM_2
                                    269 	.globl _rf_read_rx_payload
                                    270 	.globl _rf_write_register
                                    271 	.globl _rf_spi_configure_enable
                                    272 	.globl _rf_write_tx_payload
                                    273 	.globl _rf_transmit
                                    274 	.globl _rf_set_as_rx
                                    275 	.globl _rf_irq_clear_all
                                    276 	.globl _rf_set_as_tx
                                    277 	.globl _rf_spi_execute_command
                                    278 	.globl _rf_spi_send_read
                                    279 	.globl _rf_power_up_param
                                    280 	.globl _rf_read_register
                                    281 	.globl _rf_spi_send_read_byte
                                    282 	.globl _rf_set_rx_addr
                                    283 	.globl _rf_power_down
                                    284 	.globl _rf_power_up
                                    285 	.globl _gpio_pin_configure
                                    286 	.globl _delay_us
                                    287 	.globl _delay_s
                                    288 	.globl _delay_ms
                                    289 	.globl _pwm_configure
                                    290 	.globl _pwm_start
                                    291 	.globl _pwr_clk_mgmt_clklf_configure
                                    292 	.globl _pwr_clk_mgmt_get_cclk_freq_in_hz
                                    293 	.globl _pwr_clk_mgmt_wakeup_configure
                                    294 	.globl _pwr_clk_mgmt_pwr_failure_configure
                                    295 	.globl _interrupt_configure_ifp
                                    296 	.globl _adc_configure
                                    297 	.globl _adc_set_input_channel
                                    298 	.globl _adc_start_single_conversion
                                    299 	.globl _adc_start_single_conversion_get_value
                                    300 	.globl _timer0_configure
                                    301 	.globl _timer1_configure
                                    302 	.globl _rtc2_configure
                                    303 	.globl _ds18b20_read
                                    304 ;--------------------------------------------------------
                                    305 ; special function registers
                                    306 ;--------------------------------------------------------
                                    307 	.area RSEG    (ABS,DATA)
      000000                        308 	.org 0x0000
                           000080   309 _P0	=	0x0080
                           000081   310 _SP	=	0x0081
                           000082   311 _DPL	=	0x0082
                           000083   312 _DPH	=	0x0083
                           000084   313 _DPL1	=	0x0084
                           000085   314 _DPH1	=	0x0085
                           000087   315 _PCON	=	0x0087
                           000088   316 _TCON	=	0x0088
                           000089   317 _TMOD	=	0x0089
                           00008A   318 _TL0	=	0x008a
                           00008B   319 _TL1	=	0x008b
                           00008C   320 _TH0	=	0x008c
                           00008D   321 _TH1	=	0x008d
                           00008F   322 _P3CON	=	0x008f
                           000090   323 _P1	=	0x0090
                           000092   324 _DPS	=	0x0092
                           000093   325 _P0DIR	=	0x0093
                           000094   326 _P1DIR	=	0x0094
                           000095   327 _P2DIR	=	0x0095
                           000096   328 _P3DIR	=	0x0096
                           000097   329 _P2CON	=	0x0097
                           000098   330 _S0CON	=	0x0098
                           000099   331 _S0BUF	=	0x0099
                           00009E   332 _P0CON	=	0x009e
                           00009F   333 _P1CON	=	0x009f
                           0000A0   334 _P2	=	0x00a0
                           0000A1   335 _PWMDC0	=	0x00a1
                           0000A2   336 _PWMDC1	=	0x00a2
                           0000A3   337 _CLKCTRL	=	0x00a3
                           0000A4   338 _PWRDWN	=	0x00a4
                           0000A5   339 _WUCON	=	0x00a5
                           0000A6   340 _INTEXP	=	0x00a6
                           0000A7   341 _MEMCON	=	0x00a7
                           0000A8   342 _IEN0	=	0x00a8
                           0000A9   343 _IP0	=	0x00a9
                           0000AA   344 _S0RELL	=	0x00aa
                           0000AB   345 _RTC2CPT01	=	0x00ab
                           0000AC   346 _RTC2CPT10	=	0x00ac
                           0000AD   347 _CLKLFCTRL	=	0x00ad
                           0000AE   348 _OPMCON	=	0x00ae
                           0000AF   349 _WDSV	=	0x00af
                           0000B0   350 _P3	=	0x00b0
                           0000B1   351 _RSTREAS	=	0x00b1
                           0000B2   352 _PWMCON	=	0x00b2
                           0000B3   353 _RTC2CON	=	0x00b3
                           0000B4   354 _RTC2CMP0	=	0x00b4
                           0000B5   355 _RTC2CMP1	=	0x00b5
                           0000B6   356 _RTC2CPT00	=	0x00b6
                           0000B7   357 _SPISRDSZ	=	0x00b7
                           0000B8   358 _IEN1	=	0x00b8
                           0000B9   359 _IP1	=	0x00b9
                           0000BA   360 _S0RELH	=	0x00ba
                           0000BC   361 _SPISCON0	=	0x00bc
                           0000BD   362 _SPISCON1	=	0x00bd
                           0000BE   363 _SPISSTAT	=	0x00be
                           0000BF   364 _SPISDAT	=	0x00bf
                           0000C0   365 _IRCON	=	0x00c0
                           0000C1   366 _CCEN	=	0x00c1
                           0000C2   367 _CCL1	=	0x00c2
                           0000C3   368 _CCH1	=	0x00c3
                           0000C4   369 _CCL2	=	0x00c4
                           0000C5   370 _CCH2	=	0x00c5
                           0000C6   371 _CCL3	=	0x00c6
                           0000C7   372 _CCH3	=	0x00c7
                           0000C8   373 _T2CON	=	0x00c8
                           0000C9   374 _MPAGE	=	0x00c9
                           0000C9   375 __XPAGE	=	0x00c9
                           0000CA   376 _CRCL	=	0x00ca
                           0000CB   377 _CRCH	=	0x00cb
                           0000CC   378 _TL2	=	0x00cc
                           0000CD   379 _TH2	=	0x00cd
                           0000CE   380 _WUOPC1	=	0x00ce
                           0000CF   381 _WUOPC0	=	0x00cf
                           0000D0   382 _PSW	=	0x00d0
                           0000D1   383 _ADCCON3	=	0x00d1
                           0000D2   384 _ADCCON2	=	0x00d2
                           0000D3   385 _ADCCON1	=	0x00d3
                           0000D4   386 _ADCDATH	=	0x00d4
                           0000D5   387 _ADCDATL	=	0x00d5
                           0000D6   388 _RNGCTL	=	0x00d6
                           0000D7   389 _RNGDAT	=	0x00d7
                           0000D8   390 _ADCON	=	0x00d8
                           0000D9   391 _W2SADR	=	0x00d9
                           0000DA   392 _W2DAT	=	0x00da
                           0000DB   393 _COMPCON	=	0x00db
                           0000DC   394 _POFCON	=	0x00dc
                           0000DD   395 _CCPDATIA	=	0x00dd
                           0000DE   396 _CCPDATIB	=	0x00de
                           0000DF   397 _CCPDATO	=	0x00df
                           0000E0   398 _ACC	=	0x00e0
                           0000E1   399 _W2CON1	=	0x00e1
                           0000E2   400 _W2CON0	=	0x00e2
                           0000E4   401 _SPIRCON0	=	0x00e4
                           0000E5   402 _SPIRCON1	=	0x00e5
                           0000E6   403 _SPIRSTAT	=	0x00e6
                           0000E7   404 _SPIRDAT	=	0x00e7
                           0000E8   405 _RFCON	=	0x00e8
                           0000E9   406 _MD0	=	0x00e9
                           0000EA   407 _MD1	=	0x00ea
                           0000EB   408 _MD2	=	0x00eb
                           0000EC   409 _MD3	=	0x00ec
                           0000ED   410 _MD4	=	0x00ed
                           0000EE   411 _MD5	=	0x00ee
                           0000EF   412 _ARCON	=	0x00ef
                           0000F0   413 _B	=	0x00f0
                           0000F8   414 _FSR	=	0x00f8
                           0000F9   415 _FPCR	=	0x00f9
                           0000FA   416 _FCR	=	0x00fa
                           0000FC   417 _SPIMCON0	=	0x00fc
                           0000FD   418 _SPIMCON1	=	0x00fd
                           0000FE   419 _SPIMSTAT	=	0x00fe
                           0000FF   420 _SPIMDAT	=	0x00ff
                           00C3C2   421 _CC1	=	0xc3c2
                           00C5C4   422 _CC2	=	0xc5c4
                           00C7C6   423 _CC3	=	0xc7c6
                           00CBCA   424 _CRC	=	0xcbca
                           008C8A   425 _T0	=	0x8c8a
                           008D8B   426 _T1	=	0x8d8b
                           00CDCC   427 _T2	=	0xcdcc
                           00BAAA   428 _S0REL	=	0xbaaa
                           00D4D5   429 _ADCDAT	=	0xd4d5
                                    430 ;--------------------------------------------------------
                                    431 ; special function bits
                                    432 ;--------------------------------------------------------
                                    433 	.area RSEG    (ABS,DATA)
      000000                        434 	.org 0x0000
                           000080   435 _P0_SB_D0	=	0x0080
                           000081   436 _P0_SB_D1	=	0x0081
                           000082   437 _P0_SB_D2	=	0x0082
                           000083   438 _P0_SB_D3	=	0x0083
                           000084   439 _P0_SB_D4	=	0x0084
                           000085   440 _P0_SB_D5	=	0x0085
                           000086   441 _P0_SB_D6	=	0x0086
                           000087   442 _P0_SB_D7	=	0x0087
                           000088   443 _TCON_SB_IT0	=	0x0088
                           000089   444 _TCON_SB_IE0	=	0x0089
                           00008A   445 _TCON_SB_IT1	=	0x008a
                           00008B   446 _TCON_SB_IE1	=	0x008b
                           00008C   447 _TCON_SB_TR0	=	0x008c
                           00008D   448 _TCON_SB_TF0	=	0x008d
                           00008E   449 _TCON_SB_TR1	=	0x008e
                           00008F   450 _TCON_SB_TF1	=	0x008f
                           000090   451 _P1_SB_D0	=	0x0090
                           000091   452 _P1_SB_D1	=	0x0091
                           000092   453 _P1_SB_D2	=	0x0092
                           000093   454 _P1_SB_D3	=	0x0093
                           000094   455 _P1_SB_D4	=	0x0094
                           000095   456 _P1_SB_D5	=	0x0095
                           000096   457 _P1_SB_D6	=	0x0096
                           000097   458 _P1_SB_D7	=	0x0097
                           000098   459 _S0CON_SB_RI0	=	0x0098
                           000099   460 _S0CON_SB_TI0	=	0x0099
                           00009A   461 _S0CON_SB_RB80	=	0x009a
                           00009B   462 _S0CON_SB_TB80	=	0x009b
                           00009C   463 _S0CON_SB_REN0	=	0x009c
                           00009D   464 _S0CON_SB_SM20	=	0x009d
                           00009E   465 _S0CON_SB_SM1	=	0x009e
                           00009F   466 _S0CON_SB_SM0	=	0x009f
                           0000A0   467 _P2_SB_D0	=	0x00a0
                           0000A1   468 _P2_SB_D1	=	0x00a1
                           0000A2   469 _P2_SB_D2	=	0x00a2
                           0000A3   470 _P2_SB_D3	=	0x00a3
                           0000A4   471 _P2_SB_D4	=	0x00a4
                           0000A5   472 _P2_SB_D5	=	0x00a5
                           0000A6   473 _P2_SB_D6	=	0x00a6
                           0000A7   474 _P2_SB_D7	=	0x00a7
                           0000A8   475 _IEN0_SB_IFP	=	0x00a8
                           0000A9   476 _IEN0_SB_T0	=	0x00a9
                           0000AA   477 _IEN0_SB_POFIRQ	=	0x00aa
                           0000AB   478 _IEN0_SB_T1	=	0x00ab
                           0000AC   479 _IEN0_SB_UART	=	0x00ac
                           0000AD   480 _IEN0_SB_T2	=	0x00ad
                           0000AF   481 _IEN0_SB_GLOBAL	=	0x00af
                           0000B0   482 _P3_SB_D0	=	0x00b0
                           0000B1   483 _P3_SB_D1	=	0x00b1
                           0000B2   484 _P3_SB_D2	=	0x00b2
                           0000B3   485 _P3_SB_D3	=	0x00b3
                           0000B4   486 _P3_SB_D4	=	0x00b4
                           0000B5   487 _P3_SB_D5	=	0x00b5
                           0000B6   488 _P3_SB_D6	=	0x00b6
                           0000B7   489 _P3_SB_D7	=	0x00b7
                           0000B8   490 _IEN1_SB_RFRDY	=	0x00b8
                           0000B9   491 _IEN1_SB_RFIRQ	=	0x00b9
                           0000BA   492 _IEN1_SB_SPI_2WIRE	=	0x00ba
                           0000BB   493 _IEN1_SB_WUOPIRQ	=	0x00bb
                           0000BC   494 _IEN1_SB_MISCIRQ	=	0x00bc
                           0000BD   495 _IEN1_SB_TICK	=	0x00bd
                           0000BF   496 _IEN1_SB_T2EXTRLD	=	0x00bf
                           0000C0   497 _IRCON_SB_RFRDY	=	0x00c0
                           0000C1   498 _IRCON_SB_RFIRQ	=	0x00c1
                           0000C2   499 _IRCON_SB_SPI_2WIRE	=	0x00c2
                           0000C3   500 _IRCON_SB_WUOPIRQ	=	0x00c3
                           0000C4   501 _IRCON_SB_MISCIRQ	=	0x00c4
                           0000C5   502 _IRCON_SB_TICK	=	0x00c5
                           0000C6   503 _IRCON_SB_TF2	=	0x00c6
                           0000C7   504 _IRCON_SB_EXF2	=	0x00c7
                           0000C8   505 _T2CON_SB_T2I0	=	0x00c8
                           0000C9   506 _T2CON_SB_T2I1	=	0x00c9
                           0000CA   507 _T2CON_SB_T2CM	=	0x00ca
                           0000CB   508 _T2CON_SB_T2R0	=	0x00cb
                           0000CC   509 _T2CON_SB_T2R1	=	0x00cc
                           0000CD   510 _T2CON_SB_I2FR	=	0x00cd
                           0000CE   511 _T2CON_SB_I3FR	=	0x00ce
                           0000CF   512 _T2CON_SB_T2PS	=	0x00cf
                           0000D7   513 _PSW_SB_CY	=	0x00d7
                           0000D6   514 _PSW_SB_AC	=	0x00d6
                           0000D5   515 _PSW_SB_F0	=	0x00d5
                           0000D4   516 _PSW_SB_RS1	=	0x00d4
                           0000D3   517 _PSW_SB_RS0	=	0x00d3
                           0000D2   518 _PSW_SB_OV	=	0x00d2
                           0000D1   519 _PSW_SB_F1	=	0x00d1
                           0000D0   520 _PSW_SB_P	=	0x00d0
                           0000DF   521 _ADCON_SB_BD	=	0x00df
                           0000E8   522 _RFCON_SB_RFCE	=	0x00e8
                           0000E9   523 _RFCON_SB_RFCSN	=	0x00e9
                           0000EA   524 _RFCON_SB_RFCKEN	=	0x00ea
                           0000FA   525 _FSR_SB_RDISMB	=	0x00fa
                           0000FB   526 _FSR_SB_INFEN	=	0x00fb
                           0000FC   527 _FSR_SB_RDYN	=	0x00fc
                           0000FD   528 _FSR_SB_WEN	=	0x00fd
                           0000FE   529 _FSR_SB_STP	=	0x00fe
                           0000FF   530 _FSR_SB_ENDBG	=	0x00ff
                                    531 ;--------------------------------------------------------
                                    532 ; overlayable register banks
                                    533 ;--------------------------------------------------------
                                    534 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        535 	.ds 8
                                    536 ;--------------------------------------------------------
                                    537 ; internal ram data
                                    538 ;--------------------------------------------------------
                                    539 	.area DSEG    (DATA)
      000008                        540 _rf_spi_send_read_sloc0_1_0:
      000008                        541 	.ds 3
      00000B                        542 _rf_spi_send_read_sloc1_1_0:
      00000B                        543 	.ds 1
                                    544 ;--------------------------------------------------------
                                    545 ; overlayable items in internal ram 
                                    546 ;--------------------------------------------------------
                                    547 ;--------------------------------------------------------
                                    548 ; Stack segment in internal ram 
                                    549 ;--------------------------------------------------------
                                    550 	.area	SSEG
      000021                        551 __start__stack:
      000021                        552 	.ds	1
                                    553 
                                    554 ;--------------------------------------------------------
                                    555 ; indirectly addressable internal ram data
                                    556 ;--------------------------------------------------------
                                    557 	.area ISEG    (DATA)
                                    558 ;--------------------------------------------------------
                                    559 ; absolute internal ram data
                                    560 ;--------------------------------------------------------
                                    561 	.area IABS    (ABS,DATA)
                                    562 	.area IABS    (ABS,DATA)
                                    563 ;--------------------------------------------------------
                                    564 ; bit data
                                    565 ;--------------------------------------------------------
                                    566 	.area BSEG    (BIT)
      000000                        567 _OneWireReset_sloc0_1_0:
      000000                        568 	.ds 1
                                    569 ;--------------------------------------------------------
                                    570 ; paged external ram data
                                    571 ;--------------------------------------------------------
                                    572 	.area PSEG    (PAG,XDATA)
                                    573 ;--------------------------------------------------------
                                    574 ; external ram data
                                    575 ;--------------------------------------------------------
                                    576 	.area XSEG    (XDATA)
      000001                        577 _rf_read_rx_payload_PARM_2:
      000001                        578 	.ds 2
      000003                        579 _rf_read_rx_payload_dataptr_1_36:
      000003                        580 	.ds 3
      000006                        581 _rf_write_register_PARM_2:
      000006                        582 	.ds 3
      000009                        583 _rf_write_register_PARM_3:
      000009                        584 	.ds 2
      00000B                        585 _rf_write_register_regnumber_1_38:
      00000B                        586 	.ds 1
      00000C                        587 _rf_write_tx_payload_PARM_2:
      00000C                        588 	.ds 2
      00000E                        589 _rf_write_tx_payload_PARM_3:
      00000E                        590 	.ds 1
      00000F                        591 _rf_write_tx_payload_dataptr_1_41:
      00000F                        592 	.ds 3
      000012                        593 _rf_set_as_rx_rx_active_mode_1_45:
      000012                        594 	.ds 1
      000013                        595 _rf_set_as_rx_config_1_46:
      000013                        596 	.ds 1
      000014                        597 _rf_irq_clear_all_dataptr_1_50:
      000014                        598 	.ds 1
      000015                        599 _rf_set_as_tx_config_1_51:
      000015                        600 	.ds 1
      000016                        601 _rf_spi_execute_command_PARM_2:
      000016                        602 	.ds 3
      000019                        603 _rf_spi_execute_command_PARM_3:
      000019                        604 	.ds 2
      00001B                        605 _rf_spi_execute_command_PARM_4:
      00001B                        606 	.ds 1
      00001C                        607 _rf_spi_execute_command_instruction_1_53:
      00001C                        608 	.ds 1
      00001D                        609 _rf_spi_execute_command_status_1_54:
      00001D                        610 	.ds 1
      00001E                        611 _rf_spi_send_read_PARM_2:
      00001E                        612 	.ds 2
      000020                        613 _rf_spi_send_read_PARM_3:
      000020                        614 	.ds 1
      000021                        615 _rf_spi_send_read_dataptr_1_55:
      000021                        616 	.ds 3
      000024                        617 _rf_power_up_param_PARM_2:
      000024                        618 	.ds 1
      000025                        619 _rf_power_up_param_rx_active_mode_1_60:
      000025                        620 	.ds 1
      000026                        621 _rf_read_register_PARM_2:
      000026                        622 	.ds 3
      000029                        623 _rf_read_register_PARM_3:
      000029                        624 	.ds 2
      00002B                        625 _rf_read_register_regnumber_1_66:
      00002B                        626 	.ds 1
      00002C                        627 _rf_spi_send_read_byte_byte_1_68:
      00002C                        628 	.ds 1
      00002D                        629 _rf_set_rx_addr_PARM_2:
      00002D                        630 	.ds 2
      00002F                        631 _rf_set_rx_addr_PARM_3:
      00002F                        632 	.ds 1
      000030                        633 _rf_set_rx_addr_address_1_70:
      000030                        634 	.ds 3
      000033                        635 _rf_power_down_config_1_73:
      000033                        636 	.ds 1
      000034                        637 _rf_power_up_rx_active_mode_1_75:
      000034                        638 	.ds 1
      000035                        639 _rf_power_up_config_1_76:
      000035                        640 	.ds 1
      000036                        641 _gpio_pin_configure_PARM_2:
      000036                        642 	.ds 1
      000037                        643 _gpio_pin_configure_gpio_pin_id_1_83:
      000037                        644 	.ds 1
      000038                        645 _gpio_pin_val_read_gpio_pin_id_1_105:
      000038                        646 	.ds 1
      000039                        647 _gpio_pin_val_read_value_1_106:
      000039                        648 	.ds 1
      00003A                        649 _gpio_pin_val_clear_gpio_pin_id_1_113:
      00003A                        650 	.ds 1
      00003B                        651 _gpio_pin_val_set_gpio_pin_id_1_119:
      00003B                        652 	.ds 1
      00003C                        653 _gpio_pin_val_write_PARM_2:
      00003C                        654 	.ds 1
      00003D                        655 _gpio_pin_val_write_gpio_pin_id_1_125:
      00003D                        656 	.ds 1
      00003E                        657 _delay_us_microseconds_1_129:
      00003E                        658 	.ds 2
      000040                        659 _delay_s_seconds_1_133:
      000040                        660 	.ds 2
      000042                        661 _delay_ms_milliseconds_1_137:
      000042                        662 	.ds 2
      000044                        663 _pwm_configure_pwm_config_options_1_143:
      000044                        664 	.ds 1
      000045                        665 _pwm_start_PARM_2:
      000045                        666 	.ds 1
      000046                        667 _pwm_start_pwm_channel_1_145:
      000046                        668 	.ds 1
      000047                        669 _pwr_clk_mgmt_clklf_configure_clklf_config_options_1_154:
      000047                        670 	.ds 1
      000048                        671 _pwr_clk_mgmt_get_cclk_freq_in_hz_cclk_freq_hz_1_156:
      000048                        672 	.ds 4
      00004C                        673 _pwr_clk_mgmt_wakeup_configure_PARM_2:
      00004C                        674 	.ds 2
      00004E                        675 _pwr_clk_mgmt_wakeup_configure_wakeup_sources_config_options_1_159:
      00004E                        676 	.ds 1
      00004F                        677 _pwr_clk_mgmt_pwr_failure_configure_pwr_failure_config_options_1_161:
      00004F                        678 	.ds 1
      000050                        679 _watchdog_set_wdsv_count_wdsv_value_1_164:
      000050                        680 	.ds 2
      000052                        681 _watchdog_start_and_set_timeout_in_ms_milliseconds_1_166:
      000052                        682 	.ds 4
      000056                        683 _watchdog_start_and_set_timeout_in_ms_wd_value_1_167:
      000056                        684 	.ds 2
      000058                        685 _interrupt_configure_ifp_PARM_2:
      000058                        686 	.ds 1
      000059                        687 _interrupt_configure_ifp_interrupt_ifp_input_1_170:
      000059                        688 	.ds 1
      00005A                        689 _adc_configure_adc_config_options_1_184:
      00005A                        690 	.ds 2
      00005C                        691 _adc_set_input_channel_adc_channel_1_186:
      00005C                        692 	.ds 1
      00005D                        693 _adc_start_single_conversion_adc_channel_1_188:
      00005D                        694 	.ds 1
      00005E                        695 _adc_start_single_conversion_get_value_adc_channel_1_190:
      00005E                        696 	.ds 1
      00005F                        697 _timer0_configure_PARM_2:
      00005F                        698 	.ds 2
      000061                        699 _timer0_configure_timer0_config_options_1_193:
      000061                        700 	.ds 1
      000062                        701 _timer1_configure_PARM_2:
      000062                        702 	.ds 2
      000064                        703 _timer1_configure_timer1_config_options_1_198:
      000064                        704 	.ds 1
      000065                        705 _rtc2_configure_PARM_2:
      000065                        706 	.ds 2
      000067                        707 _rtc2_configure_rtc2_config_options_1_203:
      000067                        708 	.ds 1
      000068                        709 _radiobegin_setup_1_206:
      000068                        710 	.ds 1
      000069                        711 _setChannel_channel_1_207:
      000069                        712 	.ds 1
      00006A                        713 _setDataRate_speed_1_209:
      00006A                        714 	.ds 1
      00006B                        715 _setDataRate_buffer_1_210:
      00006B                        716 	.ds 1
      00006C                        717 _setAutoAck_enable_1_211:
      00006C                        718 	.ds 1
      00006D                        719 _setAutoAck_buffer_1_212:
      00006D                        720 	.ds 1
      00006E                        721 _setCRCLength_length_1_213:
      00006E                        722 	.ds 1
      00006F                        723 _setCRCLength_buffer_1_214:
      00006F                        724 	.ds 1
      000070                        725 _setPALevel_level_1_215:
      000070                        726 	.ds 1
      000071                        727 _setPALevel_setup_1_216:
      000071                        728 	.ds 1
      000072                        729 _openAllPipe_buffer_1_217:
      000072                        730 	.ds 5
      000077                        731 _openAllPipe_setup_1_217:
      000077                        732 	.ds 1
      000078                        733 _available_pipe_num_1_218:
      000078                        734 	.ds 3
      00007B                        735 _available_buffer_1_219:
      00007B                        736 	.ds 1
      00007C                        737 _OneWireOutByte_d_1_226:
      00007C                        738 	.ds 1
      00007D                        739 _OneWireInByte_d_1_233:
      00007D                        740 	.ds 1
      00007E                        741 _ds18b20_read_temp_1_236:
      00007E                        742 	.ds 3
      000081                        743 _ds18b20_read_i_1_237:
      000081                        744 	.ds 1
      000082                        745 _ds18b20_read_data_1_237:
      000082                        746 	.ds 9
      00008B                        747 _ds18b20_read_trow_1_237:
      00008B                        748 	.ds 2
      00008D                        749 _ds18b20_read_decimal_1_237:
      00008D                        750 	.ds 4
      000091                        751 _clientnf::
      000091                        752 	.ds 9
      00009A                        753 _DSTemp::
      00009A                        754 	.ds 2
                           000100   755 _main_countloop_1_247	=	0x0100
                           000110   756 _main_sleep_counter_1_247	=	0x0110
                                    757 ;--------------------------------------------------------
                                    758 ; absolute external ram data
                                    759 ;--------------------------------------------------------
                                    760 	.area XABS    (ABS,XDATA)
                                    761 ;--------------------------------------------------------
                                    762 ; external initialized ram data
                                    763 ;--------------------------------------------------------
                                    764 	.area XISEG   (XDATA)
                                    765 	.area HOME    (CODE)
                                    766 	.area GSINIT0 (CODE)
                                    767 	.area GSINIT1 (CODE)
                                    768 	.area GSINIT2 (CODE)
                                    769 	.area GSINIT3 (CODE)
                                    770 	.area GSINIT4 (CODE)
                                    771 	.area GSINIT5 (CODE)
                                    772 	.area GSINIT  (CODE)
                                    773 	.area GSFINAL (CODE)
                                    774 	.area CSEG    (CODE)
                                    775 ;--------------------------------------------------------
                                    776 ; interrupt vector 
                                    777 ;--------------------------------------------------------
                                    778 	.area HOME    (CODE)
      000000                        779 __interrupt_vect:
      000000 02 00 06         [24]  780 	ljmp	__sdcc_gsinit_startup
                                    781 ;--------------------------------------------------------
                                    782 ; global & static initialisations
                                    783 ;--------------------------------------------------------
                                    784 	.area HOME    (CODE)
                                    785 	.area GSINIT  (CODE)
                                    786 	.area GSFINAL (CODE)
                                    787 	.area GSINIT  (CODE)
                                    788 	.globl __sdcc_gsinit_startup
                                    789 	.globl __sdcc_program_startup
                                    790 	.globl __start__stack
                                    791 	.globl __mcs51_genXINIT
                                    792 	.globl __mcs51_genXRAMCLEAR
                                    793 	.globl __mcs51_genRAMCLEAR
                                    794 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  795 	ljmp	__sdcc_program_startup
                                    796 ;--------------------------------------------------------
                                    797 ; Home
                                    798 ;--------------------------------------------------------
                                    799 	.area HOME    (CODE)
                                    800 	.area HOME    (CODE)
      000003                        801 __sdcc_program_startup:
      000003 02 11 F1         [24]  802 	ljmp	_main
                                    803 ;	return from main will return to caller
                                    804 ;--------------------------------------------------------
                                    805 ; code
                                    806 ;--------------------------------------------------------
                                    807 	.area CSEG    (CODE)
                                    808 ;------------------------------------------------------------
                                    809 ;Allocation info for local variables in function 'rf_read_rx_payload'
                                    810 ;------------------------------------------------------------
                                    811 ;len                       Allocated with name '_rf_read_rx_payload_PARM_2'
                                    812 ;dataptr                   Allocated with name '_rf_read_rx_payload_dataptr_1_36'
                                    813 ;status                    Allocated with name '_rf_read_rx_payload_status_1_37'
                                    814 ;------------------------------------------------------------
                                    815 ;	../sdk/src/rf/src/rf_read_rx_payload.c:48: unsigned char rf_read_rx_payload(unsigned char * dataptr, unsigned int len)
                                    816 ;	-----------------------------------------
                                    817 ;	 function rf_read_rx_payload
                                    818 ;	-----------------------------------------
      000062                        819 _rf_read_rx_payload:
                           000007   820 	ar7 = 0x07
                           000006   821 	ar6 = 0x06
                           000005   822 	ar5 = 0x05
                           000004   823 	ar4 = 0x04
                           000003   824 	ar3 = 0x03
                           000002   825 	ar2 = 0x02
                           000001   826 	ar1 = 0x01
                           000000   827 	ar0 = 0x00
      000062 AF F0            [24]  828 	mov	r7,b
      000064 AE 83            [24]  829 	mov	r6,dph
      000066 E5 82            [12]  830 	mov	a,dpl
      000068 90 00 03         [24]  831 	mov	dptr,#_rf_read_rx_payload_dataptr_1_36
      00006B F0               [24]  832 	movx	@dptr,a
      00006C EE               [12]  833 	mov	a,r6
      00006D A3               [24]  834 	inc	dptr
      00006E F0               [24]  835 	movx	@dptr,a
      00006F EF               [12]  836 	mov	a,r7
      000070 A3               [24]  837 	inc	dptr
      000071 F0               [24]  838 	movx	@dptr,a
                                    839 ;	../sdk/src/rf/src/rf_read_rx_payload.c:53: rf_clear_ce();
      000072 C2 E8            [12]  840 	clr	_RFCON_SB_RFCE 
                                    841 ;	../sdk/src/rf/src/rf_read_rx_payload.c:54: status = rf_spi_execute_command(RF_R_RX_PAYLOAD, dataptr, len, true);
      000074 90 00 03         [24]  842 	mov	dptr,#_rf_read_rx_payload_dataptr_1_36
      000077 E0               [24]  843 	movx	a,@dptr
      000078 FD               [12]  844 	mov	r5,a
      000079 A3               [24]  845 	inc	dptr
      00007A E0               [24]  846 	movx	a,@dptr
      00007B FE               [12]  847 	mov	r6,a
      00007C A3               [24]  848 	inc	dptr
      00007D E0               [24]  849 	movx	a,@dptr
      00007E FF               [12]  850 	mov	r7,a
      00007F 90 00 01         [24]  851 	mov	dptr,#_rf_read_rx_payload_PARM_2
      000082 E0               [24]  852 	movx	a,@dptr
      000083 FB               [12]  853 	mov	r3,a
      000084 A3               [24]  854 	inc	dptr
      000085 E0               [24]  855 	movx	a,@dptr
      000086 FC               [12]  856 	mov	r4,a
      000087 90 00 16         [24]  857 	mov	dptr,#_rf_spi_execute_command_PARM_2
      00008A ED               [12]  858 	mov	a,r5
      00008B F0               [24]  859 	movx	@dptr,a
      00008C EE               [12]  860 	mov	a,r6
      00008D A3               [24]  861 	inc	dptr
      00008E F0               [24]  862 	movx	@dptr,a
      00008F EF               [12]  863 	mov	a,r7
      000090 A3               [24]  864 	inc	dptr
      000091 F0               [24]  865 	movx	@dptr,a
      000092 90 00 19         [24]  866 	mov	dptr,#_rf_spi_execute_command_PARM_3
      000095 EB               [12]  867 	mov	a,r3
      000096 F0               [24]  868 	movx	@dptr,a
      000097 EC               [12]  869 	mov	a,r4
      000098 A3               [24]  870 	inc	dptr
      000099 F0               [24]  871 	movx	@dptr,a
      00009A 90 00 1B         [24]  872 	mov	dptr,#_rf_spi_execute_command_PARM_4
      00009D 74 01            [12]  873 	mov	a,#0x01
      00009F F0               [24]  874 	movx	@dptr,a
      0000A0 75 82 61         [24]  875 	mov	dpl,#0x61
      0000A3 12 02 2B         [24]  876 	lcall	_rf_spi_execute_command
      0000A6 AF 82            [24]  877 	mov	r7,dpl
                                    878 ;	../sdk/src/rf/src/rf_read_rx_payload.c:55: rf_set_ce();
      0000A8 D2 E8            [12]  879 	setb	_RFCON_SB_RFCE 
      0000AA 90 00 04         [24]  880 	mov	dptr,#0x0004
      0000AD C0 07            [24]  881 	push	ar7
      0000AF 12 08 40         [24]  882 	lcall	_delay_us
      0000B2 D0 07            [24]  883 	pop	ar7
                                    884 ;	../sdk/src/rf/src/rf_read_rx_payload.c:57: return status; //Return the STATUS register value
      0000B4 8F 82            [24]  885 	mov	dpl,r7
      0000B6 22               [24]  886 	ret
                                    887 ;------------------------------------------------------------
                                    888 ;Allocation info for local variables in function 'rf_write_register'
                                    889 ;------------------------------------------------------------
                                    890 ;dataptr                   Allocated with name '_rf_write_register_PARM_2'
                                    891 ;len                       Allocated with name '_rf_write_register_PARM_3'
                                    892 ;regnumber                 Allocated with name '_rf_write_register_regnumber_1_38'
                                    893 ;------------------------------------------------------------
                                    894 ;	../sdk/src/rf/src/rf_write_register.c:49: unsigned char rf_write_register(unsigned char regnumber, unsigned char * dataptr, unsigned int len)
                                    895 ;	-----------------------------------------
                                    896 ;	 function rf_write_register
                                    897 ;	-----------------------------------------
      0000B7                        898 _rf_write_register:
      0000B7 E5 82            [12]  899 	mov	a,dpl
      0000B9 90 00 0B         [24]  900 	mov	dptr,#_rf_write_register_regnumber_1_38
      0000BC F0               [24]  901 	movx	@dptr,a
                                    902 ;	../sdk/src/rf/src/rf_write_register.c:52: return rf_spi_execute_command(RF_W_REGISTER | (regnumber & RF_W_REGISTER_DATA), dataptr, len, false);
      0000BD E0               [24]  903 	movx	a,@dptr
      0000BE FF               [12]  904 	mov	r7,a
      0000BF 74 1F            [12]  905 	mov	a,#0x1f
      0000C1 5F               [12]  906 	anl	a,r7
      0000C2 44 20            [12]  907 	orl	a,#0x20
      0000C4 FF               [12]  908 	mov	r7,a
      0000C5 90 00 06         [24]  909 	mov	dptr,#_rf_write_register_PARM_2
      0000C8 E0               [24]  910 	movx	a,@dptr
      0000C9 FC               [12]  911 	mov	r4,a
      0000CA A3               [24]  912 	inc	dptr
      0000CB E0               [24]  913 	movx	a,@dptr
      0000CC FD               [12]  914 	mov	r5,a
      0000CD A3               [24]  915 	inc	dptr
      0000CE E0               [24]  916 	movx	a,@dptr
      0000CF FE               [12]  917 	mov	r6,a
      0000D0 90 00 09         [24]  918 	mov	dptr,#_rf_write_register_PARM_3
      0000D3 E0               [24]  919 	movx	a,@dptr
      0000D4 FA               [12]  920 	mov	r2,a
      0000D5 A3               [24]  921 	inc	dptr
      0000D6 E0               [24]  922 	movx	a,@dptr
      0000D7 FB               [12]  923 	mov	r3,a
      0000D8 90 00 16         [24]  924 	mov	dptr,#_rf_spi_execute_command_PARM_2
      0000DB EC               [12]  925 	mov	a,r4
      0000DC F0               [24]  926 	movx	@dptr,a
      0000DD ED               [12]  927 	mov	a,r5
      0000DE A3               [24]  928 	inc	dptr
      0000DF F0               [24]  929 	movx	@dptr,a
      0000E0 EE               [12]  930 	mov	a,r6
      0000E1 A3               [24]  931 	inc	dptr
      0000E2 F0               [24]  932 	movx	@dptr,a
      0000E3 90 00 19         [24]  933 	mov	dptr,#_rf_spi_execute_command_PARM_3
      0000E6 EA               [12]  934 	mov	a,r2
      0000E7 F0               [24]  935 	movx	@dptr,a
      0000E8 EB               [12]  936 	mov	a,r3
      0000E9 A3               [24]  937 	inc	dptr
      0000EA F0               [24]  938 	movx	@dptr,a
      0000EB 90 00 1B         [24]  939 	mov	dptr,#_rf_spi_execute_command_PARM_4
      0000EE E4               [12]  940 	clr	a
      0000EF F0               [24]  941 	movx	@dptr,a
      0000F0 8F 82            [24]  942 	mov	dpl,r7
      0000F2 02 02 2B         [24]  943 	ljmp	_rf_spi_execute_command
                                    944 ;------------------------------------------------------------
                                    945 ;Allocation info for local variables in function 'rf_spi_configure_enable'
                                    946 ;------------------------------------------------------------
                                    947 ;	../sdk/src/rf/src/rf_spi_configure_enable.c:47: void rf_spi_configure_enable()
                                    948 ;	-----------------------------------------
                                    949 ;	 function rf_spi_configure_enable
                                    950 ;	-----------------------------------------
      0000F5                        951 _rf_spi_configure_enable:
                                    952 ;	../sdk/src/rf/src/rf_spi_configure_enable.c:50: RFCON = 0x02;
      0000F5 75 E8 02         [24]  953 	mov	_RFCON,#0x02
                                    954 ;	../sdk/src/rf/src/rf_spi_configure_enable.c:51: RFCON = RFCON_RFCKEN;
      0000F8 75 E8 04         [24]  955 	mov	_RFCON,#0x04
      0000FB 22               [24]  956 	ret
                                    957 ;------------------------------------------------------------
                                    958 ;Allocation info for local variables in function 'rf_write_tx_payload'
                                    959 ;------------------------------------------------------------
                                    960 ;len                       Allocated with name '_rf_write_tx_payload_PARM_2'
                                    961 ;transmit                  Allocated with name '_rf_write_tx_payload_PARM_3'
                                    962 ;dataptr                   Allocated with name '_rf_write_tx_payload_dataptr_1_41'
                                    963 ;status                    Allocated with name '_rf_write_tx_payload_status_1_42'
                                    964 ;------------------------------------------------------------
                                    965 ;	../sdk/src/rf/src/rf_write_tx_payload.c:49: unsigned char rf_write_tx_payload(unsigned char * dataptr, unsigned int len, bool transmit)
                                    966 ;	-----------------------------------------
                                    967 ;	 function rf_write_tx_payload
                                    968 ;	-----------------------------------------
      0000FC                        969 _rf_write_tx_payload:
      0000FC AF F0            [24]  970 	mov	r7,b
      0000FE AE 83            [24]  971 	mov	r6,dph
      000100 E5 82            [12]  972 	mov	a,dpl
      000102 90 00 0F         [24]  973 	mov	dptr,#_rf_write_tx_payload_dataptr_1_41
      000105 F0               [24]  974 	movx	@dptr,a
      000106 EE               [12]  975 	mov	a,r6
      000107 A3               [24]  976 	inc	dptr
      000108 F0               [24]  977 	movx	@dptr,a
      000109 EF               [12]  978 	mov	a,r7
      00010A A3               [24]  979 	inc	dptr
      00010B F0               [24]  980 	movx	@dptr,a
                                    981 ;	../sdk/src/rf/src/rf_write_tx_payload.c:53: status = rf_spi_execute_command(RF_W_TX_PAYLOAD, dataptr, len, false); //Write the payload
      00010C 90 00 0F         [24]  982 	mov	dptr,#_rf_write_tx_payload_dataptr_1_41
      00010F E0               [24]  983 	movx	a,@dptr
      000110 FD               [12]  984 	mov	r5,a
      000111 A3               [24]  985 	inc	dptr
      000112 E0               [24]  986 	movx	a,@dptr
      000113 FE               [12]  987 	mov	r6,a
      000114 A3               [24]  988 	inc	dptr
      000115 E0               [24]  989 	movx	a,@dptr
      000116 FF               [12]  990 	mov	r7,a
      000117 90 00 0C         [24]  991 	mov	dptr,#_rf_write_tx_payload_PARM_2
      00011A E0               [24]  992 	movx	a,@dptr
      00011B FB               [12]  993 	mov	r3,a
      00011C A3               [24]  994 	inc	dptr
      00011D E0               [24]  995 	movx	a,@dptr
      00011E FC               [12]  996 	mov	r4,a
      00011F 90 00 16         [24]  997 	mov	dptr,#_rf_spi_execute_command_PARM_2
      000122 ED               [12]  998 	mov	a,r5
      000123 F0               [24]  999 	movx	@dptr,a
      000124 EE               [12] 1000 	mov	a,r6
      000125 A3               [24] 1001 	inc	dptr
      000126 F0               [24] 1002 	movx	@dptr,a
      000127 EF               [12] 1003 	mov	a,r7
      000128 A3               [24] 1004 	inc	dptr
      000129 F0               [24] 1005 	movx	@dptr,a
      00012A 90 00 19         [24] 1006 	mov	dptr,#_rf_spi_execute_command_PARM_3
      00012D EB               [12] 1007 	mov	a,r3
      00012E F0               [24] 1008 	movx	@dptr,a
      00012F EC               [12] 1009 	mov	a,r4
      000130 A3               [24] 1010 	inc	dptr
      000131 F0               [24] 1011 	movx	@dptr,a
      000132 90 00 1B         [24] 1012 	mov	dptr,#_rf_spi_execute_command_PARM_4
      000135 E4               [12] 1013 	clr	a
      000136 F0               [24] 1014 	movx	@dptr,a
      000137 75 82 A0         [24] 1015 	mov	dpl,#0xa0
      00013A 12 02 2B         [24] 1016 	lcall	_rf_spi_execute_command
      00013D AF 82            [24] 1017 	mov	r7,dpl
                                   1018 ;	../sdk/src/rf/src/rf_write_tx_payload.c:56: if(transmit == true)
      00013F 90 00 0E         [24] 1019 	mov	dptr,#_rf_write_tx_payload_PARM_3
      000142 E0               [24] 1020 	movx	a,@dptr
      000143 FE               [12] 1021 	mov	r6,a
      000144 BE 01 07         [24] 1022 	cjne	r6,#0x01,00102$
                                   1023 ;	../sdk/src/rf/src/rf_write_tx_payload.c:58: rf_transmit();
      000147 C0 07            [24] 1024 	push	ar7
      000149 12 01 51         [24] 1025 	lcall	_rf_transmit
      00014C D0 07            [24] 1026 	pop	ar7
      00014E                       1027 00102$:
                                   1028 ;	../sdk/src/rf/src/rf_write_tx_payload.c:61: return status; //Return the value of STATUS
      00014E 8F 82            [24] 1029 	mov	dpl,r7
      000150 22               [24] 1030 	ret
                                   1031 ;------------------------------------------------------------
                                   1032 ;Allocation info for local variables in function 'rf_transmit'
                                   1033 ;------------------------------------------------------------
                                   1034 ;	../sdk/src/rf/src/rf_transmit.c:47: void rf_transmit()
                                   1035 ;	-----------------------------------------
                                   1036 ;	 function rf_transmit
                                   1037 ;	-----------------------------------------
      000151                       1038 _rf_transmit:
                                   1039 ;	../sdk/src/rf/src/rf_transmit.c:50: rf_set_ce();
      000151 D2 E8            [12] 1040 	setb	_RFCON_SB_RFCE 
      000153 90 00 04         [24] 1041 	mov	dptr,#0x0004
      000156 12 08 40         [24] 1042 	lcall	_delay_us
                                   1043 ;	../sdk/src/rf/src/rf_transmit.c:51: delay_us(10);
      000159 90 00 0A         [24] 1044 	mov	dptr,#0x000a
      00015C 12 08 40         [24] 1045 	lcall	_delay_us
                                   1046 ;	../sdk/src/rf/src/rf_transmit.c:52: rf_clear_ce();
      00015F C2 E8            [12] 1047 	clr	_RFCON_SB_RFCE 
      000161 22               [24] 1048 	ret
                                   1049 ;------------------------------------------------------------
                                   1050 ;Allocation info for local variables in function 'rf_set_as_rx'
                                   1051 ;------------------------------------------------------------
                                   1052 ;rx_active_mode            Allocated with name '_rf_set_as_rx_rx_active_mode_1_45'
                                   1053 ;config                    Allocated with name '_rf_set_as_rx_config_1_46'
                                   1054 ;------------------------------------------------------------
                                   1055 ;	../sdk/src/rf/src/rf_set_as_rx.c:47: void rf_set_as_rx(bool rx_active_mode)
                                   1056 ;	-----------------------------------------
                                   1057 ;	 function rf_set_as_rx
                                   1058 ;	-----------------------------------------
      000162                       1059 _rf_set_as_rx:
      000162 E5 82            [12] 1060 	mov	a,dpl
      000164 90 00 12         [24] 1061 	mov	dptr,#_rf_set_as_rx_rx_active_mode_1_45
      000167 F0               [24] 1062 	movx	@dptr,a
                                   1063 ;	../sdk/src/rf/src/rf_set_as_rx.c:51: rf_read_register(RF_CONFIG, &config, 1); //Read the current CONFIG value
      000168 90 00 26         [24] 1064 	mov	dptr,#_rf_read_register_PARM_2
      00016B 74 13            [12] 1065 	mov	a,#_rf_set_as_rx_config_1_46
      00016D F0               [24] 1066 	movx	@dptr,a
      00016E 74 00            [12] 1067 	mov	a,#(_rf_set_as_rx_config_1_46 >> 8)
      000170 A3               [24] 1068 	inc	dptr
      000171 F0               [24] 1069 	movx	@dptr,a
      000172 E4               [12] 1070 	clr	a
      000173 A3               [24] 1071 	inc	dptr
      000174 F0               [24] 1072 	movx	@dptr,a
      000175 90 00 29         [24] 1073 	mov	dptr,#_rf_read_register_PARM_3
      000178 04               [12] 1074 	inc	a
      000179 F0               [24] 1075 	movx	@dptr,a
      00017A E4               [12] 1076 	clr	a
      00017B A3               [24] 1077 	inc	dptr
      00017C F0               [24] 1078 	movx	@dptr,a
      00017D 75 82 00         [24] 1079 	mov	dpl,#0x00
      000180 12 03 67         [24] 1080 	lcall	_rf_read_register
                                   1081 ;	../sdk/src/rf/src/rf_set_as_rx.c:54: if((config & RF_CONFIG_PRIM_RX) != 0)
      000183 90 00 13         [24] 1082 	mov	dptr,#_rf_set_as_rx_config_1_46
      000186 E0               [24] 1083 	movx	a,@dptr
      000187 FF               [12] 1084 	mov	r7,a
      000188 30 E0 01         [24] 1085 	jnb	acc.0,00102$
                                   1086 ;	../sdk/src/rf/src/rf_set_as_rx.c:56: return;
      00018B 22               [24] 1087 	ret
      00018C                       1088 00102$:
                                   1089 ;	../sdk/src/rf/src/rf_set_as_rx.c:60: config |= RF_CONFIG_PRIM_RX;
      00018C 90 00 13         [24] 1090 	mov	dptr,#_rf_set_as_rx_config_1_46
      00018F 74 01            [12] 1091 	mov	a,#0x01
      000191 4F               [12] 1092 	orl	a,r7
      000192 F0               [24] 1093 	movx	@dptr,a
                                   1094 ;	../sdk/src/rf/src/rf_set_as_rx.c:61: rf_write_register(RF_CONFIG, &config, 1);
      000193 90 00 06         [24] 1095 	mov	dptr,#_rf_write_register_PARM_2
      000196 74 13            [12] 1096 	mov	a,#_rf_set_as_rx_config_1_46
      000198 F0               [24] 1097 	movx	@dptr,a
      000199 74 00            [12] 1098 	mov	a,#(_rf_set_as_rx_config_1_46 >> 8)
      00019B A3               [24] 1099 	inc	dptr
      00019C F0               [24] 1100 	movx	@dptr,a
      00019D E4               [12] 1101 	clr	a
      00019E A3               [24] 1102 	inc	dptr
      00019F F0               [24] 1103 	movx	@dptr,a
      0001A0 90 00 09         [24] 1104 	mov	dptr,#_rf_write_register_PARM_3
      0001A3 04               [12] 1105 	inc	a
      0001A4 F0               [24] 1106 	movx	@dptr,a
      0001A5 E4               [12] 1107 	clr	a
      0001A6 A3               [24] 1108 	inc	dptr
      0001A7 F0               [24] 1109 	movx	@dptr,a
      0001A8 75 82 00         [24] 1110 	mov	dpl,#0x00
      0001AB 12 00 B7         [24] 1111 	lcall	_rf_write_register
                                   1112 ;	../sdk/src/rf/src/rf_set_as_rx.c:64: if(rx_active_mode != false)
      0001AE 90 00 12         [24] 1113 	mov	dptr,#_rf_set_as_rx_rx_active_mode_1_45
      0001B1 E0               [24] 1114 	movx	a,@dptr
      0001B2 60 08            [24] 1115 	jz	00104$
                                   1116 ;	../sdk/src/rf/src/rf_set_as_rx.c:66: rf_set_ce();
      0001B4 D2 E8            [12] 1117 	setb	_RFCON_SB_RFCE 
      0001B6 90 00 04         [24] 1118 	mov	dptr,#0x0004
      0001B9 02 08 40         [24] 1119 	ljmp	_delay_us
      0001BC                       1120 00104$:
                                   1121 ;	../sdk/src/rf/src/rf_set_as_rx.c:70: rf_clear_ce();
      0001BC C2 E8            [12] 1122 	clr	_RFCON_SB_RFCE 
      0001BE 22               [24] 1123 	ret
                                   1124 ;------------------------------------------------------------
                                   1125 ;Allocation info for local variables in function 'rf_irq_clear_all'
                                   1126 ;------------------------------------------------------------
                                   1127 ;dataptr                   Allocated with name '_rf_irq_clear_all_dataptr_1_50'
                                   1128 ;------------------------------------------------------------
                                   1129 ;	../sdk/src/rf/src/rf_irq_clear_all.c:47: void rf_irq_clear_all()
                                   1130 ;	-----------------------------------------
                                   1131 ;	 function rf_irq_clear_all
                                   1132 ;	-----------------------------------------
      0001BF                       1133 _rf_irq_clear_all:
                                   1134 ;	../sdk/src/rf/src/rf_irq_clear_all.c:50: unsigned char dataptr = RF_STATUS_RX_DR | RF_STATUS_TX_DS | RF_STATUS_MAX_RT;
      0001BF 90 00 14         [24] 1135 	mov	dptr,#_rf_irq_clear_all_dataptr_1_50
      0001C2 74 70            [12] 1136 	mov	a,#0x70
      0001C4 F0               [24] 1137 	movx	@dptr,a
                                   1138 ;	../sdk/src/rf/src/rf_irq_clear_all.c:52: rf_write_register(RF_STATUS, &dataptr, 1);
      0001C5 90 00 06         [24] 1139 	mov	dptr,#_rf_write_register_PARM_2
      0001C8 74 14            [12] 1140 	mov	a,#_rf_irq_clear_all_dataptr_1_50
      0001CA F0               [24] 1141 	movx	@dptr,a
      0001CB 74 00            [12] 1142 	mov	a,#(_rf_irq_clear_all_dataptr_1_50 >> 8)
      0001CD A3               [24] 1143 	inc	dptr
      0001CE F0               [24] 1144 	movx	@dptr,a
      0001CF E4               [12] 1145 	clr	a
      0001D0 A3               [24] 1146 	inc	dptr
      0001D1 F0               [24] 1147 	movx	@dptr,a
      0001D2 90 00 09         [24] 1148 	mov	dptr,#_rf_write_register_PARM_3
      0001D5 04               [12] 1149 	inc	a
      0001D6 F0               [24] 1150 	movx	@dptr,a
      0001D7 E4               [12] 1151 	clr	a
      0001D8 A3               [24] 1152 	inc	dptr
      0001D9 F0               [24] 1153 	movx	@dptr,a
      0001DA 75 82 07         [24] 1154 	mov	dpl,#0x07
      0001DD 12 00 B7         [24] 1155 	lcall	_rf_write_register
                                   1156 ;	../sdk/src/rf/src/rf_irq_clear_all.c:54: sbit_clear(IRCON_SB_RFIRQ); //Clear the master interrupt
      0001E0 C2 C1            [12] 1157 	clr	_IRCON_SB_RFIRQ 
      0001E2 22               [24] 1158 	ret
                                   1159 ;------------------------------------------------------------
                                   1160 ;Allocation info for local variables in function 'rf_set_as_tx'
                                   1161 ;------------------------------------------------------------
                                   1162 ;config                    Allocated with name '_rf_set_as_tx_config_1_51'
                                   1163 ;------------------------------------------------------------
                                   1164 ;	../sdk/src/rf/src/rf_set_as_tx.c:47: void rf_set_as_tx()
                                   1165 ;	-----------------------------------------
                                   1166 ;	 function rf_set_as_tx
                                   1167 ;	-----------------------------------------
      0001E3                       1168 _rf_set_as_tx:
                                   1169 ;	../sdk/src/rf/src/rf_set_as_tx.c:51: rf_read_register(RF_CONFIG, &config, 1); //Read the current CONFIG value
      0001E3 90 00 26         [24] 1170 	mov	dptr,#_rf_read_register_PARM_2
      0001E6 74 15            [12] 1171 	mov	a,#_rf_set_as_tx_config_1_51
      0001E8 F0               [24] 1172 	movx	@dptr,a
      0001E9 74 00            [12] 1173 	mov	a,#(_rf_set_as_tx_config_1_51 >> 8)
      0001EB A3               [24] 1174 	inc	dptr
      0001EC F0               [24] 1175 	movx	@dptr,a
      0001ED E4               [12] 1176 	clr	a
      0001EE A3               [24] 1177 	inc	dptr
      0001EF F0               [24] 1178 	movx	@dptr,a
      0001F0 90 00 29         [24] 1179 	mov	dptr,#_rf_read_register_PARM_3
      0001F3 04               [12] 1180 	inc	a
      0001F4 F0               [24] 1181 	movx	@dptr,a
      0001F5 E4               [12] 1182 	clr	a
      0001F6 A3               [24] 1183 	inc	dptr
      0001F7 F0               [24] 1184 	movx	@dptr,a
      0001F8 75 82 00         [24] 1185 	mov	dpl,#0x00
      0001FB 12 03 67         [24] 1186 	lcall	_rf_read_register
                                   1187 ;	../sdk/src/rf/src/rf_set_as_tx.c:54: if((config & RF_CONFIG_PRIM_RX) == 0)
      0001FE 90 00 15         [24] 1188 	mov	dptr,#_rf_set_as_tx_config_1_51
      000201 E0               [24] 1189 	movx	a,@dptr
      000202 FF               [12] 1190 	mov	r7,a
      000203 20 E0 01         [24] 1191 	jb	acc.0,00102$
                                   1192 ;	../sdk/src/rf/src/rf_set_as_tx.c:56: return;
      000206 22               [24] 1193 	ret
      000207                       1194 00102$:
                                   1195 ;	../sdk/src/rf/src/rf_set_as_tx.c:59: rf_clear_ce(); //Clear the CE pin
      000207 C2 E8            [12] 1196 	clr	_RFCON_SB_RFCE 
                                   1197 ;	../sdk/src/rf/src/rf_set_as_tx.c:62: config &= (~RF_CONFIG_PRIM_RX);
      000209 90 00 15         [24] 1198 	mov	dptr,#_rf_set_as_tx_config_1_51
      00020C 74 FE            [12] 1199 	mov	a,#0xfe
      00020E 5F               [12] 1200 	anl	a,r7
      00020F F0               [24] 1201 	movx	@dptr,a
                                   1202 ;	../sdk/src/rf/src/rf_set_as_tx.c:63: rf_write_register(RF_CONFIG, &config, 1);
      000210 90 00 06         [24] 1203 	mov	dptr,#_rf_write_register_PARM_2
      000213 74 15            [12] 1204 	mov	a,#_rf_set_as_tx_config_1_51
      000215 F0               [24] 1205 	movx	@dptr,a
      000216 74 00            [12] 1206 	mov	a,#(_rf_set_as_tx_config_1_51 >> 8)
      000218 A3               [24] 1207 	inc	dptr
      000219 F0               [24] 1208 	movx	@dptr,a
      00021A E4               [12] 1209 	clr	a
      00021B A3               [24] 1210 	inc	dptr
      00021C F0               [24] 1211 	movx	@dptr,a
      00021D 90 00 09         [24] 1212 	mov	dptr,#_rf_write_register_PARM_3
      000220 04               [12] 1213 	inc	a
      000221 F0               [24] 1214 	movx	@dptr,a
      000222 E4               [12] 1215 	clr	a
      000223 A3               [24] 1216 	inc	dptr
      000224 F0               [24] 1217 	movx	@dptr,a
      000225 75 82 00         [24] 1218 	mov	dpl,#0x00
      000228 02 00 B7         [24] 1219 	ljmp	_rf_write_register
                                   1220 ;------------------------------------------------------------
                                   1221 ;Allocation info for local variables in function 'rf_spi_execute_command'
                                   1222 ;------------------------------------------------------------
                                   1223 ;dataptr                   Allocated with name '_rf_spi_execute_command_PARM_2'
                                   1224 ;len                       Allocated with name '_rf_spi_execute_command_PARM_3'
                                   1225 ;copydata                  Allocated with name '_rf_spi_execute_command_PARM_4'
                                   1226 ;instruction               Allocated with name '_rf_spi_execute_command_instruction_1_53'
                                   1227 ;status                    Allocated with name '_rf_spi_execute_command_status_1_54'
                                   1228 ;------------------------------------------------------------
                                   1229 ;	../sdk/src/rf/src/rf_spi_execute_command.c:50: unsigned char rf_spi_execute_command(unsigned char instruction, unsigned char * dataptr, unsigned int len, bool copydata)
                                   1230 ;	-----------------------------------------
                                   1231 ;	 function rf_spi_execute_command
                                   1232 ;	-----------------------------------------
      00022B                       1233 _rf_spi_execute_command:
      00022B E5 82            [12] 1234 	mov	a,dpl
      00022D 90 00 1C         [24] 1235 	mov	dptr,#_rf_spi_execute_command_instruction_1_53
      000230 F0               [24] 1236 	movx	@dptr,a
                                   1237 ;	../sdk/src/rf/src/rf_spi_execute_command.c:52: unsigned char status = instruction; //status writes the instruction, then reads the current STATUS value
      000231 E0               [24] 1238 	movx	a,@dptr
      000232 FF               [12] 1239 	mov	r7,a
      000233 90 00 1D         [24] 1240 	mov	dptr,#_rf_spi_execute_command_status_1_54
      000236 F0               [24] 1241 	movx	@dptr,a
                                   1242 ;	../sdk/src/rf/src/rf_spi_execute_command.c:54: rf_clear_csn(); //Clear CSN to start the transaction
      000237 C2 E9            [12] 1243 	clr	_RFCON_SB_RFCSN 
                                   1244 ;	../sdk/src/rf/src/rf_spi_execute_command.c:57: rf_spi_send_read(&status, 1, true);
      000239 90 00 1E         [24] 1245 	mov	dptr,#_rf_spi_send_read_PARM_2
      00023C 74 01            [12] 1246 	mov	a,#0x01
      00023E F0               [24] 1247 	movx	@dptr,a
      00023F E4               [12] 1248 	clr	a
      000240 A3               [24] 1249 	inc	dptr
      000241 F0               [24] 1250 	movx	@dptr,a
      000242 90 00 20         [24] 1251 	mov	dptr,#_rf_spi_send_read_PARM_3
      000245 04               [12] 1252 	inc	a
      000246 F0               [24] 1253 	movx	@dptr,a
      000247 90 00 1D         [24] 1254 	mov	dptr,#_rf_spi_execute_command_status_1_54
      00024A 75 F0 00         [24] 1255 	mov	b,#0x00
      00024D 12 02 87         [24] 1256 	lcall	_rf_spi_send_read
                                   1257 ;	../sdk/src/rf/src/rf_spi_execute_command.c:58: rf_spi_send_read(dataptr, len, copydata);
      000250 90 00 16         [24] 1258 	mov	dptr,#_rf_spi_execute_command_PARM_2
      000253 E0               [24] 1259 	movx	a,@dptr
      000254 FD               [12] 1260 	mov	r5,a
      000255 A3               [24] 1261 	inc	dptr
      000256 E0               [24] 1262 	movx	a,@dptr
      000257 FE               [12] 1263 	mov	r6,a
      000258 A3               [24] 1264 	inc	dptr
      000259 E0               [24] 1265 	movx	a,@dptr
      00025A FF               [12] 1266 	mov	r7,a
      00025B 90 00 19         [24] 1267 	mov	dptr,#_rf_spi_execute_command_PARM_3
      00025E E0               [24] 1268 	movx	a,@dptr
      00025F FB               [12] 1269 	mov	r3,a
      000260 A3               [24] 1270 	inc	dptr
      000261 E0               [24] 1271 	movx	a,@dptr
      000262 FC               [12] 1272 	mov	r4,a
      000263 90 00 1B         [24] 1273 	mov	dptr,#_rf_spi_execute_command_PARM_4
      000266 E0               [24] 1274 	movx	a,@dptr
      000267 FA               [12] 1275 	mov	r2,a
      000268 90 00 1E         [24] 1276 	mov	dptr,#_rf_spi_send_read_PARM_2
      00026B EB               [12] 1277 	mov	a,r3
      00026C F0               [24] 1278 	movx	@dptr,a
      00026D EC               [12] 1279 	mov	a,r4
      00026E A3               [24] 1280 	inc	dptr
      00026F F0               [24] 1281 	movx	@dptr,a
      000270 90 00 20         [24] 1282 	mov	dptr,#_rf_spi_send_read_PARM_3
      000273 EA               [12] 1283 	mov	a,r2
      000274 F0               [24] 1284 	movx	@dptr,a
      000275 8D 82            [24] 1285 	mov	dpl,r5
      000277 8E 83            [24] 1286 	mov	dph,r6
      000279 8F F0            [24] 1287 	mov	b,r7
      00027B 12 02 87         [24] 1288 	lcall	_rf_spi_send_read
                                   1289 ;	../sdk/src/rf/src/rf_spi_execute_command.c:60: rf_set_csn(); //Set CSN to end the transaction
      00027E D2 E9            [12] 1290 	setb	_RFCON_SB_RFCSN 
                                   1291 ;	../sdk/src/rf/src/rf_spi_execute_command.c:62: return status; //Return the value of STATUS
      000280 90 00 1D         [24] 1292 	mov	dptr,#_rf_spi_execute_command_status_1_54
      000283 E0               [24] 1293 	movx	a,@dptr
      000284 F5 82            [12] 1294 	mov	dpl,a
      000286 22               [24] 1295 	ret
                                   1296 ;------------------------------------------------------------
                                   1297 ;Allocation info for local variables in function 'rf_spi_send_read'
                                   1298 ;------------------------------------------------------------
                                   1299 ;sloc0                     Allocated with name '_rf_spi_send_read_sloc0_1_0'
                                   1300 ;sloc1                     Allocated with name '_rf_spi_send_read_sloc1_1_0'
                                   1301 ;len                       Allocated with name '_rf_spi_send_read_PARM_2'
                                   1302 ;copydata                  Allocated with name '_rf_spi_send_read_PARM_3'
                                   1303 ;dataptr                   Allocated with name '_rf_spi_send_read_dataptr_1_55'
                                   1304 ;i                         Allocated with name '_rf_spi_send_read_i_1_56'
                                   1305 ;tempbyte                  Allocated with name '_rf_spi_send_read_tempbyte_1_56'
                                   1306 ;------------------------------------------------------------
                                   1307 ;	../sdk/src/rf/src/rf_spi_send_read.c:49: void rf_spi_send_read(unsigned char * dataptr, unsigned int len, bool copydata)
                                   1308 ;	-----------------------------------------
                                   1309 ;	 function rf_spi_send_read
                                   1310 ;	-----------------------------------------
      000287                       1311 _rf_spi_send_read:
      000287 AF F0            [24] 1312 	mov	r7,b
      000289 AE 83            [24] 1313 	mov	r6,dph
      00028B E5 82            [12] 1314 	mov	a,dpl
      00028D 90 00 21         [24] 1315 	mov	dptr,#_rf_spi_send_read_dataptr_1_55
      000290 F0               [24] 1316 	movx	@dptr,a
      000291 EE               [12] 1317 	mov	a,r6
      000292 A3               [24] 1318 	inc	dptr
      000293 F0               [24] 1319 	movx	@dptr,a
      000294 EF               [12] 1320 	mov	a,r7
      000295 A3               [24] 1321 	inc	dptr
      000296 F0               [24] 1322 	movx	@dptr,a
                                   1323 ;	../sdk/src/rf/src/rf_spi_send_read.c:55: for(i = 0; i < len; i++)
      000297 90 00 21         [24] 1324 	mov	dptr,#_rf_spi_send_read_dataptr_1_55
      00029A E0               [24] 1325 	movx	a,@dptr
      00029B FD               [12] 1326 	mov	r5,a
      00029C A3               [24] 1327 	inc	dptr
      00029D E0               [24] 1328 	movx	a,@dptr
      00029E FE               [12] 1329 	mov	r6,a
      00029F A3               [24] 1330 	inc	dptr
      0002A0 E0               [24] 1331 	movx	a,@dptr
      0002A1 FF               [12] 1332 	mov	r7,a
      0002A2 90 00 20         [24] 1333 	mov	dptr,#_rf_spi_send_read_PARM_3
      0002A5 E0               [24] 1334 	movx	a,@dptr
      0002A6 FC               [12] 1335 	mov	r4,a
      0002A7 90 00 1E         [24] 1336 	mov	dptr,#_rf_spi_send_read_PARM_2
      0002AA E0               [24] 1337 	movx	a,@dptr
      0002AB FA               [12] 1338 	mov	r2,a
      0002AC A3               [24] 1339 	inc	dptr
      0002AD E0               [24] 1340 	movx	a,@dptr
      0002AE FB               [12] 1341 	mov	r3,a
      0002AF 78 00            [12] 1342 	mov	r0,#0x00
      0002B1 79 00            [12] 1343 	mov	r1,#0x00
      0002B3                       1344 00105$:
      0002B3 C3               [12] 1345 	clr	c
      0002B4 E8               [12] 1346 	mov	a,r0
      0002B5 9A               [12] 1347 	subb	a,r2
      0002B6 E9               [12] 1348 	mov	a,r1
      0002B7 9B               [12] 1349 	subb	a,r3
      0002B8 50 5F            [24] 1350 	jnc	00107$
                                   1351 ;	../sdk/src/rf/src/rf_spi_send_read.c:57: tempbyte = rf_spi_send_read_byte(dataptr[i]); //Send the value, and then save the received value
      0002BA C0 02            [24] 1352 	push	ar2
      0002BC C0 03            [24] 1353 	push	ar3
      0002BE E8               [12] 1354 	mov	a,r0
      0002BF 2D               [12] 1355 	add	a,r5
      0002C0 F5 08            [12] 1356 	mov	_rf_spi_send_read_sloc0_1_0,a
      0002C2 E9               [12] 1357 	mov	a,r1
      0002C3 3E               [12] 1358 	addc	a,r6
      0002C4 F5 09            [12] 1359 	mov	(_rf_spi_send_read_sloc0_1_0 + 1),a
      0002C6 8F 0A            [24] 1360 	mov	(_rf_spi_send_read_sloc0_1_0 + 2),r7
      0002C8 85 08 82         [24] 1361 	mov	dpl,_rf_spi_send_read_sloc0_1_0
      0002CB 85 09 83         [24] 1362 	mov	dph,(_rf_spi_send_read_sloc0_1_0 + 1)
      0002CE 85 0A F0         [24] 1363 	mov	b,(_rf_spi_send_read_sloc0_1_0 + 2)
      0002D1 12 17 01         [24] 1364 	lcall	__gptrget
      0002D4 FB               [12] 1365 	mov	r3,a
      0002D5 F5 82            [12] 1366 	mov	dpl,a
      0002D7 C0 07            [24] 1367 	push	ar7
      0002D9 C0 06            [24] 1368 	push	ar6
      0002DB C0 05            [24] 1369 	push	ar5
      0002DD C0 04            [24] 1370 	push	ar4
      0002DF C0 03            [24] 1371 	push	ar3
      0002E1 C0 02            [24] 1372 	push	ar2
      0002E3 C0 01            [24] 1373 	push	ar1
      0002E5 C0 00            [24] 1374 	push	ar0
      0002E7 12 03 A3         [24] 1375 	lcall	_rf_spi_send_read_byte
      0002EA 85 82 0B         [24] 1376 	mov	_rf_spi_send_read_sloc1_1_0,dpl
      0002ED D0 00            [24] 1377 	pop	ar0
      0002EF D0 01            [24] 1378 	pop	ar1
      0002F1 D0 02            [24] 1379 	pop	ar2
      0002F3 D0 03            [24] 1380 	pop	ar3
      0002F5 D0 04            [24] 1381 	pop	ar4
      0002F7 D0 05            [24] 1382 	pop	ar5
      0002F9 D0 06            [24] 1383 	pop	ar6
      0002FB D0 07            [24] 1384 	pop	ar7
                                   1385 ;	../sdk/src/rf/src/rf_spi_send_read.c:60: if(copydata != false)
      0002FD D0 03            [24] 1386 	pop	ar3
      0002FF D0 02            [24] 1387 	pop	ar2
      000301 EC               [12] 1388 	mov	a,r4
      000302 60 0E            [24] 1389 	jz	00106$
                                   1390 ;	../sdk/src/rf/src/rf_spi_send_read.c:62: dataptr[i] = tempbyte;
      000304 85 08 82         [24] 1391 	mov	dpl,_rf_spi_send_read_sloc0_1_0
      000307 85 09 83         [24] 1392 	mov	dph,(_rf_spi_send_read_sloc0_1_0 + 1)
      00030A 85 0A F0         [24] 1393 	mov	b,(_rf_spi_send_read_sloc0_1_0 + 2)
      00030D E5 0B            [12] 1394 	mov	a,_rf_spi_send_read_sloc1_1_0
      00030F 12 15 93         [24] 1395 	lcall	__gptrput
      000312                       1396 00106$:
                                   1397 ;	../sdk/src/rf/src/rf_spi_send_read.c:55: for(i = 0; i < len; i++)
      000312 08               [12] 1398 	inc	r0
      000313 B8 00 9D         [24] 1399 	cjne	r0,#0x00,00105$
      000316 09               [12] 1400 	inc	r1
      000317 80 9A            [24] 1401 	sjmp	00105$
      000319                       1402 00107$:
      000319 22               [24] 1403 	ret
                                   1404 ;------------------------------------------------------------
                                   1405 ;Allocation info for local variables in function 'rf_power_up_param'
                                   1406 ;------------------------------------------------------------
                                   1407 ;config                    Allocated with name '_rf_power_up_param_PARM_2'
                                   1408 ;rx_active_mode            Allocated with name '_rf_power_up_param_rx_active_mode_1_60'
                                   1409 ;------------------------------------------------------------
                                   1410 ;	../sdk/src/rf/src/rf_power_up_param.c:49: void rf_power_up_param(bool rx_active_mode, unsigned char config)
                                   1411 ;	-----------------------------------------
                                   1412 ;	 function rf_power_up_param
                                   1413 ;	-----------------------------------------
      00031A                       1414 _rf_power_up_param:
      00031A E5 82            [12] 1415 	mov	a,dpl
      00031C 90 00 25         [24] 1416 	mov	dptr,#_rf_power_up_param_rx_active_mode_1_60
      00031F F0               [24] 1417 	movx	@dptr,a
                                   1418 ;	../sdk/src/rf/src/rf_power_up_param.c:52: config |= RF_CONFIG_PWR_UP;
      000320 90 00 24         [24] 1419 	mov	dptr,#_rf_power_up_param_PARM_2
      000323 E0               [24] 1420 	movx	a,@dptr
      000324 FF               [12] 1421 	mov	r7,a
      000325 74 02            [12] 1422 	mov	a,#0x02
      000327 4F               [12] 1423 	orl	a,r7
      000328 F0               [24] 1424 	movx	@dptr,a
                                   1425 ;	../sdk/src/rf/src/rf_power_up_param.c:53: rf_write_register(RF_CONFIG, &config, 1);
      000329 90 00 06         [24] 1426 	mov	dptr,#_rf_write_register_PARM_2
      00032C 74 24            [12] 1427 	mov	a,#_rf_power_up_param_PARM_2
      00032E F0               [24] 1428 	movx	@dptr,a
      00032F 74 00            [12] 1429 	mov	a,#(_rf_power_up_param_PARM_2 >> 8)
      000331 A3               [24] 1430 	inc	dptr
      000332 F0               [24] 1431 	movx	@dptr,a
      000333 E4               [12] 1432 	clr	a
      000334 A3               [24] 1433 	inc	dptr
      000335 F0               [24] 1434 	movx	@dptr,a
      000336 90 00 09         [24] 1435 	mov	dptr,#_rf_write_register_PARM_3
      000339 04               [12] 1436 	inc	a
      00033A F0               [24] 1437 	movx	@dptr,a
      00033B E4               [12] 1438 	clr	a
      00033C A3               [24] 1439 	inc	dptr
      00033D F0               [24] 1440 	movx	@dptr,a
      00033E 75 82 00         [24] 1441 	mov	dpl,#0x00
      000341 12 00 B7         [24] 1442 	lcall	_rf_write_register
                                   1443 ;	../sdk/src/rf/src/rf_power_up_param.c:55: delay_us(1); //Delay for power up
      000344 90 00 01         [24] 1444 	mov	dptr,#0x0001
      000347 12 08 40         [24] 1445 	lcall	_delay_us
                                   1446 ;	../sdk/src/rf/src/rf_power_up_param.c:58: if((config & RF_CONFIG_PRIM_RX) == 0)
      00034A 90 00 24         [24] 1447 	mov	dptr,#_rf_power_up_param_PARM_2
      00034D E0               [24] 1448 	movx	a,@dptr
      00034E FF               [12] 1449 	mov	r7,a
      00034F 20 E0 03         [24] 1450 	jb	acc.0,00105$
                                   1451 ;	../sdk/src/rf/src/rf_power_up_param.c:60: rf_clear_ce(); //Clear CE for TX mode
      000352 C2 E8            [12] 1452 	clr	_RFCON_SB_RFCE 
      000354 22               [24] 1453 	ret
      000355                       1454 00105$:
                                   1455 ;	../sdk/src/rf/src/rf_power_up_param.c:65: if(rx_active_mode != false)
      000355 90 00 25         [24] 1456 	mov	dptr,#_rf_power_up_param_rx_active_mode_1_60
      000358 E0               [24] 1457 	movx	a,@dptr
      000359 FF               [12] 1458 	mov	r7,a
      00035A 60 08            [24] 1459 	jz	00102$
                                   1460 ;	../sdk/src/rf/src/rf_power_up_param.c:67: rf_set_ce();
      00035C D2 E8            [12] 1461 	setb	_RFCON_SB_RFCE 
      00035E 90 00 04         [24] 1462 	mov	dptr,#0x0004
      000361 02 08 40         [24] 1463 	ljmp	_delay_us
      000364                       1464 00102$:
                                   1465 ;	../sdk/src/rf/src/rf_power_up_param.c:71: rf_clear_ce();
      000364 C2 E8            [12] 1466 	clr	_RFCON_SB_RFCE 
      000366 22               [24] 1467 	ret
                                   1468 ;------------------------------------------------------------
                                   1469 ;Allocation info for local variables in function 'rf_read_register'
                                   1470 ;------------------------------------------------------------
                                   1471 ;dataptr                   Allocated with name '_rf_read_register_PARM_2'
                                   1472 ;len                       Allocated with name '_rf_read_register_PARM_3'
                                   1473 ;regnumber                 Allocated with name '_rf_read_register_regnumber_1_66'
                                   1474 ;------------------------------------------------------------
                                   1475 ;	../sdk/src/rf/src/rf_read_register.c:49: unsigned char rf_read_register(unsigned char regnumber, unsigned char * dataptr, unsigned int len)
                                   1476 ;	-----------------------------------------
                                   1477 ;	 function rf_read_register
                                   1478 ;	-----------------------------------------
      000367                       1479 _rf_read_register:
      000367 E5 82            [12] 1480 	mov	a,dpl
      000369 90 00 2B         [24] 1481 	mov	dptr,#_rf_read_register_regnumber_1_66
      00036C F0               [24] 1482 	movx	@dptr,a
                                   1483 ;	../sdk/src/rf/src/rf_read_register.c:52: return rf_spi_execute_command(regnumber & RF_R_REGISTER_DATA, dataptr, len, true);
      00036D E0               [24] 1484 	movx	a,@dptr
      00036E FF               [12] 1485 	mov	r7,a
      00036F 53 07 1F         [24] 1486 	anl	ar7,#0x1f
      000372 90 00 26         [24] 1487 	mov	dptr,#_rf_read_register_PARM_2
      000375 E0               [24] 1488 	movx	a,@dptr
      000376 FC               [12] 1489 	mov	r4,a
      000377 A3               [24] 1490 	inc	dptr
      000378 E0               [24] 1491 	movx	a,@dptr
      000379 FD               [12] 1492 	mov	r5,a
      00037A A3               [24] 1493 	inc	dptr
      00037B E0               [24] 1494 	movx	a,@dptr
      00037C FE               [12] 1495 	mov	r6,a
      00037D 90 00 29         [24] 1496 	mov	dptr,#_rf_read_register_PARM_3
      000380 E0               [24] 1497 	movx	a,@dptr
      000381 FA               [12] 1498 	mov	r2,a
      000382 A3               [24] 1499 	inc	dptr
      000383 E0               [24] 1500 	movx	a,@dptr
      000384 FB               [12] 1501 	mov	r3,a
      000385 90 00 16         [24] 1502 	mov	dptr,#_rf_spi_execute_command_PARM_2
      000388 EC               [12] 1503 	mov	a,r4
      000389 F0               [24] 1504 	movx	@dptr,a
      00038A ED               [12] 1505 	mov	a,r5
      00038B A3               [24] 1506 	inc	dptr
      00038C F0               [24] 1507 	movx	@dptr,a
      00038D EE               [12] 1508 	mov	a,r6
      00038E A3               [24] 1509 	inc	dptr
      00038F F0               [24] 1510 	movx	@dptr,a
      000390 90 00 19         [24] 1511 	mov	dptr,#_rf_spi_execute_command_PARM_3
      000393 EA               [12] 1512 	mov	a,r2
      000394 F0               [24] 1513 	movx	@dptr,a
      000395 EB               [12] 1514 	mov	a,r3
      000396 A3               [24] 1515 	inc	dptr
      000397 F0               [24] 1516 	movx	@dptr,a
      000398 90 00 1B         [24] 1517 	mov	dptr,#_rf_spi_execute_command_PARM_4
      00039B 74 01            [12] 1518 	mov	a,#0x01
      00039D F0               [24] 1519 	movx	@dptr,a
      00039E 8F 82            [24] 1520 	mov	dpl,r7
      0003A0 02 02 2B         [24] 1521 	ljmp	_rf_spi_execute_command
                                   1522 ;------------------------------------------------------------
                                   1523 ;Allocation info for local variables in function 'rf_spi_send_read_byte'
                                   1524 ;------------------------------------------------------------
                                   1525 ;byte                      Allocated with name '_rf_spi_send_read_byte_byte_1_68'
                                   1526 ;------------------------------------------------------------
                                   1527 ;	../sdk/src/rf/src/rf_spi_send_read_byte.c:47: unsigned char rf_spi_send_read_byte(unsigned char byte)
                                   1528 ;	-----------------------------------------
                                   1529 ;	 function rf_spi_send_read_byte
                                   1530 ;	-----------------------------------------
      0003A3                       1531 _rf_spi_send_read_byte:
      0003A3 E5 82            [12] 1532 	mov	a,dpl
      0003A5 90 00 2C         [24] 1533 	mov	dptr,#_rf_spi_send_read_byte_byte_1_68
      0003A8 F0               [24] 1534 	movx	@dptr,a
                                   1535 ;	../sdk/src/rf/src/rf_spi_send_read_byte.c:49: SPIRDAT = byte; //Send byte over SPI
      0003A9 E0               [24] 1536 	movx	a,@dptr
      0003AA F5 E7            [12] 1537 	mov	_SPIRDAT,a
                                   1538 ;	../sdk/src/rf/src/rf_spi_send_read_byte.c:51: while(!(SPIRSTAT & SPIRSTAT_IRQ_RX_FIFO_READY)); //Wait for the transaction to finish
      0003AC                       1539 00101$:
      0003AC E5 E6            [12] 1540 	mov	a,_SPIRSTAT
      0003AE 30 E2 FB         [24] 1541 	jnb	acc.2,00101$
                                   1542 ;	../sdk/src/rf/src/rf_spi_send_read_byte.c:53: IRCON_SB_RFRDY = BIT_FALSE; //Clear the IRQ bit
                                   1543 ;	assignBit
      0003B1 C2 C0            [12] 1544 	clr	_IRCON_SB_RFRDY
                                   1545 ;	../sdk/src/rf/src/rf_spi_send_read_byte.c:55: return SPIRDAT; //Return the received value
      0003B3 85 E7 82         [24] 1546 	mov	dpl,_SPIRDAT
      0003B6 22               [24] 1547 	ret
                                   1548 ;------------------------------------------------------------
                                   1549 ;Allocation info for local variables in function 'rf_set_rx_addr'
                                   1550 ;------------------------------------------------------------
                                   1551 ;len                       Allocated with name '_rf_set_rx_addr_PARM_2'
                                   1552 ;rxpipenum                 Allocated with name '_rf_set_rx_addr_PARM_3'
                                   1553 ;address                   Allocated with name '_rf_set_rx_addr_address_1_70'
                                   1554 ;------------------------------------------------------------
                                   1555 ;	../sdk/src/rf/src/rf_set_rx_addr.c:49: void rf_set_rx_addr(unsigned char * address, unsigned int len, unsigned char rxpipenum)
                                   1556 ;	-----------------------------------------
                                   1557 ;	 function rf_set_rx_addr
                                   1558 ;	-----------------------------------------
      0003B7                       1559 _rf_set_rx_addr:
      0003B7 AF F0            [24] 1560 	mov	r7,b
      0003B9 AE 83            [24] 1561 	mov	r6,dph
      0003BB E5 82            [12] 1562 	mov	a,dpl
      0003BD 90 00 30         [24] 1563 	mov	dptr,#_rf_set_rx_addr_address_1_70
      0003C0 F0               [24] 1564 	movx	@dptr,a
      0003C1 EE               [12] 1565 	mov	a,r6
      0003C2 A3               [24] 1566 	inc	dptr
      0003C3 F0               [24] 1567 	movx	@dptr,a
      0003C4 EF               [12] 1568 	mov	a,r7
      0003C5 A3               [24] 1569 	inc	dptr
      0003C6 F0               [24] 1570 	movx	@dptr,a
                                   1571 ;	../sdk/src/rf/src/rf_set_rx_addr.c:52: if(rxpipenum > 5)
      0003C7 90 00 2F         [24] 1572 	mov	dptr,#_rf_set_rx_addr_PARM_3
      0003CA E0               [24] 1573 	movx	a,@dptr
      0003CB FF               [12] 1574 	mov  r7,a
      0003CC 24 FA            [12] 1575 	add	a,#0xff - 0x05
      0003CE 50 01            [24] 1576 	jnc	00102$
                                   1577 ;	../sdk/src/rf/src/rf_set_rx_addr.c:54: return;
      0003D0 22               [24] 1578 	ret
      0003D1                       1579 00102$:
                                   1580 ;	../sdk/src/rf/src/rf_set_rx_addr.c:57: rf_write_register(RF_RX_ADDR_P0 + rxpipenum, address, len); //Write the requested address to the requested RX pipe
      0003D1 74 0A            [12] 1581 	mov	a,#0x0a
      0003D3 2F               [12] 1582 	add	a,r7
      0003D4 FF               [12] 1583 	mov	r7,a
      0003D5 90 00 30         [24] 1584 	mov	dptr,#_rf_set_rx_addr_address_1_70
      0003D8 E0               [24] 1585 	movx	a,@dptr
      0003D9 FC               [12] 1586 	mov	r4,a
      0003DA A3               [24] 1587 	inc	dptr
      0003DB E0               [24] 1588 	movx	a,@dptr
      0003DC FD               [12] 1589 	mov	r5,a
      0003DD A3               [24] 1590 	inc	dptr
      0003DE E0               [24] 1591 	movx	a,@dptr
      0003DF FE               [12] 1592 	mov	r6,a
      0003E0 90 00 2D         [24] 1593 	mov	dptr,#_rf_set_rx_addr_PARM_2
      0003E3 E0               [24] 1594 	movx	a,@dptr
      0003E4 FA               [12] 1595 	mov	r2,a
      0003E5 A3               [24] 1596 	inc	dptr
      0003E6 E0               [24] 1597 	movx	a,@dptr
      0003E7 FB               [12] 1598 	mov	r3,a
      0003E8 90 00 06         [24] 1599 	mov	dptr,#_rf_write_register_PARM_2
      0003EB EC               [12] 1600 	mov	a,r4
      0003EC F0               [24] 1601 	movx	@dptr,a
      0003ED ED               [12] 1602 	mov	a,r5
      0003EE A3               [24] 1603 	inc	dptr
      0003EF F0               [24] 1604 	movx	@dptr,a
      0003F0 EE               [12] 1605 	mov	a,r6
      0003F1 A3               [24] 1606 	inc	dptr
      0003F2 F0               [24] 1607 	movx	@dptr,a
      0003F3 90 00 09         [24] 1608 	mov	dptr,#_rf_write_register_PARM_3
      0003F6 EA               [12] 1609 	mov	a,r2
      0003F7 F0               [24] 1610 	movx	@dptr,a
      0003F8 EB               [12] 1611 	mov	a,r3
      0003F9 A3               [24] 1612 	inc	dptr
      0003FA F0               [24] 1613 	movx	@dptr,a
      0003FB 8F 82            [24] 1614 	mov	dpl,r7
      0003FD 02 00 B7         [24] 1615 	ljmp	_rf_write_register
                                   1616 ;------------------------------------------------------------
                                   1617 ;Allocation info for local variables in function 'rf_power_down'
                                   1618 ;------------------------------------------------------------
                                   1619 ;config                    Allocated with name '_rf_power_down_config_1_73'
                                   1620 ;------------------------------------------------------------
                                   1621 ;	../sdk/src/rf/src/rf_power_down.c:47: void rf_power_down()
                                   1622 ;	-----------------------------------------
                                   1623 ;	 function rf_power_down
                                   1624 ;	-----------------------------------------
      000400                       1625 _rf_power_down:
                                   1626 ;	../sdk/src/rf/src/rf_power_down.c:51: rf_clear_ce(); //Clear the CE pin
      000400 C2 E8            [12] 1627 	clr	_RFCON_SB_RFCE 
                                   1628 ;	../sdk/src/rf/src/rf_power_down.c:53: rf_read_register(RF_CONFIG, &config, 1); //Read the current value of the CONFIG register
      000402 90 00 26         [24] 1629 	mov	dptr,#_rf_read_register_PARM_2
      000405 74 33            [12] 1630 	mov	a,#_rf_power_down_config_1_73
      000407 F0               [24] 1631 	movx	@dptr,a
      000408 74 00            [12] 1632 	mov	a,#(_rf_power_down_config_1_73 >> 8)
      00040A A3               [24] 1633 	inc	dptr
      00040B F0               [24] 1634 	movx	@dptr,a
      00040C E4               [12] 1635 	clr	a
      00040D A3               [24] 1636 	inc	dptr
      00040E F0               [24] 1637 	movx	@dptr,a
      00040F 90 00 29         [24] 1638 	mov	dptr,#_rf_read_register_PARM_3
      000412 04               [12] 1639 	inc	a
      000413 F0               [24] 1640 	movx	@dptr,a
      000414 E4               [12] 1641 	clr	a
      000415 A3               [24] 1642 	inc	dptr
      000416 F0               [24] 1643 	movx	@dptr,a
      000417 75 82 00         [24] 1644 	mov	dpl,#0x00
      00041A 12 03 67         [24] 1645 	lcall	_rf_read_register
                                   1646 ;	../sdk/src/rf/src/rf_power_down.c:56: if((config & RF_CONFIG_PWR_UP) == 0)
      00041D 90 00 33         [24] 1647 	mov	dptr,#_rf_power_down_config_1_73
      000420 E0               [24] 1648 	movx	a,@dptr
      000421 FF               [12] 1649 	mov	r7,a
      000422 20 E1 01         [24] 1650 	jb	acc.1,00102$
                                   1651 ;	../sdk/src/rf/src/rf_power_down.c:58: return;
      000425 22               [24] 1652 	ret
      000426                       1653 00102$:
                                   1654 ;	../sdk/src/rf/src/rf_power_down.c:62: config &= (~RF_CONFIG_PWR_UP);
      000426 90 00 33         [24] 1655 	mov	dptr,#_rf_power_down_config_1_73
      000429 74 FD            [12] 1656 	mov	a,#0xfd
      00042B 5F               [12] 1657 	anl	a,r7
      00042C F0               [24] 1658 	movx	@dptr,a
                                   1659 ;	../sdk/src/rf/src/rf_power_down.c:63: rf_write_register(RF_CONFIG, &config, 1);
      00042D 90 00 06         [24] 1660 	mov	dptr,#_rf_write_register_PARM_2
      000430 74 33            [12] 1661 	mov	a,#_rf_power_down_config_1_73
      000432 F0               [24] 1662 	movx	@dptr,a
      000433 74 00            [12] 1663 	mov	a,#(_rf_power_down_config_1_73 >> 8)
      000435 A3               [24] 1664 	inc	dptr
      000436 F0               [24] 1665 	movx	@dptr,a
      000437 E4               [12] 1666 	clr	a
      000438 A3               [24] 1667 	inc	dptr
      000439 F0               [24] 1668 	movx	@dptr,a
      00043A 90 00 09         [24] 1669 	mov	dptr,#_rf_write_register_PARM_3
      00043D 04               [12] 1670 	inc	a
      00043E F0               [24] 1671 	movx	@dptr,a
      00043F E4               [12] 1672 	clr	a
      000440 A3               [24] 1673 	inc	dptr
      000441 F0               [24] 1674 	movx	@dptr,a
      000442 75 82 00         [24] 1675 	mov	dpl,#0x00
      000445 02 00 B7         [24] 1676 	ljmp	_rf_write_register
                                   1677 ;------------------------------------------------------------
                                   1678 ;Allocation info for local variables in function 'rf_power_up'
                                   1679 ;------------------------------------------------------------
                                   1680 ;rx_active_mode            Allocated with name '_rf_power_up_rx_active_mode_1_75'
                                   1681 ;config                    Allocated with name '_rf_power_up_config_1_76'
                                   1682 ;------------------------------------------------------------
                                   1683 ;	../sdk/src/rf/src/rf_power_up.c:47: void rf_power_up(bool rx_active_mode)
                                   1684 ;	-----------------------------------------
                                   1685 ;	 function rf_power_up
                                   1686 ;	-----------------------------------------
      000448                       1687 _rf_power_up:
      000448 E5 82            [12] 1688 	mov	a,dpl
      00044A 90 00 34         [24] 1689 	mov	dptr,#_rf_power_up_rx_active_mode_1_75
      00044D F0               [24] 1690 	movx	@dptr,a
                                   1691 ;	../sdk/src/rf/src/rf_power_up.c:51: rf_read_register(RF_CONFIG, &config, 1); //Get the current value of the CONFIG register
      00044E 90 00 26         [24] 1692 	mov	dptr,#_rf_read_register_PARM_2
      000451 74 35            [12] 1693 	mov	a,#_rf_power_up_config_1_76
      000453 F0               [24] 1694 	movx	@dptr,a
      000454 74 00            [12] 1695 	mov	a,#(_rf_power_up_config_1_76 >> 8)
      000456 A3               [24] 1696 	inc	dptr
      000457 F0               [24] 1697 	movx	@dptr,a
      000458 E4               [12] 1698 	clr	a
      000459 A3               [24] 1699 	inc	dptr
      00045A F0               [24] 1700 	movx	@dptr,a
      00045B 90 00 29         [24] 1701 	mov	dptr,#_rf_read_register_PARM_3
      00045E 04               [12] 1702 	inc	a
      00045F F0               [24] 1703 	movx	@dptr,a
      000460 E4               [12] 1704 	clr	a
      000461 A3               [24] 1705 	inc	dptr
      000462 F0               [24] 1706 	movx	@dptr,a
      000463 75 82 00         [24] 1707 	mov	dpl,#0x00
      000466 12 03 67         [24] 1708 	lcall	_rf_read_register
                                   1709 ;	../sdk/src/rf/src/rf_power_up.c:54: if((config & RF_CONFIG_PWR_UP) != 0)
      000469 90 00 35         [24] 1710 	mov	dptr,#_rf_power_up_config_1_76
      00046C E0               [24] 1711 	movx	a,@dptr
      00046D FF               [12] 1712 	mov	r7,a
      00046E 30 E1 01         [24] 1713 	jnb	acc.1,00102$
                                   1714 ;	../sdk/src/rf/src/rf_power_up.c:56: return;
      000471 22               [24] 1715 	ret
      000472                       1716 00102$:
                                   1717 ;	../sdk/src/rf/src/rf_power_up.c:60: config |= RF_CONFIG_PWR_UP;
      000472 90 00 35         [24] 1718 	mov	dptr,#_rf_power_up_config_1_76
      000475 74 02            [12] 1719 	mov	a,#0x02
      000477 4F               [12] 1720 	orl	a,r7
      000478 F0               [24] 1721 	movx	@dptr,a
                                   1722 ;	../sdk/src/rf/src/rf_power_up.c:61: rf_write_register(RF_CONFIG, &config, 1);
      000479 90 00 06         [24] 1723 	mov	dptr,#_rf_write_register_PARM_2
      00047C 74 35            [12] 1724 	mov	a,#_rf_power_up_config_1_76
      00047E F0               [24] 1725 	movx	@dptr,a
      00047F 74 00            [12] 1726 	mov	a,#(_rf_power_up_config_1_76 >> 8)
      000481 A3               [24] 1727 	inc	dptr
      000482 F0               [24] 1728 	movx	@dptr,a
      000483 E4               [12] 1729 	clr	a
      000484 A3               [24] 1730 	inc	dptr
      000485 F0               [24] 1731 	movx	@dptr,a
      000486 90 00 09         [24] 1732 	mov	dptr,#_rf_write_register_PARM_3
      000489 04               [12] 1733 	inc	a
      00048A F0               [24] 1734 	movx	@dptr,a
      00048B E4               [12] 1735 	clr	a
      00048C A3               [24] 1736 	inc	dptr
      00048D F0               [24] 1737 	movx	@dptr,a
      00048E 75 82 00         [24] 1738 	mov	dpl,#0x00
      000491 12 00 B7         [24] 1739 	lcall	_rf_write_register
                                   1740 ;	../sdk/src/rf/src/rf_power_up.c:63: delay_us(1); //Delay for power up
      000494 90 00 01         [24] 1741 	mov	dptr,#0x0001
      000497 12 08 40         [24] 1742 	lcall	_delay_us
                                   1743 ;	../sdk/src/rf/src/rf_power_up.c:66: if((config & RF_CONFIG_PRIM_RX) == 0)
      00049A 90 00 35         [24] 1744 	mov	dptr,#_rf_power_up_config_1_76
      00049D E0               [24] 1745 	movx	a,@dptr
      00049E FF               [12] 1746 	mov	r7,a
      00049F 20 E0 03         [24] 1747 	jb	acc.0,00107$
                                   1748 ;	../sdk/src/rf/src/rf_power_up.c:68: rf_clear_ce(); //Clear CE for TX mode
      0004A2 C2 E8            [12] 1749 	clr	_RFCON_SB_RFCE 
      0004A4 22               [24] 1750 	ret
      0004A5                       1751 00107$:
                                   1752 ;	../sdk/src/rf/src/rf_power_up.c:73: if(rx_active_mode != false)
      0004A5 90 00 34         [24] 1753 	mov	dptr,#_rf_power_up_rx_active_mode_1_75
      0004A8 E0               [24] 1754 	movx	a,@dptr
      0004A9 60 08            [24] 1755 	jz	00104$
                                   1756 ;	../sdk/src/rf/src/rf_power_up.c:75: rf_set_ce();
      0004AB D2 E8            [12] 1757 	setb	_RFCON_SB_RFCE 
      0004AD 90 00 04         [24] 1758 	mov	dptr,#0x0004
      0004B0 02 08 40         [24] 1759 	ljmp	_delay_us
      0004B3                       1760 00104$:
                                   1761 ;	../sdk/src/rf/src/rf_power_up.c:79: rf_clear_ce();
      0004B3 C2 E8            [12] 1762 	clr	_RFCON_SB_RFCE 
      0004B5 22               [24] 1763 	ret
                                   1764 ;------------------------------------------------------------
                                   1765 ;Allocation info for local variables in function 'gpio_pin_configure'
                                   1766 ;------------------------------------------------------------
                                   1767 ;gpio_pin_config_options   Allocated with name '_gpio_pin_configure_PARM_2'
                                   1768 ;gpio_pin_id               Allocated with name '_gpio_pin_configure_gpio_pin_id_1_83'
                                   1769 ;------------------------------------------------------------
                                   1770 ;	../sdk/src/gpio/src/gpio_pin_configure.c:47: void gpio_pin_configure(gpio_pin_id_t gpio_pin_id, uint8_t gpio_pin_config_options)
                                   1771 ;	-----------------------------------------
                                   1772 ;	 function gpio_pin_configure
                                   1773 ;	-----------------------------------------
      0004B6                       1774 _gpio_pin_configure:
      0004B6 E5 82            [12] 1775 	mov	a,dpl
      0004B8 90 00 37         [24] 1776 	mov	dptr,#_gpio_pin_configure_gpio_pin_id_1_83
      0004BB F0               [24] 1777 	movx	@dptr,a
                                   1778 ;	../sdk/src/gpio/src/gpio_pin_configure.c:50: if(gpio_pin_id <= GPIO_PIN_ID_P0_7)
      0004BC E0               [24] 1779 	movx	a,@dptr
      0004BD FF               [12] 1780 	mov  r7,a
      0004BE 24 F8            [12] 1781 	add	a,#0xff - 0x07
      0004C0 50 03            [24] 1782 	jnc	00174$
      0004C2 02 05 3D         [24] 1783 	ljmp	00134$
      0004C5                       1784 00174$:
                                   1785 ;	../sdk/src/gpio/src/gpio_pin_configure.c:53: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT)
      0004C5 90 00 36         [24] 1786 	mov	dptr,#_gpio_pin_configure_PARM_2
      0004C8 E0               [24] 1787 	movx	a,@dptr
      0004C9 FE               [12] 1788 	mov	r6,a
      0004CA 30 E0 50         [24] 1789 	jnb	acc.0,00105$
                                   1790 ;	../sdk/src/gpio/src/gpio_pin_configure.c:56: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET)
      0004CD EE               [12] 1791 	mov	a,r6
      0004CE 30 E1 15         [24] 1792 	jnb	acc.1,00102$
                                   1793 ;	../sdk/src/gpio/src/gpio_pin_configure.c:58: gpio_pins_val_set(P0, (1 << (gpio_pin_id % 8)));
      0004D1 74 07            [12] 1794 	mov	a,#0x07
      0004D3 5F               [12] 1795 	anl	a,r7
      0004D4 F5 F0            [12] 1796 	mov	b,a
      0004D6 05 F0            [12] 1797 	inc	b
      0004D8 74 01            [12] 1798 	mov	a,#0x01
      0004DA 80 02            [24] 1799 	sjmp	00179$
      0004DC                       1800 00177$:
      0004DC 25 E0            [12] 1801 	add	a,acc
      0004DE                       1802 00179$:
      0004DE D5 F0 FB         [24] 1803 	djnz	b,00177$
      0004E1 FD               [12] 1804 	mov	r5,a
      0004E2 42 80            [12] 1805 	orl	_P0,a
      0004E4 80 14            [24] 1806 	sjmp	00103$
      0004E6                       1807 00102$:
                                   1808 ;	../sdk/src/gpio/src/gpio_pin_configure.c:62: gpio_pins_val_clear(P0, (1 << (gpio_pin_id % 8)));
      0004E6 74 07            [12] 1809 	mov	a,#0x07
      0004E8 5F               [12] 1810 	anl	a,r7
      0004E9 F5 F0            [12] 1811 	mov	b,a
      0004EB 05 F0            [12] 1812 	inc	b
      0004ED 74 01            [12] 1813 	mov	a,#0x01
      0004EF 80 02            [24] 1814 	sjmp	00182$
      0004F1                       1815 00180$:
      0004F1 25 E0            [12] 1816 	add	a,acc
      0004F3                       1817 00182$:
      0004F3 D5 F0 FB         [24] 1818 	djnz	b,00180$
      0004F6 F4               [12] 1819 	cpl	a
      0004F7 FD               [12] 1820 	mov	r5,a
      0004F8 52 80            [12] 1821 	anl	_P0,a
      0004FA                       1822 00103$:
                                   1823 ;	../sdk/src/gpio/src/gpio_pin_configure.c:66: P0CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      0004FA 90 00 37         [24] 1824 	mov	dptr,#_gpio_pin_configure_gpio_pin_id_1_83
      0004FD E0               [24] 1825 	movx	a,@dptr
      0004FE FD               [12] 1826 	mov	r5,a
      0004FF 53 05 07         [24] 1827 	anl	ar5,#0x07
      000502 74 07            [12] 1828 	mov	a,#0x07
      000504 5D               [12] 1829 	anl	a,r5
      000505 FC               [12] 1830 	mov	r4,a
                                   1831 ;	../sdk/src/gpio/src/gpio_pin_configure.c:67: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      000506 74 E0            [12] 1832 	mov	a,#0xe0
      000508 5E               [12] 1833 	anl	a,r6
      000509 4C               [12] 1834 	orl	a,r4
      00050A F5 9E            [12] 1835 	mov	_P0CON,a
                                   1836 ;	../sdk/src/gpio/src/gpio_pin_configure.c:70: gpio_pins_dir_output(P0DIR, (1 << (gpio_pin_id % 8)));
      00050C 8D F0            [24] 1837 	mov	b,r5
      00050E 05 F0            [12] 1838 	inc	b
      000510 74 01            [12] 1839 	mov	a,#0x01
      000512 80 02            [24] 1840 	sjmp	00185$
      000514                       1841 00183$:
      000514 25 E0            [12] 1842 	add	a,acc
      000516                       1843 00185$:
      000516 D5 F0 FB         [24] 1844 	djnz	b,00183$
      000519 F4               [12] 1845 	cpl	a
      00051A 52 93            [12] 1846 	anl	_P0DIR,a
      00051C 22               [24] 1847 	ret
      00051D                       1848 00105$:
                                   1849 ;	../sdk/src/gpio/src/gpio_pin_configure.c:75: P0CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      00051D 74 07            [12] 1850 	mov	a,#0x07
      00051F 5F               [12] 1851 	anl	a,r7
      000520 FD               [12] 1852 	mov	r5,a
      000521 74 07            [12] 1853 	mov	a,#0x07
      000523 5D               [12] 1854 	anl	a,r5
      000524 44 10            [12] 1855 	orl	a,#0x10
      000526 FC               [12] 1856 	mov	r4,a
                                   1857 ;	../sdk/src/gpio/src/gpio_pin_configure.c:77: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      000527 74 E0            [12] 1858 	mov	a,#0xe0
      000529 5E               [12] 1859 	anl	a,r6
      00052A 4C               [12] 1860 	orl	a,r4
      00052B F5 9E            [12] 1861 	mov	_P0CON,a
                                   1862 ;	../sdk/src/gpio/src/gpio_pin_configure.c:80: gpio_pins_dir_input(P0DIR, (1 << (gpio_pin_id % 8)));
      00052D 8D F0            [24] 1863 	mov	b,r5
      00052F 05 F0            [12] 1864 	inc	b
      000531 74 01            [12] 1865 	mov	a,#0x01
      000533 80 02            [24] 1866 	sjmp	00188$
      000535                       1867 00186$:
      000535 25 E0            [12] 1868 	add	a,acc
      000537                       1869 00188$:
      000537 D5 F0 FB         [24] 1870 	djnz	b,00186$
      00053A 42 93            [12] 1871 	orl	_P0DIR,a
      00053C 22               [24] 1872 	ret
      00053D                       1873 00134$:
                                   1874 ;	../sdk/src/gpio/src/gpio_pin_configure.c:83: else if(gpio_pin_id <= GPIO_PIN_ID_P1_7)
      00053D EF               [12] 1875 	mov	a,r7
      00053E 24 F0            [12] 1876 	add	a,#0xff - 0x0f
      000540 50 03            [24] 1877 	jnc	00189$
      000542 02 05 BD         [24] 1878 	ljmp	00131$
      000545                       1879 00189$:
                                   1880 ;	../sdk/src/gpio/src/gpio_pin_configure.c:86: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT)
      000545 90 00 36         [24] 1881 	mov	dptr,#_gpio_pin_configure_PARM_2
      000548 E0               [24] 1882 	movx	a,@dptr
      000549 FE               [12] 1883 	mov	r6,a
      00054A 30 E0 50         [24] 1884 	jnb	acc.0,00111$
                                   1885 ;	../sdk/src/gpio/src/gpio_pin_configure.c:89: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET)
      00054D EE               [12] 1886 	mov	a,r6
      00054E 30 E1 15         [24] 1887 	jnb	acc.1,00108$
                                   1888 ;	../sdk/src/gpio/src/gpio_pin_configure.c:91: gpio_pins_val_set(P1, (1 << (gpio_pin_id % 8)));
      000551 74 07            [12] 1889 	mov	a,#0x07
      000553 5F               [12] 1890 	anl	a,r7
      000554 F5 F0            [12] 1891 	mov	b,a
      000556 05 F0            [12] 1892 	inc	b
      000558 74 01            [12] 1893 	mov	a,#0x01
      00055A 80 02            [24] 1894 	sjmp	00194$
      00055C                       1895 00192$:
      00055C 25 E0            [12] 1896 	add	a,acc
      00055E                       1897 00194$:
      00055E D5 F0 FB         [24] 1898 	djnz	b,00192$
      000561 FD               [12] 1899 	mov	r5,a
      000562 42 90            [12] 1900 	orl	_P1,a
      000564 80 14            [24] 1901 	sjmp	00109$
      000566                       1902 00108$:
                                   1903 ;	../sdk/src/gpio/src/gpio_pin_configure.c:95: gpio_pins_val_clear(P1, (1 << (gpio_pin_id % 8)));
      000566 74 07            [12] 1904 	mov	a,#0x07
      000568 5F               [12] 1905 	anl	a,r7
      000569 F5 F0            [12] 1906 	mov	b,a
      00056B 05 F0            [12] 1907 	inc	b
      00056D 74 01            [12] 1908 	mov	a,#0x01
      00056F 80 02            [24] 1909 	sjmp	00197$
      000571                       1910 00195$:
      000571 25 E0            [12] 1911 	add	a,acc
      000573                       1912 00197$:
      000573 D5 F0 FB         [24] 1913 	djnz	b,00195$
      000576 F4               [12] 1914 	cpl	a
      000577 FD               [12] 1915 	mov	r5,a
      000578 52 90            [12] 1916 	anl	_P1,a
      00057A                       1917 00109$:
                                   1918 ;	../sdk/src/gpio/src/gpio_pin_configure.c:99: P1CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      00057A 90 00 37         [24] 1919 	mov	dptr,#_gpio_pin_configure_gpio_pin_id_1_83
      00057D E0               [24] 1920 	movx	a,@dptr
      00057E FD               [12] 1921 	mov	r5,a
      00057F 53 05 07         [24] 1922 	anl	ar5,#0x07
      000582 74 07            [12] 1923 	mov	a,#0x07
      000584 5D               [12] 1924 	anl	a,r5
      000585 FC               [12] 1925 	mov	r4,a
                                   1926 ;	../sdk/src/gpio/src/gpio_pin_configure.c:100: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      000586 74 E0            [12] 1927 	mov	a,#0xe0
      000588 5E               [12] 1928 	anl	a,r6
      000589 4C               [12] 1929 	orl	a,r4
      00058A F5 9F            [12] 1930 	mov	_P1CON,a
                                   1931 ;	../sdk/src/gpio/src/gpio_pin_configure.c:103: gpio_pins_dir_output(P1DIR, (1 << (gpio_pin_id % 8)));
      00058C 8D F0            [24] 1932 	mov	b,r5
      00058E 05 F0            [12] 1933 	inc	b
      000590 74 01            [12] 1934 	mov	a,#0x01
      000592 80 02            [24] 1935 	sjmp	00200$
      000594                       1936 00198$:
      000594 25 E0            [12] 1937 	add	a,acc
      000596                       1938 00200$:
      000596 D5 F0 FB         [24] 1939 	djnz	b,00198$
      000599 F4               [12] 1940 	cpl	a
      00059A 52 94            [12] 1941 	anl	_P1DIR,a
      00059C 22               [24] 1942 	ret
      00059D                       1943 00111$:
                                   1944 ;	../sdk/src/gpio/src/gpio_pin_configure.c:108: P1CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      00059D 74 07            [12] 1945 	mov	a,#0x07
      00059F 5F               [12] 1946 	anl	a,r7
      0005A0 FD               [12] 1947 	mov	r5,a
      0005A1 74 07            [12] 1948 	mov	a,#0x07
      0005A3 5D               [12] 1949 	anl	a,r5
      0005A4 44 10            [12] 1950 	orl	a,#0x10
      0005A6 FC               [12] 1951 	mov	r4,a
                                   1952 ;	../sdk/src/gpio/src/gpio_pin_configure.c:110: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      0005A7 74 E0            [12] 1953 	mov	a,#0xe0
      0005A9 5E               [12] 1954 	anl	a,r6
      0005AA 4C               [12] 1955 	orl	a,r4
      0005AB F5 9F            [12] 1956 	mov	_P1CON,a
                                   1957 ;	../sdk/src/gpio/src/gpio_pin_configure.c:113: gpio_pins_dir_input(P1DIR, (1 << (gpio_pin_id % 8)));
      0005AD 8D F0            [24] 1958 	mov	b,r5
      0005AF 05 F0            [12] 1959 	inc	b
      0005B1 74 01            [12] 1960 	mov	a,#0x01
      0005B3 80 02            [24] 1961 	sjmp	00203$
      0005B5                       1962 00201$:
      0005B5 25 E0            [12] 1963 	add	a,acc
      0005B7                       1964 00203$:
      0005B7 D5 F0 FB         [24] 1965 	djnz	b,00201$
      0005BA 42 94            [12] 1966 	orl	_P1DIR,a
      0005BC 22               [24] 1967 	ret
      0005BD                       1968 00131$:
                                   1969 ;	../sdk/src/gpio/src/gpio_pin_configure.c:116: else if(gpio_pin_id <= GPIO_PIN_ID_P2_7)
      0005BD EF               [12] 1970 	mov	a,r7
      0005BE 24 E8            [12] 1971 	add	a,#0xff - 0x17
      0005C0 50 03            [24] 1972 	jnc	00204$
      0005C2 02 06 3D         [24] 1973 	ljmp	00128$
      0005C5                       1974 00204$:
                                   1975 ;	../sdk/src/gpio/src/gpio_pin_configure.c:119: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT)
      0005C5 90 00 36         [24] 1976 	mov	dptr,#_gpio_pin_configure_PARM_2
      0005C8 E0               [24] 1977 	movx	a,@dptr
      0005C9 FE               [12] 1978 	mov	r6,a
      0005CA 30 E0 50         [24] 1979 	jnb	acc.0,00117$
                                   1980 ;	../sdk/src/gpio/src/gpio_pin_configure.c:122: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET)
      0005CD EE               [12] 1981 	mov	a,r6
      0005CE 30 E1 15         [24] 1982 	jnb	acc.1,00114$
                                   1983 ;	../sdk/src/gpio/src/gpio_pin_configure.c:124: gpio_pins_val_set(P2, (1 << (gpio_pin_id % 8)));
      0005D1 74 07            [12] 1984 	mov	a,#0x07
      0005D3 5F               [12] 1985 	anl	a,r7
      0005D4 F5 F0            [12] 1986 	mov	b,a
      0005D6 05 F0            [12] 1987 	inc	b
      0005D8 74 01            [12] 1988 	mov	a,#0x01
      0005DA 80 02            [24] 1989 	sjmp	00209$
      0005DC                       1990 00207$:
      0005DC 25 E0            [12] 1991 	add	a,acc
      0005DE                       1992 00209$:
      0005DE D5 F0 FB         [24] 1993 	djnz	b,00207$
      0005E1 FD               [12] 1994 	mov	r5,a
      0005E2 42 A0            [12] 1995 	orl	_P2,a
      0005E4 80 14            [24] 1996 	sjmp	00115$
      0005E6                       1997 00114$:
                                   1998 ;	../sdk/src/gpio/src/gpio_pin_configure.c:128: gpio_pins_val_clear(P2, (1 << (gpio_pin_id % 8)));
      0005E6 74 07            [12] 1999 	mov	a,#0x07
      0005E8 5F               [12] 2000 	anl	a,r7
      0005E9 F5 F0            [12] 2001 	mov	b,a
      0005EB 05 F0            [12] 2002 	inc	b
      0005ED 74 01            [12] 2003 	mov	a,#0x01
      0005EF 80 02            [24] 2004 	sjmp	00212$
      0005F1                       2005 00210$:
      0005F1 25 E0            [12] 2006 	add	a,acc
      0005F3                       2007 00212$:
      0005F3 D5 F0 FB         [24] 2008 	djnz	b,00210$
      0005F6 F4               [12] 2009 	cpl	a
      0005F7 FD               [12] 2010 	mov	r5,a
      0005F8 52 A0            [12] 2011 	anl	_P2,a
      0005FA                       2012 00115$:
                                   2013 ;	../sdk/src/gpio/src/gpio_pin_configure.c:132: P2CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      0005FA 90 00 37         [24] 2014 	mov	dptr,#_gpio_pin_configure_gpio_pin_id_1_83
      0005FD E0               [24] 2015 	movx	a,@dptr
      0005FE FD               [12] 2016 	mov	r5,a
      0005FF 53 05 07         [24] 2017 	anl	ar5,#0x07
      000602 74 07            [12] 2018 	mov	a,#0x07
      000604 5D               [12] 2019 	anl	a,r5
      000605 FC               [12] 2020 	mov	r4,a
                                   2021 ;	../sdk/src/gpio/src/gpio_pin_configure.c:133: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      000606 74 E0            [12] 2022 	mov	a,#0xe0
      000608 5E               [12] 2023 	anl	a,r6
      000609 4C               [12] 2024 	orl	a,r4
      00060A F5 97            [12] 2025 	mov	_P2CON,a
                                   2026 ;	../sdk/src/gpio/src/gpio_pin_configure.c:136: gpio_pins_dir_output(P2DIR, (1 << (gpio_pin_id % 8)));
      00060C 8D F0            [24] 2027 	mov	b,r5
      00060E 05 F0            [12] 2028 	inc	b
      000610 74 01            [12] 2029 	mov	a,#0x01
      000612 80 02            [24] 2030 	sjmp	00215$
      000614                       2031 00213$:
      000614 25 E0            [12] 2032 	add	a,acc
      000616                       2033 00215$:
      000616 D5 F0 FB         [24] 2034 	djnz	b,00213$
      000619 F4               [12] 2035 	cpl	a
      00061A 52 95            [12] 2036 	anl	_P2DIR,a
      00061C 22               [24] 2037 	ret
      00061D                       2038 00117$:
                                   2039 ;	../sdk/src/gpio/src/gpio_pin_configure.c:141: P2CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      00061D 74 07            [12] 2040 	mov	a,#0x07
      00061F 5F               [12] 2041 	anl	a,r7
      000620 FD               [12] 2042 	mov	r5,a
      000621 74 07            [12] 2043 	mov	a,#0x07
      000623 5D               [12] 2044 	anl	a,r5
      000624 44 10            [12] 2045 	orl	a,#0x10
      000626 FC               [12] 2046 	mov	r4,a
                                   2047 ;	../sdk/src/gpio/src/gpio_pin_configure.c:143: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      000627 74 E0            [12] 2048 	mov	a,#0xe0
      000629 5E               [12] 2049 	anl	a,r6
      00062A 4C               [12] 2050 	orl	a,r4
      00062B F5 97            [12] 2051 	mov	_P2CON,a
                                   2052 ;	../sdk/src/gpio/src/gpio_pin_configure.c:146: gpio_pins_dir_input(P2DIR, (1 << (gpio_pin_id % 8)));
      00062D 8D F0            [24] 2053 	mov	b,r5
      00062F 05 F0            [12] 2054 	inc	b
      000631 74 01            [12] 2055 	mov	a,#0x01
      000633 80 02            [24] 2056 	sjmp	00218$
      000635                       2057 00216$:
      000635 25 E0            [12] 2058 	add	a,acc
      000637                       2059 00218$:
      000637 D5 F0 FB         [24] 2060 	djnz	b,00216$
      00063A 42 95            [12] 2061 	orl	_P2DIR,a
      00063C 22               [24] 2062 	ret
      00063D                       2063 00128$:
                                   2064 ;	../sdk/src/gpio/src/gpio_pin_configure.c:149: else if(gpio_pin_id <= GPIO_PIN_ID_P3_6)
      00063D EF               [12] 2065 	mov	a,r7
      00063E 24 E1            [12] 2066 	add	a,#0xff - 0x1e
      000640 50 01            [24] 2067 	jnc	00219$
      000642 22               [24] 2068 	ret
      000643                       2069 00219$:
                                   2070 ;	../sdk/src/gpio/src/gpio_pin_configure.c:152: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT)
      000643 90 00 36         [24] 2071 	mov	dptr,#_gpio_pin_configure_PARM_2
      000646 E0               [24] 2072 	movx	a,@dptr
      000647 FE               [12] 2073 	mov	r6,a
      000648 30 E0 50         [24] 2074 	jnb	acc.0,00123$
                                   2075 ;	../sdk/src/gpio/src/gpio_pin_configure.c:155: if(gpio_pin_config_options & GPIO_PIN_CONFIG_OPTION_OUTPUT_VAL_SET)
      00064B EE               [12] 2076 	mov	a,r6
      00064C 30 E1 15         [24] 2077 	jnb	acc.1,00120$
                                   2078 ;	../sdk/src/gpio/src/gpio_pin_configure.c:157: gpio_pins_val_set(P3, (1 << (gpio_pin_id % 8)));
      00064F 74 07            [12] 2079 	mov	a,#0x07
      000651 5F               [12] 2080 	anl	a,r7
      000652 F5 F0            [12] 2081 	mov	b,a
      000654 05 F0            [12] 2082 	inc	b
      000656 74 01            [12] 2083 	mov	a,#0x01
      000658 80 02            [24] 2084 	sjmp	00224$
      00065A                       2085 00222$:
      00065A 25 E0            [12] 2086 	add	a,acc
      00065C                       2087 00224$:
      00065C D5 F0 FB         [24] 2088 	djnz	b,00222$
      00065F FD               [12] 2089 	mov	r5,a
      000660 42 B0            [12] 2090 	orl	_P3,a
      000662 80 14            [24] 2091 	sjmp	00121$
      000664                       2092 00120$:
                                   2093 ;	../sdk/src/gpio/src/gpio_pin_configure.c:161: gpio_pins_val_clear(P3, (1 << (gpio_pin_id % 8)));
      000664 74 07            [12] 2094 	mov	a,#0x07
      000666 5F               [12] 2095 	anl	a,r7
      000667 F5 F0            [12] 2096 	mov	b,a
      000669 05 F0            [12] 2097 	inc	b
      00066B 74 01            [12] 2098 	mov	a,#0x01
      00066D 80 02            [24] 2099 	sjmp	00227$
      00066F                       2100 00225$:
      00066F 25 E0            [12] 2101 	add	a,acc
      000671                       2102 00227$:
      000671 D5 F0 FB         [24] 2103 	djnz	b,00225$
      000674 F4               [12] 2104 	cpl	a
      000675 FD               [12] 2105 	mov	r5,a
      000676 52 B0            [12] 2106 	anl	_P3,a
      000678                       2107 00121$:
                                   2108 ;	../sdk/src/gpio/src/gpio_pin_configure.c:165: P3CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      000678 90 00 37         [24] 2109 	mov	dptr,#_gpio_pin_configure_gpio_pin_id_1_83
      00067B E0               [24] 2110 	movx	a,@dptr
      00067C FD               [12] 2111 	mov	r5,a
      00067D 53 05 07         [24] 2112 	anl	ar5,#0x07
      000680 74 07            [12] 2113 	mov	a,#0x07
      000682 5D               [12] 2114 	anl	a,r5
      000683 FC               [12] 2115 	mov	r4,a
                                   2116 ;	../sdk/src/gpio/src/gpio_pin_configure.c:166: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      000684 74 E0            [12] 2117 	mov	a,#0xe0
      000686 5E               [12] 2118 	anl	a,r6
      000687 4C               [12] 2119 	orl	a,r4
      000688 F5 8F            [12] 2120 	mov	_P3CON,a
                                   2121 ;	../sdk/src/gpio/src/gpio_pin_configure.c:169: gpio_pins_dir_output(P3DIR, (1 << (gpio_pin_id % 8)));
      00068A 8D F0            [24] 2122 	mov	b,r5
      00068C 05 F0            [12] 2123 	inc	b
      00068E 74 01            [12] 2124 	mov	a,#0x01
      000690 80 02            [24] 2125 	sjmp	00230$
      000692                       2126 00228$:
      000692 25 E0            [12] 2127 	add	a,acc
      000694                       2128 00230$:
      000694 D5 F0 FB         [24] 2129 	djnz	b,00228$
      000697 F4               [12] 2130 	cpl	a
      000698 52 96            [12] 2131 	anl	_P3DIR,a
      00069A 22               [24] 2132 	ret
      00069B                       2133 00123$:
                                   2134 ;	../sdk/src/gpio/src/gpio_pin_configure.c:174: P3CON = ((gpio_pin_id % 8) & PXCON_BIT_ADDR_MASK) |
      00069B 53 07 07         [24] 2135 	anl	ar7,#0x07
      00069E 74 07            [12] 2136 	mov	a,#0x07
      0006A0 5F               [12] 2137 	anl	a,r7
      0006A1 44 10            [12] 2138 	orl	a,#0x10
      0006A3 FD               [12] 2139 	mov	r5,a
                                   2140 ;	../sdk/src/gpio/src/gpio_pin_configure.c:176: (gpio_pin_config_options & PXCON_PINMODE_MASK);
      0006A4 74 E0            [12] 2141 	mov	a,#0xe0
      0006A6 5E               [12] 2142 	anl	a,r6
      0006A7 4D               [12] 2143 	orl	a,r5
      0006A8 F5 8F            [12] 2144 	mov	_P3CON,a
                                   2145 ;	../sdk/src/gpio/src/gpio_pin_configure.c:179: gpio_pins_dir_input(P3DIR, (1 << (gpio_pin_id % 8)));
      0006AA 8F F0            [24] 2146 	mov	b,r7
      0006AC 05 F0            [12] 2147 	inc	b
      0006AE 74 01            [12] 2148 	mov	a,#0x01
      0006B0 80 02            [24] 2149 	sjmp	00233$
      0006B2                       2150 00231$:
      0006B2 25 E0            [12] 2151 	add	a,acc
      0006B4                       2152 00233$:
      0006B4 D5 F0 FB         [24] 2153 	djnz	b,00231$
      0006B7 42 96            [12] 2154 	orl	_P3DIR,a
      0006B9 22               [24] 2155 	ret
                                   2156 ;------------------------------------------------------------
                                   2157 ;Allocation info for local variables in function 'gpio_pin_val_read'
                                   2158 ;------------------------------------------------------------
                                   2159 ;gpio_pin_id               Allocated with name '_gpio_pin_val_read_gpio_pin_id_1_105'
                                   2160 ;value                     Allocated with name '_gpio_pin_val_read_value_1_106'
                                   2161 ;------------------------------------------------------------
                                   2162 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:46: bool gpio_pin_val_read(gpio_pin_id_t gpio_pin_id)
                                   2163 ;	-----------------------------------------
                                   2164 ;	 function gpio_pin_val_read
                                   2165 ;	-----------------------------------------
      0006BA                       2166 _gpio_pin_val_read:
      0006BA E5 82            [12] 2167 	mov	a,dpl
      0006BC 90 00 38         [24] 2168 	mov	dptr,#_gpio_pin_val_read_gpio_pin_id_1_105
      0006BF F0               [24] 2169 	movx	@dptr,a
                                   2170 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:48: bool value = false;
      0006C0 90 00 39         [24] 2171 	mov	dptr,#_gpio_pin_val_read_value_1_106
      0006C3 E4               [12] 2172 	clr	a
      0006C4 F0               [24] 2173 	movx	@dptr,a
                                   2174 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:51: if(gpio_pin_id <= GPIO_PIN_ID_P0_7)
      0006C5 90 00 38         [24] 2175 	mov	dptr,#_gpio_pin_val_read_gpio_pin_id_1_105
      0006C8 E0               [24] 2176 	movx	a,@dptr
      0006C9 FF               [12] 2177 	mov  r7,a
      0006CA 24 F8            [12] 2178 	add	a,#0xff - 0x07
      0006CC 40 19            [24] 2179 	jc	00110$
                                   2180 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:53: value = P0 & (1 << (gpio_pin_id % 8));
      0006CE 74 07            [12] 2181 	mov	a,#0x07
      0006D0 5F               [12] 2182 	anl	a,r7
      0006D1 F5 F0            [12] 2183 	mov	b,a
      0006D3 05 F0            [12] 2184 	inc	b
      0006D5 74 01            [12] 2185 	mov	a,#0x01
      0006D7 80 02            [24] 2186 	sjmp	00135$
      0006D9                       2187 00133$:
      0006D9 25 E0            [12] 2188 	add	a,acc
      0006DB                       2189 00135$:
      0006DB D5 F0 FB         [24] 2190 	djnz	b,00133$
      0006DE FE               [12] 2191 	mov	r6,a
      0006DF 90 00 39         [24] 2192 	mov	dptr,#_gpio_pin_val_read_value_1_106
      0006E2 55 80            [12] 2193 	anl	a,_P0
      0006E4 F0               [24] 2194 	movx	@dptr,a
      0006E5 80 58            [24] 2195 	sjmp	00111$
      0006E7                       2196 00110$:
                                   2197 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:55: else if(gpio_pin_id <= GPIO_PIN_ID_P1_7)
      0006E7 EF               [12] 2198 	mov	a,r7
      0006E8 24 F0            [12] 2199 	add	a,#0xff - 0x0f
      0006EA 40 19            [24] 2200 	jc	00107$
                                   2201 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:57: value = P1 & (1 << (gpio_pin_id % 8));
      0006EC 74 07            [12] 2202 	mov	a,#0x07
      0006EE 5F               [12] 2203 	anl	a,r7
      0006EF F5 F0            [12] 2204 	mov	b,a
      0006F1 05 F0            [12] 2205 	inc	b
      0006F3 74 01            [12] 2206 	mov	a,#0x01
      0006F5 80 02            [24] 2207 	sjmp	00139$
      0006F7                       2208 00137$:
      0006F7 25 E0            [12] 2209 	add	a,acc
      0006F9                       2210 00139$:
      0006F9 D5 F0 FB         [24] 2211 	djnz	b,00137$
      0006FC FE               [12] 2212 	mov	r6,a
      0006FD 90 00 39         [24] 2213 	mov	dptr,#_gpio_pin_val_read_value_1_106
      000700 55 90            [12] 2214 	anl	a,_P1
      000702 F0               [24] 2215 	movx	@dptr,a
      000703 80 3A            [24] 2216 	sjmp	00111$
      000705                       2217 00107$:
                                   2218 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:59: else if(gpio_pin_id <= GPIO_PIN_ID_P2_7)
      000705 EF               [12] 2219 	mov	a,r7
      000706 24 E8            [12] 2220 	add	a,#0xff - 0x17
      000708 40 19            [24] 2221 	jc	00104$
                                   2222 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:61: value = P2 & (1 << (gpio_pin_id % 8));
      00070A 74 07            [12] 2223 	mov	a,#0x07
      00070C 5F               [12] 2224 	anl	a,r7
      00070D F5 F0            [12] 2225 	mov	b,a
      00070F 05 F0            [12] 2226 	inc	b
      000711 74 01            [12] 2227 	mov	a,#0x01
      000713 80 02            [24] 2228 	sjmp	00143$
      000715                       2229 00141$:
      000715 25 E0            [12] 2230 	add	a,acc
      000717                       2231 00143$:
      000717 D5 F0 FB         [24] 2232 	djnz	b,00141$
      00071A FE               [12] 2233 	mov	r6,a
      00071B 90 00 39         [24] 2234 	mov	dptr,#_gpio_pin_val_read_value_1_106
      00071E 55 A0            [12] 2235 	anl	a,_P2
      000720 F0               [24] 2236 	movx	@dptr,a
      000721 80 1C            [24] 2237 	sjmp	00111$
      000723                       2238 00104$:
                                   2239 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:63: else if(gpio_pin_id <= GPIO_PIN_ID_P3_6)
      000723 EF               [12] 2240 	mov	a,r7
      000724 24 E1            [12] 2241 	add	a,#0xff - 0x1e
      000726 40 17            [24] 2242 	jc	00111$
                                   2243 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:65: value = P3 & (1 << (gpio_pin_id % 8));
      000728 74 07            [12] 2244 	mov	a,#0x07
      00072A 5F               [12] 2245 	anl	a,r7
      00072B F5 F0            [12] 2246 	mov	b,a
      00072D 05 F0            [12] 2247 	inc	b
      00072F 74 01            [12] 2248 	mov	a,#0x01
      000731 80 02            [24] 2249 	sjmp	00147$
      000733                       2250 00145$:
      000733 25 E0            [12] 2251 	add	a,acc
      000735                       2252 00147$:
      000735 D5 F0 FB         [24] 2253 	djnz	b,00145$
      000738 FF               [12] 2254 	mov	r7,a
      000739 90 00 39         [24] 2255 	mov	dptr,#_gpio_pin_val_read_value_1_106
      00073C 55 B0            [12] 2256 	anl	a,_P3
      00073E F0               [24] 2257 	movx	@dptr,a
      00073F                       2258 00111$:
                                   2259 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:68: if(value)
      00073F 90 00 39         [24] 2260 	mov	dptr,#_gpio_pin_val_read_value_1_106
      000742 E0               [24] 2261 	movx	a,@dptr
      000743 60 04            [24] 2262 	jz	00113$
                                   2263 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:70: return true;
      000745 75 82 01         [24] 2264 	mov	dpl,#0x01
      000748 22               [24] 2265 	ret
      000749                       2266 00113$:
                                   2267 ;	../sdk/src/gpio/src/gpio_pin_val_read.c:74: return false;
      000749 75 82 00         [24] 2268 	mov	dpl,#0x00
      00074C 22               [24] 2269 	ret
                                   2270 ;------------------------------------------------------------
                                   2271 ;Allocation info for local variables in function 'gpio_pin_val_clear'
                                   2272 ;------------------------------------------------------------
                                   2273 ;gpio_pin_id               Allocated with name '_gpio_pin_val_clear_gpio_pin_id_1_113'
                                   2274 ;------------------------------------------------------------
                                   2275 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:46: void gpio_pin_val_clear(gpio_pin_id_t gpio_pin_id)
                                   2276 ;	-----------------------------------------
                                   2277 ;	 function gpio_pin_val_clear
                                   2278 ;	-----------------------------------------
      00074D                       2279 _gpio_pin_val_clear:
      00074D E5 82            [12] 2280 	mov	a,dpl
      00074F 90 00 3A         [24] 2281 	mov	dptr,#_gpio_pin_val_clear_gpio_pin_id_1_113
      000752 F0               [24] 2282 	movx	@dptr,a
                                   2283 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:49: if(gpio_pin_id <= GPIO_PIN_ID_P0_7)
      000753 E0               [24] 2284 	movx	a,@dptr
      000754 FF               [12] 2285 	mov  r7,a
      000755 24 F8            [12] 2286 	add	a,#0xff - 0x07
      000757 40 14            [24] 2287 	jc	00110$
                                   2288 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:51: gpio_pins_val_clear(P0, (1 << (gpio_pin_id % 8)));
      000759 74 07            [12] 2289 	mov	a,#0x07
      00075B 5F               [12] 2290 	anl	a,r7
      00075C F5 F0            [12] 2291 	mov	b,a
      00075E 05 F0            [12] 2292 	inc	b
      000760 74 01            [12] 2293 	mov	a,#0x01
      000762 80 02            [24] 2294 	sjmp	00129$
      000764                       2295 00127$:
      000764 25 E0            [12] 2296 	add	a,acc
      000766                       2297 00129$:
      000766 D5 F0 FB         [24] 2298 	djnz	b,00127$
      000769 F4               [12] 2299 	cpl	a
      00076A 52 80            [12] 2300 	anl	_P0,a
      00076C 22               [24] 2301 	ret
      00076D                       2302 00110$:
                                   2303 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:53: else if(gpio_pin_id <= GPIO_PIN_ID_P1_7)
      00076D EF               [12] 2304 	mov	a,r7
      00076E 24 F0            [12] 2305 	add	a,#0xff - 0x0f
      000770 40 14            [24] 2306 	jc	00107$
                                   2307 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:55: gpio_pins_val_clear(P1, (1 << (gpio_pin_id % 8)));
      000772 74 07            [12] 2308 	mov	a,#0x07
      000774 5F               [12] 2309 	anl	a,r7
      000775 F5 F0            [12] 2310 	mov	b,a
      000777 05 F0            [12] 2311 	inc	b
      000779 74 01            [12] 2312 	mov	a,#0x01
      00077B 80 02            [24] 2313 	sjmp	00133$
      00077D                       2314 00131$:
      00077D 25 E0            [12] 2315 	add	a,acc
      00077F                       2316 00133$:
      00077F D5 F0 FB         [24] 2317 	djnz	b,00131$
      000782 F4               [12] 2318 	cpl	a
      000783 52 90            [12] 2319 	anl	_P1,a
      000785 22               [24] 2320 	ret
      000786                       2321 00107$:
                                   2322 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:57: else if(gpio_pin_id <= GPIO_PIN_ID_P2_7)
      000786 EF               [12] 2323 	mov	a,r7
      000787 24 E8            [12] 2324 	add	a,#0xff - 0x17
      000789 40 14            [24] 2325 	jc	00104$
                                   2326 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:59: gpio_pins_val_clear(P2, (1 << (gpio_pin_id % 8)));
      00078B 74 07            [12] 2327 	mov	a,#0x07
      00078D 5F               [12] 2328 	anl	a,r7
      00078E F5 F0            [12] 2329 	mov	b,a
      000790 05 F0            [12] 2330 	inc	b
      000792 74 01            [12] 2331 	mov	a,#0x01
      000794 80 02            [24] 2332 	sjmp	00137$
      000796                       2333 00135$:
      000796 25 E0            [12] 2334 	add	a,acc
      000798                       2335 00137$:
      000798 D5 F0 FB         [24] 2336 	djnz	b,00135$
      00079B F4               [12] 2337 	cpl	a
      00079C 52 A0            [12] 2338 	anl	_P2,a
      00079E 22               [24] 2339 	ret
      00079F                       2340 00104$:
                                   2341 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:61: else if(gpio_pin_id <= GPIO_PIN_ID_P3_6)
      00079F EF               [12] 2342 	mov	a,r7
      0007A0 24 E1            [12] 2343 	add	a,#0xff - 0x1e
      0007A2 40 14            [24] 2344 	jc	00112$
                                   2345 ;	../sdk/src/gpio/src/gpio_pin_val_clear.c:63: gpio_pins_val_clear(P3, (1 << (gpio_pin_id % 8)));
      0007A4 74 07            [12] 2346 	mov	a,#0x07
      0007A6 5F               [12] 2347 	anl	a,r7
      0007A7 F5 F0            [12] 2348 	mov	b,a
      0007A9 05 F0            [12] 2349 	inc	b
      0007AB 74 01            [12] 2350 	mov	a,#0x01
      0007AD 80 02            [24] 2351 	sjmp	00141$
      0007AF                       2352 00139$:
      0007AF 25 E0            [12] 2353 	add	a,acc
      0007B1                       2354 00141$:
      0007B1 D5 F0 FB         [24] 2355 	djnz	b,00139$
      0007B4 F4               [12] 2356 	cpl	a
      0007B5 FF               [12] 2357 	mov	r7,a
      0007B6 52 B0            [12] 2358 	anl	_P3,a
      0007B8                       2359 00112$:
      0007B8 22               [24] 2360 	ret
                                   2361 ;------------------------------------------------------------
                                   2362 ;Allocation info for local variables in function 'gpio_pin_val_set'
                                   2363 ;------------------------------------------------------------
                                   2364 ;gpio_pin_id               Allocated with name '_gpio_pin_val_set_gpio_pin_id_1_119'
                                   2365 ;------------------------------------------------------------
                                   2366 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:46: void gpio_pin_val_set(gpio_pin_id_t gpio_pin_id)
                                   2367 ;	-----------------------------------------
                                   2368 ;	 function gpio_pin_val_set
                                   2369 ;	-----------------------------------------
      0007B9                       2370 _gpio_pin_val_set:
      0007B9 E5 82            [12] 2371 	mov	a,dpl
      0007BB 90 00 3B         [24] 2372 	mov	dptr,#_gpio_pin_val_set_gpio_pin_id_1_119
      0007BE F0               [24] 2373 	movx	@dptr,a
                                   2374 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:49: if(gpio_pin_id <= GPIO_PIN_ID_P0_7)
      0007BF E0               [24] 2375 	movx	a,@dptr
      0007C0 FF               [12] 2376 	mov  r7,a
      0007C1 24 F8            [12] 2377 	add	a,#0xff - 0x07
      0007C3 40 13            [24] 2378 	jc	00110$
                                   2379 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:51: gpio_pins_val_set(P0, (1 << (gpio_pin_id % 8)));
      0007C5 74 07            [12] 2380 	mov	a,#0x07
      0007C7 5F               [12] 2381 	anl	a,r7
      0007C8 F5 F0            [12] 2382 	mov	b,a
      0007CA 05 F0            [12] 2383 	inc	b
      0007CC 74 01            [12] 2384 	mov	a,#0x01
      0007CE 80 02            [24] 2385 	sjmp	00129$
      0007D0                       2386 00127$:
      0007D0 25 E0            [12] 2387 	add	a,acc
      0007D2                       2388 00129$:
      0007D2 D5 F0 FB         [24] 2389 	djnz	b,00127$
      0007D5 42 80            [12] 2390 	orl	_P0,a
      0007D7 22               [24] 2391 	ret
      0007D8                       2392 00110$:
                                   2393 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:53: else if(gpio_pin_id <= GPIO_PIN_ID_P1_7)
      0007D8 EF               [12] 2394 	mov	a,r7
      0007D9 24 F0            [12] 2395 	add	a,#0xff - 0x0f
      0007DB 40 13            [24] 2396 	jc	00107$
                                   2397 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:55: gpio_pins_val_set(P1, (1 << (gpio_pin_id % 8)));
      0007DD 74 07            [12] 2398 	mov	a,#0x07
      0007DF 5F               [12] 2399 	anl	a,r7
      0007E0 F5 F0            [12] 2400 	mov	b,a
      0007E2 05 F0            [12] 2401 	inc	b
      0007E4 74 01            [12] 2402 	mov	a,#0x01
      0007E6 80 02            [24] 2403 	sjmp	00133$
      0007E8                       2404 00131$:
      0007E8 25 E0            [12] 2405 	add	a,acc
      0007EA                       2406 00133$:
      0007EA D5 F0 FB         [24] 2407 	djnz	b,00131$
      0007ED 42 90            [12] 2408 	orl	_P1,a
      0007EF 22               [24] 2409 	ret
      0007F0                       2410 00107$:
                                   2411 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:57: else if(gpio_pin_id <= GPIO_PIN_ID_P2_7)
      0007F0 EF               [12] 2412 	mov	a,r7
      0007F1 24 E8            [12] 2413 	add	a,#0xff - 0x17
      0007F3 40 13            [24] 2414 	jc	00104$
                                   2415 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:59: gpio_pins_val_set(P2, (1 << (gpio_pin_id % 8)));
      0007F5 74 07            [12] 2416 	mov	a,#0x07
      0007F7 5F               [12] 2417 	anl	a,r7
      0007F8 F5 F0            [12] 2418 	mov	b,a
      0007FA 05 F0            [12] 2419 	inc	b
      0007FC 74 01            [12] 2420 	mov	a,#0x01
      0007FE 80 02            [24] 2421 	sjmp	00137$
      000800                       2422 00135$:
      000800 25 E0            [12] 2423 	add	a,acc
      000802                       2424 00137$:
      000802 D5 F0 FB         [24] 2425 	djnz	b,00135$
      000805 42 A0            [12] 2426 	orl	_P2,a
      000807 22               [24] 2427 	ret
      000808                       2428 00104$:
                                   2429 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:61: else if(gpio_pin_id <= GPIO_PIN_ID_P3_6)
      000808 EF               [12] 2430 	mov	a,r7
      000809 24 E1            [12] 2431 	add	a,#0xff - 0x1e
      00080B 40 13            [24] 2432 	jc	00112$
                                   2433 ;	../sdk/src/gpio/src/gpio_pin_val_set.c:63: gpio_pins_val_set(P3, (1 << (gpio_pin_id % 8)));
      00080D 74 07            [12] 2434 	mov	a,#0x07
      00080F 5F               [12] 2435 	anl	a,r7
      000810 F5 F0            [12] 2436 	mov	b,a
      000812 05 F0            [12] 2437 	inc	b
      000814 74 01            [12] 2438 	mov	a,#0x01
      000816 80 02            [24] 2439 	sjmp	00141$
      000818                       2440 00139$:
      000818 25 E0            [12] 2441 	add	a,acc
      00081A                       2442 00141$:
      00081A D5 F0 FB         [24] 2443 	djnz	b,00139$
      00081D FF               [12] 2444 	mov	r7,a
      00081E 42 B0            [12] 2445 	orl	_P3,a
      000820                       2446 00112$:
      000820 22               [24] 2447 	ret
                                   2448 ;------------------------------------------------------------
                                   2449 ;Allocation info for local variables in function 'gpio_pin_val_write'
                                   2450 ;------------------------------------------------------------
                                   2451 ;value                     Allocated with name '_gpio_pin_val_write_PARM_2'
                                   2452 ;gpio_pin_id               Allocated with name '_gpio_pin_val_write_gpio_pin_id_1_125'
                                   2453 ;------------------------------------------------------------
                                   2454 ;	../sdk/src/gpio/src/gpio_pin_val_write.c:47: void gpio_pin_val_write(gpio_pin_id_t gpio_pin_id, bool value)
                                   2455 ;	-----------------------------------------
                                   2456 ;	 function gpio_pin_val_write
                                   2457 ;	-----------------------------------------
      000821                       2458 _gpio_pin_val_write:
      000821 E5 82            [12] 2459 	mov	a,dpl
      000823 90 00 3D         [24] 2460 	mov	dptr,#_gpio_pin_val_write_gpio_pin_id_1_125
      000826 F0               [24] 2461 	movx	@dptr,a
                                   2462 ;	../sdk/src/gpio/src/gpio_pin_val_write.c:50: if(value)
      000827 90 00 3C         [24] 2463 	mov	dptr,#_gpio_pin_val_write_PARM_2
      00082A E0               [24] 2464 	movx	a,@dptr
      00082B FF               [12] 2465 	mov	r7,a
      00082C 60 09            [24] 2466 	jz	00102$
                                   2467 ;	../sdk/src/gpio/src/gpio_pin_val_write.c:52: gpio_pin_val_set(gpio_pin_id);
      00082E 90 00 3D         [24] 2468 	mov	dptr,#_gpio_pin_val_write_gpio_pin_id_1_125
      000831 E0               [24] 2469 	movx	a,@dptr
      000832 F5 82            [12] 2470 	mov	dpl,a
      000834 02 07 B9         [24] 2471 	ljmp	_gpio_pin_val_set
      000837                       2472 00102$:
                                   2473 ;	../sdk/src/gpio/src/gpio_pin_val_write.c:56: gpio_pin_val_clear(gpio_pin_id);
      000837 90 00 3D         [24] 2474 	mov	dptr,#_gpio_pin_val_write_gpio_pin_id_1_125
      00083A E0               [24] 2475 	movx	a,@dptr
      00083B F5 82            [12] 2476 	mov	dpl,a
      00083D 02 07 4D         [24] 2477 	ljmp	_gpio_pin_val_clear
                                   2478 ;------------------------------------------------------------
                                   2479 ;Allocation info for local variables in function 'delay_us'
                                   2480 ;------------------------------------------------------------
                                   2481 ;microseconds              Allocated with name '_delay_us_microseconds_1_129'
                                   2482 ;count                     Allocated with name '_delay_us_count_1_130'
                                   2483 ;------------------------------------------------------------
                                   2484 ;	../sdk/src/delay/src/delay_us.c:46: void delay_us(uint16_t microseconds)
                                   2485 ;	-----------------------------------------
                                   2486 ;	 function delay_us
                                   2487 ;	-----------------------------------------
      000840                       2488 _delay_us:
      000840 AF 83            [24] 2489 	mov	r7,dph
      000842 E5 82            [12] 2490 	mov	a,dpl
      000844 90 00 3E         [24] 2491 	mov	dptr,#_delay_us_microseconds_1_129
      000847 F0               [24] 2492 	movx	@dptr,a
      000848 EF               [12] 2493 	mov	a,r7
      000849 A3               [24] 2494 	inc	dptr
      00084A F0               [24] 2495 	movx	@dptr,a
                                   2496 ;	../sdk/src/delay/src/delay_us.c:51: if(microseconds == 0)
      00084B 90 00 3E         [24] 2497 	mov	dptr,#_delay_us_microseconds_1_129
      00084E E0               [24] 2498 	movx	a,@dptr
      00084F FE               [12] 2499 	mov	r6,a
      000850 A3               [24] 2500 	inc	dptr
      000851 E0               [24] 2501 	movx	a,@dptr
      000852 FF               [12] 2502 	mov	r7,a
      000853 90 00 3E         [24] 2503 	mov	dptr,#_delay_us_microseconds_1_129
      000856 E0               [24] 2504 	movx	a,@dptr
      000857 F5 F0            [12] 2505 	mov	b,a
      000859 A3               [24] 2506 	inc	dptr
      00085A E0               [24] 2507 	movx	a,@dptr
      00085B 45 F0            [12] 2508 	orl	a,b
      00085D 70 01            [24] 2509 	jnz	00102$
                                   2510 ;	../sdk/src/delay/src/delay_us.c:52: return;
      00085F 22               [24] 2511 	ret
      000860                       2512 00102$:
                                   2513 ;	../sdk/src/delay/src/delay_us.c:54: microseconds -= 1;
      000860 1E               [12] 2514 	dec	r6
      000861 BE FF 01         [24] 2515 	cjne	r6,#0xff,00121$
      000864 1F               [12] 2516 	dec	r7
      000865                       2517 00121$:
      000865 90 00 3E         [24] 2518 	mov	dptr,#_delay_us_microseconds_1_129
      000868 EE               [12] 2519 	mov	a,r6
      000869 F0               [24] 2520 	movx	@dptr,a
      00086A EF               [12] 2521 	mov	a,r7
      00086B A3               [24] 2522 	inc	dptr
      00086C F0               [24] 2523 	movx	@dptr,a
                                   2524 ;	../sdk/src/delay/src/delay_us.c:56: for(count = 0; count < microseconds; count++)
      00086D 90 00 3E         [24] 2525 	mov	dptr,#_delay_us_microseconds_1_129
      000870 E0               [24] 2526 	movx	a,@dptr
      000871 FE               [12] 2527 	mov	r6,a
      000872 A3               [24] 2528 	inc	dptr
      000873 E0               [24] 2529 	movx	a,@dptr
      000874 FF               [12] 2530 	mov	r7,a
      000875 7C 00            [12] 2531 	mov	r4,#0x00
      000877 7D 00            [12] 2532 	mov	r5,#0x00
      000879                       2533 00106$:
      000879 C3               [12] 2534 	clr	c
      00087A EC               [12] 2535 	mov	a,r4
      00087B 9E               [12] 2536 	subb	a,r6
      00087C ED               [12] 2537 	mov	a,r5
      00087D 9F               [12] 2538 	subb	a,r7
      00087E 50 09            [24] 2539 	jnc	00108$
                                   2540 ;	../sdk/src/delay/src/delay_us.c:58: nop();
      000880 00               [12] 2541 	nop	
                                   2542 ;	../sdk/src/delay/src/delay_us.c:59: nop();
      000881 00               [12] 2543 	nop	
                                   2544 ;	../sdk/src/delay/src/delay_us.c:56: for(count = 0; count < microseconds; count++)
      000882 0C               [12] 2545 	inc	r4
      000883 BC 00 F3         [24] 2546 	cjne	r4,#0x00,00106$
      000886 0D               [12] 2547 	inc	r5
      000887 80 F0            [24] 2548 	sjmp	00106$
      000889                       2549 00108$:
      000889 22               [24] 2550 	ret
                                   2551 ;------------------------------------------------------------
                                   2552 ;Allocation info for local variables in function 'delay_s'
                                   2553 ;------------------------------------------------------------
                                   2554 ;seconds                   Allocated with name '_delay_s_seconds_1_133'
                                   2555 ;count                     Allocated with name '_delay_s_count_1_134'
                                   2556 ;------------------------------------------------------------
                                   2557 ;	../sdk/src/delay/src/delay_s.c:46: void delay_s(uint16_t seconds)
                                   2558 ;	-----------------------------------------
                                   2559 ;	 function delay_s
                                   2560 ;	-----------------------------------------
      00088A                       2561 _delay_s:
      00088A AF 83            [24] 2562 	mov	r7,dph
      00088C E5 82            [12] 2563 	mov	a,dpl
      00088E 90 00 40         [24] 2564 	mov	dptr,#_delay_s_seconds_1_133
      000891 F0               [24] 2565 	movx	@dptr,a
      000892 EF               [12] 2566 	mov	a,r7
      000893 A3               [24] 2567 	inc	dptr
      000894 F0               [24] 2568 	movx	@dptr,a
                                   2569 ;	../sdk/src/delay/src/delay_s.c:51: for(count = 0; count < seconds; count++)
      000895 90 00 40         [24] 2570 	mov	dptr,#_delay_s_seconds_1_133
      000898 E0               [24] 2571 	movx	a,@dptr
      000899 FE               [12] 2572 	mov	r6,a
      00089A A3               [24] 2573 	inc	dptr
      00089B E0               [24] 2574 	movx	a,@dptr
      00089C FF               [12] 2575 	mov	r7,a
      00089D 7C 00            [12] 2576 	mov	r4,#0x00
      00089F 7D 00            [12] 2577 	mov	r5,#0x00
      0008A1                       2578 00103$:
      0008A1 C3               [12] 2579 	clr	c
      0008A2 EC               [12] 2580 	mov	a,r4
      0008A3 9E               [12] 2581 	subb	a,r6
      0008A4 ED               [12] 2582 	mov	a,r5
      0008A5 9F               [12] 2583 	subb	a,r7
      0008A6 50 1D            [24] 2584 	jnc	00105$
                                   2585 ;	../sdk/src/delay/src/delay_s.c:53: delay_ms(1000);
      0008A8 90 03 E8         [24] 2586 	mov	dptr,#0x03e8
      0008AB C0 07            [24] 2587 	push	ar7
      0008AD C0 06            [24] 2588 	push	ar6
      0008AF C0 05            [24] 2589 	push	ar5
      0008B1 C0 04            [24] 2590 	push	ar4
      0008B3 12 08 C6         [24] 2591 	lcall	_delay_ms
      0008B6 D0 04            [24] 2592 	pop	ar4
      0008B8 D0 05            [24] 2593 	pop	ar5
      0008BA D0 06            [24] 2594 	pop	ar6
      0008BC D0 07            [24] 2595 	pop	ar7
                                   2596 ;	../sdk/src/delay/src/delay_s.c:51: for(count = 0; count < seconds; count++)
      0008BE 0C               [12] 2597 	inc	r4
      0008BF BC 00 DF         [24] 2598 	cjne	r4,#0x00,00103$
      0008C2 0D               [12] 2599 	inc	r5
      0008C3 80 DC            [24] 2600 	sjmp	00103$
      0008C5                       2601 00105$:
      0008C5 22               [24] 2602 	ret
                                   2603 ;------------------------------------------------------------
                                   2604 ;Allocation info for local variables in function 'delay_ms'
                                   2605 ;------------------------------------------------------------
                                   2606 ;milliseconds              Allocated with name '_delay_ms_milliseconds_1_137'
                                   2607 ;count                     Allocated with name '_delay_ms_count_1_138'
                                   2608 ;------------------------------------------------------------
                                   2609 ;	../sdk/src/delay/src/delay_ms.c:46: void delay_ms(uint16_t milliseconds)
                                   2610 ;	-----------------------------------------
                                   2611 ;	 function delay_ms
                                   2612 ;	-----------------------------------------
      0008C6                       2613 _delay_ms:
      0008C6 AF 83            [24] 2614 	mov	r7,dph
      0008C8 E5 82            [12] 2615 	mov	a,dpl
      0008CA 90 00 42         [24] 2616 	mov	dptr,#_delay_ms_milliseconds_1_137
      0008CD F0               [24] 2617 	movx	@dptr,a
      0008CE EF               [12] 2618 	mov	a,r7
      0008CF A3               [24] 2619 	inc	dptr
      0008D0 F0               [24] 2620 	movx	@dptr,a
                                   2621 ;	../sdk/src/delay/src/delay_ms.c:51: for(count = 0; count < milliseconds; count++)
      0008D1 90 00 42         [24] 2622 	mov	dptr,#_delay_ms_milliseconds_1_137
      0008D4 E0               [24] 2623 	movx	a,@dptr
      0008D5 FE               [12] 2624 	mov	r6,a
      0008D6 A3               [24] 2625 	inc	dptr
      0008D7 E0               [24] 2626 	movx	a,@dptr
      0008D8 FF               [12] 2627 	mov	r7,a
      0008D9 7C 00            [12] 2628 	mov	r4,#0x00
      0008DB 7D 00            [12] 2629 	mov	r5,#0x00
      0008DD                       2630 00103$:
      0008DD C3               [12] 2631 	clr	c
      0008DE EC               [12] 2632 	mov	a,r4
      0008DF 9E               [12] 2633 	subb	a,r6
      0008E0 ED               [12] 2634 	mov	a,r5
      0008E1 9F               [12] 2635 	subb	a,r7
      0008E2 50 1D            [24] 2636 	jnc	00105$
                                   2637 ;	../sdk/src/delay/src/delay_ms.c:53: delay_us(1000);
      0008E4 90 03 E8         [24] 2638 	mov	dptr,#0x03e8
      0008E7 C0 07            [24] 2639 	push	ar7
      0008E9 C0 06            [24] 2640 	push	ar6
      0008EB C0 05            [24] 2641 	push	ar5
      0008ED C0 04            [24] 2642 	push	ar4
      0008EF 12 08 40         [24] 2643 	lcall	_delay_us
      0008F2 D0 04            [24] 2644 	pop	ar4
      0008F4 D0 05            [24] 2645 	pop	ar5
      0008F6 D0 06            [24] 2646 	pop	ar6
      0008F8 D0 07            [24] 2647 	pop	ar7
                                   2648 ;	../sdk/src/delay/src/delay_ms.c:51: for(count = 0; count < milliseconds; count++)
      0008FA 0C               [12] 2649 	inc	r4
      0008FB BC 00 DF         [24] 2650 	cjne	r4,#0x00,00103$
      0008FE 0D               [12] 2651 	inc	r5
      0008FF 80 DC            [24] 2652 	sjmp	00103$
      000901                       2653 00105$:
      000901 22               [24] 2654 	ret
                                   2655 ;------------------------------------------------------------
                                   2656 ;Allocation info for local variables in function 'pwm_configure'
                                   2657 ;------------------------------------------------------------
                                   2658 ;pwm_config_options        Allocated with name '_pwm_configure_pwm_config_options_1_143'
                                   2659 ;------------------------------------------------------------
                                   2660 ;	../sdk/src/pwm/src/pwm_configure.c:52: void pwm_configure(uint8_t pwm_config_options)
                                   2661 ;	-----------------------------------------
                                   2662 ;	 function pwm_configure
                                   2663 ;	-----------------------------------------
      000902                       2664 _pwm_configure:
      000902 E5 82            [12] 2665 	mov	a,dpl
      000904 90 00 44         [24] 2666 	mov	dptr,#_pwm_configure_pwm_config_options_1_143
      000907 F0               [24] 2667 	movx	@dptr,a
                                   2668 ;	../sdk/src/pwm/src/pwm_configure.c:55: PWMCON = (PWMCON & ~PWM_CONFIG_OPTION_PWMCON_MASK) | (pwm_config_options & PWM_CONFIG_OPTION_PWMCON_MASK);
      000908 74 03            [12] 2669 	mov	a,#0x03
      00090A 55 B2            [12] 2670 	anl	a,_PWMCON
      00090C FF               [12] 2671 	mov	r7,a
      00090D E0               [24] 2672 	movx	a,@dptr
      00090E FE               [12] 2673 	mov	r6,a
      00090F 74 FC            [12] 2674 	mov	a,#0xfc
      000911 5E               [12] 2675 	anl	a,r6
      000912 4F               [12] 2676 	orl	a,r7
      000913 F5 B2            [12] 2677 	mov	_PWMCON,a
      000915 22               [24] 2678 	ret
                                   2679 ;------------------------------------------------------------
                                   2680 ;Allocation info for local variables in function 'pwm_start'
                                   2681 ;------------------------------------------------------------
                                   2682 ;pwm_duty_cycle            Allocated with name '_pwm_start_PARM_2'
                                   2683 ;pwm_channel               Allocated with name '_pwm_start_pwm_channel_1_145'
                                   2684 ;------------------------------------------------------------
                                   2685 ;	../sdk/src/pwm/src/pwm_start.c:47: void pwm_start(pwm_channel_t pwm_channel, uint8_t pwm_duty_cycle)
                                   2686 ;	-----------------------------------------
                                   2687 ;	 function pwm_start
                                   2688 ;	-----------------------------------------
      000916                       2689 _pwm_start:
      000916 E5 82            [12] 2690 	mov	a,dpl
      000918 90 00 46         [24] 2691 	mov	dptr,#_pwm_start_pwm_channel_1_145
      00091B F0               [24] 2692 	movx	@dptr,a
                                   2693 ;	../sdk/src/pwm/src/pwm_start.c:50: if(pwm_channel == PWM_CHANNEL_0)
      00091C E0               [24] 2694 	movx	a,@dptr
      00091D FF               [12] 2695 	mov	r7,a
      00091E 70 0A            [24] 2696 	jnz	00102$
                                   2697 ;	../sdk/src/pwm/src/pwm_start.c:52: PWMDC0 = pwm_duty_cycle;
      000920 90 00 45         [24] 2698 	mov	dptr,#_pwm_start_PARM_2
      000923 E0               [24] 2699 	movx	a,@dptr
      000924 F5 A1            [12] 2700 	mov	_PWMDC0,a
                                   2701 ;	../sdk/src/pwm/src/pwm_start.c:53: reg_bits_set(PWMCON, PWMCON_PWM0_ENABLE);
      000926 43 B2 01         [24] 2702 	orl	_PWMCON,#0x01
      000929 22               [24] 2703 	ret
      00092A                       2704 00102$:
                                   2705 ;	../sdk/src/pwm/src/pwm_start.c:57: PWMDC1 = pwm_duty_cycle;
      00092A 90 00 45         [24] 2706 	mov	dptr,#_pwm_start_PARM_2
      00092D E0               [24] 2707 	movx	a,@dptr
      00092E F5 A2            [12] 2708 	mov	_PWMDC1,a
                                   2709 ;	../sdk/src/pwm/src/pwm_start.c:58: reg_bits_set(PWMCON, PWMCON_PWM1_ENABLE);
      000930 43 B2 02         [24] 2710 	orl	_PWMCON,#0x02
      000933 22               [24] 2711 	ret
                                   2712 ;------------------------------------------------------------
                                   2713 ;Allocation info for local variables in function 'pwr_clk_mgmt_clklf_configure'
                                   2714 ;------------------------------------------------------------
                                   2715 ;clklf_config_options      Allocated with name '_pwr_clk_mgmt_clklf_configure_clklf_config_options_1_154'
                                   2716 ;------------------------------------------------------------
                                   2717 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_clklf_configure.c:52: void pwr_clk_mgmt_clklf_configure(uint8_t clklf_config_options)
                                   2718 ;	-----------------------------------------
                                   2719 ;	 function pwr_clk_mgmt_clklf_configure
                                   2720 ;	-----------------------------------------
      000934                       2721 _pwr_clk_mgmt_clklf_configure:
      000934 E5 82            [12] 2722 	mov	a,dpl
      000936 90 00 47         [24] 2723 	mov	dptr,#_pwr_clk_mgmt_clklf_configure_clklf_config_options_1_154
      000939 F0               [24] 2724 	movx	@dptr,a
                                   2725 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_clklf_configure.c:55: CLKLFCTRL = (CLKLFCTRL & ~PWR_CLK_MGMT_CLKLF_CONFIG_OPTION_CLKLFCTRL_MASK) | (clklf_config_options & PWR_CLK_MGMT_CLKLF_CONFIG_OPTION_CLKLFCTRL_MASK);
      00093A 74 F8            [12] 2726 	mov	a,#0xf8
      00093C 55 AD            [12] 2727 	anl	a,_CLKLFCTRL
      00093E FF               [12] 2728 	mov	r7,a
      00093F E0               [24] 2729 	movx	a,@dptr
      000940 FE               [12] 2730 	mov	r6,a
      000941 74 07            [12] 2731 	mov	a,#0x07
      000943 5E               [12] 2732 	anl	a,r6
      000944 4F               [12] 2733 	orl	a,r7
      000945 F5 AD            [12] 2734 	mov	_CLKLFCTRL,a
      000947 22               [24] 2735 	ret
                                   2736 ;------------------------------------------------------------
                                   2737 ;Allocation info for local variables in function 'pwr_clk_mgmt_get_cclk_freq_in_hz'
                                   2738 ;------------------------------------------------------------
                                   2739 ;divider                   Allocated with name '_pwr_clk_mgmt_get_cclk_freq_in_hz_divider_1_156'
                                   2740 ;i                         Allocated with name '_pwr_clk_mgmt_get_cclk_freq_in_hz_i_1_156'
                                   2741 ;cclk_freq_hz              Allocated with name '_pwr_clk_mgmt_get_cclk_freq_in_hz_cclk_freq_hz_1_156'
                                   2742 ;------------------------------------------------------------
                                   2743 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:46: uint32_t pwr_clk_mgmt_get_cclk_freq_in_hz()
                                   2744 ;	-----------------------------------------
                                   2745 ;	 function pwr_clk_mgmt_get_cclk_freq_in_hz
                                   2746 ;	-----------------------------------------
      000948                       2747 _pwr_clk_mgmt_get_cclk_freq_in_hz:
                                   2748 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:48: uint8_t divider = (CLKCTRL & CLKCTRL_CLK_FREQ_MASK) >> CLKCTRL_CLK_FREQ_SHIFT;
      000948 74 07            [12] 2749 	mov	a,#0x07
      00094A 55 A3            [12] 2750 	anl	a,_CLKCTRL
      00094C FF               [12] 2751 	mov	r7,a
                                   2752 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:50: uint32_t cclk_freq_hz = CCLK_MAX_FREQ_HZ;
      00094D 90 00 48         [24] 2753 	mov	dptr,#_pwr_clk_mgmt_get_cclk_freq_in_hz_cclk_freq_hz_1_156
      000950 E4               [12] 2754 	clr	a
      000951 F0               [24] 2755 	movx	@dptr,a
      000952 74 24            [12] 2756 	mov	a,#0x24
      000954 A3               [24] 2757 	inc	dptr
      000955 F0               [24] 2758 	movx	@dptr,a
      000956 74 F4            [12] 2759 	mov	a,#0xf4
      000958 A3               [24] 2760 	inc	dptr
      000959 F0               [24] 2761 	movx	@dptr,a
      00095A E4               [12] 2762 	clr	a
      00095B A3               [24] 2763 	inc	dptr
      00095C F0               [24] 2764 	movx	@dptr,a
                                   2765 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:52: for(i = 0; i < divider; i++)
      00095D 7E 00            [12] 2766 	mov	r6,#0x00
      00095F                       2767 00103$:
      00095F C3               [12] 2768 	clr	c
      000960 EE               [12] 2769 	mov	a,r6
      000961 9F               [12] 2770 	subb	a,r7
      000962 50 29            [24] 2771 	jnc	00101$
                                   2772 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:54: cclk_freq_hz /= 2;
      000964 90 00 48         [24] 2773 	mov	dptr,#_pwr_clk_mgmt_get_cclk_freq_in_hz_cclk_freq_hz_1_156
      000967 E0               [24] 2774 	movx	a,@dptr
      000968 FA               [12] 2775 	mov	r2,a
      000969 A3               [24] 2776 	inc	dptr
      00096A E0               [24] 2777 	movx	a,@dptr
      00096B FB               [12] 2778 	mov	r3,a
      00096C A3               [24] 2779 	inc	dptr
      00096D E0               [24] 2780 	movx	a,@dptr
      00096E FC               [12] 2781 	mov	r4,a
      00096F A3               [24] 2782 	inc	dptr
      000970 E0               [24] 2783 	movx	a,@dptr
      000971 C3               [12] 2784 	clr	c
      000972 13               [12] 2785 	rrc	a
      000973 FD               [12] 2786 	mov	r5,a
      000974 EC               [12] 2787 	mov	a,r4
      000975 13               [12] 2788 	rrc	a
      000976 FC               [12] 2789 	mov	r4,a
      000977 EB               [12] 2790 	mov	a,r3
      000978 13               [12] 2791 	rrc	a
      000979 FB               [12] 2792 	mov	r3,a
      00097A EA               [12] 2793 	mov	a,r2
      00097B 13               [12] 2794 	rrc	a
      00097C FA               [12] 2795 	mov	r2,a
      00097D 90 00 48         [24] 2796 	mov	dptr,#_pwr_clk_mgmt_get_cclk_freq_in_hz_cclk_freq_hz_1_156
      000980 F0               [24] 2797 	movx	@dptr,a
      000981 EB               [12] 2798 	mov	a,r3
      000982 A3               [24] 2799 	inc	dptr
      000983 F0               [24] 2800 	movx	@dptr,a
      000984 EC               [12] 2801 	mov	a,r4
      000985 A3               [24] 2802 	inc	dptr
      000986 F0               [24] 2803 	movx	@dptr,a
      000987 ED               [12] 2804 	mov	a,r5
      000988 A3               [24] 2805 	inc	dptr
      000989 F0               [24] 2806 	movx	@dptr,a
                                   2807 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:52: for(i = 0; i < divider; i++)
      00098A 0E               [12] 2808 	inc	r6
      00098B 80 D2            [24] 2809 	sjmp	00103$
      00098D                       2810 00101$:
                                   2811 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_get_cclk_freq_in_hz.c:57: return cclk_freq_hz;
      00098D 90 00 48         [24] 2812 	mov	dptr,#_pwr_clk_mgmt_get_cclk_freq_in_hz_cclk_freq_hz_1_156
      000990 E0               [24] 2813 	movx	a,@dptr
      000991 FC               [12] 2814 	mov	r4,a
      000992 A3               [24] 2815 	inc	dptr
      000993 E0               [24] 2816 	movx	a,@dptr
      000994 FD               [12] 2817 	mov	r5,a
      000995 A3               [24] 2818 	inc	dptr
      000996 E0               [24] 2819 	movx	a,@dptr
      000997 FE               [12] 2820 	mov	r6,a
      000998 A3               [24] 2821 	inc	dptr
      000999 E0               [24] 2822 	movx	a,@dptr
      00099A 8C 82            [24] 2823 	mov	dpl,r4
      00099C 8D 83            [24] 2824 	mov	dph,r5
      00099E 8E F0            [24] 2825 	mov	b,r6
      0009A0 22               [24] 2826 	ret
                                   2827 ;------------------------------------------------------------
                                   2828 ;Allocation info for local variables in function 'pwr_clk_mgmt_wakeup_configure'
                                   2829 ;------------------------------------------------------------
                                   2830 ;wakeup_on_pin_config_options Allocated with name '_pwr_clk_mgmt_wakeup_configure_PARM_2'
                                   2831 ;wakeup_sources_config_options Allocated with name '_pwr_clk_mgmt_wakeup_configure_wakeup_sources_config_options_1_159'
                                   2832 ;------------------------------------------------------------
                                   2833 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_wakeup_configure.c:47: void pwr_clk_mgmt_wakeup_configure(unsigned char wakeup_sources_config_options, unsigned int wakeup_on_pin_config_options)
                                   2834 ;	-----------------------------------------
                                   2835 ;	 function pwr_clk_mgmt_wakeup_configure
                                   2836 ;	-----------------------------------------
      0009A1                       2837 _pwr_clk_mgmt_wakeup_configure:
      0009A1 E5 82            [12] 2838 	mov	a,dpl
      0009A3 90 00 4E         [24] 2839 	mov	dptr,#_pwr_clk_mgmt_wakeup_configure_wakeup_sources_config_options_1_159
      0009A6 F0               [24] 2840 	movx	@dptr,a
                                   2841 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_wakeup_configure.c:50: WUCON = wakeup_sources_config_options;
      0009A7 E0               [24] 2842 	movx	a,@dptr
      0009A8 F5 A5            [12] 2843 	mov	_WUCON,a
                                   2844 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_wakeup_configure.c:53: WUOPC0 = wakeup_on_pin_config_options & 0xFF;
      0009AA 90 00 4C         [24] 2845 	mov	dptr,#_pwr_clk_mgmt_wakeup_configure_PARM_2
      0009AD E0               [24] 2846 	movx	a,@dptr
      0009AE FE               [12] 2847 	mov	r6,a
      0009AF A3               [24] 2848 	inc	dptr
      0009B0 E0               [24] 2849 	movx	a,@dptr
      0009B1 FF               [12] 2850 	mov	r7,a
      0009B2 8E CF            [24] 2851 	mov	_WUOPC0,r6
                                   2852 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_wakeup_configure.c:54: WUOPC1 = (wakeup_on_pin_config_options >> 8) & 0xFF;
      0009B4 8F CE            [24] 2853 	mov	_WUOPC1,r7
      0009B6 22               [24] 2854 	ret
                                   2855 ;------------------------------------------------------------
                                   2856 ;Allocation info for local variables in function 'pwr_clk_mgmt_pwr_failure_configure'
                                   2857 ;------------------------------------------------------------
                                   2858 ;pwr_failure_config_options Allocated with name '_pwr_clk_mgmt_pwr_failure_configure_pwr_failure_config_options_1_161'
                                   2859 ;------------------------------------------------------------
                                   2860 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_pwr_failure_configure.c:52: void pwr_clk_mgmt_pwr_failure_configure(uint8_t pwr_failure_config_options)
                                   2861 ;	-----------------------------------------
                                   2862 ;	 function pwr_clk_mgmt_pwr_failure_configure
                                   2863 ;	-----------------------------------------
      0009B7                       2864 _pwr_clk_mgmt_pwr_failure_configure:
      0009B7 E5 82            [12] 2865 	mov	a,dpl
      0009B9 90 00 4F         [24] 2866 	mov	dptr,#_pwr_clk_mgmt_pwr_failure_configure_pwr_failure_config_options_1_161
      0009BC F0               [24] 2867 	movx	@dptr,a
                                   2868 ;	../sdk/src/pwr_clk_mgmt/src/pwr_clk_mgmt_pwr_failure_configure.c:55: POFCON = (POFCON & ~PWR_CLK_MGMT_CLKLF_CONFIG_OPTION_POFCON_MASK) | (pwr_failure_config_options & PWR_CLK_MGMT_CLKLF_CONFIG_OPTION_POFCON_MASK);
      0009BD 74 0F            [12] 2869 	mov	a,#0x0f
      0009BF 55 DC            [12] 2870 	anl	a,_POFCON
      0009C1 FF               [12] 2871 	mov	r7,a
      0009C2 E0               [24] 2872 	movx	a,@dptr
      0009C3 FE               [12] 2873 	mov	r6,a
      0009C4 74 F0            [12] 2874 	mov	a,#0xf0
      0009C6 5E               [12] 2875 	anl	a,r6
      0009C7 4F               [12] 2876 	orl	a,r7
      0009C8 F5 DC            [12] 2877 	mov	_POFCON,a
      0009CA 22               [24] 2878 	ret
                                   2879 ;------------------------------------------------------------
                                   2880 ;Allocation info for local variables in function 'watchdog_set_wdsv_count'
                                   2881 ;------------------------------------------------------------
                                   2882 ;wdsv_value                Allocated with name '_watchdog_set_wdsv_count_wdsv_value_1_164'
                                   2883 ;------------------------------------------------------------
                                   2884 ;	../sdk/src/watchdog/src/watchdog_set_wdsv_count.c:46: void watchdog_set_wdsv_count(uint16_t wdsv_value)
                                   2885 ;	-----------------------------------------
                                   2886 ;	 function watchdog_set_wdsv_count
                                   2887 ;	-----------------------------------------
      0009CB                       2888 _watchdog_set_wdsv_count:
      0009CB AF 83            [24] 2889 	mov	r7,dph
      0009CD E5 82            [12] 2890 	mov	a,dpl
      0009CF 90 00 50         [24] 2891 	mov	dptr,#_watchdog_set_wdsv_count_wdsv_value_1_164
      0009D2 F0               [24] 2892 	movx	@dptr,a
      0009D3 EF               [12] 2893 	mov	a,r7
      0009D4 A3               [24] 2894 	inc	dptr
      0009D5 F0               [24] 2895 	movx	@dptr,a
                                   2896 ;	../sdk/src/watchdog/src/watchdog_set_wdsv_count.c:49: WDSV = (uint8_t)wdsv_value;
      0009D6 90 00 50         [24] 2897 	mov	dptr,#_watchdog_set_wdsv_count_wdsv_value_1_164
      0009D9 E0               [24] 2898 	movx	a,@dptr
      0009DA FE               [12] 2899 	mov	r6,a
      0009DB A3               [24] 2900 	inc	dptr
      0009DC E0               [24] 2901 	movx	a,@dptr
      0009DD FF               [12] 2902 	mov	r7,a
      0009DE 8E AF            [24] 2903 	mov	_WDSV,r6
                                   2904 ;	../sdk/src/watchdog/src/watchdog_set_wdsv_count.c:50: WDSV = (uint8_t)(wdsv_value >> 8);
      0009E0 8F AF            [24] 2905 	mov	_WDSV,r7
      0009E2 22               [24] 2906 	ret
                                   2907 ;------------------------------------------------------------
                                   2908 ;Allocation info for local variables in function 'watchdog_start_and_set_timeout_in_ms'
                                   2909 ;------------------------------------------------------------
                                   2910 ;milliseconds              Allocated with name '_watchdog_start_and_set_timeout_in_ms_milliseconds_1_166'
                                   2911 ;wd_value                  Allocated with name '_watchdog_start_and_set_timeout_in_ms_wd_value_1_167'
                                   2912 ;------------------------------------------------------------
                                   2913 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:50: uint16_t watchdog_start_and_set_timeout_in_ms(uint32_t milliseconds)
                                   2914 ;	-----------------------------------------
                                   2915 ;	 function watchdog_start_and_set_timeout_in_ms
                                   2916 ;	-----------------------------------------
      0009E3                       2917 _watchdog_start_and_set_timeout_in_ms:
      0009E3 AF 82            [24] 2918 	mov	r7,dpl
      0009E5 AE 83            [24] 2919 	mov	r6,dph
      0009E7 AD F0            [24] 2920 	mov	r5,b
      0009E9 FC               [12] 2921 	mov	r4,a
      0009EA 90 00 52         [24] 2922 	mov	dptr,#_watchdog_start_and_set_timeout_in_ms_milliseconds_1_166
      0009ED EF               [12] 2923 	mov	a,r7
      0009EE F0               [24] 2924 	movx	@dptr,a
      0009EF EE               [12] 2925 	mov	a,r6
      0009F0 A3               [24] 2926 	inc	dptr
      0009F1 F0               [24] 2927 	movx	@dptr,a
      0009F2 ED               [12] 2928 	mov	a,r5
      0009F3 A3               [24] 2929 	inc	dptr
      0009F4 F0               [24] 2930 	movx	@dptr,a
      0009F5 EC               [12] 2931 	mov	a,r4
      0009F6 A3               [24] 2932 	inc	dptr
      0009F7 F0               [24] 2933 	movx	@dptr,a
                                   2934 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:52: uint16_t wd_value = 0;
      0009F8 90 00 56         [24] 2935 	mov	dptr,#_watchdog_start_and_set_timeout_in_ms_wd_value_1_167
      0009FB E4               [12] 2936 	clr	a
      0009FC F0               [24] 2937 	movx	@dptr,a
      0009FD A3               [24] 2938 	inc	dptr
      0009FE F0               [24] 2939 	movx	@dptr,a
                                   2940 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:55: if(!pwr_clk_mgmt_is_clklf_enabled())
      0009FF 74 07            [12] 2941 	mov	a,#0x07
      000A01 55 AD            [12] 2942 	anl	a,_CLKLFCTRL
      000A03 FF               [12] 2943 	mov	r7,a
      000A04 BF 07 0B         [24] 2944 	cjne	r7,#0x07,00105$
                                   2945 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:58: pwr_clk_mgmt_clklf_configure(PWR_CLK_MGMT_CLKLF_CONFIG_OPTION_CLK_SRC_XOSC16M);
      000A07 75 82 02         [24] 2946 	mov	dpl,#0x02
      000A0A 12 09 34         [24] 2947 	lcall	_pwr_clk_mgmt_clklf_configure
                                   2948 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:59: pwr_clk_mgmt_wait_until_clklf_is_ready();
      000A0D                       2949 00101$:
      000A0D E5 AD            [12] 2950 	mov	a,_CLKLFCTRL
      000A0F 30 E6 FB         [24] 2951 	jnb	acc.6,00101$
      000A12                       2952 00105$:
                                   2953 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:63: if(milliseconds < 511992)
      000A12 90 00 52         [24] 2954 	mov	dptr,#_watchdog_start_and_set_timeout_in_ms_milliseconds_1_166
      000A15 E0               [24] 2955 	movx	a,@dptr
      000A16 FC               [12] 2956 	mov	r4,a
      000A17 A3               [24] 2957 	inc	dptr
      000A18 E0               [24] 2958 	movx	a,@dptr
      000A19 FD               [12] 2959 	mov	r5,a
      000A1A A3               [24] 2960 	inc	dptr
      000A1B E0               [24] 2961 	movx	a,@dptr
      000A1C FE               [12] 2962 	mov	r6,a
      000A1D A3               [24] 2963 	inc	dptr
      000A1E E0               [24] 2964 	movx	a,@dptr
      000A1F FF               [12] 2965 	mov	r7,a
      000A20 C3               [12] 2966 	clr	c
      000A21 EC               [12] 2967 	mov	a,r4
      000A22 94 F8            [12] 2968 	subb	a,#0xf8
      000A24 ED               [12] 2969 	mov	a,r5
      000A25 94 CF            [12] 2970 	subb	a,#0xcf
      000A27 EE               [12] 2971 	mov	a,r6
      000A28 94 07            [12] 2972 	subb	a,#0x07
      000A2A EF               [12] 2973 	mov	a,r7
      000A2B 94 00            [12] 2974 	subb	a,#0x00
      000A2D 50 51            [24] 2975 	jnc	00107$
                                   2976 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:90: wd_value = (uint16_t)(((uint32_t)(milliseconds * ((uint32_t)128)) + (uint32_t)500) / ((uint32_t)1000));
      000A2F EF               [12] 2977 	mov	a,r7
      000A30 54 01            [12] 2978 	anl	a,#0x01
      000A32 A2 E0            [12] 2979 	mov	c,acc.0
      000A34 CE               [12] 2980 	xch	a,r6
      000A35 13               [12] 2981 	rrc	a
      000A36 CE               [12] 2982 	xch	a,r6
      000A37 13               [12] 2983 	rrc	a
      000A38 CE               [12] 2984 	xch	a,r6
      000A39 FF               [12] 2985 	mov	r7,a
      000A3A ED               [12] 2986 	mov	a,r5
      000A3B C3               [12] 2987 	clr	c
      000A3C 13               [12] 2988 	rrc	a
      000A3D 4E               [12] 2989 	orl	a,r6
      000A3E FE               [12] 2990 	mov	r6,a
      000A3F ED               [12] 2991 	mov	a,r5
      000A40 54 01            [12] 2992 	anl	a,#0x01
      000A42 A2 E0            [12] 2993 	mov	c,acc.0
      000A44 CC               [12] 2994 	xch	a,r4
      000A45 13               [12] 2995 	rrc	a
      000A46 CC               [12] 2996 	xch	a,r4
      000A47 13               [12] 2997 	rrc	a
      000A48 CC               [12] 2998 	xch	a,r4
      000A49 FD               [12] 2999 	mov	r5,a
      000A4A 74 F4            [12] 3000 	mov	a,#0xf4
      000A4C 2C               [12] 3001 	add	a,r4
      000A4D FC               [12] 3002 	mov	r4,a
      000A4E 74 01            [12] 3003 	mov	a,#0x01
      000A50 3D               [12] 3004 	addc	a,r5
      000A51 FD               [12] 3005 	mov	r5,a
      000A52 E4               [12] 3006 	clr	a
      000A53 3E               [12] 3007 	addc	a,r6
      000A54 FE               [12] 3008 	mov	r6,a
      000A55 E4               [12] 3009 	clr	a
      000A56 3F               [12] 3010 	addc	a,r7
      000A57 FF               [12] 3011 	mov	r7,a
      000A58 90 00 9C         [24] 3012 	mov	dptr,#__divulong_PARM_2
      000A5B 74 E8            [12] 3013 	mov	a,#0xe8
      000A5D F0               [24] 3014 	movx	@dptr,a
      000A5E 74 03            [12] 3015 	mov	a,#0x03
      000A60 A3               [24] 3016 	inc	dptr
      000A61 F0               [24] 3017 	movx	@dptr,a
      000A62 E4               [12] 3018 	clr	a
      000A63 A3               [24] 3019 	inc	dptr
      000A64 F0               [24] 3020 	movx	@dptr,a
      000A65 A3               [24] 3021 	inc	dptr
      000A66 F0               [24] 3022 	movx	@dptr,a
      000A67 8C 82            [24] 3023 	mov	dpl,r4
      000A69 8D 83            [24] 3024 	mov	dph,r5
      000A6B 8E F0            [24] 3025 	mov	b,r6
      000A6D EF               [12] 3026 	mov	a,r7
      000A6E 12 14 4D         [24] 3027 	lcall	__divulong
      000A71 AC 82            [24] 3028 	mov	r4,dpl
      000A73 AD 83            [24] 3029 	mov	r5,dph
      000A75 AE F0            [24] 3030 	mov	r6,b
      000A77 FF               [12] 3031 	mov	r7,a
      000A78 90 00 56         [24] 3032 	mov	dptr,#_watchdog_start_and_set_timeout_in_ms_wd_value_1_167
      000A7B EC               [12] 3033 	mov	a,r4
      000A7C F0               [24] 3034 	movx	@dptr,a
      000A7D ED               [12] 3035 	mov	a,r5
      000A7E A3               [24] 3036 	inc	dptr
      000A7F F0               [24] 3037 	movx	@dptr,a
      000A80                       3038 00107$:
                                   3039 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:93: watchdog_set_wdsv_count(wd_value);
      000A80 90 00 56         [24] 3040 	mov	dptr,#_watchdog_start_and_set_timeout_in_ms_wd_value_1_167
      000A83 E0               [24] 3041 	movx	a,@dptr
      000A84 FE               [12] 3042 	mov	r6,a
      000A85 A3               [24] 3043 	inc	dptr
      000A86 E0               [24] 3044 	movx	a,@dptr
      000A87 FF               [12] 3045 	mov	r7,a
      000A88 8E 82            [24] 3046 	mov	dpl,r6
      000A8A 8F 83            [24] 3047 	mov	dph,r7
      000A8C C0 07            [24] 3048 	push	ar7
      000A8E C0 06            [24] 3049 	push	ar6
      000A90 12 09 CB         [24] 3050 	lcall	_watchdog_set_wdsv_count
      000A93 D0 06            [24] 3051 	pop	ar6
      000A95 D0 07            [24] 3052 	pop	ar7
                                   3053 ;	../sdk/src/watchdog/src/watchdog_start_and_set_timeout_in_ms.c:95: return wd_value;
      000A97 8E 82            [24] 3054 	mov	dpl,r6
      000A99 8F 83            [24] 3055 	mov	dph,r7
      000A9B 22               [24] 3056 	ret
                                   3057 ;------------------------------------------------------------
                                   3058 ;Allocation info for local variables in function 'interrupt_configure_ifp'
                                   3059 ;------------------------------------------------------------
                                   3060 ;ifp_int_config_options    Allocated with name '_interrupt_configure_ifp_PARM_2'
                                   3061 ;interrupt_ifp_input       Allocated with name '_interrupt_configure_ifp_interrupt_ifp_input_1_170'
                                   3062 ;------------------------------------------------------------
                                   3063 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:57: bool interrupt_configure_ifp(interrupt_ifp_input_t interrupt_ifp_input, uint8_t ifp_int_config_options)
                                   3064 ;	-----------------------------------------
                                   3065 ;	 function interrupt_configure_ifp
                                   3066 ;	-----------------------------------------
      000A9C                       3067 _interrupt_configure_ifp:
      000A9C E5 82            [12] 3068 	mov	a,dpl
      000A9E 90 00 59         [24] 3069 	mov	dptr,#_interrupt_configure_ifp_interrupt_ifp_input_1_170
      000AA1 F0               [24] 3070 	movx	@dptr,a
                                   3071 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:60: if(ifp_int_config_options & INTERRUPT_IFP_CONFIG_OPTION_ENABLE)
      000AA2 90 00 58         [24] 3072 	mov	dptr,#_interrupt_configure_ifp_PARM_2
      000AA5 E0               [24] 3073 	movx	a,@dptr
      000AA6 FF               [12] 3074 	mov	r7,a
      000AA7 30 E7 3D         [24] 3075 	jnb	acc.7,00116$
                                   3076 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:63: if(interrupt_ifp_input == INTERRUPT_IFP_INPUT_GPINT0)
      000AAA 90 00 59         [24] 3077 	mov	dptr,#_interrupt_configure_ifp_interrupt_ifp_input_1_170
      000AAD E0               [24] 3078 	movx	a,@dptr
      000AAE FE               [12] 3079 	mov	r6,a
      000AAF BE 08 0A         [24] 3080 	cjne	r6,#0x08,00108$
                                   3081 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:65: INTEXP = (INTEXP & ~INTERRUPT_IFP_CONFIG_INTEXP_GPINTX_MASK) | INTERRUPT_IFP_INPUT_GPINT0;
      000AB2 74 C7            [12] 3082 	mov	a,#0xc7
      000AB4 55 A6            [12] 3083 	anl	a,_INTEXP
      000AB6 44 08            [12] 3084 	orl	a,#0x08
      000AB8 F5 A6            [12] 3085 	mov	_INTEXP,a
      000ABA 80 1E            [24] 3086 	sjmp	00109$
      000ABC                       3087 00108$:
                                   3088 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:67: else if(interrupt_ifp_input == INTERRUPT_IFP_INPUT_GPINT1)
      000ABC BE 10 0A         [24] 3089 	cjne	r6,#0x10,00105$
                                   3090 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:69: INTEXP = (INTEXP & ~INTERRUPT_IFP_CONFIG_INTEXP_GPINTX_MASK) | INTERRUPT_IFP_INPUT_GPINT1;
      000ABF 74 C7            [12] 3091 	mov	a,#0xc7
      000AC1 55 A6            [12] 3092 	anl	a,_INTEXP
      000AC3 44 10            [12] 3093 	orl	a,#0x10
      000AC5 F5 A6            [12] 3094 	mov	_INTEXP,a
      000AC7 80 11            [24] 3095 	sjmp	00109$
      000AC9                       3096 00105$:
                                   3097 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:71: else if(interrupt_ifp_input == INTERRUPT_IFP_INPUT_GPINT2)
      000AC9 BE 20 0A         [24] 3098 	cjne	r6,#0x20,00102$
                                   3099 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:73: INTEXP = (INTEXP & ~INTERRUPT_IFP_CONFIG_INTEXP_GPINTX_MASK) | INTERRUPT_IFP_INPUT_GPINT2;
      000ACC 74 C7            [12] 3100 	mov	a,#0xc7
      000ACE 55 A6            [12] 3101 	anl	a,_INTEXP
      000AD0 44 20            [12] 3102 	orl	a,#0x20
      000AD2 F5 A6            [12] 3103 	mov	_INTEXP,a
      000AD4 80 04            [24] 3104 	sjmp	00109$
      000AD6                       3105 00102$:
                                   3106 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:78: return false;
      000AD6 75 82 00         [24] 3107 	mov	dpl,#0x00
      000AD9 22               [24] 3108 	ret
      000ADA                       3109 00109$:
                                   3110 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:82: TCON = (TCON & ~INTERRUPT_IFP_CONFIG_TCON_MASK) | (ifp_int_config_options & INTERRUPT_IFP_CONFIG_TCON_MASK);
      000ADA 74 FE            [12] 3111 	mov	a,#0xfe
      000ADC 55 88            [12] 3112 	anl	a,_TCON
      000ADE FE               [12] 3113 	mov	r6,a
      000ADF 74 01            [12] 3114 	mov	a,#0x01
      000AE1 5F               [12] 3115 	anl	a,r7
      000AE2 4E               [12] 3116 	orl	a,r6
      000AE3 F5 88            [12] 3117 	mov	_TCON,a
      000AE5 80 1B            [24] 3118 	sjmp	00117$
      000AE7                       3119 00116$:
                                   3120 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:87: if((interrupt_ifp_input == INTERRUPT_IFP_INPUT_GPINT0) || (interrupt_ifp_input == INTERRUPT_IFP_INPUT_GPINT1) || (interrupt_ifp_input == INTERRUPT_IFP_INPUT_GPINT2))
      000AE7 90 00 59         [24] 3121 	mov	dptr,#_interrupt_configure_ifp_interrupt_ifp_input_1_170
      000AEA E0               [24] 3122 	movx	a,@dptr
      000AEB FF               [12] 3123 	mov	r7,a
      000AEC BF 08 02         [24] 3124 	cjne	r7,#0x08,00145$
      000AEF 80 08            [24] 3125 	sjmp	00110$
      000AF1                       3126 00145$:
      000AF1 BF 10 02         [24] 3127 	cjne	r7,#0x10,00146$
      000AF4 80 03            [24] 3128 	sjmp	00110$
      000AF6                       3129 00146$:
      000AF6 BF 20 05         [24] 3130 	cjne	r7,#0x20,00111$
      000AF9                       3131 00110$:
                                   3132 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:89: INTEXP = (INTEXP & ~INTERRUPT_IFP_CONFIG_INTEXP_GPINTX_MASK);
      000AF9 53 A6 C7         [24] 3133 	anl	_INTEXP,#0xc7
      000AFC 80 04            [24] 3134 	sjmp	00117$
      000AFE                       3135 00111$:
                                   3136 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:94: return false;
      000AFE 75 82 00         [24] 3137 	mov	dpl,#0x00
      000B01 22               [24] 3138 	ret
      000B02                       3139 00117$:
                                   3140 ;	../sdk/src/interrupt/src/interrupt_configure_ifp.c:98: return true;
      000B02 75 82 01         [24] 3141 	mov	dpl,#0x01
      000B05 22               [24] 3142 	ret
                                   3143 ;------------------------------------------------------------
                                   3144 ;Allocation info for local variables in function 'adc_configure'
                                   3145 ;------------------------------------------------------------
                                   3146 ;adc_config_options        Allocated with name '_adc_configure_adc_config_options_1_184'
                                   3147 ;------------------------------------------------------------
                                   3148 ;	../sdk/src/adc/src/adc_configure.c:54: void adc_configure(unsigned int adc_config_options)
                                   3149 ;	-----------------------------------------
                                   3150 ;	 function adc_configure
                                   3151 ;	-----------------------------------------
      000B06                       3152 _adc_configure:
      000B06 AF 83            [24] 3153 	mov	r7,dph
      000B08 E5 82            [12] 3154 	mov	a,dpl
      000B0A 90 00 5A         [24] 3155 	mov	dptr,#_adc_configure_adc_config_options_1_184
      000B0D F0               [24] 3156 	movx	@dptr,a
      000B0E EF               [12] 3157 	mov	a,r7
      000B0F A3               [24] 3158 	inc	dptr
      000B10 F0               [24] 3159 	movx	@dptr,a
                                   3160 ;	../sdk/src/adc/src/adc_configure.c:57: ADCCON1 = (adc_config_options >> 8) & ADC_CONFIG_OPTION_ADCCON1_WRITE_MASK;
      000B11 90 00 5A         [24] 3161 	mov	dptr,#_adc_configure_adc_config_options_1_184
      000B14 E0               [24] 3162 	movx	a,@dptr
      000B15 FE               [12] 3163 	mov	r6,a
      000B16 A3               [24] 3164 	inc	dptr
      000B17 E0               [24] 3165 	movx	a,@dptr
      000B18 FD               [12] 3166 	mov	r5,a
      000B19 74 03            [12] 3167 	mov	a,#0x03
      000B1B 5D               [12] 3168 	anl	a,r5
      000B1C F5 D3            [12] 3169 	mov	_ADCCON1,a
                                   3170 ;	../sdk/src/adc/src/adc_configure.c:58: ADCCON2 = (adc_config_options)      & ADC_CONFIG_OPTION_ADCCON2_WRITE_MASK;
      000B1E 8E D2            [24] 3171 	mov	_ADCCON2,r6
                                   3172 ;	../sdk/src/adc/src/adc_configure.c:59: ADCCON3 = (adc_config_options >> 8) & ADC_CONFIG_OPTION_ADCCON3_WRITE_MASK;
      000B20 74 E0            [12] 3173 	mov	a,#0xe0
      000B22 5D               [12] 3174 	anl	a,r5
      000B23 F5 D1            [12] 3175 	mov	_ADCCON3,a
      000B25 22               [24] 3176 	ret
                                   3177 ;------------------------------------------------------------
                                   3178 ;Allocation info for local variables in function 'adc_set_input_channel'
                                   3179 ;------------------------------------------------------------
                                   3180 ;adc_channel               Allocated with name '_adc_set_input_channel_adc_channel_1_186'
                                   3181 ;------------------------------------------------------------
                                   3182 ;	../sdk/src/adc/src/adc_set_input_channel.c:46: void adc_set_input_channel(adc_channel_t adc_channel)
                                   3183 ;	-----------------------------------------
                                   3184 ;	 function adc_set_input_channel
                                   3185 ;	-----------------------------------------
      000B26                       3186 _adc_set_input_channel:
      000B26 E5 82            [12] 3187 	mov	a,dpl
      000B28 90 00 5C         [24] 3188 	mov	dptr,#_adc_set_input_channel_adc_channel_1_186
      000B2B F0               [24] 3189 	movx	@dptr,a
                                   3190 ;	../sdk/src/adc/src/adc_set_input_channel.c:49: adc_channel &= (ADCCON1_CHAN_SEL_MASK >> ADCCON1_CHAN_SEL_SHIFT);
      000B2C E0               [24] 3191 	movx	a,@dptr
      000B2D FF               [12] 3192 	mov	r7,a
      000B2E 74 0F            [12] 3193 	mov	a,#0x0f
      000B30 5F               [12] 3194 	anl	a,r7
      000B31 F0               [24] 3195 	movx	@dptr,a
                                   3196 ;	../sdk/src/adc/src/adc_set_input_channel.c:52: ADCCON1 = (ADCCON1 & ~ADCCON1_CHAN_SEL_MASK) | (adc_channel << ADCCON1_CHAN_SEL_SHIFT);
      000B32 74 C3            [12] 3197 	mov	a,#0xc3
      000B34 55 D3            [12] 3198 	anl	a,_ADCCON1
      000B36 FF               [12] 3199 	mov	r7,a
      000B37 E0               [24] 3200 	movx	a,@dptr
      000B38 25 E0            [12] 3201 	add	a,acc
      000B3A 25 E0            [12] 3202 	add	a,acc
      000B3C 4F               [12] 3203 	orl	a,r7
      000B3D F5 D3            [12] 3204 	mov	_ADCCON1,a
      000B3F 22               [24] 3205 	ret
                                   3206 ;------------------------------------------------------------
                                   3207 ;Allocation info for local variables in function 'adc_start_single_conversion'
                                   3208 ;------------------------------------------------------------
                                   3209 ;adc_channel               Allocated with name '_adc_start_single_conversion_adc_channel_1_188'
                                   3210 ;------------------------------------------------------------
                                   3211 ;	../sdk/src/adc/src/adc_start_single_conversion.c:47: void adc_start_single_conversion(adc_channel_t adc_channel)
                                   3212 ;	-----------------------------------------
                                   3213 ;	 function adc_start_single_conversion
                                   3214 ;	-----------------------------------------
      000B40                       3215 _adc_start_single_conversion:
      000B40 E5 82            [12] 3216 	mov	a,dpl
      000B42 90 00 5D         [24] 3217 	mov	dptr,#_adc_start_single_conversion_adc_channel_1_188
      000B45 F0               [24] 3218 	movx	@dptr,a
                                   3219 ;	../sdk/src/adc/src/adc_start_single_conversion.c:49: adc_set_input_channel(adc_channel);
      000B46 E0               [24] 3220 	movx	a,@dptr
      000B47 F5 82            [12] 3221 	mov	dpl,a
      000B49 12 0B 26         [24] 3222 	lcall	_adc_set_input_channel
                                   3223 ;	../sdk/src/adc/src/adc_start_single_conversion.c:52: adc_power_up();
      000B4C 43 D3 80         [24] 3224 	orl	_ADCCON1,#0x80
                                   3225 ;	../sdk/src/adc/src/adc_start_single_conversion.c:53: nop(); nop(); nop(); nop(); //4 clock cycles must elapse before busy flag is set (datasheet v1.3, p. 165)
      000B4F 00               [12] 3226 	nop	
      000B50 00               [12] 3227 	nop	
      000B51 00               [12] 3228 	nop	
      000B52 00               [12] 3229 	nop	
      000B53 22               [24] 3230 	ret
                                   3231 ;------------------------------------------------------------
                                   3232 ;Allocation info for local variables in function 'adc_start_single_conversion_get_value'
                                   3233 ;------------------------------------------------------------
                                   3234 ;adc_channel               Allocated with name '_adc_start_single_conversion_get_value_adc_channel_1_190'
                                   3235 ;------------------------------------------------------------
                                   3236 ;	../sdk/src/adc/src/adc_start_single_conversion_get_value.c:48: uint16_t adc_start_single_conversion_get_value(adc_channel_t adc_channel)
                                   3237 ;	-----------------------------------------
                                   3238 ;	 function adc_start_single_conversion_get_value
                                   3239 ;	-----------------------------------------
      000B54                       3240 _adc_start_single_conversion_get_value:
      000B54 E5 82            [12] 3241 	mov	a,dpl
      000B56 90 00 5E         [24] 3242 	mov	dptr,#_adc_start_single_conversion_get_value_adc_channel_1_190
      000B59 F0               [24] 3243 	movx	@dptr,a
                                   3244 ;	../sdk/src/adc/src/adc_start_single_conversion_get_value.c:50: adc_start_single_conversion(adc_channel);
      000B5A E0               [24] 3245 	movx	a,@dptr
      000B5B F5 82            [12] 3246 	mov	dpl,a
      000B5D 12 0B 40         [24] 3247 	lcall	_adc_start_single_conversion
                                   3248 ;	../sdk/src/adc/src/adc_start_single_conversion_get_value.c:52: while(adc_is_conversion_in_progress());
      000B60                       3249 00101$:
      000B60 74 40            [12] 3250 	mov	a,#0x40
      000B62 55 D3            [12] 3251 	anl	a,_ADCCON1
      000B64 FF               [12] 3252 	mov	r7,a
      000B65 BF 40 02         [24] 3253 	cjne	r7,#0x40,00112$
      000B68 80 F6            [24] 3254 	sjmp	00101$
      000B6A                       3255 00112$:
                                   3256 ;	../sdk/src/adc/src/adc_start_single_conversion_get_value.c:54: return adc_get_result();
      000B6A 85 D5 82         [24] 3257 	mov	dpl,((_ADCDAT >> 0) & 0xFF)
      000B6D 85 D4 83         [24] 3258 	mov	dph,((_ADCDAT >> 8) & 0xFF)
      000B70 22               [24] 3259 	ret
                                   3260 ;------------------------------------------------------------
                                   3261 ;Allocation info for local variables in function 'timer0_configure'
                                   3262 ;------------------------------------------------------------
                                   3263 ;t0_val                    Allocated with name '_timer0_configure_PARM_2'
                                   3264 ;timer0_config_options     Allocated with name '_timer0_configure_timer0_config_options_1_193'
                                   3265 ;------------------------------------------------------------
                                   3266 ;	../sdk/src/timer0/src/timer0_configure.c:53: void timer0_configure(uint8_t timer0_config_options, uint16_t t0_val)
                                   3267 ;	-----------------------------------------
                                   3268 ;	 function timer0_configure
                                   3269 ;	-----------------------------------------
      000B71                       3270 _timer0_configure:
      000B71 E5 82            [12] 3271 	mov	a,dpl
      000B73 90 00 61         [24] 3272 	mov	dptr,#_timer0_configure_timer0_config_options_1_193
      000B76 F0               [24] 3273 	movx	@dptr,a
                                   3274 ;	../sdk/src/timer0/src/timer0_configure.c:56: if((timer0_config_options & TMOD_MODE0_MASK) == TIMER0_CONFIG_OPTION_MODE_2_8_BIT_AUTO_RLD_TMR)
      000B77 E0               [24] 3275 	movx	a,@dptr
      000B78 FF               [12] 3276 	mov	r7,a
      000B79 53 07 03         [24] 3277 	anl	ar7,#0x03
      000B7C BF 02 0E         [24] 3278 	cjne	r7,#0x02,00102$
                                   3279 ;	../sdk/src/timer0/src/timer0_configure.c:58: TH0 = (uint8_t)t0_val;
      000B7F 90 00 5F         [24] 3280 	mov	dptr,#_timer0_configure_PARM_2
      000B82 E0               [24] 3281 	movx	a,@dptr
      000B83 FE               [12] 3282 	mov	r6,a
      000B84 A3               [24] 3283 	inc	dptr
      000B85 E0               [24] 3284 	movx	a,@dptr
      000B86 FF               [12] 3285 	mov	r7,a
      000B87 8E 8C            [24] 3286 	mov	_TH0,r6
                                   3287 ;	../sdk/src/timer0/src/timer0_configure.c:59: TL0 = (uint8_t)t0_val;
      000B89 8E 8A            [24] 3288 	mov	_TL0,r6
      000B8B 80 0A            [24] 3289 	sjmp	00103$
      000B8D                       3290 00102$:
                                   3291 ;	../sdk/src/timer0/src/timer0_configure.c:63: timer0_set_t0_val(t0_val);
      000B8D 90 00 5F         [24] 3292 	mov	dptr,#_timer0_configure_PARM_2
      000B90 E0               [24] 3293 	movx	a,@dptr
      000B91 F5 8A            [12] 3294 	mov	((_T0 >> 0) & 0xFF),a
      000B93 A3               [24] 3295 	inc	dptr
      000B94 E0               [24] 3296 	movx	a,@dptr
      000B95 F5 8C            [12] 3297 	mov	((_T0 >> 8) & 0xFF),a
      000B97                       3298 00103$:
                                   3299 ;	../sdk/src/timer0/src/timer0_configure.c:67: TMOD = (TMOD & ~TIMER0_CONFIG_OPTION_TMOD_MASK) | (timer0_config_options & TIMER0_CONFIG_OPTION_TMOD_MASK);
      000B97 74 F0            [12] 3300 	mov	a,#0xf0
      000B99 55 89            [12] 3301 	anl	a,_TMOD
      000B9B FF               [12] 3302 	mov	r7,a
      000B9C 90 00 61         [24] 3303 	mov	dptr,#_timer0_configure_timer0_config_options_1_193
      000B9F E0               [24] 3304 	movx	a,@dptr
      000BA0 FE               [12] 3305 	mov	r6,a
      000BA1 74 0F            [12] 3306 	mov	a,#0x0f
      000BA3 5E               [12] 3307 	anl	a,r6
      000BA4 4F               [12] 3308 	orl	a,r7
      000BA5 F5 89            [12] 3309 	mov	_TMOD,a
      000BA7 22               [24] 3310 	ret
                                   3311 ;------------------------------------------------------------
                                   3312 ;Allocation info for local variables in function 'timer1_configure'
                                   3313 ;------------------------------------------------------------
                                   3314 ;t1_val                    Allocated with name '_timer1_configure_PARM_2'
                                   3315 ;timer1_config_options     Allocated with name '_timer1_configure_timer1_config_options_1_198'
                                   3316 ;------------------------------------------------------------
                                   3317 ;	../sdk/src/timer1/src/timer1_configure.c:53: void timer1_configure(uint8_t timer1_config_options, uint16_t t1_val)
                                   3318 ;	-----------------------------------------
                                   3319 ;	 function timer1_configure
                                   3320 ;	-----------------------------------------
      000BA8                       3321 _timer1_configure:
      000BA8 E5 82            [12] 3322 	mov	a,dpl
      000BAA 90 00 64         [24] 3323 	mov	dptr,#_timer1_configure_timer1_config_options_1_198
      000BAD F0               [24] 3324 	movx	@dptr,a
                                   3325 ;	../sdk/src/timer1/src/timer1_configure.c:56: if((timer1_config_options & TMOD_MODE1_MASK) == TIMER1_CONFIG_OPTION_MODE_2_8_BIT_AUTO_RLD_TMR)
      000BAE E0               [24] 3326 	movx	a,@dptr
      000BAF FF               [12] 3327 	mov	r7,a
      000BB0 53 07 30         [24] 3328 	anl	ar7,#0x30
      000BB3 BF 20 0E         [24] 3329 	cjne	r7,#0x20,00102$
                                   3330 ;	../sdk/src/timer1/src/timer1_configure.c:58: TH1 = (uint8_t)t1_val;
      000BB6 90 00 62         [24] 3331 	mov	dptr,#_timer1_configure_PARM_2
      000BB9 E0               [24] 3332 	movx	a,@dptr
      000BBA FE               [12] 3333 	mov	r6,a
      000BBB A3               [24] 3334 	inc	dptr
      000BBC E0               [24] 3335 	movx	a,@dptr
      000BBD FF               [12] 3336 	mov	r7,a
      000BBE 8E 8D            [24] 3337 	mov	_TH1,r6
                                   3338 ;	../sdk/src/timer1/src/timer1_configure.c:59: TL1 = (uint8_t)t1_val;
      000BC0 8E 8B            [24] 3339 	mov	_TL1,r6
      000BC2 80 0A            [24] 3340 	sjmp	00103$
      000BC4                       3341 00102$:
                                   3342 ;	../sdk/src/timer1/src/timer1_configure.c:63: timer1_set_t1_val(t1_val);
      000BC4 90 00 62         [24] 3343 	mov	dptr,#_timer1_configure_PARM_2
      000BC7 E0               [24] 3344 	movx	a,@dptr
      000BC8 F5 8B            [12] 3345 	mov	((_T1 >> 0) & 0xFF),a
      000BCA A3               [24] 3346 	inc	dptr
      000BCB E0               [24] 3347 	movx	a,@dptr
      000BCC F5 8D            [12] 3348 	mov	((_T1 >> 8) & 0xFF),a
      000BCE                       3349 00103$:
                                   3350 ;	../sdk/src/timer1/src/timer1_configure.c:67: TMOD = (TMOD & ~TIMER1_CONFIG_OPTION_TMOD_MASK) | (timer1_config_options & TIMER1_CONFIG_OPTION_TMOD_MASK);
      000BCE 74 0F            [12] 3351 	mov	a,#0x0f
      000BD0 55 89            [12] 3352 	anl	a,_TMOD
      000BD2 FF               [12] 3353 	mov	r7,a
      000BD3 90 00 64         [24] 3354 	mov	dptr,#_timer1_configure_timer1_config_options_1_198
      000BD6 E0               [24] 3355 	movx	a,@dptr
      000BD7 FE               [12] 3356 	mov	r6,a
      000BD8 74 F0            [12] 3357 	mov	a,#0xf0
      000BDA 5E               [12] 3358 	anl	a,r6
      000BDB 4F               [12] 3359 	orl	a,r7
      000BDC F5 89            [12] 3360 	mov	_TMOD,a
      000BDE 22               [24] 3361 	ret
                                   3362 ;------------------------------------------------------------
                                   3363 ;Allocation info for local variables in function 'rtc2_configure'
                                   3364 ;------------------------------------------------------------
                                   3365 ;compare_value             Allocated with name '_rtc2_configure_PARM_2'
                                   3366 ;rtc2_config_options       Allocated with name '_rtc2_configure_rtc2_config_options_1_203'
                                   3367 ;------------------------------------------------------------
                                   3368 ;	../sdk/src/rtc2/src/rtc2_configure.c:53: void rtc2_configure(unsigned char rtc2_config_options, unsigned int compare_value)
                                   3369 ;	-----------------------------------------
                                   3370 ;	 function rtc2_configure
                                   3371 ;	-----------------------------------------
      000BDF                       3372 _rtc2_configure:
      000BDF E5 82            [12] 3373 	mov	a,dpl
      000BE1 90 00 67         [24] 3374 	mov	dptr,#_rtc2_configure_rtc2_config_options_1_203
      000BE4 F0               [24] 3375 	movx	@dptr,a
                                   3376 ;	../sdk/src/rtc2/src/rtc2_configure.c:56: if(((rtc2_config_options & RTC2CON_COMPARE_MODE_MASK) == RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ) ||
      000BE5 E0               [24] 3377 	movx	a,@dptr
      000BE6 FF               [12] 3378 	mov	r7,a
      000BE7 74 06            [12] 3379 	mov	a,#0x06
      000BE9 5F               [12] 3380 	anl	a,r7
      000BEA FE               [12] 3381 	mov	r6,a
      000BEB BE 06 02         [24] 3382 	cjne	r6,#0x06,00109$
      000BEE 80 06            [24] 3383 	sjmp	00101$
      000BF0                       3384 00109$:
                                   3385 ;	../sdk/src/rtc2/src/rtc2_configure.c:57: ((rtc2_config_options & RTC2CON_COMPARE_MODE_MASK) == RTC2_CONFIG_OPTION_COMPARE_MODE_1_WRAP_AT_IRQ))
      000BF0 53 07 06         [24] 3386 	anl	ar7,#0x06
      000BF3 BF 04 0C         [24] 3387 	cjne	r7,#0x04,00102$
      000BF6                       3388 00101$:
                                   3389 ;	../sdk/src/rtc2/src/rtc2_configure.c:59: RTC2CMP0 = (unsigned char)compare_value;
      000BF6 90 00 65         [24] 3390 	mov	dptr,#_rtc2_configure_PARM_2
      000BF9 E0               [24] 3391 	movx	a,@dptr
      000BFA FE               [12] 3392 	mov	r6,a
      000BFB A3               [24] 3393 	inc	dptr
      000BFC E0               [24] 3394 	movx	a,@dptr
      000BFD FF               [12] 3395 	mov	r7,a
      000BFE 8E B4            [24] 3396 	mov	_RTC2CMP0,r6
                                   3397 ;	../sdk/src/rtc2/src/rtc2_configure.c:60: RTC2CMP1 = (unsigned char)(compare_value >> 8);
      000C00 8F B5            [24] 3398 	mov	_RTC2CMP1,r7
      000C02                       3399 00102$:
                                   3400 ;	../sdk/src/rtc2/src/rtc2_configure.c:64: RTC2CON = (RTC2CON & ~RTC2_CONFIG_OPTION_RTC2CON_MASK) | (rtc2_config_options & RTC2_CONFIG_OPTION_RTC2CON_MASK);
      000C02 74 F0            [12] 3401 	mov	a,#0xf0
      000C04 55 B3            [12] 3402 	anl	a,_RTC2CON
      000C06 FF               [12] 3403 	mov	r7,a
      000C07 90 00 67         [24] 3404 	mov	dptr,#_rtc2_configure_rtc2_config_options_1_203
      000C0A E0               [24] 3405 	movx	a,@dptr
      000C0B FE               [12] 3406 	mov	r6,a
      000C0C 74 0F            [12] 3407 	mov	a,#0x0f
      000C0E 5E               [12] 3408 	anl	a,r6
      000C0F 4F               [12] 3409 	orl	a,r7
      000C10 F5 B3            [12] 3410 	mov	_RTC2CON,a
      000C12 22               [24] 3411 	ret
                                   3412 ;------------------------------------------------------------
                                   3413 ;Allocation info for local variables in function 'radiobegin'
                                   3414 ;------------------------------------------------------------
                                   3415 ;setup                     Allocated with name '_radiobegin_setup_1_206'
                                   3416 ;------------------------------------------------------------
                                   3417 ;	../nRFLE.c:22: void radiobegin() {
                                   3418 ;	-----------------------------------------
                                   3419 ;	 function radiobegin
                                   3420 ;	-----------------------------------------
      000C13                       3421 _radiobegin:
                                   3422 ;	../nRFLE.c:26: rf_spi_configure_enable();
      000C13 12 00 F5         [24] 3423 	lcall	_rf_spi_configure_enable
                                   3424 ;	../nRFLE.c:28: setup = 255; // setup_retr setRetries 15*16+15
      000C16 90 00 68         [24] 3425 	mov	dptr,#_radiobegin_setup_1_206
      000C19 74 FF            [12] 3426 	mov	a,#0xff
      000C1B F0               [24] 3427 	movx	@dptr,a
                                   3428 ;	../nRFLE.c:29: rf_write_register(RF_SETUP_RETR, &setup, 1);
      000C1C 90 00 06         [24] 3429 	mov	dptr,#_rf_write_register_PARM_2
      000C1F 74 68            [12] 3430 	mov	a,#_radiobegin_setup_1_206
      000C21 F0               [24] 3431 	movx	@dptr,a
      000C22 74 00            [12] 3432 	mov	a,#(_radiobegin_setup_1_206 >> 8)
      000C24 A3               [24] 3433 	inc	dptr
      000C25 F0               [24] 3434 	movx	@dptr,a
      000C26 E4               [12] 3435 	clr	a
      000C27 A3               [24] 3436 	inc	dptr
      000C28 F0               [24] 3437 	movx	@dptr,a
      000C29 90 00 09         [24] 3438 	mov	dptr,#_rf_write_register_PARM_3
      000C2C 04               [12] 3439 	inc	a
      000C2D F0               [24] 3440 	movx	@dptr,a
      000C2E E4               [12] 3441 	clr	a
      000C2F A3               [24] 3442 	inc	dptr
      000C30 F0               [24] 3443 	movx	@dptr,a
      000C31 75 82 04         [24] 3444 	mov	dpl,#0x04
      000C34 02 00 B7         [24] 3445 	ljmp	_rf_write_register
                                   3446 ;------------------------------------------------------------
                                   3447 ;Allocation info for local variables in function 'setChannel'
                                   3448 ;------------------------------------------------------------
                                   3449 ;channel                   Allocated with name '_setChannel_channel_1_207'
                                   3450 ;------------------------------------------------------------
                                   3451 ;	../nRFLE.c:35: void setChannel(unsigned char channel){
                                   3452 ;	-----------------------------------------
                                   3453 ;	 function setChannel
                                   3454 ;	-----------------------------------------
      000C37                       3455 _setChannel:
      000C37 E5 82            [12] 3456 	mov	a,dpl
      000C39 90 00 69         [24] 3457 	mov	dptr,#_setChannel_channel_1_207
      000C3C F0               [24] 3458 	movx	@dptr,a
                                   3459 ;	../nRFLE.c:36: rf_write_register(RF_RF_CH, &channel, 1);
      000C3D 90 00 06         [24] 3460 	mov	dptr,#_rf_write_register_PARM_2
      000C40 74 69            [12] 3461 	mov	a,#_setChannel_channel_1_207
      000C42 F0               [24] 3462 	movx	@dptr,a
      000C43 74 00            [12] 3463 	mov	a,#(_setChannel_channel_1_207 >> 8)
      000C45 A3               [24] 3464 	inc	dptr
      000C46 F0               [24] 3465 	movx	@dptr,a
      000C47 E4               [12] 3466 	clr	a
      000C48 A3               [24] 3467 	inc	dptr
      000C49 F0               [24] 3468 	movx	@dptr,a
      000C4A 90 00 09         [24] 3469 	mov	dptr,#_rf_write_register_PARM_3
      000C4D 04               [12] 3470 	inc	a
      000C4E F0               [24] 3471 	movx	@dptr,a
      000C4F E4               [12] 3472 	clr	a
      000C50 A3               [24] 3473 	inc	dptr
      000C51 F0               [24] 3474 	movx	@dptr,a
      000C52 75 82 05         [24] 3475 	mov	dpl,#0x05
      000C55 02 00 B7         [24] 3476 	ljmp	_rf_write_register
                                   3477 ;------------------------------------------------------------
                                   3478 ;Allocation info for local variables in function 'setDataRate'
                                   3479 ;------------------------------------------------------------
                                   3480 ;speed                     Allocated with name '_setDataRate_speed_1_209'
                                   3481 ;buffer                    Allocated with name '_setDataRate_buffer_1_210'
                                   3482 ;------------------------------------------------------------
                                   3483 ;	../nRFLE.c:41: void setDataRate(unsigned char speed){
                                   3484 ;	-----------------------------------------
                                   3485 ;	 function setDataRate
                                   3486 ;	-----------------------------------------
      000C58                       3487 _setDataRate:
      000C58 E5 82            [12] 3488 	mov	a,dpl
      000C5A 90 00 6A         [24] 3489 	mov	dptr,#_setDataRate_speed_1_209
      000C5D F0               [24] 3490 	movx	@dptr,a
                                   3491 ;	../nRFLE.c:43: rf_read_register(RF_RF_SETUP,&buffer,1);
      000C5E 90 00 26         [24] 3492 	mov	dptr,#_rf_read_register_PARM_2
      000C61 74 6B            [12] 3493 	mov	a,#_setDataRate_buffer_1_210
      000C63 F0               [24] 3494 	movx	@dptr,a
      000C64 74 00            [12] 3495 	mov	a,#(_setDataRate_buffer_1_210 >> 8)
      000C66 A3               [24] 3496 	inc	dptr
      000C67 F0               [24] 3497 	movx	@dptr,a
      000C68 E4               [12] 3498 	clr	a
      000C69 A3               [24] 3499 	inc	dptr
      000C6A F0               [24] 3500 	movx	@dptr,a
      000C6B 90 00 29         [24] 3501 	mov	dptr,#_rf_read_register_PARM_3
      000C6E 04               [12] 3502 	inc	a
      000C6F F0               [24] 3503 	movx	@dptr,a
      000C70 E4               [12] 3504 	clr	a
      000C71 A3               [24] 3505 	inc	dptr
      000C72 F0               [24] 3506 	movx	@dptr,a
      000C73 75 82 06         [24] 3507 	mov	dpl,#0x06
      000C76 12 03 67         [24] 3508 	lcall	_rf_read_register
                                   3509 ;	../nRFLE.c:45: buffer &= ~(_BV(RF_DR_LOW) | _BV(RF_DR_HIGH)) ;
      000C79 90 00 6B         [24] 3510 	mov	dptr,#_setDataRate_buffer_1_210
      000C7C E0               [24] 3511 	movx	a,@dptr
      000C7D FF               [12] 3512 	mov	r7,a
      000C7E 74 D7            [12] 3513 	mov	a,#0xd7
      000C80 5F               [12] 3514 	anl	a,r7
      000C81 F0               [24] 3515 	movx	@dptr,a
                                   3516 ;	../nRFLE.c:47: if( speed == 1 )	 buffer |= _BV(RF_DR_LOW);
      000C82 90 00 6A         [24] 3517 	mov	dptr,#_setDataRate_speed_1_209
      000C85 E0               [24] 3518 	movx	a,@dptr
      000C86 FF               [12] 3519 	mov	r7,a
      000C87 BF 01 0B         [24] 3520 	cjne	r7,#0x01,00104$
      000C8A 90 00 6B         [24] 3521 	mov	dptr,#_setDataRate_buffer_1_210
      000C8D E0               [24] 3522 	movx	a,@dptr
      000C8E FE               [12] 3523 	mov	r6,a
      000C8F 74 20            [12] 3524 	mov	a,#0x20
      000C91 4E               [12] 3525 	orl	a,r6
      000C92 F0               [24] 3526 	movx	@dptr,a
      000C93 80 0C            [24] 3527 	sjmp	00105$
      000C95                       3528 00104$:
                                   3529 ;	../nRFLE.c:49: else if ( speed == 3 ) buffer |= _BV(RF_DR_HIGH);
      000C95 BF 03 09         [24] 3530 	cjne	r7,#0x03,00105$
      000C98 90 00 6B         [24] 3531 	mov	dptr,#_setDataRate_buffer_1_210
      000C9B E0               [24] 3532 	movx	a,@dptr
      000C9C FF               [12] 3533 	mov	r7,a
      000C9D 74 08            [12] 3534 	mov	a,#0x08
      000C9F 4F               [12] 3535 	orl	a,r7
      000CA0 F0               [24] 3536 	movx	@dptr,a
      000CA1                       3537 00105$:
                                   3538 ;	../nRFLE.c:51: rf_write_register(RF_RF_SETUP,&buffer,1 ) ;
      000CA1 90 00 06         [24] 3539 	mov	dptr,#_rf_write_register_PARM_2
      000CA4 74 6B            [12] 3540 	mov	a,#_setDataRate_buffer_1_210
      000CA6 F0               [24] 3541 	movx	@dptr,a
      000CA7 74 00            [12] 3542 	mov	a,#(_setDataRate_buffer_1_210 >> 8)
      000CA9 A3               [24] 3543 	inc	dptr
      000CAA F0               [24] 3544 	movx	@dptr,a
      000CAB E4               [12] 3545 	clr	a
      000CAC A3               [24] 3546 	inc	dptr
      000CAD F0               [24] 3547 	movx	@dptr,a
      000CAE 90 00 09         [24] 3548 	mov	dptr,#_rf_write_register_PARM_3
      000CB1 04               [12] 3549 	inc	a
      000CB2 F0               [24] 3550 	movx	@dptr,a
      000CB3 E4               [12] 3551 	clr	a
      000CB4 A3               [24] 3552 	inc	dptr
      000CB5 F0               [24] 3553 	movx	@dptr,a
      000CB6 75 82 06         [24] 3554 	mov	dpl,#0x06
      000CB9 02 00 B7         [24] 3555 	ljmp	_rf_write_register
                                   3556 ;------------------------------------------------------------
                                   3557 ;Allocation info for local variables in function 'setAutoAck'
                                   3558 ;------------------------------------------------------------
                                   3559 ;enable                    Allocated with name '_setAutoAck_enable_1_211'
                                   3560 ;buffer                    Allocated with name '_setAutoAck_buffer_1_212'
                                   3561 ;------------------------------------------------------------
                                   3562 ;	../nRFLE.c:56: void setAutoAck(unsigned char enable)
                                   3563 ;	-----------------------------------------
                                   3564 ;	 function setAutoAck
                                   3565 ;	-----------------------------------------
      000CBC                       3566 _setAutoAck:
      000CBC E5 82            [12] 3567 	mov	a,dpl
      000CBE 90 00 6C         [24] 3568 	mov	dptr,#_setAutoAck_enable_1_211
      000CC1 F0               [24] 3569 	movx	@dptr,a
                                   3570 ;	../nRFLE.c:60: if (enable==1) buffer=63;
      000CC2 E0               [24] 3571 	movx	a,@dptr
      000CC3 FF               [12] 3572 	mov	r7,a
      000CC4 BF 01 08         [24] 3573 	cjne	r7,#0x01,00102$
      000CC7 90 00 6D         [24] 3574 	mov	dptr,#_setAutoAck_buffer_1_212
      000CCA 74 3F            [12] 3575 	mov	a,#0x3f
      000CCC F0               [24] 3576 	movx	@dptr,a
      000CCD 80 05            [24] 3577 	sjmp	00103$
      000CCF                       3578 00102$:
                                   3579 ;	../nRFLE.c:61: else        buffer=0;
      000CCF 90 00 6D         [24] 3580 	mov	dptr,#_setAutoAck_buffer_1_212
      000CD2 E4               [12] 3581 	clr	a
      000CD3 F0               [24] 3582 	movx	@dptr,a
      000CD4                       3583 00103$:
                                   3584 ;	../nRFLE.c:62: rf_write_register(RF_EN_AA, &buffer,1);
      000CD4 90 00 06         [24] 3585 	mov	dptr,#_rf_write_register_PARM_2
      000CD7 74 6D            [12] 3586 	mov	a,#_setAutoAck_buffer_1_212
      000CD9 F0               [24] 3587 	movx	@dptr,a
      000CDA 74 00            [12] 3588 	mov	a,#(_setAutoAck_buffer_1_212 >> 8)
      000CDC A3               [24] 3589 	inc	dptr
      000CDD F0               [24] 3590 	movx	@dptr,a
      000CDE E4               [12] 3591 	clr	a
      000CDF A3               [24] 3592 	inc	dptr
      000CE0 F0               [24] 3593 	movx	@dptr,a
      000CE1 90 00 09         [24] 3594 	mov	dptr,#_rf_write_register_PARM_3
      000CE4 04               [12] 3595 	inc	a
      000CE5 F0               [24] 3596 	movx	@dptr,a
      000CE6 E4               [12] 3597 	clr	a
      000CE7 A3               [24] 3598 	inc	dptr
      000CE8 F0               [24] 3599 	movx	@dptr,a
      000CE9 75 82 01         [24] 3600 	mov	dpl,#0x01
      000CEC 02 00 B7         [24] 3601 	ljmp	_rf_write_register
                                   3602 ;------------------------------------------------------------
                                   3603 ;Allocation info for local variables in function 'setCRCLength'
                                   3604 ;------------------------------------------------------------
                                   3605 ;length                    Allocated with name '_setCRCLength_length_1_213'
                                   3606 ;buffer                    Allocated with name '_setCRCLength_buffer_1_214'
                                   3607 ;------------------------------------------------------------
                                   3608 ;	../nRFLE.c:67: void setCRCLength(unsigned char length)
                                   3609 ;	-----------------------------------------
                                   3610 ;	 function setCRCLength
                                   3611 ;	-----------------------------------------
      000CEF                       3612 _setCRCLength:
      000CEF E5 82            [12] 3613 	mov	a,dpl
      000CF1 90 00 6E         [24] 3614 	mov	dptr,#_setCRCLength_length_1_213
      000CF4 F0               [24] 3615 	movx	@dptr,a
                                   3616 ;	../nRFLE.c:71: rf_read_register(RF_CONFIG,&buffer,1);
      000CF5 90 00 26         [24] 3617 	mov	dptr,#_rf_read_register_PARM_2
      000CF8 74 6F            [12] 3618 	mov	a,#_setCRCLength_buffer_1_214
      000CFA F0               [24] 3619 	movx	@dptr,a
      000CFB 74 00            [12] 3620 	mov	a,#(_setCRCLength_buffer_1_214 >> 8)
      000CFD A3               [24] 3621 	inc	dptr
      000CFE F0               [24] 3622 	movx	@dptr,a
      000CFF E4               [12] 3623 	clr	a
      000D00 A3               [24] 3624 	inc	dptr
      000D01 F0               [24] 3625 	movx	@dptr,a
      000D02 90 00 29         [24] 3626 	mov	dptr,#_rf_read_register_PARM_3
      000D05 04               [12] 3627 	inc	a
      000D06 F0               [24] 3628 	movx	@dptr,a
      000D07 E4               [12] 3629 	clr	a
      000D08 A3               [24] 3630 	inc	dptr
      000D09 F0               [24] 3631 	movx	@dptr,a
      000D0A 75 82 00         [24] 3632 	mov	dpl,#0x00
      000D0D 12 03 67         [24] 3633 	lcall	_rf_read_register
                                   3634 ;	../nRFLE.c:73: buffer = buffer & ~( _BV(RF_CRCO) | _BV(RF_EN_CRC)) ;
      000D10 90 00 6F         [24] 3635 	mov	dptr,#_setCRCLength_buffer_1_214
      000D13 E0               [24] 3636 	movx	a,@dptr
      000D14 FF               [12] 3637 	mov	r7,a
      000D15 74 F3            [12] 3638 	mov	a,#0xf3
      000D17 5F               [12] 3639 	anl	a,r7
      000D18 F0               [24] 3640 	movx	@dptr,a
                                   3641 ;	../nRFLE.c:75: if (length==1) buffer |= _BV(RF_EN_CRC);
      000D19 90 00 6E         [24] 3642 	mov	dptr,#_setCRCLength_length_1_213
      000D1C E0               [24] 3643 	movx	a,@dptr
      000D1D FF               [12] 3644 	mov	r7,a
      000D1E BF 01 0B         [24] 3645 	cjne	r7,#0x01,00104$
      000D21 90 00 6F         [24] 3646 	mov	dptr,#_setCRCLength_buffer_1_214
      000D24 E0               [24] 3647 	movx	a,@dptr
      000D25 FE               [12] 3648 	mov	r6,a
      000D26 74 08            [12] 3649 	mov	a,#0x08
      000D28 4E               [12] 3650 	orl	a,r6
      000D29 F0               [24] 3651 	movx	@dptr,a
      000D2A 80 0C            [24] 3652 	sjmp	00105$
      000D2C                       3653 00104$:
                                   3654 ;	../nRFLE.c:76: else if (length==2) buffer |= _BV(RF_EN_CRC) | _BV( RF_CRCO );
      000D2C BF 02 09         [24] 3655 	cjne	r7,#0x02,00105$
      000D2F 90 00 6F         [24] 3656 	mov	dptr,#_setCRCLength_buffer_1_214
      000D32 E0               [24] 3657 	movx	a,@dptr
      000D33 FF               [12] 3658 	mov	r7,a
      000D34 74 0C            [12] 3659 	mov	a,#0x0c
      000D36 4F               [12] 3660 	orl	a,r7
      000D37 F0               [24] 3661 	movx	@dptr,a
      000D38                       3662 00105$:
                                   3663 ;	../nRFLE.c:78: buffer |=1<<PWR_UP;
      000D38 90 00 6F         [24] 3664 	mov	dptr,#_setCRCLength_buffer_1_214
      000D3B E0               [24] 3665 	movx	a,@dptr
      000D3C FF               [12] 3666 	mov	r7,a
      000D3D 74 02            [12] 3667 	mov	a,#0x02
      000D3F 4F               [12] 3668 	orl	a,r7
      000D40 F0               [24] 3669 	movx	@dptr,a
                                   3670 ;	../nRFLE.c:80: rf_write_register(RF_CONFIG,&buffer,1 ) ;
      000D41 90 00 06         [24] 3671 	mov	dptr,#_rf_write_register_PARM_2
      000D44 74 6F            [12] 3672 	mov	a,#_setCRCLength_buffer_1_214
      000D46 F0               [24] 3673 	movx	@dptr,a
      000D47 74 00            [12] 3674 	mov	a,#(_setCRCLength_buffer_1_214 >> 8)
      000D49 A3               [24] 3675 	inc	dptr
      000D4A F0               [24] 3676 	movx	@dptr,a
      000D4B E4               [12] 3677 	clr	a
      000D4C A3               [24] 3678 	inc	dptr
      000D4D F0               [24] 3679 	movx	@dptr,a
      000D4E 90 00 09         [24] 3680 	mov	dptr,#_rf_write_register_PARM_3
      000D51 04               [12] 3681 	inc	a
      000D52 F0               [24] 3682 	movx	@dptr,a
      000D53 E4               [12] 3683 	clr	a
      000D54 A3               [24] 3684 	inc	dptr
      000D55 F0               [24] 3685 	movx	@dptr,a
      000D56 75 82 00         [24] 3686 	mov	dpl,#0x00
      000D59 02 00 B7         [24] 3687 	ljmp	_rf_write_register
                                   3688 ;------------------------------------------------------------
                                   3689 ;Allocation info for local variables in function 'setPALevel'
                                   3690 ;------------------------------------------------------------
                                   3691 ;level                     Allocated with name '_setPALevel_level_1_215'
                                   3692 ;setup                     Allocated with name '_setPALevel_setup_1_216'
                                   3693 ;------------------------------------------------------------
                                   3694 ;	../nRFLE.c:84: void setPALevel(unsigned char level)
                                   3695 ;	-----------------------------------------
                                   3696 ;	 function setPALevel
                                   3697 ;	-----------------------------------------
      000D5C                       3698 _setPALevel:
      000D5C E5 82            [12] 3699 	mov	a,dpl
      000D5E 90 00 70         [24] 3700 	mov	dptr,#_setPALevel_level_1_215
      000D61 F0               [24] 3701 	movx	@dptr,a
                                   3702 ;	../nRFLE.c:88: rf_read_register(RF_RF_SETUP,&setup,1) ;
      000D62 90 00 26         [24] 3703 	mov	dptr,#_rf_read_register_PARM_2
      000D65 74 71            [12] 3704 	mov	a,#_setPALevel_setup_1_216
      000D67 F0               [24] 3705 	movx	@dptr,a
      000D68 74 00            [12] 3706 	mov	a,#(_setPALevel_setup_1_216 >> 8)
      000D6A A3               [24] 3707 	inc	dptr
      000D6B F0               [24] 3708 	movx	@dptr,a
      000D6C E4               [12] 3709 	clr	a
      000D6D A3               [24] 3710 	inc	dptr
      000D6E F0               [24] 3711 	movx	@dptr,a
      000D6F 90 00 29         [24] 3712 	mov	dptr,#_rf_read_register_PARM_3
      000D72 04               [12] 3713 	inc	a
      000D73 F0               [24] 3714 	movx	@dptr,a
      000D74 E4               [12] 3715 	clr	a
      000D75 A3               [24] 3716 	inc	dptr
      000D76 F0               [24] 3717 	movx	@dptr,a
      000D77 75 82 06         [24] 3718 	mov	dpl,#0x06
      000D7A 12 03 67         [24] 3719 	lcall	_rf_read_register
                                   3720 ;	../nRFLE.c:90: setup &= ~(_BV(RF_PWR_LOW) | _BV(RF_PWR_HIGH)) ;
      000D7D 90 00 71         [24] 3721 	mov	dptr,#_setPALevel_setup_1_216
      000D80 E0               [24] 3722 	movx	a,@dptr
      000D81 FF               [12] 3723 	mov	r7,a
      000D82 74 F9            [12] 3724 	mov	a,#0xf9
      000D84 5F               [12] 3725 	anl	a,r7
      000D85 F0               [24] 3726 	movx	@dptr,a
                                   3727 ;	../nRFLE.c:91: setup|= ((level&3)<<RF_PWR_LOW);
      000D86 90 00 70         [24] 3728 	mov	dptr,#_setPALevel_level_1_215
      000D89 E0               [24] 3729 	movx	a,@dptr
      000D8A 54 03            [12] 3730 	anl	a,#0x03
      000D8C 25 E0            [12] 3731 	add	a,acc
      000D8E FF               [12] 3732 	mov	r7,a
      000D8F 90 00 71         [24] 3733 	mov	dptr,#_setPALevel_setup_1_216
      000D92 E0               [24] 3734 	movx	a,@dptr
      000D93 4F               [12] 3735 	orl	a,r7
      000D94 F0               [24] 3736 	movx	@dptr,a
                                   3737 ;	../nRFLE.c:93: rf_write_register(RF_RF_SETUP,&setup,1);
      000D95 90 00 06         [24] 3738 	mov	dptr,#_rf_write_register_PARM_2
      000D98 74 71            [12] 3739 	mov	a,#_setPALevel_setup_1_216
      000D9A F0               [24] 3740 	movx	@dptr,a
      000D9B 74 00            [12] 3741 	mov	a,#(_setPALevel_setup_1_216 >> 8)
      000D9D A3               [24] 3742 	inc	dptr
      000D9E F0               [24] 3743 	movx	@dptr,a
      000D9F E4               [12] 3744 	clr	a
      000DA0 A3               [24] 3745 	inc	dptr
      000DA1 F0               [24] 3746 	movx	@dptr,a
      000DA2 90 00 09         [24] 3747 	mov	dptr,#_rf_write_register_PARM_3
      000DA5 04               [12] 3748 	inc	a
      000DA6 F0               [24] 3749 	movx	@dptr,a
      000DA7 E4               [12] 3750 	clr	a
      000DA8 A3               [24] 3751 	inc	dptr
      000DA9 F0               [24] 3752 	movx	@dptr,a
      000DAA 75 82 06         [24] 3753 	mov	dpl,#0x06
      000DAD 02 00 B7         [24] 3754 	ljmp	_rf_write_register
                                   3755 ;------------------------------------------------------------
                                   3756 ;Allocation info for local variables in function 'openAllPipe'
                                   3757 ;------------------------------------------------------------
                                   3758 ;buffer                    Allocated with name '_openAllPipe_buffer_1_217'
                                   3759 ;setup                     Allocated with name '_openAllPipe_setup_1_217'
                                   3760 ;------------------------------------------------------------
                                   3761 ;	../nRFLE.c:101: void openAllPipe()
                                   3762 ;	-----------------------------------------
                                   3763 ;	 function openAllPipe
                                   3764 ;	-----------------------------------------
      000DB0                       3765 _openAllPipe:
                                   3766 ;	../nRFLE.c:106: buffer[1]=adr1;
      000DB0 90 00 73         [24] 3767 	mov	dptr,#(_openAllPipe_buffer_1_217 + 0x0001)
      000DB3 74 F0            [12] 3768 	mov	a,#0xf0
      000DB5 F0               [24] 3769 	movx	@dptr,a
                                   3770 ;	../nRFLE.c:107: buffer[2]=adr2;
      000DB6 90 00 74         [24] 3771 	mov	dptr,#(_openAllPipe_buffer_1_217 + 0x0002)
      000DB9 F0               [24] 3772 	movx	@dptr,a
                                   3773 ;	../nRFLE.c:108: buffer[3]=adr3;
      000DBA 90 00 75         [24] 3774 	mov	dptr,#(_openAllPipe_buffer_1_217 + 0x0003)
      000DBD F0               [24] 3775 	movx	@dptr,a
                                   3776 ;	../nRFLE.c:109: buffer[4]=adr4;
      000DBE 90 00 76         [24] 3777 	mov	dptr,#(_openAllPipe_buffer_1_217 + 0x0004)
      000DC1 F0               [24] 3778 	movx	@dptr,a
                                   3779 ;	../nRFLE.c:111: setup = 2; // en_rxaddr ,биты включения каналов B00000010 на прием
      000DC2 90 00 77         [24] 3780 	mov	dptr,#_openAllPipe_setup_1_217
      000DC5 74 02            [12] 3781 	mov	a,#0x02
      000DC7 F0               [24] 3782 	movx	@dptr,a
                                   3783 ;	../nRFLE.c:112: rf_write_register(RF_EN_RXADDR, &setup, 1);
      000DC8 90 00 06         [24] 3784 	mov	dptr,#_rf_write_register_PARM_2
      000DCB 74 77            [12] 3785 	mov	a,#_openAllPipe_setup_1_217
      000DCD F0               [24] 3786 	movx	@dptr,a
      000DCE 74 00            [12] 3787 	mov	a,#(_openAllPipe_setup_1_217 >> 8)
      000DD0 A3               [24] 3788 	inc	dptr
      000DD1 F0               [24] 3789 	movx	@dptr,a
      000DD2 E4               [12] 3790 	clr	a
      000DD3 A3               [24] 3791 	inc	dptr
      000DD4 F0               [24] 3792 	movx	@dptr,a
      000DD5 90 00 09         [24] 3793 	mov	dptr,#_rf_write_register_PARM_3
      000DD8 04               [12] 3794 	inc	a
      000DD9 F0               [24] 3795 	movx	@dptr,a
      000DDA E4               [12] 3796 	clr	a
      000DDB A3               [24] 3797 	inc	dptr
      000DDC F0               [24] 3798 	movx	@dptr,a
      000DDD 75 82 02         [24] 3799 	mov	dpl,#0x02
      000DE0 12 00 B7         [24] 3800 	lcall	_rf_write_register
                                   3801 ;	../nRFLE.c:115: buffer[0]=0xD2;
      000DE3 90 00 72         [24] 3802 	mov	dptr,#_openAllPipe_buffer_1_217
      000DE6 74 D2            [12] 3803 	mov	a,#0xd2
      000DE8 F0               [24] 3804 	movx	@dptr,a
                                   3805 ;	../nRFLE.c:117: rf_write_register(RF_RX_ADDR_P0,buffer,5);
      000DE9 90 00 06         [24] 3806 	mov	dptr,#_rf_write_register_PARM_2
      000DEC 74 72            [12] 3807 	mov	a,#_openAllPipe_buffer_1_217
      000DEE F0               [24] 3808 	movx	@dptr,a
      000DEF 74 00            [12] 3809 	mov	a,#(_openAllPipe_buffer_1_217 >> 8)
      000DF1 A3               [24] 3810 	inc	dptr
      000DF2 F0               [24] 3811 	movx	@dptr,a
      000DF3 E4               [12] 3812 	clr	a
      000DF4 A3               [24] 3813 	inc	dptr
      000DF5 F0               [24] 3814 	movx	@dptr,a
      000DF6 90 00 09         [24] 3815 	mov	dptr,#_rf_write_register_PARM_3
      000DF9 74 05            [12] 3816 	mov	a,#0x05
      000DFB F0               [24] 3817 	movx	@dptr,a
      000DFC E4               [12] 3818 	clr	a
      000DFD A3               [24] 3819 	inc	dptr
      000DFE F0               [24] 3820 	movx	@dptr,a
      000DFF 75 82 0A         [24] 3821 	mov	dpl,#0x0a
      000E02 12 00 B7         [24] 3822 	lcall	_rf_write_register
                                   3823 ;	../nRFLE.c:118: rf_write_register(RF_TX_ADDR,buffer,5);
      000E05 90 00 06         [24] 3824 	mov	dptr,#_rf_write_register_PARM_2
      000E08 74 72            [12] 3825 	mov	a,#_openAllPipe_buffer_1_217
      000E0A F0               [24] 3826 	movx	@dptr,a
      000E0B 74 00            [12] 3827 	mov	a,#(_openAllPipe_buffer_1_217 >> 8)
      000E0D A3               [24] 3828 	inc	dptr
      000E0E F0               [24] 3829 	movx	@dptr,a
      000E0F E4               [12] 3830 	clr	a
      000E10 A3               [24] 3831 	inc	dptr
      000E11 F0               [24] 3832 	movx	@dptr,a
      000E12 90 00 09         [24] 3833 	mov	dptr,#_rf_write_register_PARM_3
      000E15 74 05            [12] 3834 	mov	a,#0x05
      000E17 F0               [24] 3835 	movx	@dptr,a
      000E18 E4               [12] 3836 	clr	a
      000E19 A3               [24] 3837 	inc	dptr
      000E1A F0               [24] 3838 	movx	@dptr,a
      000E1B 75 82 10         [24] 3839 	mov	dpl,#0x10
      000E1E 12 00 B7         [24] 3840 	lcall	_rf_write_register
                                   3841 ;	../nRFLE.c:122: buffer[0]=0xE1;
      000E21 90 00 72         [24] 3842 	mov	dptr,#_openAllPipe_buffer_1_217
      000E24 74 E1            [12] 3843 	mov	a,#0xe1
      000E26 F0               [24] 3844 	movx	@dptr,a
                                   3845 ;	../nRFLE.c:124: rf_write_register(RF_RX_ADDR_P0+1,buffer,5);
      000E27 90 00 06         [24] 3846 	mov	dptr,#_rf_write_register_PARM_2
      000E2A 74 72            [12] 3847 	mov	a,#_openAllPipe_buffer_1_217
      000E2C F0               [24] 3848 	movx	@dptr,a
      000E2D 74 00            [12] 3849 	mov	a,#(_openAllPipe_buffer_1_217 >> 8)
      000E2F A3               [24] 3850 	inc	dptr
      000E30 F0               [24] 3851 	movx	@dptr,a
      000E31 E4               [12] 3852 	clr	a
      000E32 A3               [24] 3853 	inc	dptr
      000E33 F0               [24] 3854 	movx	@dptr,a
      000E34 90 00 09         [24] 3855 	mov	dptr,#_rf_write_register_PARM_3
      000E37 74 05            [12] 3856 	mov	a,#0x05
      000E39 F0               [24] 3857 	movx	@dptr,a
      000E3A E4               [12] 3858 	clr	a
      000E3B A3               [24] 3859 	inc	dptr
      000E3C F0               [24] 3860 	movx	@dptr,a
      000E3D 75 82 0B         [24] 3861 	mov	dpl,#0x0b
      000E40 12 00 B7         [24] 3862 	lcall	_rf_write_register
                                   3863 ;	../nRFLE.c:126: setup=32; //
      000E43 90 00 77         [24] 3864 	mov	dptr,#_openAllPipe_setup_1_217
      000E46 74 20            [12] 3865 	mov	a,#0x20
      000E48 F0               [24] 3866 	movx	@dptr,a
                                   3867 ;	../nRFLE.c:127: rf_write_register(RF_RX_PW_P0+1,&setup,1);
      000E49 90 00 06         [24] 3868 	mov	dptr,#_rf_write_register_PARM_2
      000E4C 74 77            [12] 3869 	mov	a,#_openAllPipe_setup_1_217
      000E4E F0               [24] 3870 	movx	@dptr,a
      000E4F 74 00            [12] 3871 	mov	a,#(_openAllPipe_setup_1_217 >> 8)
      000E51 A3               [24] 3872 	inc	dptr
      000E52 F0               [24] 3873 	movx	@dptr,a
      000E53 E4               [12] 3874 	clr	a
      000E54 A3               [24] 3875 	inc	dptr
      000E55 F0               [24] 3876 	movx	@dptr,a
      000E56 90 00 09         [24] 3877 	mov	dptr,#_rf_write_register_PARM_3
      000E59 04               [12] 3878 	inc	a
      000E5A F0               [24] 3879 	movx	@dptr,a
      000E5B E4               [12] 3880 	clr	a
      000E5C A3               [24] 3881 	inc	dptr
      000E5D F0               [24] 3882 	movx	@dptr,a
      000E5E 75 82 12         [24] 3883 	mov	dpl,#0x12
      000E61 02 00 B7         [24] 3884 	ljmp	_rf_write_register
                                   3885 ;------------------------------------------------------------
                                   3886 ;Allocation info for local variables in function 'available'
                                   3887 ;------------------------------------------------------------
                                   3888 ;pipe_num                  Allocated with name '_available_pipe_num_1_218'
                                   3889 ;buffer                    Allocated with name '_available_buffer_1_219'
                                   3890 ;status                    Allocated with name '_available_status_1_219'
                                   3891 ;result                    Allocated with name '_available_result_1_219'
                                   3892 ;------------------------------------------------------------
                                   3893 ;	../nRFLE.c:200: unsigned char available(uint8_t* pipe_num)
                                   3894 ;	-----------------------------------------
                                   3895 ;	 function available
                                   3896 ;	-----------------------------------------
      000E64                       3897 _available:
      000E64 AF F0            [24] 3898 	mov	r7,b
      000E66 AE 83            [24] 3899 	mov	r6,dph
      000E68 E5 82            [12] 3900 	mov	a,dpl
      000E6A 90 00 78         [24] 3901 	mov	dptr,#_available_pipe_num_1_218
      000E6D F0               [24] 3902 	movx	@dptr,a
      000E6E EE               [12] 3903 	mov	a,r6
      000E6F A3               [24] 3904 	inc	dptr
      000E70 F0               [24] 3905 	movx	@dptr,a
      000E71 EF               [12] 3906 	mov	a,r7
      000E72 A3               [24] 3907 	inc	dptr
      000E73 F0               [24] 3908 	movx	@dptr,a
                                   3909 ;	../nRFLE.c:203: uint8_t status = rf_get_status();
      000E74 90 00 16         [24] 3910 	mov	dptr,#_rf_spi_execute_command_PARM_2
      000E77 E4               [12] 3911 	clr	a
      000E78 F0               [24] 3912 	movx	@dptr,a
      000E79 A3               [24] 3913 	inc	dptr
      000E7A F0               [24] 3914 	movx	@dptr,a
      000E7B A3               [24] 3915 	inc	dptr
      000E7C F0               [24] 3916 	movx	@dptr,a
      000E7D 90 00 19         [24] 3917 	mov	dptr,#_rf_spi_execute_command_PARM_3
      000E80 F0               [24] 3918 	movx	@dptr,a
      000E81 A3               [24] 3919 	inc	dptr
      000E82 F0               [24] 3920 	movx	@dptr,a
      000E83 90 00 1B         [24] 3921 	mov	dptr,#_rf_spi_execute_command_PARM_4
      000E86 04               [12] 3922 	inc	a
      000E87 F0               [24] 3923 	movx	@dptr,a
      000E88 75 82 FF         [24] 3924 	mov	dpl,#0xff
      000E8B 12 02 2B         [24] 3925 	lcall	_rf_spi_execute_command
      000E8E AF 82            [24] 3926 	mov	r7,dpl
                                   3927 ;	../nRFLE.c:206: uint8_t result = ( status & _BV(RX_DR) );
      000E90 74 40            [12] 3928 	mov	a,#0x40
      000E92 5F               [12] 3929 	anl	a,r7
                                   3930 ;	../nRFLE.c:208: if (result)
      000E93 FE               [12] 3931 	mov	r6,a
      000E94 60 6E            [24] 3932 	jz	00104$
                                   3933 ;	../nRFLE.c:212: *pipe_num = ( status >> RX_P_NO ) & 7;
      000E96 90 00 78         [24] 3934 	mov	dptr,#_available_pipe_num_1_218
      000E99 E0               [24] 3935 	movx	a,@dptr
      000E9A FB               [12] 3936 	mov	r3,a
      000E9B A3               [24] 3937 	inc	dptr
      000E9C E0               [24] 3938 	movx	a,@dptr
      000E9D FC               [12] 3939 	mov	r4,a
      000E9E A3               [24] 3940 	inc	dptr
      000E9F E0               [24] 3941 	movx	a,@dptr
      000EA0 FD               [12] 3942 	mov	r5,a
      000EA1 EF               [12] 3943 	mov	a,r7
      000EA2 C3               [12] 3944 	clr	c
      000EA3 13               [12] 3945 	rrc	a
      000EA4 FA               [12] 3946 	mov	r2,a
      000EA5 53 02 07         [24] 3947 	anl	ar2,#0x07
      000EA8 8B 82            [24] 3948 	mov	dpl,r3
      000EAA 8C 83            [24] 3949 	mov	dph,r4
      000EAC 8D F0            [24] 3950 	mov	b,r5
      000EAE EA               [12] 3951 	mov	a,r2
      000EAF 12 15 93         [24] 3952 	lcall	__gptrput
                                   3953 ;	../nRFLE.c:214: buffer=64;// _BV(RX_DR);
      000EB2 90 00 7B         [24] 3954 	mov	dptr,#_available_buffer_1_219
      000EB5 74 40            [12] 3955 	mov	a,#0x40
      000EB7 F0               [24] 3956 	movx	@dptr,a
                                   3957 ;	../nRFLE.c:215: rf_write_register(STATUS,&buffer,1 ); 
      000EB8 90 00 06         [24] 3958 	mov	dptr,#_rf_write_register_PARM_2
      000EBB 74 7B            [12] 3959 	mov	a,#_available_buffer_1_219
      000EBD F0               [24] 3960 	movx	@dptr,a
      000EBE 74 00            [12] 3961 	mov	a,#(_available_buffer_1_219 >> 8)
      000EC0 A3               [24] 3962 	inc	dptr
      000EC1 F0               [24] 3963 	movx	@dptr,a
      000EC2 E4               [12] 3964 	clr	a
      000EC3 A3               [24] 3965 	inc	dptr
      000EC4 F0               [24] 3966 	movx	@dptr,a
      000EC5 90 00 09         [24] 3967 	mov	dptr,#_rf_write_register_PARM_3
      000EC8 04               [12] 3968 	inc	a
      000EC9 F0               [24] 3969 	movx	@dptr,a
      000ECA E4               [12] 3970 	clr	a
      000ECB A3               [24] 3971 	inc	dptr
      000ECC F0               [24] 3972 	movx	@dptr,a
      000ECD 75 82 07         [24] 3973 	mov	dpl,#0x07
      000ED0 C0 07            [24] 3974 	push	ar7
      000ED2 C0 06            [24] 3975 	push	ar6
      000ED4 12 00 B7         [24] 3976 	lcall	_rf_write_register
      000ED7 D0 06            [24] 3977 	pop	ar6
      000ED9 D0 07            [24] 3978 	pop	ar7
                                   3979 ;	../nRFLE.c:218: if ( status & _BV(TX_DS) )
      000EDB EF               [12] 3980 	mov	a,r7
      000EDC 30 E5 25         [24] 3981 	jnb	acc.5,00104$
                                   3982 ;	../nRFLE.c:220: buffer=32;// _BV(TX_DS);
      000EDF 90 00 7B         [24] 3983 	mov	dptr,#_available_buffer_1_219
      000EE2 74 20            [12] 3984 	mov	a,#0x20
      000EE4 F0               [24] 3985 	movx	@dptr,a
                                   3986 ;	../nRFLE.c:221: rf_write_register(STATUS,&buffer,1 );
      000EE5 90 00 06         [24] 3987 	mov	dptr,#_rf_write_register_PARM_2
      000EE8 74 7B            [12] 3988 	mov	a,#_available_buffer_1_219
      000EEA F0               [24] 3989 	movx	@dptr,a
      000EEB 74 00            [12] 3990 	mov	a,#(_available_buffer_1_219 >> 8)
      000EED A3               [24] 3991 	inc	dptr
      000EEE F0               [24] 3992 	movx	@dptr,a
      000EEF E4               [12] 3993 	clr	a
      000EF0 A3               [24] 3994 	inc	dptr
      000EF1 F0               [24] 3995 	movx	@dptr,a
      000EF2 90 00 09         [24] 3996 	mov	dptr,#_rf_write_register_PARM_3
      000EF5 04               [12] 3997 	inc	a
      000EF6 F0               [24] 3998 	movx	@dptr,a
      000EF7 E4               [12] 3999 	clr	a
      000EF8 A3               [24] 4000 	inc	dptr
      000EF9 F0               [24] 4001 	movx	@dptr,a
      000EFA 75 82 07         [24] 4002 	mov	dpl,#0x07
      000EFD C0 06            [24] 4003 	push	ar6
      000EFF 12 00 B7         [24] 4004 	lcall	_rf_write_register
      000F02 D0 06            [24] 4005 	pop	ar6
      000F04                       4006 00104$:
                                   4007 ;	../nRFLE.c:225: return result;
      000F04 8E 82            [24] 4008 	mov	dpl,r6
      000F06 22               [24] 4009 	ret
                                   4010 ;------------------------------------------------------------
                                   4011 ;Allocation info for local variables in function 'OneWireReset'
                                   4012 ;------------------------------------------------------------
                                   4013 ;r                         Allocated with name '_OneWireReset_r_1_225'
                                   4014 ;------------------------------------------------------------
                                   4015 ;	../libraries/ds18b20/ds18b20.c:10: static uint8_t OneWireReset(void)
                                   4016 ;	-----------------------------------------
                                   4017 ;	 function OneWireReset
                                   4018 ;	-----------------------------------------
      000F07                       4019 _OneWireReset:
                                   4020 ;	../libraries/ds18b20/ds18b20.c:16: );
      000F07 90 00 36         [24] 4021 	mov	dptr,#_gpio_pin_configure_PARM_2
      000F0A 74 01            [12] 4022 	mov	a,#0x01
      000F0C F0               [24] 4023 	movx	@dptr,a
      000F0D 75 82 0B         [24] 4024 	mov	dpl,#0x0b
      000F10 12 04 B6         [24] 4025 	lcall	_gpio_pin_configure
                                   4026 ;	../libraries/ds18b20/ds18b20.c:17: delay_us(480);
      000F13 90 01 E0         [24] 4027 	mov	dptr,#0x01e0
      000F16 12 08 40         [24] 4028 	lcall	_delay_us
                                   4029 ;	../libraries/ds18b20/ds18b20.c:19: GPIO_PIN_CONFIG_OPTION_DIR_INPUT
      000F19 90 00 36         [24] 4030 	mov	dptr,#_gpio_pin_configure_PARM_2
      000F1C E4               [12] 4031 	clr	a
      000F1D F0               [24] 4032 	movx	@dptr,a
      000F1E 75 82 0B         [24] 4033 	mov	dpl,#0x0b
      000F21 12 04 B6         [24] 4034 	lcall	_gpio_pin_configure
                                   4035 ;	../libraries/ds18b20/ds18b20.c:21: delay_us(80);
      000F24 90 00 50         [24] 4036 	mov	dptr,#0x0050
      000F27 12 08 40         [24] 4037 	lcall	_delay_us
                                   4038 ;	../libraries/ds18b20/ds18b20.c:22: r = !gpio_pin_val_read(DSPIN);
      000F2A 75 82 0B         [24] 4039 	mov	dpl,#0x0b
      000F2D 12 06 BA         [24] 4040 	lcall	_gpio_pin_val_read
      000F30 E5 82            [12] 4041 	mov	a,dpl
      000F32 FF               [12] 4042 	mov	r7,a
      000F33 B4 01 00         [24] 4043 	cjne	a,#0x01,00103$
      000F36                       4044 00103$:
      000F36 92 00            [24] 4045 	mov  _OneWireReset_sloc0_1_0,c
      000F38 E4               [12] 4046 	clr	a
      000F39 33               [12] 4047 	rlc	a
      000F3A FF               [12] 4048 	mov	r7,a
                                   4049 ;	../libraries/ds18b20/ds18b20.c:23: delay_us(400);
      000F3B 90 01 90         [24] 4050 	mov	dptr,#0x0190
      000F3E C0 07            [24] 4051 	push	ar7
      000F40 12 08 40         [24] 4052 	lcall	_delay_us
      000F43 D0 07            [24] 4053 	pop	ar7
                                   4054 ;	../libraries/ds18b20/ds18b20.c:24: return r;
      000F45 8F 82            [24] 4055 	mov	dpl,r7
      000F47 22               [24] 4056 	ret
                                   4057 ;------------------------------------------------------------
                                   4058 ;Allocation info for local variables in function 'OneWireOutByte'
                                   4059 ;------------------------------------------------------------
                                   4060 ;d                         Allocated with name '_OneWireOutByte_d_1_226'
                                   4061 ;n                         Allocated with name '_OneWireOutByte_n_1_227'
                                   4062 ;------------------------------------------------------------
                                   4063 ;	../libraries/ds18b20/ds18b20.c:27: static void OneWireOutByte(uint8_t d)
                                   4064 ;	-----------------------------------------
                                   4065 ;	 function OneWireOutByte
                                   4066 ;	-----------------------------------------
      000F48                       4067 _OneWireOutByte:
      000F48 E5 82            [12] 4068 	mov	a,dpl
      000F4A 90 00 7C         [24] 4069 	mov	dptr,#_OneWireOutByte_d_1_226
      000F4D F0               [24] 4070 	movx	@dptr,a
                                   4071 ;	../libraries/ds18b20/ds18b20.c:30: interrupt_control_global_disable();
      000F4E C2 AF            [12] 4072 	clr	_IEN0_SB_GLOBAL 
                                   4073 ;	../libraries/ds18b20/ds18b20.c:31: for(n = 8; n > 0; n--) {
      000F50 7F 08            [12] 4074 	mov	r7,#0x08
      000F52                       4075 00105$:
                                   4076 ;	../libraries/ds18b20/ds18b20.c:32: if (d & 0x01) {
      000F52 90 00 7C         [24] 4077 	mov	dptr,#_OneWireOutByte_d_1_226
      000F55 E0               [24] 4078 	movx	a,@dptr
      000F56 FE               [12] 4079 	mov	r6,a
      000F57 30 E0 29         [24] 4080 	jnb	acc.0,00102$
                                   4081 ;	../libraries/ds18b20/ds18b20.c:36: );
      000F5A 90 00 36         [24] 4082 	mov	dptr,#_gpio_pin_configure_PARM_2
      000F5D 74 01            [12] 4083 	mov	a,#0x01
      000F5F F0               [24] 4084 	movx	@dptr,a
      000F60 75 82 0B         [24] 4085 	mov	dpl,#0x0b
      000F63 C0 07            [24] 4086 	push	ar7
      000F65 12 04 B6         [24] 4087 	lcall	_gpio_pin_configure
                                   4088 ;	../libraries/ds18b20/ds18b20.c:37: delay_us(1);
      000F68 90 00 01         [24] 4089 	mov	dptr,#0x0001
      000F6B 12 08 40         [24] 4090 	lcall	_delay_us
                                   4091 ;	../libraries/ds18b20/ds18b20.c:39: GPIO_PIN_CONFIG_OPTION_DIR_INPUT
      000F6E 90 00 36         [24] 4092 	mov	dptr,#_gpio_pin_configure_PARM_2
      000F71 E4               [12] 4093 	clr	a
      000F72 F0               [24] 4094 	movx	@dptr,a
      000F73 75 82 0B         [24] 4095 	mov	dpl,#0x0b
      000F76 12 04 B6         [24] 4096 	lcall	_gpio_pin_configure
                                   4097 ;	../libraries/ds18b20/ds18b20.c:41: delay_us(49);
      000F79 90 00 31         [24] 4098 	mov	dptr,#0x0031
      000F7C 12 08 40         [24] 4099 	lcall	_delay_us
      000F7F D0 07            [24] 4100 	pop	ar7
      000F81 80 27            [24] 4101 	sjmp	00103$
      000F83                       4102 00102$:
                                   4103 ;	../libraries/ds18b20/ds18b20.c:47: );
      000F83 90 00 36         [24] 4104 	mov	dptr,#_gpio_pin_configure_PARM_2
      000F86 74 01            [12] 4105 	mov	a,#0x01
      000F88 F0               [24] 4106 	movx	@dptr,a
      000F89 75 82 0B         [24] 4107 	mov	dpl,#0x0b
      000F8C C0 07            [24] 4108 	push	ar7
      000F8E 12 04 B6         [24] 4109 	lcall	_gpio_pin_configure
                                   4110 ;	../libraries/ds18b20/ds18b20.c:48: delay_us(49);
      000F91 90 00 31         [24] 4111 	mov	dptr,#0x0031
      000F94 12 08 40         [24] 4112 	lcall	_delay_us
                                   4113 ;	../libraries/ds18b20/ds18b20.c:50: GPIO_PIN_CONFIG_OPTION_DIR_INPUT
      000F97 90 00 36         [24] 4114 	mov	dptr,#_gpio_pin_configure_PARM_2
      000F9A E4               [12] 4115 	clr	a
      000F9B F0               [24] 4116 	movx	@dptr,a
      000F9C 75 82 0B         [24] 4117 	mov	dpl,#0x0b
      000F9F 12 04 B6         [24] 4118 	lcall	_gpio_pin_configure
                                   4119 ;	../libraries/ds18b20/ds18b20.c:52: delay_us(1);
      000FA2 90 00 01         [24] 4120 	mov	dptr,#0x0001
      000FA5 12 08 40         [24] 4121 	lcall	_delay_us
      000FA8 D0 07            [24] 4122 	pop	ar7
      000FAA                       4123 00103$:
                                   4124 ;	../libraries/ds18b20/ds18b20.c:54: d = d >> 1;
      000FAA 90 00 7C         [24] 4125 	mov	dptr,#_OneWireOutByte_d_1_226
      000FAD E0               [24] 4126 	movx	a,@dptr
      000FAE C3               [12] 4127 	clr	c
      000FAF 13               [12] 4128 	rrc	a
      000FB0 FE               [12] 4129 	mov	r6,a
      000FB1 F0               [24] 4130 	movx	@dptr,a
                                   4131 ;	../libraries/ds18b20/ds18b20.c:31: for(n = 8; n > 0; n--) {
      000FB2 DF 9E            [24] 4132 	djnz	r7,00105$
                                   4133 ;	../libraries/ds18b20/ds18b20.c:56: interrupt_control_global_enable();
      000FB4 D2 AF            [12] 4134 	setb	_IEN0_SB_GLOBAL 
      000FB6 22               [24] 4135 	ret
                                   4136 ;------------------------------------------------------------
                                   4137 ;Allocation info for local variables in function 'OneWireInByte'
                                   4138 ;------------------------------------------------------------
                                   4139 ;d                         Allocated with name '_OneWireInByte_d_1_233'
                                   4140 ;n                         Allocated with name '_OneWireInByte_n_1_233'
                                   4141 ;b                         Allocated with name '_OneWireInByte_b_1_233'
                                   4142 ;------------------------------------------------------------
                                   4143 ;	../libraries/ds18b20/ds18b20.c:59: static uint8_t OneWireInByte(void)
                                   4144 ;	-----------------------------------------
                                   4145 ;	 function OneWireInByte
                                   4146 ;	-----------------------------------------
      000FB7                       4147 _OneWireInByte:
                                   4148 ;	../libraries/ds18b20/ds18b20.c:61: uint8_t d = 0, n, b = 0;
      000FB7 90 00 7D         [24] 4149 	mov	dptr,#_OneWireInByte_d_1_233
      000FBA E4               [12] 4150 	clr	a
      000FBB F0               [24] 4151 	movx	@dptr,a
                                   4152 ;	../libraries/ds18b20/ds18b20.c:62: interrupt_control_global_disable();
      000FBC C2 AF            [12] 4153 	clr	_IEN0_SB_GLOBAL 
                                   4154 ;	../libraries/ds18b20/ds18b20.c:63: for (n = 0; n < 8; n++) {
      000FBE 7F 00            [12] 4155 	mov	r7,#0x00
      000FC0                       4156 00102$:
                                   4157 ;	../libraries/ds18b20/ds18b20.c:67: );
      000FC0 90 00 36         [24] 4158 	mov	dptr,#_gpio_pin_configure_PARM_2
      000FC3 74 01            [12] 4159 	mov	a,#0x01
      000FC5 F0               [24] 4160 	movx	@dptr,a
      000FC6 75 82 0B         [24] 4161 	mov	dpl,#0x0b
      000FC9 C0 07            [24] 4162 	push	ar7
      000FCB 12 04 B6         [24] 4163 	lcall	_gpio_pin_configure
                                   4164 ;	../libraries/ds18b20/ds18b20.c:68: delay_us(1);
      000FCE 90 00 01         [24] 4165 	mov	dptr,#0x0001
      000FD1 12 08 40         [24] 4166 	lcall	_delay_us
                                   4167 ;	../libraries/ds18b20/ds18b20.c:70: GPIO_PIN_CONFIG_OPTION_DIR_INPUT
      000FD4 90 00 36         [24] 4168 	mov	dptr,#_gpio_pin_configure_PARM_2
      000FD7 E4               [12] 4169 	clr	a
      000FD8 F0               [24] 4170 	movx	@dptr,a
      000FD9 75 82 0B         [24] 4171 	mov	dpl,#0x0b
      000FDC 12 04 B6         [24] 4172 	lcall	_gpio_pin_configure
                                   4173 ;	../libraries/ds18b20/ds18b20.c:72: delay_us(2);
      000FDF 90 00 02         [24] 4174 	mov	dptr,#0x0002
      000FE2 12 08 40         [24] 4175 	lcall	_delay_us
                                   4176 ;	../libraries/ds18b20/ds18b20.c:73: b = gpio_pin_val_read(DSPIN);
      000FE5 75 82 0B         [24] 4177 	mov	dpl,#0x0b
      000FE8 12 06 BA         [24] 4178 	lcall	_gpio_pin_val_read
      000FEB AE 82            [24] 4179 	mov	r6,dpl
                                   4180 ;	../libraries/ds18b20/ds18b20.c:74: delay_us(60);
      000FED 90 00 3C         [24] 4181 	mov	dptr,#0x003c
      000FF0 C0 06            [24] 4182 	push	ar6
      000FF2 12 08 40         [24] 4183 	lcall	_delay_us
      000FF5 D0 06            [24] 4184 	pop	ar6
      000FF7 D0 07            [24] 4185 	pop	ar7
                                   4186 ;	../libraries/ds18b20/ds18b20.c:75: d = (d >> 1) | (b << 7);
      000FF9 90 00 7D         [24] 4187 	mov	dptr,#_OneWireInByte_d_1_233
      000FFC E0               [24] 4188 	movx	a,@dptr
      000FFD C3               [12] 4189 	clr	c
      000FFE 13               [12] 4190 	rrc	a
      000FFF FD               [12] 4191 	mov	r5,a
      001000 EE               [12] 4192 	mov	a,r6
      001001 03               [12] 4193 	rr	a
      001002 54 80            [12] 4194 	anl	a,#0x80
      001004 FE               [12] 4195 	mov	r6,a
      001005 4D               [12] 4196 	orl	a,r5
      001006 F0               [24] 4197 	movx	@dptr,a
                                   4198 ;	../libraries/ds18b20/ds18b20.c:63: for (n = 0; n < 8; n++) {
      001007 0F               [12] 4199 	inc	r7
      001008 BF 08 00         [24] 4200 	cjne	r7,#0x08,00113$
      00100B                       4201 00113$:
      00100B 40 B3            [24] 4202 	jc	00102$
                                   4203 ;	../libraries/ds18b20/ds18b20.c:77: interrupt_control_global_enable();
      00100D D2 AF            [12] 4204 	setb	_IEN0_SB_GLOBAL 
                                   4205 ;	../libraries/ds18b20/ds18b20.c:78: return d;
      00100F 90 00 7D         [24] 4206 	mov	dptr,#_OneWireInByte_d_1_233
      001012 E0               [24] 4207 	movx	a,@dptr
      001013 F5 82            [12] 4208 	mov	dpl,a
      001015 22               [24] 4209 	ret
                                   4210 ;------------------------------------------------------------
                                   4211 ;Allocation info for local variables in function 'ds18b20_read'
                                   4212 ;------------------------------------------------------------
                                   4213 ;temp                      Allocated with name '_ds18b20_read_temp_1_236'
                                   4214 ;i                         Allocated with name '_ds18b20_read_i_1_237'
                                   4215 ;data                      Allocated with name '_ds18b20_read_data_1_237'
                                   4216 ;crc                       Allocated with name '_ds18b20_read_crc_1_237'
                                   4217 ;trow                      Allocated with name '_ds18b20_read_trow_1_237'
                                   4218 ;convtm                    Allocated with name '_ds18b20_read_convtm_1_237'
                                   4219 ;decimal                   Allocated with name '_ds18b20_read_decimal_1_237'
                                   4220 ;------------------------------------------------------------
                                   4221 ;	../libraries/ds18b20/ds18b20.c:82: dserror_t ds18b20_read(int *temp)
                                   4222 ;	-----------------------------------------
                                   4223 ;	 function ds18b20_read
                                   4224 ;	-----------------------------------------
      001016                       4225 _ds18b20_read:
      001016 AF F0            [24] 4226 	mov	r7,b
      001018 AE 83            [24] 4227 	mov	r6,dph
      00101A E5 82            [12] 4228 	mov	a,dpl
      00101C 90 00 7E         [24] 4229 	mov	dptr,#_ds18b20_read_temp_1_236
      00101F F0               [24] 4230 	movx	@dptr,a
      001020 EE               [12] 4231 	mov	a,r6
      001021 A3               [24] 4232 	inc	dptr
      001022 F0               [24] 4233 	movx	@dptr,a
      001023 EF               [12] 4234 	mov	a,r7
      001024 A3               [24] 4235 	inc	dptr
      001025 F0               [24] 4236 	movx	@dptr,a
                                   4237 ;	../libraries/ds18b20/ds18b20.c:90: if (!OneWireReset()) {
      001026 12 0F 07         [24] 4238 	lcall	_OneWireReset
      001029 E5 82            [12] 4239 	mov	a,dpl
      00102B 70 04            [24] 4240 	jnz	00102$
                                   4241 ;	../libraries/ds18b20/ds18b20.c:91: return DS_NOT_FOUND;
      00102D 75 82 01         [24] 4242 	mov	dpl,#0x01
      001030 22               [24] 4243 	ret
      001031                       4244 00102$:
                                   4245 ;	../libraries/ds18b20/ds18b20.c:94: OneWireOutByte(SKIP_ROM_CMD);
      001031 75 82 CC         [24] 4246 	mov	dpl,#0xcc
      001034 12 0F 48         [24] 4247 	lcall	_OneWireOutByte
                                   4248 ;	../libraries/ds18b20/ds18b20.c:97: OneWireOutByte(WRITE_SCR_CMD);
      001037 75 82 4E         [24] 4249 	mov	dpl,#0x4e
      00103A 12 0F 48         [24] 4250 	lcall	_OneWireOutByte
                                   4251 ;	../libraries/ds18b20/ds18b20.c:98: OneWireOutByte(REG_TH);
      00103D 75 82 00         [24] 4252 	mov	dpl,#0x00
      001040 12 0F 48         [24] 4253 	lcall	_OneWireOutByte
                                   4254 ;	../libraries/ds18b20/ds18b20.c:99: OneWireOutByte(REG_TL);
      001043 75 82 FF         [24] 4255 	mov	dpl,#0xff
      001046 12 0F 48         [24] 4256 	lcall	_OneWireOutByte
                                   4257 ;	../libraries/ds18b20/ds18b20.c:100: OneWireOutByte(REG_CONFIG);
      001049 75 82 3F         [24] 4258 	mov	dpl,#0x3f
      00104C 12 0F 48         [24] 4259 	lcall	_OneWireOutByte
                                   4260 ;	../libraries/ds18b20/ds18b20.c:102: if (!OneWireReset()) {
      00104F 12 0F 07         [24] 4261 	lcall	_OneWireReset
      001052 E5 82            [12] 4262 	mov	a,dpl
      001054 70 04            [24] 4263 	jnz	00104$
                                   4264 ;	../libraries/ds18b20/ds18b20.c:103: return DS_NOT_FOUND;
      001056 75 82 01         [24] 4265 	mov	dpl,#0x01
      001059 22               [24] 4266 	ret
      00105A                       4267 00104$:
                                   4268 ;	../libraries/ds18b20/ds18b20.c:106: OneWireOutByte(SKIP_ROM_CMD);
      00105A 75 82 CC         [24] 4269 	mov	dpl,#0xcc
      00105D 12 0F 48         [24] 4270 	lcall	_OneWireOutByte
                                   4271 ;	../libraries/ds18b20/ds18b20.c:108: OneWireOutByte(START_CONV_CMD);
      001060 75 82 44         [24] 4272 	mov	dpl,#0x44
      001063 12 0F 48         [24] 4273 	lcall	_OneWireOutByte
                                   4274 ;	../libraries/ds18b20/ds18b20.c:112: while (!gpio_pin_val_read(DSPIN) && --convtm > 0);
      001066 7E 90            [12] 4275 	mov	r6,#0x90
      001068 7F 01            [12] 4276 	mov	r7,#0x01
      00106A                       4277 00106$:
      00106A 75 82 0B         [24] 4278 	mov	dpl,#0x0b
      00106D C0 07            [24] 4279 	push	ar7
      00106F C0 06            [24] 4280 	push	ar6
      001071 12 06 BA         [24] 4281 	lcall	_gpio_pin_val_read
      001074 E5 82            [12] 4282 	mov	a,dpl
      001076 D0 06            [24] 4283 	pop	ar6
      001078 D0 07            [24] 4284 	pop	ar7
      00107A 70 09            [24] 4285 	jnz	00108$
      00107C 1E               [12] 4286 	dec	r6
      00107D BE FF 01         [24] 4287 	cjne	r6,#0xff,00162$
      001080 1F               [12] 4288 	dec	r7
      001081                       4289 00162$:
      001081 EE               [12] 4290 	mov	a,r6
      001082 4F               [12] 4291 	orl	a,r7
      001083 70 E5            [24] 4292 	jnz	00106$
      001085                       4293 00108$:
                                   4294 ;	../libraries/ds18b20/ds18b20.c:114: if (convtm == 0) {
      001085 EE               [12] 4295 	mov	a,r6
      001086 4F               [12] 4296 	orl	a,r7
      001087 70 04            [24] 4297 	jnz	00110$
                                   4298 ;	../libraries/ds18b20/ds18b20.c:115: return DS_TIMEOUT;
      001089 75 82 02         [24] 4299 	mov	dpl,#0x02
      00108C 22               [24] 4300 	ret
      00108D                       4301 00110$:
                                   4302 ;	../libraries/ds18b20/ds18b20.c:118: if (!OneWireReset()) {
      00108D 12 0F 07         [24] 4303 	lcall	_OneWireReset
      001090 E5 82            [12] 4304 	mov	a,dpl
      001092 70 04            [24] 4305 	jnz	00112$
                                   4306 ;	../libraries/ds18b20/ds18b20.c:119: return DS_NOT_FOUND;
      001094 75 82 01         [24] 4307 	mov	dpl,#0x01
      001097 22               [24] 4308 	ret
      001098                       4309 00112$:
                                   4310 ;	../libraries/ds18b20/ds18b20.c:122: OneWireOutByte(SKIP_ROM_CMD);
      001098 75 82 CC         [24] 4311 	mov	dpl,#0xcc
      00109B 12 0F 48         [24] 4312 	lcall	_OneWireOutByte
                                   4313 ;	../libraries/ds18b20/ds18b20.c:124: OneWireOutByte(READ_SCR_CMD);
      00109E 75 82 BE         [24] 4314 	mov	dpl,#0xbe
      0010A1 12 0F 48         [24] 4315 	lcall	_OneWireOutByte
                                   4316 ;	../libraries/ds18b20/ds18b20.c:126: for (i = 0; i < 9; i++) {
      0010A4 7F 00            [12] 4317 	mov	r7,#0x00
      0010A6                       4318 00120$:
                                   4319 ;	../libraries/ds18b20/ds18b20.c:128: data[i] = OneWireInByte();
      0010A6 EF               [12] 4320 	mov	a,r7
      0010A7 24 82            [12] 4321 	add	a,#_ds18b20_read_data_1_237
      0010A9 FD               [12] 4322 	mov	r5,a
      0010AA E4               [12] 4323 	clr	a
      0010AB 34 00            [12] 4324 	addc	a,#(_ds18b20_read_data_1_237 >> 8)
      0010AD FE               [12] 4325 	mov	r6,a
      0010AE C0 07            [24] 4326 	push	ar7
      0010B0 C0 06            [24] 4327 	push	ar6
      0010B2 C0 05            [24] 4328 	push	ar5
      0010B4 12 0F B7         [24] 4329 	lcall	_OneWireInByte
      0010B7 AC 82            [24] 4330 	mov	r4,dpl
      0010B9 D0 05            [24] 4331 	pop	ar5
      0010BB D0 06            [24] 4332 	pop	ar6
      0010BD D0 07            [24] 4333 	pop	ar7
      0010BF 8D 82            [24] 4334 	mov	dpl,r5
      0010C1 8E 83            [24] 4335 	mov	dph,r6
      0010C3 EC               [12] 4336 	mov	a,r4
      0010C4 F0               [24] 4337 	movx	@dptr,a
                                   4338 ;	../libraries/ds18b20/ds18b20.c:126: for (i = 0; i < 9; i++) {
      0010C5 0F               [12] 4339 	inc	r7
      0010C6 BF 09 00         [24] 4340 	cjne	r7,#0x09,00166$
      0010C9                       4341 00166$:
      0010C9 40 DB            [24] 4342 	jc	00120$
                                   4343 ;	../libraries/ds18b20/ds18b20.c:131: if (CRC8(data, 8) != data[8]) {
      0010CB 90 00 00         [24] 4344 	mov	dptr,#_CRC8_PARM_2
      0010CE 74 08            [12] 4345 	mov	a,#0x08
      0010D0 F0               [24] 4346 	movx	@dptr,a
      0010D1 90 00 82         [24] 4347 	mov	dptr,#_ds18b20_read_data_1_237
      0010D4 75 F0 00         [24] 4348 	mov	b,#0x00
      0010D7 12 00 00         [24] 4349 	lcall	_CRC8
      0010DA AF 82            [24] 4350 	mov	r7,dpl
      0010DC 90 00 8A         [24] 4351 	mov	dptr,#(_ds18b20_read_data_1_237 + 0x0008)
      0010DF E0               [24] 4352 	movx	a,@dptr
      0010E0 FE               [12] 4353 	mov	r6,a
      0010E1 EF               [12] 4354 	mov	a,r7
      0010E2 B5 06 02         [24] 4355 	cjne	a,ar6,00168$
      0010E5 80 04            [24] 4356 	sjmp	00115$
      0010E7                       4357 00168$:
                                   4358 ;	../libraries/ds18b20/ds18b20.c:132: return DS_CRC_ERROR;
      0010E7 75 82 03         [24] 4359 	mov	dpl,#0x03
      0010EA 22               [24] 4360 	ret
      0010EB                       4361 00115$:
                                   4362 ;	../libraries/ds18b20/ds18b20.c:136: trow = ((int16_t) data[1] << 8) | data[0];
      0010EB 90 00 83         [24] 4363 	mov	dptr,#(_ds18b20_read_data_1_237 + 0x0001)
      0010EE E0               [24] 4364 	movx	a,@dptr
      0010EF FE               [12] 4365 	mov	r6,a
      0010F0 7F 00            [12] 4366 	mov	r7,#0x00
      0010F2 90 00 82         [24] 4367 	mov	dptr,#_ds18b20_read_data_1_237
      0010F5 E0               [24] 4368 	movx	a,@dptr
      0010F6 FD               [12] 4369 	mov	r5,a
      0010F7 7C 00            [12] 4370 	mov	r4,#0x00
      0010F9 42 07            [12] 4371 	orl	ar7,a
      0010FB EC               [12] 4372 	mov	a,r4
      0010FC 42 06            [12] 4373 	orl	ar6,a
      0010FE 90 00 8B         [24] 4374 	mov	dptr,#_ds18b20_read_trow_1_237
      001101 EF               [12] 4375 	mov	a,r7
      001102 F0               [24] 4376 	movx	@dptr,a
      001103 EE               [12] 4377 	mov	a,r6
      001104 A3               [24] 4378 	inc	dptr
      001105 F0               [24] 4379 	movx	@dptr,a
                                   4380 ;	../libraries/ds18b20/ds18b20.c:139: i = 0;
      001106 90 00 81         [24] 4381 	mov	dptr,#_ds18b20_read_i_1_237
      001109 E4               [12] 4382 	clr	a
      00110A F0               [24] 4383 	movx	@dptr,a
                                   4384 ;	../libraries/ds18b20/ds18b20.c:140: if (trow & 0x8000) {
      00110B EE               [12] 4385 	mov	a,r6
      00110C 30 E7 17         [24] 4386 	jnb	acc.7,00117$
                                   4387 ;	../libraries/ds18b20/ds18b20.c:142: trow = ~trow + 1;
      00110F EF               [12] 4388 	mov	a,r7
      001110 F4               [12] 4389 	cpl	a
      001111 FF               [12] 4390 	mov	r7,a
      001112 EE               [12] 4391 	mov	a,r6
      001113 F4               [12] 4392 	cpl	a
      001114 FE               [12] 4393 	mov	r6,a
      001115 90 00 8B         [24] 4394 	mov	dptr,#_ds18b20_read_trow_1_237
      001118 74 01            [12] 4395 	mov	a,#0x01
      00111A 2F               [12] 4396 	add	a,r7
      00111B F0               [24] 4397 	movx	@dptr,a
      00111C E4               [12] 4398 	clr	a
      00111D 3E               [12] 4399 	addc	a,r6
      00111E A3               [24] 4400 	inc	dptr
      00111F F0               [24] 4401 	movx	@dptr,a
                                   4402 ;	../libraries/ds18b20/ds18b20.c:143: i = 1;
      001120 90 00 81         [24] 4403 	mov	dptr,#_ds18b20_read_i_1_237
      001123 74 01            [12] 4404 	mov	a,#0x01
      001125 F0               [24] 4405 	movx	@dptr,a
      001126                       4406 00117$:
                                   4407 ;	../libraries/ds18b20/ds18b20.c:146: decimal = (float)((int16_t) trow >> 2) / 4;	// 10bit
      001126 90 00 8B         [24] 4408 	mov	dptr,#_ds18b20_read_trow_1_237
      001129 E0               [24] 4409 	movx	a,@dptr
      00112A FE               [12] 4410 	mov	r6,a
      00112B A3               [24] 4411 	inc	dptr
      00112C E0               [24] 4412 	movx	a,@dptr
      00112D A2 E7            [12] 4413 	mov	c,acc.7
      00112F 13               [12] 4414 	rrc	a
      001130 CE               [12] 4415 	xch	a,r6
      001131 13               [12] 4416 	rrc	a
      001132 CE               [12] 4417 	xch	a,r6
      001133 A2 E7            [12] 4418 	mov	c,acc.7
      001135 13               [12] 4419 	rrc	a
      001136 CE               [12] 4420 	xch	a,r6
      001137 13               [12] 4421 	rrc	a
      001138 CE               [12] 4422 	xch	a,r6
      001139 FF               [12] 4423 	mov	r7,a
      00113A 8E 82            [24] 4424 	mov	dpl,r6
      00113C 8F 83            [24] 4425 	mov	dph,r7
      00113E 12 15 AE         [24] 4426 	lcall	___sint2fs
      001141 AC 82            [24] 4427 	mov	r4,dpl
      001143 AD 83            [24] 4428 	mov	r5,dph
      001145 AE F0            [24] 4429 	mov	r6,b
      001147 FF               [12] 4430 	mov	r7,a
      001148 E4               [12] 4431 	clr	a
      001149 C0 E0            [24] 4432 	push	acc
      00114B C0 E0            [24] 4433 	push	acc
      00114D 74 80            [12] 4434 	mov	a,#0x80
      00114F C0 E0            [24] 4435 	push	acc
      001151 03               [12] 4436 	rr	a
      001152 C0 E0            [24] 4437 	push	acc
      001154 8C 82            [24] 4438 	mov	dpl,r4
      001156 8D 83            [24] 4439 	mov	dph,r5
      001158 8E F0            [24] 4440 	mov	b,r6
      00115A EF               [12] 4441 	mov	a,r7
      00115B 12 16 3E         [24] 4442 	lcall	___fsdiv
      00115E AC 82            [24] 4443 	mov	r4,dpl
      001160 AD 83            [24] 4444 	mov	r5,dph
      001162 AE F0            [24] 4445 	mov	r6,b
      001164 FF               [12] 4446 	mov	r7,a
      001165 E5 81            [12] 4447 	mov	a,sp
      001167 24 FC            [12] 4448 	add	a,#0xfc
      001169 F5 81            [12] 4449 	mov	sp,a
      00116B 90 00 8D         [24] 4450 	mov	dptr,#_ds18b20_read_decimal_1_237
      00116E EC               [12] 4451 	mov	a,r4
      00116F F0               [24] 4452 	movx	@dptr,a
      001170 ED               [12] 4453 	mov	a,r5
      001171 A3               [24] 4454 	inc	dptr
      001172 F0               [24] 4455 	movx	@dptr,a
      001173 EE               [12] 4456 	mov	a,r6
      001174 A3               [24] 4457 	inc	dptr
      001175 F0               [24] 4458 	movx	@dptr,a
      001176 EF               [12] 4459 	mov	a,r7
      001177 A3               [24] 4460 	inc	dptr
      001178 F0               [24] 4461 	movx	@dptr,a
                                   4462 ;	../libraries/ds18b20/ds18b20.c:147: if (i) {
      001179 90 00 81         [24] 4463 	mov	dptr,#_ds18b20_read_i_1_237
      00117C E0               [24] 4464 	movx	a,@dptr
      00117D 60 10            [24] 4465 	jz	00119$
                                   4466 ;	../libraries/ds18b20/ds18b20.c:148: decimal = 0 - decimal;
      00117F 90 00 8D         [24] 4467 	mov	dptr,#_ds18b20_read_decimal_1_237
      001182 EC               [12] 4468 	mov	a,r4
      001183 F0               [24] 4469 	movx	@dptr,a
      001184 ED               [12] 4470 	mov	a,r5
      001185 A3               [24] 4471 	inc	dptr
      001186 F0               [24] 4472 	movx	@dptr,a
      001187 EE               [12] 4473 	mov	a,r6
      001188 A3               [24] 4474 	inc	dptr
      001189 F0               [24] 4475 	movx	@dptr,a
      00118A EF               [12] 4476 	mov	a,r7
      00118B B2 E7            [12] 4477 	cpl	acc.7
      00118D A3               [24] 4478 	inc	dptr
      00118E F0               [24] 4479 	movx	@dptr,a
      00118F                       4480 00119$:
                                   4481 ;	../libraries/ds18b20/ds18b20.c:151: *temp = (int) (decimal * 10);
      00118F 90 00 7E         [24] 4482 	mov	dptr,#_ds18b20_read_temp_1_236
      001192 E0               [24] 4483 	movx	a,@dptr
      001193 FD               [12] 4484 	mov	r5,a
      001194 A3               [24] 4485 	inc	dptr
      001195 E0               [24] 4486 	movx	a,@dptr
      001196 FE               [12] 4487 	mov	r6,a
      001197 A3               [24] 4488 	inc	dptr
      001198 E0               [24] 4489 	movx	a,@dptr
      001199 FF               [12] 4490 	mov	r7,a
      00119A C0 07            [24] 4491 	push	ar7
      00119C C0 06            [24] 4492 	push	ar6
      00119E C0 05            [24] 4493 	push	ar5
      0011A0 90 00 8D         [24] 4494 	mov	dptr,#_ds18b20_read_decimal_1_237
      0011A3 E0               [24] 4495 	movx	a,@dptr
      0011A4 C0 E0            [24] 4496 	push	acc
      0011A6 A3               [24] 4497 	inc	dptr
      0011A7 E0               [24] 4498 	movx	a,@dptr
      0011A8 C0 E0            [24] 4499 	push	acc
      0011AA A3               [24] 4500 	inc	dptr
      0011AB E0               [24] 4501 	movx	a,@dptr
      0011AC C0 E0            [24] 4502 	push	acc
      0011AE A3               [24] 4503 	inc	dptr
      0011AF E0               [24] 4504 	movx	a,@dptr
      0011B0 C0 E0            [24] 4505 	push	acc
      0011B2 90 00 00         [24] 4506 	mov	dptr,#0x0000
      0011B5 75 F0 20         [24] 4507 	mov	b,#0x20
      0011B8 74 41            [12] 4508 	mov	a,#0x41
      0011BA 12 13 7C         [24] 4509 	lcall	___fsmul
      0011BD A9 82            [24] 4510 	mov	r1,dpl
      0011BF AA 83            [24] 4511 	mov	r2,dph
      0011C1 AB F0            [24] 4512 	mov	r3,b
      0011C3 FC               [12] 4513 	mov	r4,a
      0011C4 E5 81            [12] 4514 	mov	a,sp
      0011C6 24 FC            [12] 4515 	add	a,#0xfc
      0011C8 F5 81            [12] 4516 	mov	sp,a
      0011CA 89 82            [24] 4517 	mov	dpl,r1
      0011CC 8A 83            [24] 4518 	mov	dph,r2
      0011CE 8B F0            [24] 4519 	mov	b,r3
      0011D0 EC               [12] 4520 	mov	a,r4
      0011D1 12 15 BB         [24] 4521 	lcall	___fs2sint
      0011D4 AB 82            [24] 4522 	mov	r3,dpl
      0011D6 AC 83            [24] 4523 	mov	r4,dph
      0011D8 D0 05            [24] 4524 	pop	ar5
      0011DA D0 06            [24] 4525 	pop	ar6
      0011DC D0 07            [24] 4526 	pop	ar7
      0011DE 8D 82            [24] 4527 	mov	dpl,r5
      0011E0 8E 83            [24] 4528 	mov	dph,r6
      0011E2 8F F0            [24] 4529 	mov	b,r7
      0011E4 EB               [12] 4530 	mov	a,r3
      0011E5 12 15 93         [24] 4531 	lcall	__gptrput
      0011E8 A3               [24] 4532 	inc	dptr
      0011E9 EC               [12] 4533 	mov	a,r4
      0011EA 12 15 93         [24] 4534 	lcall	__gptrput
                                   4535 ;	../libraries/ds18b20/ds18b20.c:153: return DS_NO_ERROR;
      0011ED 75 82 00         [24] 4536 	mov	dpl,#0x00
      0011F0 22               [24] 4537 	ret
                                   4538 ;------------------------------------------------------------
                                   4539 ;Allocation info for local variables in function 'main'
                                   4540 ;------------------------------------------------------------
                                   4541 ;countloop                 Allocated with name '_main_countloop_1_247'
                                   4542 ;sleep_counter             Allocated with name '_main_sleep_counter_1_247'
                                   4543 ;ret                       Allocated with name '_main_ret_1_247'
                                   4544 ;------------------------------------------------------------
                                   4545 ;	main.c:33: void main()
                                   4546 ;	-----------------------------------------
                                   4547 ;	 function main
                                   4548 ;	-----------------------------------------
      0011F1                       4549 _main:
                                   4550 ;	main.c:40: CLKLFCTRL = 1;
      0011F1 75 AD 01         [24] 4551 	mov	_CLKLFCTRL,#0x01
                                   4552 ;	main.c:41: rtc2_configure(RTC2_CONFIG_OPTION_COMPARE_MODE_0_RESET_AT_IRQ , 65535); //65535=2 сек, 32767=1 сек
      0011F4 90 00 65         [24] 4553 	mov	dptr,#_rtc2_configure_PARM_2
      0011F7 74 FF            [12] 4554 	mov	a,#0xff
      0011F9 F0               [24] 4555 	movx	@dptr,a
      0011FA A3               [24] 4556 	inc	dptr
      0011FB F0               [24] 4557 	movx	@dptr,a
      0011FC 75 82 06         [24] 4558 	mov	dpl,#0x06
      0011FF 12 0B DF         [24] 4559 	lcall	_rtc2_configure
                                   4560 ;	main.c:42: rtc2_run();
      001202 43 B3 01         [24] 4561 	orl	_RTC2CON,#0x01
                                   4562 ;	main.c:43: pwr_clk_mgmt_wakeup_configure(PWR_CLK_MGMT_WAKEUP_CONFIG_OPTION_WAKEUP_ON_RTC2_TICK_ALWAYS,0);
      001205 90 00 4C         [24] 4563 	mov	dptr,#_pwr_clk_mgmt_wakeup_configure_PARM_2
      001208 E4               [12] 4564 	clr	a
      001209 F0               [24] 4565 	movx	@dptr,a
      00120A A3               [24] 4566 	inc	dptr
      00120B F0               [24] 4567 	movx	@dptr,a
      00120C 75 82 20         [24] 4568 	mov	dpl,#0x20
      00120F 12 09 A1         [24] 4569 	lcall	_pwr_clk_mgmt_wakeup_configure
                                   4570 ;	main.c:44: pwr_clk_mgmt_pwr_failure_configure(PWR_CLK_MGMT_PWR_FAILURE_CONFIG_OPTION_POF_ENABLE|POF);
      001212 75 82 E0         [24] 4571 	mov	dpl,#0xe0
      001215 12 09 B7         [24] 4572 	lcall	_pwr_clk_mgmt_pwr_failure_configure
                                   4573 ;	main.c:45: interrupt_control_global_enable();
      001218 D2 AF            [12] 4574 	setb	_IEN0_SB_GLOBAL 
                                   4575 ;	main.c:47: if ((PWRDWN&0x7)==0x3) {
      00121A 74 07            [12] 4576 	mov	a,#0x07
      00121C 55 A4            [12] 4577 	anl	a,_PWRDWN
      00121E FF               [12] 4578 	mov	r7,a
      00121F BF 03 02         [24] 4579 	cjne	r7,#0x03,00145$
      001222 80 03            [24] 4580 	sjmp	00146$
      001224                       4581 00145$:
      001224 02 12 AF         [24] 4582 	ljmp	00107$
      001227                       4583 00146$:
                                   4584 ;	main.c:48: PWRDWN=0x0;
      001227 75 A4 00         [24] 4585 	mov	_PWRDWN,#0x00
                                   4586 ;	main.c:49: RSTREAS=0x0;
      00122A 75 B1 00         [24] 4587 	mov	_RSTREAS,#0x00
                                   4588 ;	main.c:50: if (sleep_counter<(SEND_INTERVAL/2)) {
      00122D 90 01 10         [24] 4589 	mov	dptr,#_main_sleep_counter_1_247
      001230 E0               [24] 4590 	movx	a,@dptr
      001231 FE               [12] 4591 	mov	r6,a
      001232 A3               [24] 4592 	inc	dptr
      001233 E0               [24] 4593 	movx	a,@dptr
      001234 FF               [12] 4594 	mov	r7,a
      001235 C3               [12] 4595 	clr	c
      001236 EE               [12] 4596 	mov	a,r6
      001237 94 96            [12] 4597 	subb	a,#0x96
      001239 EF               [12] 4598 	mov	a,r7
      00123A 64 80            [12] 4599 	xrl	a,#0x80
      00123C 94 80            [12] 4600 	subb	a,#0x80
      00123E 50 0F            [24] 4601 	jnc	00102$
                                   4602 ;	main.c:51: sleep_counter++;
      001240 90 01 10         [24] 4603 	mov	dptr,#_main_sleep_counter_1_247
      001243 E0               [24] 4604 	movx	a,@dptr
      001244 24 01            [12] 4605 	add	a,#0x01
      001246 F0               [24] 4606 	movx	@dptr,a
      001247 A3               [24] 4607 	inc	dptr
      001248 E0               [24] 4608 	movx	a,@dptr
      001249 34 00            [12] 4609 	addc	a,#0x00
      00124B F0               [24] 4610 	movx	@dptr,a
                                   4611 ;	main.c:52: pwr_clk_mgmt_enter_pwr_mode_memory_ret_tmr_on();
      00124C 75 A4 03         [24] 4612 	mov	_PWRDWN,#0x03
      00124F                       4613 00102$:
                                   4614 ;	main.c:54: if (countloop < 2147483646) {
      00124F 90 01 00         [24] 4615 	mov	dptr,#_main_countloop_1_247
      001252 E0               [24] 4616 	movx	a,@dptr
      001253 FC               [12] 4617 	mov	r4,a
      001254 A3               [24] 4618 	inc	dptr
      001255 E0               [24] 4619 	movx	a,@dptr
      001256 FD               [12] 4620 	mov	r5,a
      001257 A3               [24] 4621 	inc	dptr
      001258 E0               [24] 4622 	movx	a,@dptr
      001259 FE               [12] 4623 	mov	r6,a
      00125A A3               [24] 4624 	inc	dptr
      00125B E0               [24] 4625 	movx	a,@dptr
      00125C FF               [12] 4626 	mov	r7,a
      00125D C3               [12] 4627 	clr	c
      00125E EC               [12] 4628 	mov	a,r4
      00125F 94 FE            [12] 4629 	subb	a,#0xfe
      001261 ED               [12] 4630 	mov	a,r5
      001262 94 FF            [12] 4631 	subb	a,#0xff
      001264 EE               [12] 4632 	mov	a,r6
      001265 94 FF            [12] 4633 	subb	a,#0xff
      001267 EF               [12] 4634 	mov	a,r7
      001268 64 80            [12] 4635 	xrl	a,#0x80
      00126A 94 FF            [12] 4636 	subb	a,#0xff
      00126C 50 18            [24] 4637 	jnc	00104$
                                   4638 ;	main.c:55: countloop++;
      00126E 90 01 00         [24] 4639 	mov	dptr,#_main_countloop_1_247
      001271 E0               [24] 4640 	movx	a,@dptr
      001272 24 01            [12] 4641 	add	a,#0x01
      001274 F0               [24] 4642 	movx	@dptr,a
      001275 A3               [24] 4643 	inc	dptr
      001276 E0               [24] 4644 	movx	a,@dptr
      001277 34 00            [12] 4645 	addc	a,#0x00
      001279 F0               [24] 4646 	movx	@dptr,a
      00127A A3               [24] 4647 	inc	dptr
      00127B E0               [24] 4648 	movx	a,@dptr
      00127C 34 00            [12] 4649 	addc	a,#0x00
      00127E F0               [24] 4650 	movx	@dptr,a
      00127F A3               [24] 4651 	inc	dptr
      001280 E0               [24] 4652 	movx	a,@dptr
      001281 34 00            [12] 4653 	addc	a,#0x00
      001283 F0               [24] 4654 	movx	@dptr,a
      001284 80 0B            [24] 4655 	sjmp	00105$
      001286                       4656 00104$:
                                   4657 ;	main.c:57: countloop = 0;
      001286 90 01 00         [24] 4658 	mov	dptr,#_main_countloop_1_247
      001289 E4               [12] 4659 	clr	a
      00128A F0               [24] 4660 	movx	@dptr,a
      00128B A3               [24] 4661 	inc	dptr
      00128C F0               [24] 4662 	movx	@dptr,a
      00128D A3               [24] 4663 	inc	dptr
      00128E F0               [24] 4664 	movx	@dptr,a
      00128F A3               [24] 4665 	inc	dptr
      001290 F0               [24] 4666 	movx	@dptr,a
      001291                       4667 00105$:
                                   4668 ;	main.c:59: clientnf.count=countloop;
      001291 90 01 00         [24] 4669 	mov	dptr,#_main_countloop_1_247
      001294 E0               [24] 4670 	movx	a,@dptr
      001295 FC               [12] 4671 	mov	r4,a
      001296 A3               [24] 4672 	inc	dptr
      001297 E0               [24] 4673 	movx	a,@dptr
      001298 FD               [12] 4674 	mov	r5,a
      001299 A3               [24] 4675 	inc	dptr
      00129A E0               [24] 4676 	movx	a,@dptr
      00129B FE               [12] 4677 	mov	r6,a
      00129C A3               [24] 4678 	inc	dptr
      00129D E0               [24] 4679 	movx	a,@dptr
      00129E FF               [12] 4680 	mov	r7,a
      00129F 90 00 93         [24] 4681 	mov	dptr,#(_clientnf + 0x0002)
      0012A2 EC               [12] 4682 	mov	a,r4
      0012A3 F0               [24] 4683 	movx	@dptr,a
      0012A4 ED               [12] 4684 	mov	a,r5
      0012A5 A3               [24] 4685 	inc	dptr
      0012A6 F0               [24] 4686 	movx	@dptr,a
      0012A7 EE               [12] 4687 	mov	a,r6
      0012A8 A3               [24] 4688 	inc	dptr
      0012A9 F0               [24] 4689 	movx	@dptr,a
      0012AA EF               [12] 4690 	mov	a,r7
      0012AB A3               [24] 4691 	inc	dptr
      0012AC F0               [24] 4692 	movx	@dptr,a
      0012AD 80 15            [24] 4693 	sjmp	00108$
      0012AF                       4694 00107$:
                                   4695 ;	main.c:61: countloop = 0;
      0012AF 90 01 00         [24] 4696 	mov	dptr,#_main_countloop_1_247
      0012B2 E4               [12] 4697 	clr	a
      0012B3 F0               [24] 4698 	movx	@dptr,a
      0012B4 A3               [24] 4699 	inc	dptr
      0012B5 F0               [24] 4700 	movx	@dptr,a
      0012B6 A3               [24] 4701 	inc	dptr
      0012B7 F0               [24] 4702 	movx	@dptr,a
      0012B8 A3               [24] 4703 	inc	dptr
      0012B9 F0               [24] 4704 	movx	@dptr,a
                                   4705 ;	main.c:62: clientnf.count = 0;
      0012BA 90 00 93         [24] 4706 	mov	dptr,#(_clientnf + 0x0002)
      0012BD F0               [24] 4707 	movx	@dptr,a
      0012BE A3               [24] 4708 	inc	dptr
      0012BF F0               [24] 4709 	movx	@dptr,a
      0012C0 A3               [24] 4710 	inc	dptr
      0012C1 F0               [24] 4711 	movx	@dptr,a
      0012C2 A3               [24] 4712 	inc	dptr
      0012C3 F0               [24] 4713 	movx	@dptr,a
      0012C4                       4714 00108$:
                                   4715 ;	main.c:65: radiobegin();
      0012C4 12 0C 13         [24] 4716 	lcall	_radiobegin
                                   4717 ;	main.c:66: openAllPipe();
      0012C7 12 0D B0         [24] 4718 	lcall	_openAllPipe
                                   4719 ;	main.c:68: setChannel(CHANNEL);
      0012CA 75 82 4B         [24] 4720 	mov	dpl,#0x4b
      0012CD 12 0C 37         [24] 4721 	lcall	_setChannel
                                   4722 ;	main.c:69: setDataRate(SPEED);
      0012D0 75 82 01         [24] 4723 	mov	dpl,#0x01
      0012D3 12 0C 58         [24] 4724 	lcall	_setDataRate
                                   4725 ;	main.c:70: setAutoAck(AutoAck);
      0012D6 75 82 00         [24] 4726 	mov	dpl,#0x00
      0012D9 12 0C BC         [24] 4727 	lcall	_setAutoAck
                                   4728 ;	main.c:71: setCRCLength(Crclength);
      0012DC 75 82 02         [24] 4729 	mov	dpl,#0x02
      0012DF 12 0C EF         [24] 4730 	lcall	_setCRCLength
                                   4731 ;	main.c:72: setPALevel(PAlevel);
      0012E2 75 82 03         [24] 4732 	mov	dpl,#0x03
      0012E5 12 0D 5C         [24] 4733 	lcall	_setPALevel
                                   4734 ;	main.c:74: clientnf.identifier=chclient;
      0012E8 90 00 91         [24] 4735 	mov	dptr,#_clientnf
      0012EB 74 03            [12] 4736 	mov	a,#0x03
      0012ED F0               [24] 4737 	movx	@dptr,a
                                   4738 ;	main.c:77: ret = ds18b20_read(&DSTemp);
      0012EE 90 00 9A         [24] 4739 	mov	dptr,#_DSTemp
      0012F1 75 F0 00         [24] 4740 	mov	b,#0x00
      0012F4 12 10 16         [24] 4741 	lcall	_ds18b20_read
                                   4742 ;	main.c:78: if (ret == DS_NO_ERROR) {
      0012F7 E5 82            [12] 4743 	mov	a,dpl
      0012F9 FF               [12] 4744 	mov	r7,a
      0012FA 70 12            [24] 4745 	jnz	00110$
                                   4746 ;	main.c:79: clientnf.temp = DSTemp;
      0012FC 90 00 9A         [24] 4747 	mov	dptr,#_DSTemp
      0012FF E0               [24] 4748 	movx	a,@dptr
      001300 FD               [12] 4749 	mov	r5,a
      001301 A3               [24] 4750 	inc	dptr
      001302 E0               [24] 4751 	movx	a,@dptr
      001303 FE               [12] 4752 	mov	r6,a
      001304 90 00 98         [24] 4753 	mov	dptr,#(_clientnf + 0x0007)
      001307 ED               [12] 4754 	mov	a,r5
      001308 F0               [24] 4755 	movx	@dptr,a
      001309 EE               [12] 4756 	mov	a,r6
      00130A A3               [24] 4757 	inc	dptr
      00130B F0               [24] 4758 	movx	@dptr,a
      00130C 80 07            [24] 4759 	sjmp	00111$
      00130E                       4760 00110$:
                                   4761 ;	main.c:81: clientnf.temp = 0;
      00130E 90 00 98         [24] 4762 	mov	dptr,#(_clientnf + 0x0007)
      001311 E4               [12] 4763 	clr	a
      001312 F0               [24] 4764 	movx	@dptr,a
      001313 A3               [24] 4765 	inc	dptr
      001314 F0               [24] 4766 	movx	@dptr,a
      001315                       4767 00111$:
                                   4768 ;	main.c:83: clientnf.error = ret;
      001315 90 00 97         [24] 4769 	mov	dptr,#(_clientnf + 0x0006)
      001318 EF               [12] 4770 	mov	a,r7
      001319 F0               [24] 4771 	movx	@dptr,a
                                   4772 ;	main.c:97: if(pwr_clk_mgmt_is_vdd_below_bor_threshold()) { // power control
      00131A E5 DC            [12] 4773 	mov	a,_POFCON
      00131C 30 E4 08         [24] 4774 	jnb	acc.4,00113$
                                   4775 ;	main.c:98: clientnf.powerControl = 1; // < 2.7
      00131F 90 00 92         [24] 4776 	mov	dptr,#(_clientnf + 0x0001)
      001322 74 01            [12] 4777 	mov	a,#0x01
      001324 F0               [24] 4778 	movx	@dptr,a
      001325 80 05            [24] 4779 	sjmp	00114$
      001327                       4780 00113$:
                                   4781 ;	main.c:100: clientnf.powerControl = 0; // > 2.7
      001327 90 00 92         [24] 4782 	mov	dptr,#(_clientnf + 0x0001)
      00132A E4               [12] 4783 	clr	a
      00132B F0               [24] 4784 	movx	@dptr,a
      00132C                       4785 00114$:
                                   4786 ;	main.c:103: rf_power_up(1);
      00132C 75 82 01         [24] 4787 	mov	dpl,#0x01
      00132F 12 04 48         [24] 4788 	lcall	_rf_power_up
                                   4789 ;	main.c:104: rf_write_tx_payload((const uint8_t*)&clientnf, 32, true);
      001332 90 00 0C         [24] 4790 	mov	dptr,#_rf_write_tx_payload_PARM_2
      001335 74 20            [12] 4791 	mov	a,#0x20
      001337 F0               [24] 4792 	movx	@dptr,a
      001338 E4               [12] 4793 	clr	a
      001339 A3               [24] 4794 	inc	dptr
      00133A F0               [24] 4795 	movx	@dptr,a
      00133B 90 00 0E         [24] 4796 	mov	dptr,#_rf_write_tx_payload_PARM_3
      00133E 04               [12] 4797 	inc	a
      00133F F0               [24] 4798 	movx	@dptr,a
      001340 90 00 91         [24] 4799 	mov	dptr,#_clientnf
      001343 75 F0 00         [24] 4800 	mov	b,#0x00
      001346 12 00 FC         [24] 4801 	lcall	_rf_write_tx_payload
                                   4802 ;	main.c:105: while(!(rf_irq_pin_active() && rf_irq_tx_ds_active()));
      001349                       4803 00116$:
      001349 30 C1 FD         [24] 4804 	jnb	_IRCON_SB_RFIRQ,00116$
      00134C 90 00 16         [24] 4805 	mov	dptr,#_rf_spi_execute_command_PARM_2
      00134F E4               [12] 4806 	clr	a
      001350 F0               [24] 4807 	movx	@dptr,a
      001351 A3               [24] 4808 	inc	dptr
      001352 F0               [24] 4809 	movx	@dptr,a
      001353 A3               [24] 4810 	inc	dptr
      001354 F0               [24] 4811 	movx	@dptr,a
      001355 90 00 19         [24] 4812 	mov	dptr,#_rf_spi_execute_command_PARM_3
      001358 F0               [24] 4813 	movx	@dptr,a
      001359 A3               [24] 4814 	inc	dptr
      00135A F0               [24] 4815 	movx	@dptr,a
      00135B 90 00 1B         [24] 4816 	mov	dptr,#_rf_spi_execute_command_PARM_4
      00135E 04               [12] 4817 	inc	a
      00135F F0               [24] 4818 	movx	@dptr,a
      001360 75 82 FF         [24] 4819 	mov	dpl,#0xff
      001363 12 02 2B         [24] 4820 	lcall	_rf_spi_execute_command
      001366 E5 82            [12] 4821 	mov	a,dpl
      001368 30 E5 DE         [24] 4822 	jnb	acc.5,00116$
                                   4823 ;	main.c:106: rf_irq_clear_all();
      00136B 12 01 BF         [24] 4824 	lcall	_rf_irq_clear_all
                                   4825 ;	main.c:107: rf_power_down();
      00136E 12 04 00         [24] 4826 	lcall	_rf_power_down
                                   4827 ;	main.c:108: sleep_counter=0;
      001371 90 01 10         [24] 4828 	mov	dptr,#_main_sleep_counter_1_247
      001374 E4               [12] 4829 	clr	a
      001375 F0               [24] 4830 	movx	@dptr,a
      001376 A3               [24] 4831 	inc	dptr
      001377 F0               [24] 4832 	movx	@dptr,a
                                   4833 ;	main.c:109: pwr_clk_mgmt_enter_pwr_mode_memory_ret_tmr_on();
      001378 75 A4 03         [24] 4834 	mov	_PWRDWN,#0x03
      00137B 22               [24] 4835 	ret
                                   4836 	.area CSEG    (CODE)
                                   4837 	.area CONST   (CODE)
                                   4838 	.area XINIT   (CODE)
                                   4839 	.area CABS    (ABS,CODE)
