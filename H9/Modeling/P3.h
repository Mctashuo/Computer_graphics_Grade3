// P3.h: interface for the CP3 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_P3_H__6AA6102F_1716_4295_9E35_05842106FB4B__INCLUDED_)
#define AFX_P3_H__6AA6102F_1716_4295_9E35_05842106FB4B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "RGB.h"
class CP3  
{
public:
	CP3();

	virtual ~CP3();
public:
	double x;
	double y;
	double z;
	CRGB   c;

};

#endif // !defined(AFX_P3_H__6AA6102F_1716_4295_9E35_05842106FB4B__INCLUDED_)
