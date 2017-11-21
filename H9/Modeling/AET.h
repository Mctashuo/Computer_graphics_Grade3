// AET.h: interface for the CAET class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_AET_H__A37C0CAF_C774_400C_8D05_E4666D95C6D2__INCLUDED_)
#define AFX_AET_H__A37C0CAF_C774_400C_8D05_E4666D95C6D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P3.h"
class CAET  
{
public:
	CAET();
	virtual ~CAET();
public:
	double x;
	int yMax;
	double k;

	CP3 pb;
	CP3 pe;
	CP3 pc;
	CAET *pNext;
	

};

#endif // !defined(AFX_AET_H__A37C0CAF_C774_400C_8D05_E4666D95C6D2__INCLUDED_)
