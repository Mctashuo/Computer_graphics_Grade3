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

	void SetDiffuse(CRGB);		//�������
	void SetMirror(CRGB);		//���淴���

	void SetPosition(double,double,double);		//���ù�Դλ��
	void SetGlobal(double, double, double);
	void GlobalToXYZ();
	void SetCoef(double, double,double);

	void SetOpen(BOOL);		//����

public:
	CRGB L_Diffuse;
	CRGB L_Mirror;
	CP3 L_Position;
	double L_R,L_Phi,L_Theta;		//��Դ������
	double L_C0,L_C1,L_C2;		//˥��ָ��
	BOOL L_Open;

};

#endif // !defined(AFX_LIGHT_H__91388ED5_4534_4F24_B78B_6D20D8E7628A__INCLUDED_)
