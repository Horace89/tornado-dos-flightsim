AH64		OBJECTHEADER <OBJ_SCALE16,512,AH64_3,0,COL_BLACK1,24,31,17>
		DB	062,100,072	;   0
		DB	062,098,070	;   1
		DB	066,098,070	;   2
		DB	058,090,070	;   3
		DB	070,090,070	;   4
		DB	068,072,076	;   5
		DB	060,072,076	;   6
		DB	048,072,076	;   7
		DB	080,072,076	;   8
		DB	080,066,076	;   9
		DB	048,066,076	;  10
		DB	068,064,074	;  11
		DB	060,064,074	;  12
		DB	064,014,076	;  13
		DB	052,014,076	;  14
		DB	076,014,076	;  15
		DB	052,010,076	;  16
		DB	076,010,076	;  17
		DB	064,006,088	;  18
		DB	060,092,074	;  19
		DB	068,092,074	;  20
		DB	060,076,078	;  21
		DB	068,076,078	;  22
		DB	060,090,078	;  23
		DB	068,090,078	;  24
		DB	066,074,082	;  25
		DB	062,074,082	;  26
		DB	060,094,072	;  27
		DB	068,094,072	;  28
		DB	060,082,076	;  29
		DB	068,082,076	;  30
		DB	060,092,076	;  31
		DB	068,092,076	;  32
		DB	062,082,082	;  33
		DB	066,082,082	;  34
		DB	062,100,074	;  35
		DB	066,100,074	;  36
		DB	062,046,078	;  37
		DB	068,046,076	;  38
		DB	060,046,076	;  39
		DB	064,020,076	;  40
		DB	064,012,088	;  41
		DB	064,014,072	;  42
		DB	062,014,074	;  43
		DB	066,014,074	;  44
		DB	056,068,082	;  45
		DB	072,068,082	;  46
		DB	060,068,082	;  47
		DB	068,068,082	;  48
		DB	056,054,082	;  49
		DB	072,054,082	;  50
		DB	060,052,082	;  51
		DB	068,052,082	;  52
		DB	060,052,078	;  53
		DB	056,054,078	;  54
		DB	056,068,078	;  55
		DB	060,068,078	;  56
		DB	068,068,078	;  57
		DB	072,068,078	;  58
		DB	072,054,078	;  59
		DB	068,052,078	;  60
		DB	058,070,080	;  61
		DB	070,070,080	;  62
		DB	066,050,070	;  63
		DB	048,074,074	;  64
		DB	048,070,074	;  65
		DB	080,070,074	;  66
		DB	080,074,074	;  67
		DB	058,090,074	;  68
		DB	070,090,074	;  69
		DB	058,072,074	;  70
		DB	070,072,074	;  71
		DB	064,070,088	;  72
		DB	064,022,088	;  73
		DB	064,118,088	;  74
		DB	110,070,088	;  75
		DB	016,070,088	;  76
		DB	042,030,088	;  77
		DB	024,092,088	;  78
		DB	086,110,088	;  79
		DB	104,050,088	;  80
		DB	056,074,064	;  81
		DB	056,076,066	;  82
		DB	056,074,068	;  83
		DB	056,072,066	;  84
		DB	072,074,068	;  85
		DB	072,076,066	;  86
		DB	072,074,064	;  87
		DB	072,072,066	;  88
		DB	060,080,070	;  89
		DB	068,080,070	;  90
		DB	086,030,088	;  91
		DB	024,050,088	;  92
		DB	104,092,088	;  93
		DB	042,110,088	;  94
		DB	060,002,088	;  95
		DB	060,022,088	;  96
		DB	060,012,098	;  97
		DB	060,012,078	;  98
		DB	060,020,094	;  99
		DB	060,018,080	; 100
		DB	060,004,082	; 101
		DB	060,006,096	; 102
		DB	064,010,070	; 103
		DB	064,070,082	; 104
		DB	060,092,070	; 105
		DB	068,092,070	; 106
		DB	066,046,078	; 107
		DB	068,056,082	; 108
		DB	060,056,082	; 109
		DB	072,058,082	; 110
		DB	056,058,082	; 111
		DB	068,060,082	; 112
		DB	060,060,082	; 113
		DB	068,052,080	; 114
		DB	060,052,080	; 115
		DB	066,052,080	; 116
		DB	062,052,080	; 117
		DB	066,100,072	; 118
		DB	058,080,070	; 119
		DB	070,080,070	; 120
		DB	068,046,072	; 121
		DB	060,046,072	; 122
		DB	062,050,070	; 123
		DB	060,064,076	; 124
		DB	068,064,076	; 125
		DB	064,010,076	; 126
		DB	-1

		DW	OFFSET	AH64_1

		EVEN

