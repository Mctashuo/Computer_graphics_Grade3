// CCut.h : main header file for the CCUT application
//

#if !defined(AFX_CCUT_H__35EE591C_DBB1_41F6_8EC5_2A2EA173F19B__INCLUDED_)
#define AFX_CCUT_H__35EE591C_DBB1_41F6_8EC5_2A2EA173F19B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCCutApp:
// See CCut.cpp for the implementation of this class
//

class CCCutApp : public CWinApp
{
public:
	CCCutApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCCutApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCCutApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CCUT_H__35EE591C_DBB1_41F6_8EC5_2A2EA173F19B__INCLUDED_)
