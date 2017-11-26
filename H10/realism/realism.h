// realism.h : main header file for the REALISM application
//

#if !defined(AFX_REALISM_H__EB36ACC4_744E_4C93_9139_8A2C05888081__INCLUDED_)
#define AFX_REALISM_H__EB36ACC4_744E_4C93_9139_8A2C05888081__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CRealismApp:
// See realism.cpp for the implementation of this class
//

class CRealismApp : public CWinApp
{
public:
	CRealismApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRealismApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CRealismApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REALISM_H__EB36ACC4_744E_4C93_9139_8A2C05888081__INCLUDED_)
