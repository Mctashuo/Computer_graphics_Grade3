// Fractal.h : main header file for the FRACTAL application
//

#if !defined(AFX_FRACTAL_H__6476FAF0_B560_44BE_8FFB_46B0C1BB5BE4__INCLUDED_)
#define AFX_FRACTAL_H__6476FAF0_B560_44BE_8FFB_46B0C1BB5BE4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CFractalApp:
// See Fractal.cpp for the implementation of this class
//

class CFractalApp : public CWinApp
{
public:
	CFractalApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFractalApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CFractalApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRACTAL_H__6476FAF0_B560_44BE_8FFB_46B0C1BB5BE4__INCLUDED_)
