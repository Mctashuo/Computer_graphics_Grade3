// 4circle.h : main header file for the 4CIRCLE application
//

#if !defined(AFX_4CIRCLE_H__6296617F_0C4A_43D9_85A4_B1FF0BB84FE4__INCLUDED_)
#define AFX_4CIRCLE_H__6296617F_0C4A_43D9_85A4_B1FF0BB84FE4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMy4circleApp:
// See 4circle.cpp for the implementation of this class
//

class CMy4circleApp : public CWinApp
{
public:
	CMy4circleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy4circleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMy4circleApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_4CIRCLE_H__6296617F_0C4A_43D9_85A4_B1FF0BB84FE4__INCLUDED_)
