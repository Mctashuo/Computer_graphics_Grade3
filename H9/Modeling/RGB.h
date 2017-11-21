// RGB.h: interface for the CRGB class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RGB_H__8F3C11F9_4E40_4624_B0D4_39181E65B7C3__INCLUDED_)
#define AFX_RGB_H__8F3C11F9_4E40_4624_B0D4_39181E65B7C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRGB  //颜色类
{
public:
	CRGB();
	CRGB(double,double,double);
	friend CRGB operator+(CRGB &,CRGB &);
	friend CRGB operator*(double,CRGB &);
	virtual ~CRGB();
public:
	double red;//红色分量
	double green;//绿色分量
	double blue;//蓝色分量
};


#endif // !defined(AFX_RGB_H__8F3C11F9_4E40_4624_B0D4_39181E65B7C3__INCLUDED_)
