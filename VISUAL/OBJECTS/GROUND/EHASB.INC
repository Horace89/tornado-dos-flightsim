EHASB		OBJECTHEADER <OBJ_SCALE8,512,EHASB2,0,COL_BLACK1,32,32,15>
		DB	074,006,090	;   0
		DB	084,006,084	;   1
		DB	090,006,074	;   2
		DB	064,006,090	;   3
		DB	090,006,064	;   4
		DB	064,006,064	;   5
		DB	074,008,090	;   6
		DB	084,008,084	;   7
		DB	090,008,074	;   8
		DB	090,008,064	;   9
		DB	054,006,090	;  10
		DB	044,006,084	;  11
		DB	038,006,072	;  12
		DB	038,006,064	;  13
		DB	054,008,090	;  14
		DB	044,008,084	;  15
		DB	038,008,072	;  16
		DB	038,008,064	;  17
		DB	054,006,064	;  18
		DB	056,006,064	;  19
		DB	056,006,090	;  20
		DB	072,006,090	;  21
		DB	072,006,064	;  22
		DB	074,006,064	;  23
		DB	054,000,070	;  24
		DB	056,000,070	;  25
		DB	072,000,070	;  26
		DB	074,000,070	;  27
		DB	054,000,064	;  28
		DB	056,000,064	;  29
		DB	072,000,064	;  30
		DB	074,000,064	;  31
		DB	052,008,092	;  32
		DB	076,008,092	;  33
		DB	042,008,086	;  34
		DB	086,008,086	;  35
		DB	064,008,094	;  36
		DB	036,008,074	;  37
		DB	036,008,064	;  38
		DB	104,008,074	;  39
		DB	104,008,064	;  40
		DB	066,012,094	;  41
		DB	050,012,092	;  42
		DB	078,012,092	;  43
		DB	040,012,086	;  44
		DB	088,012,086	;  45
		DB	032,012,072	;  46
		DB	032,012,064	;  47
		DB	032,024,072	;  48
		DB	032,024,064	;  49
		DB	000,034,064	;  50
		DB	030,028,072	;  51
		DB	128,042,064	;  52
		DB	104,036,064	;  53
		DB	104,044,074	;  54
		DB	104,036,074	;  55
		DB	040,046,086	;  56
		DB	040,088,086	;  57
		DB	050,088,092	;  58
		DB	066,088,094	;  59
		DB	078,088,092	;  60
		DB	088,088,086	;  61
		DB	064,128,064	;  62
		DB	000,088,064	;  63
		DB	128,078,064	;  64
		DB	032,114,064	;  65
		DB	090,088,074	;  66
		DB	104,086,074	;  67
		DB	090,106,074	;  68
		DB	090,106,064	;  69
		DB	090,088,064	;  70
		DB	104,086,064	;  71
		DB	088,046,086	;  72
		DB	088,078,086	;  73
		DB	064,008,090	;  74
		DB	032,022,064	;  75
		DB	032,022,070	;  76
		DB	032,018,070	;  77
		DB	032,018,064	;  78
		DB	104,008,072	;  79
		DB	104,018,072	;  80
		DB	104,018,064	;  81
		DB	104,030,064	;  82
		DB	104,030,070	;  83
		DB	104,034,070	;  84
		DB	104,034,064	;  85
		DB	090,088,072	;  86
		DB	090,098,072	;  87
		DB	090,098,064	;  88
		DB	062,088,094	;  89
		DB	062,012,094	;  90
		DB	128,000,064	;  91
		DB	000,000,064	;  92
		DB	-1

		DW	OFFSET	EHASB_1

		EVEN

EHASB_1		DW	530

ehbgpln_L	DB	046h		; GOSUB
		DW	OFFSET ehbgpln-$-2
ehb1mn_bk	DB	028h,126,142,120,-1
		DW	OFFSET ehb1dr_mn-$-2	; 
		DW	OFFSET ehb1bk-$-2	; 
		DB	-1

