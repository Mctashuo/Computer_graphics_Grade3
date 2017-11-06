#if !defined(AFX_TET_H__70928D0B_20C9_4703_A408_309F36873F7A__INCLUDED_)
#define AFX_TET_H__70928D0B_20C9_4703_A408_309F36873F7A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// tet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// tet dialog

class tet : public CDialog
{
// Construction
public:
	tet(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(tet)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(tet)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(tet)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TET_H__70928D0B_20C9_4703_A408_309F36873F7A__INCLUDED_)