AH64_1		DW	982

ah64mn_lo	DB	028h,08,02,06,126,-1
		DW	OFFSET ah64rtr_mn-$-2	; 
		DW	OFFSET ah64lo-$-2	; 
		DB	-1

ah64rtr_mn	DB	028h,150,148,152,36,-1
		DW	OFFSET ah64rtr_L-$-2	; 
		DW	OFFSET ah64cn_lf-$-2	; 
		DB	-1

ah64rtr_L	DB	046h		; GOSUB
		DW	OFFSET ah64rtr-$-2
		DB	044h,003h,000h		; SELECT rotor
		DW	OFFSET ah64rtr_b-$-2	; to ENDSELECT
		DW	OFFSET CASE1_8-$-2	; to CASE
		DW	OFFSET CASE2_9-$-2	; to CASE
		DW	OFFSET CASE3_10-$-2	; to CASE

ah64cn_lf	DB	028h,38,194,196,-1
		DW	OFFSET ah64cn_rt-$-2	; 
		DW	OFFSET ah64lflo_hi-$-2	; 
		DB	-1

ah64cn_rt	DB	028h,212,242,104,-1
		DW	OFFSET ah64cn-$-2	; 
		DW	OFFSET ah64rtlo_hi-$-2	; 
		DB	-1

ah64rtlo_hi	DB	028h,14,64,16,34,32,-1
		DW	OFFSET ah64rtlo-$-2	; 
		DW	OFFSET ah64rthi-$-2	; 
		DB	-1

ah64lflo_hi	DB	028h,14,64,16,34,32,-1
		DW	OFFSET ah64lflo-$-2	; 
		DW	OFFSET ah64lfhi-$-2	; 
		DB	-1


ah64rtr		LABEL	BYTE
		DB	-1

CASE1_8		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,144,146,154,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,144,152,156,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,144,148,158,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,144,150,160,-1	; rotor 1
		DB	-1

CASE2_9		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,144,182,146,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,144,186,150,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,144,188,148,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,144,184,152,-1	; rotor 2
		DB	-1

CASE3_10	LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,144,160,182,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,144,158,186,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,144,156,188,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,144,154,184,-1	; rotor 3
		DB	-1

ah64rtr_b	LABEL	BYTE
		DB	-1