ehb1dr_mn	DB	028h,80,72,76,-1
		DW	OFFSET ehsb1dr-$-2	; 
		DW	OFFSET ehb1main-$-2	; 
		DB	-1


ehbgpln		LABEL	BYTE
		DB	008h,COL_RWY1,106,104,182,80,-1		; face 68
		DB	008h,COL_RWY1,94,184,100,98,-1		; face 69
		DB	000h,5,COL_RWY1,184,94,34,-1		; face 70
		DB	000h,6,COL_RWY1,80,182,184,34,-1	; face 71
		DB	-1

ehsb1dr		LABEL	BYTE
		DB	008h,COL_GREY3,68,64,28,30,-1		; face 19
		DB	008h,COL_GREY3,66,70,14,12,-1		; face 20
		DB	008h,COL_GREY3,72,66,12,28,64,-1	; face 20
		DB	008h,COL_GREY3,30,32,74,68,-1		; face 21
		DB	008h,COL_GREY3,32,34,76,74,-1		; face 24
		DB	008h,COL_GREY3,78,80,18,16,-1		; face 23
		DB	008h,COL_GREY3,70,78,16,14,-1		; face 24
		DB	008h,COL_OLIVE5,08,10,06,00,02,04,-1	; face 0
		DB	008h,COL_OLIVE5,20,06,10,26,24,22,-1	; face 1
		DB	002h,4,COL_OLIVE6,06,10,-1		; line 17
		DB	008h,COL_OLIVE4,12,14,02,00,-1		; face 3
		DB	008h,COL_OLIVE6,14,16,04,02,-1		; face 4
		DB	008h,COL_OLIVE4,30,28,20,22,-1		; face 5
		DB	008h,COL_OLIVE3,28,12,00,20,-1		; face 2
		DB	002h,4,COL_GREY3,06,148,-1		; line 63
		DB	008h,COL_OLIVE6,32,30,22,24,-1		; face 6
		DB	008h,COL_GREY4,04,16,18,08,-1		; face 7
		DB	008h,COL_GREY4,24,26,34,32,-1		; face 8
		DB	008h,COL_OLIVE4,54,62,60,52,-1		; face 9
		DB	008h,COL_OLIVE4,50,58,56,48,-1		; face 10
		DB	008h,COL_OLIVE3,00,54,52,42,-1		; face 11
		DB	008h,COL_OLIVE3,40,50,48,20,-1		; face 12
		DB	008h,COL_OLIVE6,40,38,58,50,-1		; face 13
		DB	008h,COL_OLIVE6,00,46,62,54,-1		; face 14
		DB	008h,COL_OLIVE6,52,60,44,42,-1		; face 15
		DB	008h,COL_OLIVE6,48,56,36,20,-1		; face 16
		DB	-1

