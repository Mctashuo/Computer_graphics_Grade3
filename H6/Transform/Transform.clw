; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTransformView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Transform.h"
LastPage=0

ClassCount=5
Class1=CTransformApp
Class2=CTransformDoc
Class3=CTransformView
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX

[CLS:CTransformApp]
Type=0
HeaderFile=Transform.h
ImplementationFile=Transform.cpp
Filter=N

[CLS:CTransformDoc]
Type=0
HeaderFile=TransformDoc.h
ImplementationFile=TransformDoc.cpp
Filter=N

[CLS:CTransformView]
Type=0
HeaderFile=TransformView.h
ImplementationFile=TransformView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=IDX_THREE


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDX_XIE3




[CLS:CAboutDlg]
Type=0
HeaderFile=Transform.cpp
ImplementationFile=Transform.cpp
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
Command1=IDX_XIE
Command2=IDX_XIE2
Command3=IDX_XIE3
Command4=IDX_THREE
CommandCount=4

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

