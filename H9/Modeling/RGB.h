// RGB.h: interface for the CRGB class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RGB_H__8F3C11F9_4E40_4624_B0D4_39181E65B7C3__INCLUDED_)
#define AFX_RGB_H__8F3C11F9_4E40_4624_B0D4_39181E65B7C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRGB  //��ɫ��
{
public:
	CRGB();
	CRGB(double,double,double);
	friend CRGB operator+(CRGB &,CRGB &);
	friend CRGB operator*(double,CRGB &);
	virtual ~CRGB();
public:
	double red;//��ɫ����
	double green;//��ɫ����
	double blue;//��ɫ����
};


#endif // !defined(AFX_RGB_H__8F3C11F9_4E40_4624_B0D4_39181E65B7C3__INCLUDED_)
