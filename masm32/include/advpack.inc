  ; ===========================================
  ; advpack.inc copyright MASM32 1998 - 2005
  ; ===========================================

IFNDEF ADVPACK_INC
ADVPACK_INC equ <1>

AddDelBackupEntry PROTO :DWORD,:DWORD,:DWORD,:DWORD
AdvInstallFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CloseINFEngine PROTO :DWORD
DelNode PROTO :DWORD,:DWORD
DelNodeRunDLL32 PROTO :DWORD,:DWORD,:DWORD,:DWORD
DllMain PROTO :DWORD,:DWORD,:DWORD
DoInfInstall PROTO :DWORD
ExecuteCab PROTO :DWORD,:DWORD,:DWORD
ExtractFiles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FileSaveMarkNotExist PROTO :DWORD,:DWORD,:DWORD
FileSaveRestore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FileSaveRestoreOnINF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetVersionFromFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetVersionFromFileEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
IsNTAdmin PROTO :DWORD,:DWORD
LaunchINFSection PROTO :DWORD,:DWORD,:DWORD,:DWORD
LaunchINFSectionEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
NeedReboot PROTO :DWORD
NeedRebootInit PROTO 
OpenINFEngine PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RebootCheckOnInstall PROTO :DWORD,:DWORD,:DWORD,:DWORD
RegInstall PROTO :DWORD,:DWORD,:DWORD
RegRestoreAll PROTO :DWORD,:DWORD,:DWORD
RegSaveRestore PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegSaveRestoreOnINF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RegisterOCX PROTO :DWORD,:DWORD,:DWORD,:DWORD
RunSetupCommand PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetPerUserSecValues PROTO :DWORD
TranslateInfString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TranslateInfStringEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
UserInstStubWrapper PROTO :DWORD,:DWORD,:DWORD,:DWORD
UserUnInstStubWrapper PROTO :DWORD,:DWORD,:DWORD,:DWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file advpack.inc
echo -----------------------------------------
ENDIF