ehb1main	LABEL	BYTE
		DB	008h,COL_HILL2,102,96,98,-1		; face 34
		DB	008h,COL_GREY4,78,110,106,80,-1		; face 36
		DB	000h,6,COL_NEW_GREY3,80,158,160,162,-1	; face 66
		DB	000h,6,COL_NEW_GREY3,164,166,168,170,-1	; face 67
		DB	008h,COL_GREY4,96,92,94,98,-1		; face 31
		DB	000h,6,COL_NEW_GREY3,150,152,154,156,-1	; face 67
		DB	008h,COL_HILL2,112,96,102,-1		; face 39
		DB	008h,COL_HILL3,100,102,98,-1		; face 33
		DB	008h,COL_HILL3,106,108,104,-1		; face 35
		DB	008h,COL_HILL2,112,102,100,-1		; face 48
		DB	008h,COL_HILL2,126,114,112,100,-1	; face 49
		DB	008h,COL_HILL2,144,108,110,-1		; face 57
		DB	008h,COL_HILL2,128,104,108,134,-1	; face 58
		DB	008h,COL_HILL2,108,144,146,134,-1	; face 61
		DB	008h,COL_HILL2,110,78,90,144,-1		; face 56
		DB	008h,COL_HILL4,180,178,118,82,72,-1	; face 67
		DB	008h,COL_HILL2,106,110,108,-1		; face 37
		DB	008h,COL_HILL2,112,88,92,96,-1		; face 38
		DB	008h,COL_GREY3,134,132,140,142,-1	; face 51
		DB	008h,COL_HILL3,134,142,128,-1		; face 57
		DB	008h,COL_HILL2,146,122,132,-1		; face 59
		DB	008h,COL_HILL3,146,132,134,-1		; face 60
		DB	008h,COL_HILL3,116,84,88,114,-1		; face 40
		DB	008h,COL_HILL3,122,90,86,120,-1		; face 41
		DB	008h,COL_HILL4,118,120,86,82,-1		; face 42
		DB	008h,COL_HILL4,84,116,178,180,-1	; face 66
		DB	008h,COL_GREY3,178,116,120,118,-1	; face 67
		DB	008h,COL_GREY3,74,76,94,92,-1		; face 30
		DB	008h,COL_HILL3,66,72,82,86,-1		; face 25
		DB	008h,COL_HILL2,86,90,70,66,-1		; face 27
		DB	008h,COL_HILL2,64,68,88,84,-1		; face 28
		DB	008h,COL_HILL2,68,74,92,88,-1		; face 29
		DB	008h,COL_HILL2,78,70,90,-1		; face 32
		DB	008h,COL_HILL3,180,72,64,84,-1		; face 65
		DB	-1

ehb1bk		LABEL	BYTE
		DB	008h,COL_HILL4,124,120,116,-1		; face 73
		DB	00Ch,COL_GREY4,COL_GREY4,136,138,140,132,-1	; face 52
		DB	000h,6,COL_NEW_GREY3,172,174,176,140,-1	; face 67
		DB	008h,COL_HILL2,126,130,114,-1		; face 50
		DB	008h,COL_HILL3,122,120,124,-1		; face 46
		DB	008h,COL_HILL3,114,130,124,116,-1	; face 50
		DB	008h,COL_HILL2,124,132,122,-1		; face 53
		DB	008h,COL_HILL3,138,132,124,-1		; face 54
		DB	-1

		EVEN

EHASB2		OBJECTHEADER <OBJ_SCALE4,1700,EHASB3,0,COL_BLACK1,16,16,7>
		DB	068,036,076	;   0
		DB	074,036,074	;   1
		DB	076,036,068	;   2
		DB	064,036,076	;   3
		DB	076,036,064	;   4
		DB	064,036,064	;   5
		DB	060,036,076	;   6
		DB	054,036,074	;   7
		DB	052,036,068	;   8
		DB	052,036,064	;   9
		DB	060,032,066	;  10
		DB	068,032,066	;  11
		DB	060,032,064	;  12
		DB	068,032,064	;  13
		DB	058,036,078	;  14
		DB	070,036,078	;  15
		DB	064,036,078	;  16
		DB	050,036,068	;  17
		DB	050,036,064	;  18
		DB	084,036,068	;  19
		DB	084,036,064	;  20
		DB	058,038,078	;  21
		DB	070,038,078	;  22
		DB	052,038,074	;  23
		DB	076,038,074	;  24
		DB	048,038,068	;  25
		DB	048,038,064	;  26
		DB	048,044,068	;  27
		DB	048,044,064	;  28
		DB	032,050,064	;  29
		DB	096,054,064	;  30
		DB	084,050,064	;  31
		DB	084,054,068	;  32
		DB	084,050,068	;  33
		DB	052,056,074	;  34
		DB	052,076,074	;  35
		DB	058,076,078	;  36
		DB	070,076,078	;  37
		DB	076,076,074	;  38
		DB	064,096,064	;  39
		DB	032,076,064	;  40
		DB	096,070,064	;  41
		DB	048,088,064	;  42
		DB	076,076,068	;  43
		DB	084,074,068	;  44
		DB	076,084,068	;  45
		DB	076,084,064	;  46
		DB	076,076,064	;  47
		DB	084,074,064	;  48
		DB	076,056,074	;  49
		DB	076,070,074	;  50
		DB	048,042,068	;  51
		DB	048,042,064	;  52
		DB	084,042,068	;  53
		DB	084,042,064	;  54
		DB	084,048,064	;  55
		DB	084,048,068	;  56
		DB	076,080,068	;  57
		DB	076,080,064	;  58
		DB	096,032,064	;  59
		DB	032,032,064	;  60
		DB	-1

		DW	OFFSET	EHASB2_1

		EVEN

