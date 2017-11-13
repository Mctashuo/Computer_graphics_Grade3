// Bucket.h: interface for the CBucket class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUCKET_H__8B5E8829_59C7_4209_A3D9_49F995F2A1EF__INCLUDED_)
#define AFX_BUCKET_H__8B5E8829_59C7_4209_A3D9_49F995F2A1EF__INCLUDED_

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

#endif // !defined(AFX_BUCKET_H__8B5E8829_59C7_4209_A3D9_49F995F2A1EF__INCLUDED_)
