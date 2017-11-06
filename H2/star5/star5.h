// star5.h : main header file for the STAR5 application
//

#if !defined(AFX_STAR5_H__17FEC283_B173_4CCF_82E9_3950C28AE6B8__INCLUDED_)
#define AFX_STAR5_H__17FEC283_B173_4CCF_82E9_3950C28AE6B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CStar5App:
// See star5.cpp for the implementation of this class
//

class CStar5App : public CWinApp
{
public:
	CStar5App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStar5App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CStar5App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STAR5_H__17FEC283_B173_4CCF_82E9_3950C28AE6B8__INCLUDED_)