EHASB2_1	DW	370

ehbgpln2_L	DB	046h		; GOSUB
		DW	OFFSET ehbgpln2-$-2
ehb1mn_bk2	DB	028h,80,96,74,-1
		DW	OFFSET ehb1dr_mn2-$-2	; 
		DW	OFFSET ehb1bk2-$-2	; 
		DB	-1

ehb1dr_mn2	DB	028h,40,32,36,-1
		DW	OFFSET ehasb2dr_ft2-$-2	; 
		DW	OFFSET ehb1main2-$-2	; 
		DB	-1


ehbgpln2	LABEL	BYTE
		DB	008h,COL_RWY1,58,60,118,120,-1		; face 62
		DB	-1

ehasb2dr_ft2	LABEL	BYTE
		DB	008h,COL_GREY3,40,36,34,28,30,38,-1	; face 70
		DB	008h,COL_OLIVE5,04,08,18,16,14,12,00,02,-1	; face 71
		DB	002h,6,COL_OLIVE4,14,12,00,02,-1	; line 56
		DB	002h,4,COL_OLIVE6,06,10,-1		; line 17
		DB	002h,4,COL_OLIVE6,02,04,-1		; face 4
		DB	002h,4,COL_OLIVE6,16,14,-1		; face 6
		DB	002h,4,COL_GREY4,04,08,-1		; face 7
		DB	002h,4,COL_GREY4,16,18,-1		; face 8
		DB	006h,5,COL_OLIVE6,COL_OLIVE6,00,26,-1	; line 53
		DB	006h,5,COL_OLIVE6,COL_OLIVE6,12,24,-1	; line 54
		DB	006h,6,COL_OLIVE4,COL_OLIVE4,24,20,12,-1	; line 68
		DB	006h,6,COL_OLIVE4,COL_OLIVE4,00,22,26,-1	; line 69
		DB	-1

ehb1main2	LABEL	BYTE
		DB	008h,COL_GREY4,38,66,62,40,-1		; face 36
		DB	000h,6,COL_NEW_GREY3,40,38,106,108,-1	; face 66
		DB	000h,6,COL_NEW_GREY3,110,112,66,62,-1	; face 67
		DB	008h,COL_GREY4,54,50,52,56,-1		; face 31
		DB	000h,6,COL_NEW_GREY3,56,54,102,104,-1	; face 67
		DB	008h,COL_HILL3,58,54,56,-1		; face 33
		DB	008h,COL_HILL3,62,64,60,-1		; face 35
		DB	008h,COL_HILL2,68,54,58,-1		; face 48
		DB	008h,COL_HILL2,80,70,68,58,-1		; face 49
		DB	008h,COL_HILL2,98,64,66,-1		; face 57
		DB	008h,COL_HILL2,82,60,64,88,-1		; face 58
		DB	008h,COL_HILL2,64,98,100,88,-1		; face 61
		DB	008h,COL_HILL2,66,38,48,98,-1		; face 56
		DB	008h,COL_HILL2,62,66,64,-1		; face 37
		DB	008h,COL_HILL2,68,46,50,54,-1		; face 38
		DB	008h,COL_GREY3,88,86,94,96,-1		; face 51
		DB	008h,COL_HILL3,88,96,82,-1		; face 57
		DB	008h,COL_HILL2,100,76,86,-1		; face 59
		DB	008h,COL_HILL3,100,86,88,-1		; face 60
		DB	008h,COL_HILL3,72,42,46,70,-1		; face 40
		DB	008h,COL_HILL3,76,48,44,74,-1		; face 41
		DB	008h,COL_HILL4,42,72,74,44,-1		; face 70
		DB	008h,COL_GREY3,34,36,52,50,-1		; face 30
		DB	008h,COL_HILL3,28,42,44,30,-1		; face 70
		DB	008h,COL_HILL2,44,48,02,30,-1		; face 27
		DB	008h,COL_HILL2,28,14,46,42,-1		; face 28
		DB	008h,COL_HILL2,14,34,50,46,-1		; face 29
		DB	008h,COL_HILL2,38,02,48,-1		; face 32
		DB	-1

