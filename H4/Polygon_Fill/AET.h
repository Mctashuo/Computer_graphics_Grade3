// AET.h: interface for the CAET class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_AET_H__ADB32BC5_B57E_41C5_9E06_193D5418BF35__INCLUDED_)
#define AFX_AET_H__ADB32BC5_B57E_41C5_9E06_193D5418BF35__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Px.h"
class CAET  
{
public:
	CAET();
	virtual ~CAET();
public:
	double x;
	int yMax;
	double k;
	
	CPx pb;
	CPx pe;

	CAET *pNext;


};

#endif // !defined(AFX_AET_H__ADB32BC5_B57E_41C5_9E06_193D5418BF35__INCLUDED_)
