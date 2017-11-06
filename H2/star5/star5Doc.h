// star5Doc.h : interface of the CStar5Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_STAR5DOC_H__738F2C55_8FC1_44A5_8D16_B08A3CDB0651__INCLUDED_)
#define AFX_STAR5DOC_H__738F2C55_8FC1_44A5_8D16_B08A3CDB0651__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CStar5Doc : public CDocument
{
protected: // create from serialization only
	CStar5Doc();
	DECLARE_DYNCREATE(CStar5Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStar5Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CStar5Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CStar5Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STAR5DOC_H__738F2C55_8FC1_44A5_8D16_B08A3CDB0651__INCLUDED_)
