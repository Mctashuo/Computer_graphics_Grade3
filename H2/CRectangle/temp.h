#if !defined(AFX_TEMP_H__D4CAA3BF_82E0_490B_8BDD_91D1F592C1FE__INCLUDED_)
#define AFX_TEMP_H__D4CAA3BF_82E0_490B_8BDD_91D1F592C1FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// temp.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// temp dialog

class temp : public CDialog
{
// Construction
public:
	temp(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(temp)
	enum { IDD = IDD_DIALOG1 };
	double	m_height;
	double	m_width;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(temp)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(temp)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEMP_H__D4CAA3BF_82E0_490B_8BDD_91D1F592C1FE__INCLUDED_)
