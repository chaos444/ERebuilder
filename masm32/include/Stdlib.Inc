;;----------------------------------------------------;;
   TITLE                      "ASM STANDARD LIBRARY"
   SUBTITLE                   "LIBRARY INCLUDE FILE"
   COMMENT  "COPYRIGHT (C) BY DRIZZ <1OF00@GMX.NET>"
;;----------------------------------------------------;;

;;
;;						GENERIC FUNCTION PROTOTYPE DEFINITIONS
;;

PROTO@V TYPEDEF PROTO C :VARARG
PROTO@0 TYPEDEF PROTO STDCALL
PROTO@4 TYPEDEF PROTO STDCALL :DWORD
PROTO@8 TYPEDEF PROTO STDCALL :DWORD,:DWORD
PROTO@12 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD
PROTO@16 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
PROTO@20 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@24 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@28 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@32 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@36 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@40 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@44 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@48 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@52 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@56 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@60 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@64 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@68 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@72 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@76 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@80 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@84 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@88 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@92 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PROTO@96 TYPEDEF PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PPROTO@V TYPEDEF PTR PROTO@V
PPROTO@0 TYPEDEF PTR PROTO@0
PPROTO@4 TYPEDEF PTR PROTO@4
PPROTO@8 TYPEDEF PTR PROTO@8
PPROTO@12 TYPEDEF PTR PROTO@12
PPROTO@16 TYPEDEF PTR PROTO@16
PPROTO@20 TYPEDEF PTR PROTO@20
PPROTO@24 TYPEDEF PTR PROTO@24
PPROTO@28 TYPEDEF PTR PROTO@28
PPROTO@32 TYPEDEF PTR PROTO@32
PPROTO@36 TYPEDEF PTR PROTO@36
PPROTO@40 TYPEDEF PTR PROTO@40
PPROTO@44 TYPEDEF PTR PROTO@44
PPROTO@48 TYPEDEF PTR PROTO@48
PPROTO@52 TYPEDEF PTR PROTO@52
PPROTO@56 TYPEDEF PTR PROTO@56
PPROTO@60 TYPEDEF PTR PROTO@60
PPROTO@64 TYPEDEF PTR PROTO@64
PPROTO@68 TYPEDEF PTR PROTO@68
PPROTO@72 TYPEDEF PTR PROTO@72
PPROTO@76 TYPEDEF PTR PROTO@76
PPROTO@80 TYPEDEF PTR PROTO@80
PPROTO@84 TYPEDEF PTR PROTO@84
PPROTO@88 TYPEDEF PTR PROTO@88
PPROTO@92 TYPEDEF PTR PROTO@92
PPROTO@96 TYPEDEF PTR PROTO@96

;;
;;                      SPECIAL TYPEDEFS
;;

PROTO@4@V TYPEDEF PROTO C :DWORD,:VARARG
PPROTO@4@V TYPEDEF PTR PROTO@4@V
PROTO@8@V TYPEDEF PROTO C :DWORD,:DWORD,:VARARG
PPROTO@8@V TYPEDEF PTR PROTO@8@V

PROTO@8@0 TYPEDEF PROTO STDCALL :QWORD
PPROTO@8@0 TYPEDEF PTR PROTO@8@0
PROTO@8@4 TYPEDEF PROTO STDCALL :QWORD,:DWORD
PPROTO@8@4 TYPEDEF PTR PROTO@8@4
PROTO@16@0 TYPEDEF PROTO STDCALL :QWORD,:QWORD
PPROTO@16@0 TYPEDEF PTR PROTO@16@0
PROTO@16@4 TYPEDEF PROTO STDCALL :QWORD,:QWORD,:DWORD
PPROTO@16@4 TYPEDEF PTR PROTO@16@4
PROTO@24@0 TYPEDEF PROTO STDCALL :QWORD,:QWORD,:QWORD
PPROTO@24@0 TYPEDEF PTR PROTO@24@0
;;
;;						CONVERT 
;;

EXTERNDEF STDCALL ByteToHex:PROTO@4
EXTERNDEF STDCALL DwToBin:PROTO@8
EXTERNDEF STDCALL DwToHex:PROTO@8
EXTERNDEF STDCALL QwToHex:PROTO@8
EXTERNDEF STDCALL DwToStr:PROTO@8
EXTERNDEF STDCALL DwToStrl:PROTO@8
EXTERNDEF STDCALL HexToDw:PROTO@4
EXTERNDEF STDCALL IntToStr:PROTO@8
EXTERNDEF STDCALL Int64ToStr:PROTO@8@4
EXTERNDEF STDCALL StrToDw:PROTO@4
EXTERNDEF STDCALL StrToInt:PROTO@4
EXTERNDEF STDCALL StrToInt64:PROTO@4
EXTERNDEF STDCALL U64ToStr:PROTO@8@4
EXTERNDEF STDCALL StrToU64:PROTO@4
EXTERNDEF STDCALL GetDlgItemHex:PROTO@8
EXTERNDEF STDCALL SetDlgItemHex:PROTO@12
EXTERNDEF STDCALL Time1970ToSystemTime:PROTO@8
EXTERNDEF STDCALL SystemTimeToTime1970:PROTO@4
EXTERNDEF STDCALL SystemTimeToStr:PROTO@8

