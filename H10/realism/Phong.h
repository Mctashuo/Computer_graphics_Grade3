// Phong.h: interface for the CPhong class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PHONG_H__F3C66B6F_F5A6_445D_82DA_777F28DADC1F__INCLUDED_)
#define AFX_PHONG_H__F3C66B6F_F5A6_445D_82DA_777F28DADC1F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Vector.h"//����ʸ����
#include "Face.h"//��������
#include "Lighting.h"//����������
#include "Fill.h"//���������
#include "Light.h"
#include "P3.h"
class CPhong  
{
public:
	CPhong();
	virtual ~CPhong();
public:
	void ReadPoint();
	void ReadFace();
	void InitParameter();
	void PerProject(CP3);
	void DoubleBuffer(CDC *pDC, CRect Rect);
	void DrawObject(CDC *);
	void PlayW(CDC *pDC,CRect);
	void init();

public:
	double R,Theta,Phi;
	double d;//�Ӿ�
	CP3 P[8];//���
	CFace F[6];
	double k[9];//���㳣��
	CP3 ViewPoint;
	CP2 ScreenP;
	BOOL Play;
	CLighting *pLight;
	CMaterial *pMaterial;
	int LightNum;
	CFill fill;
};

#endif // !defined(AFX_PHONG_H__F3C66B6F_F5A6_445D_82DA_777F28DADC1F__INCLUDED_)
