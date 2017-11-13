; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCCutView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "CCut.h"
LastPage=0

ClassCount=5
Class1=CCCutApp
Class2=CCCutDoc
Class3=CCCutView
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg

[CLS:CCCutApp]
Type=0
HeaderFile=CCut.h
ImplementationFile=CCut.cpp
Filter=N

[CLS:CCCutDoc]
Type=0
HeaderFile=CCutDoc.h
ImplementationFile=CCutDoc.cpp
Filter=N

[CLS:CCCutView]
Type=0
HeaderFile=CCutView.h
ImplementationFile=CCutView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDX_DRAWX




[CLS:CAboutDlg]
Type=0
HeaderFile=CCut.cpp
ImplementationFile=CCut.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=IDX_DRAWX
CommandCount=1

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