ah64cn		LABEL	BYTE
		DB	008h,COL_OLIVE6,224,104,228,-1		; face 133
		DB	008h,COL_OLIVE6,226,230,102,-1		; face 133
		DB	008h,COL_OLIVE5,42,52,94,-1		; face 127
		DB	008h,COL_OLIVE5,96,50,44,-1		; face 128
		DB	008h,COL_OLIVE6,106,230,234,-1		; face 130
		DB	008h,COL_OLIVE6,232,228,120,-1		; face 131
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,82,36,26,80,-1	; face 36
		DB	008h,COL_OLIVE5,26,88,84,-1		; face 91
		DB	008h,COL_OLIVE5,84,86,26,-1		; face 92
		DB	008h,COL_DK_CYAN3,58,38,62,46,-1	; face 120
		DB	008h,COL_DK_CYAN3,60,48,64,40,-1	; face 119
		DB	008h,COL_DK_CYAN3,46,66,58,-1		; face 15
		DB	008h,COL_DK_CYAN3,48,60,68,-1		; face 16
		DB	008h,COL_DK_CYAN3,58,66,52,42,-1	; face 17
		DB	002h,4,COL_OLIVE4,66,58,-1		; line 99
		DB	008h,COL_DK_CYAN3,50,68,60,44,-1	; face 18
		DB	002h,4,COL_OLIVE4,60,68,-1		; line 100
		DB	008h,COL_DK_CYAN2,52,66,68,50,-1	; face 31
		DB	002h,6,COL_OLIVE4,68,50,52,66,-1	; line 98
		DB	008h,COL_DK_CYAN2,66,46,48,68,-1	; face 20
		DB	002h,6,COL_OLIVE4,48,68,66,46,-1	; line 97
		DB	008h,COL_DK_CYAN2,46,62,64,48,-1	; face 21
		DB	002h,6,COL_OLIVE4,62,46,48,64,-1	; line 96
		DB	008h,COL_OLIVE4,70,62,38,-1		; face 22
		DB	008h,COL_OLIVE4,72,40,64,-1		; face 23
		DB	008h,COL_OLIVE3,26,74,214,-1		; face 121
		DB	008h,COL_OLIVE4,74,26,86,78,-1		; face 122
		DB	008h,COL_OLIVE4,88,26,214,76,-1		; face 123
		DB	008h,COL_OLIVE3,96,224,226,94,52,50,-1	; face 126
		DB	002h,4,COL_OLIVE4,96,224,-1		; line 147
		DB	002h,4,COL_OLIVE4,226,94,-1		; line 146
		DB	008h,COL_OLIVE5,42,94,112,-1		; face 129
		DB	008h,COL_OLIVE5,44,114,96,-1		; face 130
		DB	008h,COL_OLIVE3,230,226,224,228,-1	; face 129
		DB	008h,COL_OLIVE3,74,234,232,214,-1	; face 129
		DB	008h,COL_OLIVE4,214,232,120,76,-1	; face 132
		DB	008h,COL_OLIVE4,106,234,74,78,-1	; face 133
		DB	008h,COL_OLIVE6,72,70,00,236,-1		; face 124
		DB	008h,COL_OLIVE6,00,02,04,236,-1		; face 125
		DB	008h,COL_OLIVE5,244,178,58,42,106,78,-1	; face 121
		DB	008h,COL_OLIVE5,60,180,242,76,120,44,-1	; face 121
		DB	008h,COL_OLIVE5,88,76,242,-1		; face 122
		DB	008h,COL_OLIVE5,86,244,78,-1		; face 123
		DB	00Eh,COL_GREY3,COL_GREY3,144,208,-1	; line 124
		DB	008h,COL_OLIVE3,212,04,02,210,178,246,126,180,-1	; face 122
		DB	008h,COL_OLIVE4,178,244,246,-1		; face 123
		DB	008h,COL_OLIVE4,180,126,242,-1		; face 124
		DB	008h,COL_OLIVE4,244,86,84,246,-1	; face 125
		DB	008h,COL_OLIVE4,126,84,88,242,-1	; face 126
		DB	008h,COL_OLIVE3,84,126,246,-1		; face 127
		DB	008h,COL_OLIVE6,38,00,70,-1		; face 124
		DB	008h,COL_OLIVE6,40,72,236,-1		; face 125
		DB	008h,COL_OLIVE6,00,38,54,-1		; face 126
		DB	008h,COL_OLIVE6,236,56,40,-1		; face 127
		DB	008h,COL_OLIVE3,72,64,62,70,-1		; face 129
		DB	008h,COL_OLIVE5,38,58,178,-1		; face 121
		DB	008h,COL_OLIVE5,180,60,40,-1		; face 121
		DB	008h,COL_OLIVE5,54,210,02,00,-1		; face 117
		DB	008h,COL_OLIVE5,04,212,56,236,-1	; face 118
		DB	00Ah,COL_OLIVE6,86,206,26,206,88,206,84,-1	; line 118
		DB	-1

