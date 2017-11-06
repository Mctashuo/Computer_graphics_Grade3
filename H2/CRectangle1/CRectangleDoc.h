// CRectangleDoc.h : interface of the CCRectangleDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CRECTANGLEDOC_H__46AC7C3C_C85B_4EEA_A6D8_ECB690E076C6__INCLUDED_)
#define AFX_CRECTANGLEDOC_H__46AC7C3C_C85B_4EEA_A6D8_ECB690E076C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCRectangleDoc : public CDocument
{
protected: // create from serialization only
	CCRectangleDoc();
	DECLARE_DYNCREATE(CCRectangleDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCRectangleDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCRectangleDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCRectangleDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRECTANGLEDOC_H__46AC7C3C_C85B_4EEA_A6D8_ECB690E076C6__INCLUDED_)
