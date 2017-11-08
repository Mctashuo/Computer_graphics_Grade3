// FreeLine.h : main header file for the FREELINE application
//

#if !defined(AFX_FREELINE_H__D966417A_4D37_4B22_8573_C576AE99C98F__INCLUDED_)
#define AFX_FREELINE_H__D966417A_4D37_4B22_8573_C576AE99C98F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFreeLineApp:
// See FreeLine.cpp for the implementation of this class
//

class CFreeLineApp : public CWinApp
{
public:
	CFreeLineApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFreeLineApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CFreeLineApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FREELINE_H__D966417A_4D37_4B22_8573_C576AE99C98F__INCLUDED_)