ah64rtlo	LABEL	BYTE
		DB	008h,COL_OLIVE5,142,138,08,240,-1	; face 122
		DB	008h,COL_OLIVE5,56,08,138,-1		; face 68
		DB	008h,COL_OLIVE4,56,138,40,-1		; face 83
		DB	008h,COL_OLIVE4,56,212,08,-1		; face 125
		DB	008h,COL_OLIVE5,142,240,22,-1		; face 123
		DB	008h,COL_OLIVE3,212,180,240,08,-1	; face 127
		DB	008h,COL_OLIVE3,22,40,138,142,-1	; face 121
		DB	008h,COL_OLIVE3,22,240,180,-1		; face 123
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,16,134,132,18,-1	; face 65
		DB	00Ch,COL_OLIVE3,COL_OLIVE3,250,10,16,18,-1	; face 119
		DB	00Ch,COL_OLIVE3,COL_OLIVE3,34,252,26,30,-1	; face 123
		DB	-1

ah64rthi	LABEL	BYTE
		DB	008h,COL_OLIVE5,100,92,116,118,-1	; face 50
		DB	008h,COL_OLIVE6,104,100,118,120,-1	; face 105
		DB	008h,COL_OLIVE3,118,116,114,120,-1	; face 130
		DB	008h,COL_OLIVE6,216,220,100,104,-1	; face 123
		DB	008h,COL_OLIVE3,216,96,92,220,-1	; face 128
		DB	002h,4,COL_OLIVE4,224,96,-1		; line 145
		DB	002h,4,COL_OLIVE4,220,92,-1		; line 120
		DB	008h,COL_OLIVE4,96,124,92,-1		; face 54
		DB	002h,4,COL_OLIVE5,92,96,-1		; line 140
		DB	008h,COL_OLIVE5,92,124,116,-1		; face 57
		DB	002h,4,COL_OLIVE6,92,116,-1		; line 141
		DB	008h,COL_OLIVE5,114,124,96,-1		; face 58
		DB	002h,4,COL_OLIVE6,96,114,-1		; line 142
		DB	008h,COL_OLIVE4,116,124,114,-1		; face 60
		DB	002h,4,COL_OLIVE5,116,114,-1		; line 143
		DB	-1

ah64lflo	LABEL	BYTE
		DB	008h,COL_OLIVE5,54,136,06,-1		; face 67
		DB	008h,COL_OLIVE4,54,38,136,-1		; face 82
		DB	008h,COL_OLIVE4,06,210,54,-1		; face 124
		DB	008h,COL_OLIVE3,06,238,178,210,-1	; face 126
		DB	008h,COL_OLIVE5,238,06,136,140,-1	; face 123
		DB	008h,COL_OLIVE3,136,38,24,140,-1	; face 120
		DB	008h,COL_OLIVE5,140,24,238,-1		; face 121
		DB	008h,COL_OLIVE3,24,178,238,-1		; face 122
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,130,128,14,20,-1	; face 63
		DB	00Ch,COL_OLIVE3,COL_OLIVE3,20,14,12,248,-1	; face 118
		DB	00Ch,COL_OLIVE3,COL_OLIVE3,252,32,28,26,-1	; face 123
		DB	-1

ah64lfhi	LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,204,190,192,198,194,-1	; face 118
		DB	00Dh,COL_GREY1,COL_GREY1,200,192,190,202,196,-1	; face 118
		DB	008h,COL_OLIVE5,90,98,108,110,-1	; face 49
		DB	008h,COL_OLIVE6,98,102,106,108,-1	; face 106
		DB	008h,COL_OLIVE3,106,112,110,108,-1	; face 129
		DB	008h,COL_OLIVE6,98,222,218,102,-1	; face 122
		DB	008h,COL_OLIVE3,222,90,94,218,-1	; face 127
		DB	002h,4,COL_OLIVE4,226,94,-1		; line 144
		DB	002h,4,COL_OLIVE4,222,90,-1		; line 119
		DB	008h,COL_OLIVE4,90,122,94,-1		; face 53
		DB	002h,4,COL_OLIVE5,94,90,-1		; line 136
		DB	008h,COL_OLIVE5,110,122,90,-1		; face 55
		DB	002h,4,COL_OLIVE6,90,110,-1		; line 137
		DB	008h,COL_OLIVE5,94,122,112,-1		; face 56
		DB	002h,4,COL_OLIVE6,94,112,-1		; line 138
		DB	008h,COL_OLIVE4,112,122,110,-1		; face 59
		DB	002h,4,COL_OLIVE5,112,110,-1		; line 139
		DB	-1

