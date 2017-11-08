// FreeLineDoc.h : interface of the CFreeLineDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FREELINEDOC_H__8E8F29F5_BE2B_47AF_9F54_049C0534905E__INCLUDED_)
#define AFX_FREELINEDOC_H__8E8F29F5_BE2B_47AF_9F54_049C0534905E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFreeLineDoc : public CDocument
{
protected: // create from serialization only
	CFreeLineDoc();
	DECLARE_DYNCREATE(CFreeLineDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFreeLineDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFreeLineDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFreeLineDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FREELINEDOC_H__8E8F29F5_BE2B_47AF_9F54_049C0534905E__INCLUDED_)
