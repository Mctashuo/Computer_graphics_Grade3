; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CH3P2View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "H3P2.h"
LastPage=0

ClassCount=6
Class1=CH3P2App
Class2=CH3P2Doc
Class3=CH3P2View
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDD_DIALOG1 (Chinese (中国))
Class5=CAboutDlg
Class6=Cinputdialog
Resource3=IDR_MAINFRAME (Chinese (中国))
Resource4=IDR_MAINFRAME

[CLS:CH3P2App]
Type=0
HeaderFile=H3P2.h
ImplementationFile=H3P2.cpp
Filter=N

[CLS:CH3P2Doc]
Type=0
HeaderFile=H3P2Doc.h
ImplementationFile=H3P2Doc.cpp
Filter=N

[CLS:CH3P2View]
Type=0
HeaderFile=H3P2View.h
ImplementationFile=H3P2View.cpp
Filter=C
LastObject=ID_DRAW
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_DRAW
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=H3P2.cpp
ImplementationFile=H3P2.cpp
Filter=D
LastObject=CAboutDlg

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
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG1 (Chinese (中国))]
Type=1
Class=Cinputdialog
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT_SX,edit,1350631552
Control7=IDC_EDIT_SY,edit,1350631552
Control8=IDC_EDIT_EX,edit,1350631552
Control9=IDC_EDIT_EY,edit,1350631552

[CLS:Cinputdialog]
Type=0
HeaderFile=inputdialog.h
ImplementationFile=inputdialog.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=ID_DRAW

[MNU:IDR_MAINFRAME (Chinese (中国))]
Type=1
Class=CMainFrame
Command1=ID_APP_EXIT
Command2=ID_DRAW
Command3=ID_APP_ABOUT
CommandCount=3

