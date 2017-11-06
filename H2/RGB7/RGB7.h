// RGB7.h : main header file for the RGB7 application
//

#if !defined(AFX_RGB7_H__FB824856_0B95_4078_9649_73628F37B2D9__INCLUDED_)
#define AFX_RGB7_H__FB824856_0B95_4078_9649_73628F37B2D9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CRGB7App:
// See RGB7.cpp for the implementation of this class
//

class CRGB7App : public CWinApp
{
public:
	CRGB7App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRGB7App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CRGB7App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RGB7_H__FB824856_0B95_4078_9649_73628F37B2D9__INCLUDED_)
