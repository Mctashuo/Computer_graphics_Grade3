// CRectangle.h : main header file for the CRECTANGLE application
//

#if !defined(AFX_CRECTANGLE_H__541BFC5B_36FF_44FA_8B19_33D99643398C__INCLUDED_)
#define AFX_CRECTANGLE_H__541BFC5B_36FF_44FA_8B19_33D99643398C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CCRectangleApp:
// See CRectangle.cpp for the implementation of this class
//

class CCRectangleApp : public CWinApp
{
public:
	CCRectangleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCRectangleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CCRectangleApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRECTANGLE_H__541BFC5B_36FF_44FA_8B19_33D99643398C__INCLUDED_)