ah64lo		LABEL	BYTE
		DB	00Ch,COL_GREY4,COL_GREY4,170,172,174,176,-1	; face 106
		DB	00Ch,COL_GREY4,COL_GREY4,166,168,162,164,-1	; face 105
		DB	00Ah,COL_OLIVE6,180,172,-1		; line 108
		DB	00Eh,COL_OLIVE6,COL_GREY3,178,164,-1	; line 107
		DB	-1

		EVEN

AH64_3		OBJECTHEADER <OBJ_SCALE4,1024,AH64_4,0,COL_BLACK1,6,8,4>
		DB	064,072,066	;   0
		DB	064,072,064	;   1
		DB	064,066,066	;   2
		DB	060,066,066	;   3
		DB	068,066,066	;   4
		DB	068,064,066	;   5
		DB	060,064,066	;   6
		DB	064,050,066	;   7
		DB	062,050,066	;   8
		DB	066,050,066	;   9
		DB	064,048,070	;  10
		DB	064,070,066	;  11
		DB	064,066,068	;  12
		DB	064,068,068	;  13
		DB	064,060,066	;  14
		DB	064,052,066	;  15
		DB	064,050,070	;  16
		DB	062,064,068	;  17
		DB	066,064,068	;  18
		DB	064,064,068	;  19
		DB	062,062,068	;  20
		DB	066,062,068	;  21
		DB	062,062,066	;  22
		DB	062,064,066	;  23
		DB	066,064,066	;  24
		DB	066,062,066	;  25
		DB	064,062,064	;  26
		DB	064,064,070	;  27
		DB	064,052,070	;  28
		DB	064,076,070	;  29
		DB	076,064,070	;  30
		DB	052,064,070	;  31
		DB	058,054,070	;  32
		DB	054,070,070	;  33
		DB	070,074,070	;  34
		DB	074,058,070	;  35
		DB	062,066,064	;  36
		DB	066,066,064	;  37
		DB	064,068,064	;  38
		DB	070,054,070	;  39
		DB	054,058,070	;  40
		DB	074,070,070	;  41
		DB	058,074,070	;  42
		DB	064,052,068	;  43
		DB	064,048,068	;  44
		DB	064,050,072	;  45
		DB	-1

		DW	OFFSET	AH64_3_1

		EVEN

AH64_3_1	DW	239

ah64rtr_mn3	DB	028h,60,58,62,20,-1
		DW	OFFSET ah64rtr3_L-$-2	; 
		DW	OFFSET ah64mn_lo3-$-2	; 
		DB	-1

ah64rtr3_L	DB	046h		; GOSUB
		DW	OFFSET ah64rtr3-$-2
		DB	044h,003h,000h		; SELECT rotor
		DW	OFFSET ah64rtr3_b-$-2	; to ENDSELECT
		DW	OFFSET CASE1_4-$-2	; to CASE
		DW	OFFSET CASE2_5-$-2	; to CASE
		DW	OFFSET CASE3_6-$-2	; to CASE

ah64mn_lo3	DB	028h,06,00,08,30,-1
		DW	OFFSET ah64mn3-$-2	; 
		DW	OFFSET ah64lo3-$-2	; 
		DB	-1


ah64rtr3	LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,90,20,56,-1	; face 118
		DB	-1

CASE1_4		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,54,56,64,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,54,62,66,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,54,58,68,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,54,60,70,-1	; rotor 1
		DB	-1

CASE2_5		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,54,78,56,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,54,82,60,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,54,84,58,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,54,80,62,-1	; rotor 2
		DB	-1

CASE3_6		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,54,70,78,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,54,68,82,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,54,66,84,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,54,64,80,-1	; rotor 3
		DB	-1

ah64rtr3_b	LABEL	BYTE
		DB	-1

ah64mn3		LABEL	BYTE
		DB	00Ch,COL_OLIVE4,COL_OLIVE4,28,14,52,76,-1	; face 93
		DB	00Ch,COL_OLIVE3,COL_OLIVE3,10,12,06,08,-1	; face 29
		DB	00Eh,COL_OLIVE3,COL_OLIVE3,18,16,-1	; line 26
		DB	00Ah,COL_OLIVE6,76,74,-1		; line 108
		DB	00Eh,COL_OLIVE6,COL_GREY3,76,72,-1	; line 107
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,76,02,00,28,-1	; face 25
		DB	-1

