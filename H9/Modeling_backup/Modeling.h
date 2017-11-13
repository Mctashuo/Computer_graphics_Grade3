// Modeling.h : main header file for the MODELING application
//

#if !defined(AFX_MODELING_H__0CFEF096_316E_4F08_A017_F94CE9260F3D__INCLUDED_)
#define AFX_MODELING_H__0CFEF096_316E_4F08_A017_F94CE9260F3D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CModelingApp:
// See Modeling.cpp for the implementation of this class
//

class CModelingApp : public CWinApp
{
public:
	CModelingApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModelingApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CModelingApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODELING_H__0CFEF096_316E_4F08_A017_F94CE9260F3D__INCLUDED_)
