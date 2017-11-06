// Rectangle.cpp : implementation file
//

#include "stdafx.h"
#include "CRectangle.h"
#include "Rectangle.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Rectangle dialog


Rectangle::Rectangle(CWnd* pParent /*=NULL*/)
	: CDialog(Rectangle::IDD, pParent)
{
	//{{AFX_DATA_INIT(Rectangle)
	m_width = 0;
	m_height = 0;
	//}}AFX_DATA_INIT
}


void Rectangle::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Rectangle)
	DDX_Text(pDX, IDC_EDIT_WIDTH, m_width);
	DDX_Text(pDX, IDC_EDIT_HEIGHT, m_height);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Rectangle, CDialog)
	//{{AFX_MSG_MAP(Rectangle)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Rectangle message handlers

