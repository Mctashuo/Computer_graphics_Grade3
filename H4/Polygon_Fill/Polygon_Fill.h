// Polygon_Fill.h : main header file for the POLYGON_FILL application
//

#if !defined(AFX_POLYGON_FILL_H__81C334F2_9EC2_4417_B120_22618D404A60__INCLUDED_)
#define AFX_POLYGON_FILL_H__81C334F2_9EC2_4417_B120_22618D404A60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillApp:
// See Polygon_Fill.cpp for the implementation of this class
//

class CPolygon_FillApp : public CWinApp
{
public:
	CPolygon_FillApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPolygon_FillApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPolygon_FillApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_POLYGON_FILL_H__81C334F2_9EC2_4417_B120_22618D404A60__INCLUDED_)