ah64lo3		LABEL	BYTE
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,14,20,32,30,-1	; face 36
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,28,04,24,38,-1	; face 26
		DB	004h,7,COL_DK_CYAN3,COL_DK_CYAN3,26,24,04,22,-1	; face 66
		DB	00Eh,COL_GREY3,COL_GREY3,54,38,-1	; line 124
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,42,36,48,50,-1	; face 50
		DB	00Dh,COL_GREY1,COL_GREY1,86,56,20,88,14,-1	; face 118
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,34,40,44,46,-1	; face 49
		DB	-1

		EVEN

AH64_4		OBJECTHEADER <OBJ_SCALE2,2048,-1,1,COL_OLIVE5,3,4,2>
		DB	064,068,064	;   0
		DB	062,064,064	;   1
		DB	066,064,064	;   2
		DB	064,058,064	;   3
		DB	064,056,066	;   4
		DB	064,064,066	;   5
		DB	064,066,066	;   6
		DB	064,062,064	;   7
		DB	064,058,066	;   8
		DB	064,070,066	;   9
		DB	070,064,066	;  10
		DB	058,064,066	;  11
		DB	062,060,066	;  12
		DB	060,066,066	;  13
		DB	066,068,066	;  14
		DB	068,062,066	;  15
		DB	066,060,066	;  16
		DB	060,062,066	;  17
		DB	068,066,066	;  18
		DB	062,068,066	;  19
		DB	064,058,068	;  20
		DB	-1

		DW	OFFSET	AH64_4_1

		EVEN

AH64_4_1	DW	184

ah64rtr_mn4	DB	028h,18,22,16,20,-1
		DW	OFFSET ah64rtr4_L-$-2	; 
		DW	OFFSET ah64mn4-$-2	; 
		DB	-1

ah64rtr4_L	DB	046h		; GOSUB
		DW	OFFSET ah64rtr4-$-2
		DB	044h,003h,000h		; SELECT rotor
		DW	OFFSET ah64rtr4_b-$-2	; to ENDSELECT
		DW	OFFSET CASE1_7-$-2	; to CASE
		DW	OFFSET CASE2_8-$-2	; to CASE
		DW	OFFSET CASE3_9-$-2	; to CASE


ah64rtr4	LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,40,08,16,-1	; face 118
		DB	-1

CASE1_7		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,10,16,24,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,10,22,26,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,10,18,28,-1	; rotor 1
		DB	00Dh,COL_GREY1,COL_GREY1,10,20,30,-1	; rotor 1
		DB	-1

CASE2_8		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,10,32,16,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,10,36,20,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,10,38,18,-1	; rotor 2
		DB	00Dh,COL_GREY1,COL_GREY1,10,34,22,-1	; rotor 2
		DB	-1

CASE3_9		LABEL	BYTE
		DB	00Dh,COL_GREY1,COL_GREY1,10,30,32,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,10,28,36,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,10,26,38,-1	; rotor 3
		DB	00Dh,COL_GREY1,COL_GREY1,10,24,34,-1	; rotor 3
		DB	-1

ah64rtr4_b	LABEL	BYTE
		DB	-1

ah64mn4		LABEL	BYTE
		DB	00Eh,COL_OLIVE4,COL_OLIVE4,00,06,-1	; face 93
		DB	00Eh,COL_OLIVE3,COL_OLIVE3,04,02,-1	; face 29
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,06,08,16,-1	; face 36
		DB	00Dh,COL_GREY1,COL_GREY1,16,08,06,-1	; face 118
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,14,00,12,10,-1	; face 29
		DB	006h,5,COL_DK_CYAN3,COL_DK_CYAN3,00,12,-1	; line 28
		DB	00Ch,COL_OLIVE5,COL_OLIVE5,14,00,12,10,-1	; face 29
		DB	00Dh,COL_GREY1,COL_GREY1,16,08,06,-1	; face 118
		DB	-1

		EVEN

