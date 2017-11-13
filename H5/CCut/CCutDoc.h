// CCutDoc.h : interface of the CCCutDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CCUTDOC_H__1F2C5056_E0B0_4346_95D5_BC802C6CD9D0__INCLUDED_)
#define AFX_CCUTDOC_H__1F2C5056_E0B0_4346_95D5_BC802C6CD9D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCCutDoc : public CDocument
{
protected: // create from serialization only
	CCCutDoc();
	DECLARE_DYNCREATE(CCCutDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCCutDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCCutDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCCutDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CCUTDOC_H__1F2C5056_E0B0_4346_95D5_BC802C6CD9D0__INCLUDED_)
