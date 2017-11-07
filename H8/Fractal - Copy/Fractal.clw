; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=InputDlg
LastTemplate=CView
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Fractal.h"
LastPage=0

ClassCount=7
Class1=CFractalApp
Class2=CFractalDoc
Class3=CFractalView
Class4=CMainFrame

ResourceCount=4
Resource1=IDR_MAINFRAME (Chinese (中国))
Resource2=IDD_DIALOG_KOCH (Chinese (中国))
Class5=CAboutDlg
Resource3=IDD_ABOUTBOX
Class6=InputDlg
Class7=test
Resource4=IDR_MAINFRAME

[CLS:CFractalApp]
Type=0
HeaderFile=Fractal.h
ImplementationFile=Fractal.cpp
Filter=N

[CLS:CFractalDoc]
Type=0
HeaderFile=FractalDoc.h
ImplementationFile=FractalDoc.cpp
Filter=N

[CLS:CFractalView]
Type=0
HeaderFile=FractalView.h
ImplementationFile=FractalView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=IDX_MENGER


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=Fractal.cpp
ImplementationFile=Fractal.cpp
Filter=D
LastObject=IDX_KOCH

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[MNU:IDR_MAINFRAME (Chinese (中国))]
Type=1
Class=CFractalView
Command1=IDX_KOCH
Command2=IDX_MENGER
CommandCount=2

[DLG:IDD_DIALOG_KOCH (Chinese (中国))]
Type=1
Class=InputDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_N,edit,1350631552

[CLS:InputDlg]
Type=0
HeaderFile=InputDlg.h
ImplementationFile=InputDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT_N
VirtualFilter=dWC

[CLS:test]
Type=0
HeaderFile=test.h
ImplementationFile=test.cpp
BaseClass=CView
Filter=C

