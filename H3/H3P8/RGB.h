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
	double red;//��ɫ����
	double green;//��ɫ����
	double blue;//��ɫ����
};

#endif // !defined(AFX_RGB_H__E8E626D4_891C_435C_8FA6_A72E4E47CFAB__INCLUDED_)