;;
;;						STRING
;;

EXTERNDEF STDCALL ChrTest:PROTO@8
EXTERNDEF STDCALL StrCat:PROTO@8
EXTERNDEF STDCALL StrChr:PROTO@8
EXTERNDEF C StrConCat:PROTO@4@V
EXTERNDEF STDCALL StrCmp:PROTO@8
EXTERNDEF STDCALL StrNCmp:PROTO@12
EXTERNDEF STDCALL StrCmpi:PROTO@8
EXTERNDEF STDCALL StrCpy:PROTO@8
EXTERNDEF STDCALL StrEnd:PROTO@4
EXTERNDEF STDCALL StrLen:PROTO@4
EXTERNDEF STDCALL StrLower:PROTO@4
EXTERNDEF STDCALL StrPos:PROTO@8
EXTERNDEF STDCALL StrRev:PROTO@4
EXTERNDEF STDCALL StrTok:PROTO@8
EXTERNDEF STDCALL StrTrim:PROTO@8
EXTERNDEF STDCALL StrRTrim:PROTO@8
EXTERNDEF STDCALL StrUpper:PROTO@4

;;
;;						MEMORY
;;

EXTERNDEF STDCALL CompareMem:PROTO@12
EXTERNDEF STDCALL CopyMemory:PROTO@12
EXTERNDEF STDCALL FillMemory:PROTO@12
EXTERNDEF STDCALL FreeMem:PROTO@4
EXTERNDEF STDCALL GetMem:PROTO@4
EXTERNDEF STDCALL FreeVMem:PROTO@4
EXTERNDEF STDCALL GetVMem:PROTO@4
EXTERNDEF STDCALL ResizeMem:PROTO@8
EXTERNDEF STDCALL ZeroMemory:PROTO@8

;;
;;						REGISTRY
;;

EXTERNDEF STDCALL RegKeyClose:PROTO@0
EXTERNDEF STDCALL RegKeyOpen:PROTO@12
RegKeyDelete EQU <RegDeleteKey>
EXTERNDEF STDCALL RegReadDw :PROTO@4
EXTERNDEF STDCALL RegReadStr:PROTO@12
EXTERNDEF STDCALL RegWriteDw:PROTO@8
EXTERNDEF STDCALL RegWriteStr:PROTO@8

;;	
;;						FILES
;;

EXTERNDEF STDCALL FileClose:PROTO@4
EXTERNDEF STDCALL FileCreate:PROTO@4
EXTERNDEF STDCALL FileDelete:PROTO@4
EXTERNDEF STDCALL FileExists:PROTO@4
EXTERNDEF STDCALL FileOpen:PROTO@8
EXTERNDEF STDCALL FileRead:PROTO@12
EXTERNDEF STDCALL FileSeek:PROTO@12
EXTERNDEF STDCALL FileSize:PROTO@4
EXTERNDEF STDCALL FileWrite:PROTO@12

;;
;;						INI FILES
;;

EXTERNDEF STDCALL IniReadDword:PROTO@8
EXTERNDEF STDCALL IniReadInt:PROTO@8
EXTERNDEF STDCALL IniReadStr:PROTO@12
EXTERNDEF STDCALL IniReadStruct:PROTO@12
EXTERNDEF STDCALL IniSetFileName:PROTO@4
EXTERNDEF STDCALL IniSetSection:PROTO@4
EXTERNDEF STDCALL IniWriteDword:PROTO@8
EXTERNDEF STDCALL IniWriteInt:PROTO@8
EXTERNDEF STDCALL IniWriteStr:PROTO@8
EXTERNDEF STDCALL IniWriteStruct:PROTO@12

;;
;;						STREAM FILE
;;

EXTERNDEF STDCALL FSCreate:PROTO@8
EXTERNDEF STDCALL FSDuplicate:PROTO@8
EXTERNDEF STDCALL FSFlush:PROTO@4
EXTERNDEF STDCALL FSDump:PROTO@16
EXTERNDEF STDCALL FSFree:PROTO@4

;;
;;						CONSOLE MODE
;;

