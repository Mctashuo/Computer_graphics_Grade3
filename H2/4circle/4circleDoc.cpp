// 4circleDoc.cpp : implementation of the CMy4circleDoc class
//

#include "stdafx.h"
#include "4circle.h"

#include "4circleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy4circleDoc

IMPLEMENT_DYNCREATE(CMy4circleDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy4circleDoc, CDocument)
	//{{AFX_MSG_MAP(CMy4circleDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy4circleDoc construction/destruction

CMy4circleDoc::CMy4circleDoc()
{
	// TODO: add one-time construction code here

}

CMy4circleDoc::~CMy4circleDoc()
{
}

BOOL CMy4circleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy4circleDoc serialization

void CMy4circleDoc::Serialize(CArchive& ar)
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
// CMy4circleDoc diagnostics

#ifdef _DEBUG
void CMy4circleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy4circleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy4circleDoc commands
