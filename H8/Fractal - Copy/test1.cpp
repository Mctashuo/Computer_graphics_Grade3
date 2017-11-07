// test1.cpp: implementation of the test1 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Fractal.h"
#include "test1.h"
#include "InputDlg.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

test1::test1()
{

}

test1::~test1()
{

}



void test1::testfw(CDC *pDC) 
{
	InputDlg dlg;
	dlg.DoModal();
	double n = dlg.m_n;
}
