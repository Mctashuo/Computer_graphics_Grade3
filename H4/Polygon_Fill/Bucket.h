// Bucket.h: interface for the CBucket class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUCKET_H__935B76A0_1ACE_483C_B960_3B0A00C4BDD2__INCLUDED_)
#define AFX_BUCKET_H__935B76A0_1ACE_483C_B960_3B0A00C4BDD2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "AET.h"
class CBucket  
{
public:
	CBucket();
	virtual ~CBucket();
public:
	int ScanLine;
	CAET *pET;
	CBucket *pNext;
};

#endif // !defined(AFX_BUCKET_H__935B76A0_1ACE_483C_B960_3B0A00C4BDD2__INCLUDED_)
