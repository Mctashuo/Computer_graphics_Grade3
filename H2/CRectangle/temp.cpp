// temp.cpp : implementation file
//

#include "stdafx.h"
#include "CRectangle.h"
#include "temp.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// temp dialog


temp::temp(CWnd* pParent /*=NULL*/)
	: CDialog(temp::IDD, pParent)
{
	//{{AFX_DATA_INIT(temp)
	m_height = 0.0;
	m_width = 0.0;
	//}}AFX_DATA_INIT
}


void temp::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(temp)
	DDX_Text(pDX, IDC_EDIT_HEIGHT, m_height);
	DDX_Text(pDX, IDC_EDIT_WIDTH, m_width);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(temp, CDialog)
	//{{AFX_MSG_MAP(temp)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// temp message handlers

void temp::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
