// TransformDoc.h : interface of the CTransformDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TRANSFORMDOC_H__8E09878E_2B27_41B7_BF6F_A8FDA36A4693__INCLUDED_)
#define AFX_TRANSFORMDOC_H__8E09878E_2B27_41B7_BF6F_A8FDA36A4693__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTransformDoc : public CDocument
{
protected: // create from serialization only
	CTransformDoc();
	DECLARE_DYNCREATE(CTransformDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransformDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTransformDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTransformDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSFORMDOC_H__8E09878E_2B27_41B7_BF6F_A8FDA36A4693__INCLUDED_)
