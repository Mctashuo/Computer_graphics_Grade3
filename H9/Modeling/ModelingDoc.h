// ModelingDoc.h : interface of the CModelingDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MODELINGDOC_H__3E27DBDA_FA6E_4012_82AD_3DE33AE053D2__INCLUDED_)
#define AFX_MODELINGDOC_H__3E27DBDA_FA6E_4012_82AD_3DE33AE053D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CModelingDoc : public CDocument
{
protected: // create from serialization only
	CModelingDoc();
	DECLARE_DYNCREATE(CModelingDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModelingDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CModelingDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CModelingDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODELINGDOC_H__3E27DBDA_FA6E_4012_82AD_3DE33AE053D2__INCLUDED_)
