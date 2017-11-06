// star5Doc.cpp : implementation of the CStar5Doc class
//

#include "stdafx.h"
#include "star5.h"

#include "star5Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStar5Doc

IMPLEMENT_DYNCREATE(CStar5Doc, CDocument)

BEGIN_MESSAGE_MAP(CStar5Doc, CDocument)
	//{{AFX_MSG_MAP(CStar5Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStar5Doc construction/destruction

CStar5Doc::CStar5Doc()
{
	// TODO: add one-time construction code here

}

CStar5Doc::~CStar5Doc()
{
}

BOOL CStar5Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CStar5Doc serialization

void CStar5Doc::Serialize(CArchive& ar)
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
// CStar5Doc diagnostics

#ifdef _DEBUG
void CStar5Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CStar5Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStar5Doc commands
