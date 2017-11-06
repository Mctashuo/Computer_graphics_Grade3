// Line3Doc.cpp : implementation of the CLine3Doc class
//

#include "stdafx.h"
#include "Line3.h"

#include "Line3Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLine3Doc

IMPLEMENT_DYNCREATE(CLine3Doc, CDocument)

BEGIN_MESSAGE_MAP(CLine3Doc, CDocument)
	//{{AFX_MSG_MAP(CLine3Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLine3Doc construction/destruction

CLine3Doc::CLine3Doc()
{
	// TODO: add one-time construction code here

}

CLine3Doc::~CLine3Doc()
{
}

BOOL CLine3Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CLine3Doc serialization

void CLine3Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CLine3Doc diagnostics

#ifdef _DEBUG
void CLine3Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CLine3Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLine3Doc commands
