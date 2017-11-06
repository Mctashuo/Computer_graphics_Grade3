#if !defined(AFX_RECTANGLE_H__1EC945FE_346E_4719_9EEC_74BFDFF2E8DF__INCLUDED_)
#define AFX_RECTANGLE_H__1EC945FE_346E_4719_9EEC_74BFDFF2E8DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Rectangle.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Rectangle dialog

class Rectangle : public CDialog
{
// Construction
public:
	Rectangle(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Rectangle)
	enum { IDD = IDD_DIALOG_RECTANGLE };
	int		m_width;
	int		m_height;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Rectangle)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Rectangle)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECTANGLE_H__1EC945FE_346E_4719_9EEC_74BFDFF2E8DF__INCLUDED_)
