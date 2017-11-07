#if !defined(AFX_TEST_H__5EFDFE47_0C6A_4EB9_BCA3_777B6B9F4B95__INCLUDED_)
#define AFX_TEST_H__5EFDFE47_0C6A_4EB9_BCA3_777B6B9F4B95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// test.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// test view

class test : public CView
{
protected:
	test();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(test)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(test)
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~test();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(test)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_H__5EFDFE47_0C6A_4EB9_BCA3_777B6B9F4B95__INCLUDED_)
