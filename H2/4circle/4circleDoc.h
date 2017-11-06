// 4circleDoc.h : interface of the CMy4circleDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_4CIRCLEDOC_H__1D9DCE98_EF0B_482D_93E0_530B9666C5E6__INCLUDED_)
#define AFX_4CIRCLEDOC_H__1D9DCE98_EF0B_482D_93E0_530B9666C5E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy4circleDoc : public CDocument
{
protected: // create from serialization only
	CMy4circleDoc();
	DECLARE_DYNCREATE(CMy4circleDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy4circleDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy4circleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy4circleDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_4CIRCLEDOC_H__1D9DCE98_EF0B_482D_93E0_530B9666C5E6__INCLUDED_)
