// H3P2Doc.cpp : implementation of the CH3P2Doc class
//

#include "stdafx.h"
#include "H3P2.h"

#include "H3P2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CH3P2Doc

IMPLEMENT_DYNCREATE(CH3P2Doc, CDocument)

BEGIN_MESSAGE_MAP(CH3P2Doc, CDocument)
	//{{AFX_MSG_MAP(CH3P2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CH3P2Doc construction/destruction

CH3P2Doc::CH3P2Doc()
{
	// TODO: add one-time construction code here

}

CH3P2Doc::~CH3P2Doc()
{
}

BOOL CH3P2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CH3P2Doc serialization

void CH3P2Doc::Serialize(CArchive& ar)
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
// CH3P2Doc diagnostics

#ifdef _DEBUG
void CH3P2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CH3P2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CH3P2Doc commands
