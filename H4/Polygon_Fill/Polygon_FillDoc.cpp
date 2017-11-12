// Polygon_FillDoc.cpp : implementation of the CPolygon_FillDoc class
//

#include "stdafx.h"
#include "Polygon_Fill.h"

#include "Polygon_FillDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillDoc

IMPLEMENT_DYNCREATE(CPolygon_FillDoc, CDocument)

BEGIN_MESSAGE_MAP(CPolygon_FillDoc, CDocument)
	//{{AFX_MSG_MAP(CPolygon_FillDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillDoc construction/destruction

CPolygon_FillDoc::CPolygon_FillDoc()
{
	// TODO: add one-time construction code here

}

CPolygon_FillDoc::~CPolygon_FillDoc()
{
}

BOOL CPolygon_FillDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillDoc serialization

void CPolygon_FillDoc::Serialize(CArchive& ar)
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
// CPolygon_FillDoc diagnostics

#ifdef _DEBUG
void CPolygon_FillDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPolygon_FillDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillDoc commands