ehb1bk2		LABEL	BYTE
		DB	008h,COL_HILL4,78,74,72,-1		; face 73
		DB	00Ch,COL_GREY4,COL_GREY4,90,92,94,86,-1	; face 52
		DB	000h,6,COL_NEW_GREY3,86,114,116,94,-1	; face 67
		DB	008h,COL_HILL2,80,84,70,-1		; face 50
		DB	008h,COL_HILL3,76,74,78,-1		; face 46
		DB	008h,COL_HILL3,70,84,78,72,-1		; face 50
		DB	008h,COL_HILL2,78,86,76,-1		; face 53
		DB	008h,COL_HILL3,92,86,78,-1		; face 54
		DB	-1

		EVEN

EHASB3		OBJECTHEADER <OBJ_SCALE1,16384,-1,1,COL_BLACK1,4,4,2>
		DB	062,058,068	;   0
		DB	066,058,068	;   1
		DB	066,058,064	;   2
		DB	060,058,064	;   3
		DB	068,058,064	;   4
		DB	060,060,064	;   5
		DB	056,062,064	;   6
		DB	072,062,064	;   7
		DB	068,062,064	;   8
		DB	062,062,068	;   9
		DB	062,066,068	;  10
		DB	066,066,068	;  11
		DB	064,072,064	;  12
		DB	056,066,064	;  13
		DB	072,064,064	;  14
		DB	060,070,064	;  15
		DB	068,066,064	;  16
		DB	068,068,064	;  17
		DB	066,062,068	;  18
		DB	072,056,064	;  19
		DB	056,056,064	;  20
		DB	064,058,068	;  21
		DB	064,058,064	;  22
		DB	-1

		DW	OFFSET	EHASB3_1

		EVEN

EHASB3_1	DW	118


ehbgpln3	LABEL	BYTE
		DB	008h,COL_RWY1,12,14,38,40,-1		; face 31
		DB	008h,COL_HILL3,34,32,24,-1		; face 54
		DB	008h,COL_HILL2,26,20,18,12,-1		; face 49
		DB	008h,COL_HILL2,28,14,36,22,-1		; face 28
		DB	008h,COL_HILL3,02,00,20,22,-1		; face 34
		DB	008h,COL_HILL2,18,10,12,-1		; face 48
		DB	008h,COL_HILL2,16,36,14,-1		; face 25
		DB	008h,COL_GREY3,08,04,02,-1		; face 40
		DB	008h,COL_OLIVE5,06,00,02,04,-1		; face 40
		DB	002h,4,COL_OLIVE3,42,44,-1		; line 24
		DB	002h,5,COL_GREY3,06,00,02,-1		; line 23
		DB	008h,COL_HILL2,32,28,22,-1		; face 29
		DB	008h,COL_HILL2,16,08,02,36,-1		; face 56
		DB	008h,COL_HILL2,18,00,06,10,-1		; face 38
		DB	008h,COL_HILL2,26,30,20,-1		; face 50
		DB	008h,COL_HILL3,22,20,24,-1		; face 46
		DB	008h,COL_HILL3,20,30,24,-1		; face 50
		DB	008h,COL_HILL2,24,32,22,-1		; face 53
		DB	-1

		EVEN

