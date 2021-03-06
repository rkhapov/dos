
; MessageBox type flags

MB_OK		     = 0000h
MB_OKCANCEL	     = 0001h
MB_ABORTRETRYIGNORE  = 0002h
MB_YESNOCANCEL	     = 0003h
MB_YESNO	     = 0004h
MB_RETRYCANCEL	     = 0005h
MB_ICONHAND	     = 0010h
MB_ICONQUESTION      = 0020h
MB_ICONEXCLAMATION   = 0030h
MB_ICONASTERISK      = 0040h
MB_DEFBUTTON1	     = 0000h
MB_DEFBUTTON2	     = 0100h
MB_DEFBUTTON3	     = 0200h
MB_APPLMODAL	     = 0000h
MB_SYSTEMMODAL	     = 1000h
MB_TASKMODAL	     = 2000h
MB_NOFOCUS	     = 8000h

; Conventional dialog box and message box command IDs

IDOK	  = 1
IDCANCEL  = 2
IDABORT   = 3
IDRETRY   = 4
IDIGNORE  = 5
IDYES	  = 6
IDNO	  = 7