EXTERNDEF STDCALL InitConsole:PROTO@0
EXTERNDEF STDCALL ClrScr:PROTO@0
EXTERNDEF STDCALL FullScreen:PROTO@0
EXTERNDEF STDCALL Getch:PROTO@0
EXTERNDEF STDCALL Putch:PROTO@4
EXTERNDEF STDCALL Gotoxy:PROTO@8
EXTERNDEF STDCALL Readln:PROTO@12
EXTERNDEF STDCALL TextBackground:PROTO@4
EXTERNDEF STDCALL TextColor:PROTO@4
EXTERNDEF STDCALL Write:PROTO@4
EXTERNDEF STDCALL Writeln:PROTO@4
EXTERNDEF C Writelnf:PROTO@4@V
EXTERNDEF STDCALL Writexy:PROTO@12

;;
;;						OTHER
;;

EXTERNDEF STDCALL IsNT:PROTO@0
EXTERNDEF STDCALL ExtractFileName:PROTO@8
EXTERNDEF STDCALL ExtractFilePath:PROTO@8
EXTERNDEF STDCALL ParamCount:PROTO@0
EXTERNDEF STDCALL ParamStr:PROTO@12
EXTERNDEF STDCALL Random:PROTO@4
EXTERNDEF STDCALL Randomize:PROTO@0

;;
;;						U64/INT64 SUPPORT
;;

EXTERNDEF STDCALL U64Inc:PROTO@8@0
EXTERNDEF STDCALL U64Dec:PROTO@8@0
EXTERNDEF STDCALL U64Neg:PROTO@8@0
EXTERNDEF STDCALL U64Not:PROTO@8@0
EXTERNDEF STDCALL U64Add:PROTO@16@0
EXTERNDEF STDCALL U64Sub:PROTO@16@0
EXTERNDEF STDCALL U64Shl:PROTO@8@4
EXTERNDEF STDCALL U64Shr:PROTO@8@4
EXTERNDEF STDCALL U64Rol:PROTO@8@4
EXTERNDEF STDCALL U64Ror:PROTO@8@4
EXTERNDEF STDCALL U64Mul:PROTO@16@0
EXTERNDEF STDCALL U64Div:PROTO@16@0
EXTERNDEF STDCALL U64Rem:PROTO@16@0
EXTERNDEF STDCALL Int64Mul:PROTO@16@0
EXTERNDEF STDCALL Int64Div:PROTO@16@0
EXTERNDEF STDCALL Int64Rem:PROTO@16@0
EXTERNDEF STDCALL Int64Shr:PROTO@8@4

;;
;;						STDLIB CONSTANTS
;;

ccBlack			equ 0
ccBlue			equ 1
ccGreen			equ 2
ccCyan			equ 3
ccRed			equ 4
ccMagenta		equ 5
ccBrown			equ 6
ccLightGray		equ 7
ccDarkGray		equ 8
ccLightBlue		equ 9
ccLightGreen	equ 10
ccLightCyan		equ 11
ccLightRed		equ 12
ccLightMagenta	equ 13
ccYellow		equ 14
ccWhite			equ 15

CHR_UPPER equ 00000001b
CHR_LOWER equ 00000010b
CHR_DIGIT equ 00000100b
CHR_DELIM equ 00001000b
CHR_PUNCT equ 00010000b
CHR_CNTRL equ 00100000b
CHR_SPACE equ 01000000b
CHR_HEX   equ 10000000b
CHR_ALPHA equ CHR_LOWER or CHR_UPPER
CHR_ALNUM equ CHR_LOWER or CHR_UPPER or CHR_DIGIT
CHR_PRINT equ CHR_LOWER or CHR_UPPER or CHR_DIGIT or CHR_PUNCT or CHR_SPACE

U64 STRUCT
	Lo DWORD ?
	Hi DWORD ?
U64 ENDS

FILESTREAM struct
	hFile dd ?
	dwFsize dd ?
	pMem dd ?
FILESTREAM ends

;;
;;						STANDARD CONSTANTS
;;

pushad_size equ 8*4
pushad_eax  equ 7*4
pushad_ecx  equ 6*4
pushad_edx  equ 5*4
pushad_ebx  equ 4*4
pushad_esp  equ 3*4
pushad_ebp  equ 2*4
pushad_esi  equ 1*4
pushad_edi  equ 0*4

PUSHAD_ struct
	edi_ dd ?
	esi_ dd ?
	ebp_ dd ?
	esp_ dd ?
	ebx_ dd ?
	edx_ dd ?
	ecx_ dd ?
	eax_ dd ?
PUSHAD_ ends

CR   textequ <13>
LF   textequ <10>
CRLF textequ <CR,LF>

;;
;;						STANDARD-STDLIB MACROS
;;

include Stdlib.mac
