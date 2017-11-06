// inputdialog.cpp : implementation file
//

#include "stdafx.h"
#include "H3P2.h"
#include "inputdialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cinputdialog dialog


Cinputdialog::Cinputdialog(CWnd* pParent /*=NULL*/)
	: CDialog(Cinputdialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cinputdialog)
	m_ex = 0;
	m_ey = 0;
	m_sx = 0;
	m_sy = 0;
	//}}AFX_DATA_INIT
}


void Cinputdialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cinputdialog)
	DDX_Text(pDX, IDC_EDIT_EX, m_ex);
	DDX_Text(pDX, IDC_EDIT_EY, m_ey);
	DDX_Text(pDX, IDC_EDIT_SX, m_sx);
	DDX_Text(pDX, IDC_EDIT_SY, m_sy);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cinputdialog, CDialog)
	//{{AFX_MSG_MAP(Cinputdialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cinputdialog message handlers
