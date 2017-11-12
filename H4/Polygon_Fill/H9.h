// H9.h: interface for the CH9 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H9_H__F5971CFD_BE55_42FE_9CE5_BD537C7F076A__INCLUDED_)
#define AFX_H9_H__F5971CFD_BE55_42FE_9CE5_BD537C7F076A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "PFill.h"
class CH9  :public CPFill
{
public:
	CH9();
	virtual ~CH9();
	void init(CDC *);
public:
	CPoint Point[9];
};

#endif // !defined(AFX_H9_H__F5971CFD_BE55_42FE_9CE5_BD537C7F076A__INCLUDED_)
