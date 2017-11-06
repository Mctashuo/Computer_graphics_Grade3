// RGB.h: interface for the CRGB class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RGB_H__E8E626D4_891C_435C_8FA6_A72E4E47CFAB__INCLUDED_)
#define AFX_RGB_H__E8E626D4_891C_435C_8FA6_A72E4E47CFAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRGB  
{
public:
	CRGB();
	virtual ~CRGB();
	CRGB(double,double,double);
public:
	double red;//红色分量
	double green;//绿色分量
	double blue;//蓝色分量
};

#endif // !defined(AFX_RGB_H__E8E626D4_891C_435C_8FA6_A72E4E47CFAB__INCLUDED_)
