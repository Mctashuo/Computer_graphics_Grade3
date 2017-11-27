// Light.h: interface for the CLight class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIGHT_H__91388ED5_4534_4F24_B78B_6D20D8E7628A__INCLUDED_)
#define AFX_LIGHT_H__91388ED5_4534_4F24_B78B_6D20D8E7628A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P3.h"
#include "RGB.h"

class CLight  
{
public:
	CLight();
	virtual ~CLight();

	void SetDiffuse(CRGB);		//漫反射光
	void SetMirror(CRGB);		//镜面反射光

	void SetPosition(double,double,double);		//设置光源位置
	void SetGlobal(double, double, double);
	void GlobalToXYZ();
	void SetCoef(double, double,double);

	void SetOpen(BOOL);		//开关

public:
	CRGB L_Diffuse;
	CRGB L_Mirror;
	CP3 L_Position;
	double L_R,L_Phi,L_Theta;		//光源球坐标
	double L_C0,L_C1,L_C2;		//衰减指数
	BOOL L_Open;

};

#endif // !defined(AFX_LIGHT_H__91388ED5_4534_4F24_B78B_6D20D8E7628A__INCLUDED_)
