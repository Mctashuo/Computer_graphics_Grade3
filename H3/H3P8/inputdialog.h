#if !defined(AFX_INPUTDIALOG_H__DCEA5000_6CC2_42A1_A983_A8FA488F186B__INCLUDED_)
#define AFX_INPUTDIALOG_H__DCEA5000_6CC2_42A1_A983_A8FA488F186B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// inputdialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cinputdialog dialog

class Cinputdialog : public CDialog
{
// Construction
public:
	Cinputdialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cinputdialog)
	enum { IDD = IDD_DIALOG1 };
	int		m_ex;
	int		m_ey;
	int		m_sx;
	int		m_sy;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cinputdialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cinputdialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INPUTDIALOG_H__DCEA5000_6CC2_42A1_A983_A8FA488F186B__INCLUDED_)
