// RGB7Dlg.h : header file
//

#if !defined(AFX_RGB7DLG_H__C270D2B0_F933_4945_AA6F_11D1AF27559A__INCLUDED_)
#define AFX_RGB7DLG_H__C270D2B0_F933_4945_AA6F_11D1AF27559A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CRGB7Dlg dialog

class CRGB7Dlg : public CDialog
{
// Construction
public:
	CRGB7Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CRGB7Dlg)
	enum { IDD = IDD_RGB7_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRGB7Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CRGB7Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RGB7DLG_H__C270D2B0_F933_4945_AA6F_11D1AF27559A__INCLUDED_)
