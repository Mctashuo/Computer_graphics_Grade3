; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CModelingView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Modeling.h"
LastPage=0

ClassCount=5
Class1=CModelingApp
Class2=CModelingDoc
Class3=CModelingView
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX

[CLS:CModelingApp]
Type=0
HeaderFile=Modeling.h
ImplementationFile=Modeling.cpp
Filter=N

[CLS:CModelingDoc]
Type=0
HeaderFile=ModelingDoc.h
ImplementationFile=ModelingDoc.cpp
Filter=N

[CLS:CModelingView]
Type=0
HeaderFile=ModelingView.h
ImplementationFile=ModelingView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CModelingView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDX_PERSPECTIVE




[CLS:CAboutDlg]
Type=0
HeaderFile=Modeling.cpp
ImplementationFile=Modeling.cpp
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
Command1=IDX_PERSPECTIVE
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

