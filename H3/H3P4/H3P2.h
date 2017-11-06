// H3P2.h : main header file for the H3P2 application
//

#if !defined(AFX_H3P2_H__EB3AA740_EA23_49DE_AF0C_CB12E2871700__INCLUDED_)
#define AFX_H3P2_H__EB3AA740_EA23_49DE_AF0C_CB12E2871700__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CH3P2App:
// See H3P2.cpp for the implementation of this class
//

class CH3P2App : public CWinApp
{
public:
	CH3P2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CH3P2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CH3P2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_H3P2_H__EB3AA740_EA23_49DE_AF0C_CB12E2871700__INCLUDED_)
