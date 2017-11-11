// Perspective.cpp: implementation of the CPerspective class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Modeling.h"
#include "Perspective.h"
#define ROUND(a) int(a+0.5)//��������
#define PI 3.1415926//Բ����
#include "math.h"//��ѧͷ�ļ�

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPerspective::CPerspective()
{
	init();
}

CPerspective::~CPerspective()
{

}

void CPerspective::init()
{
	R = 800.0;d = 1000; Phi = 0; The = -90;
	ReadVertex();
	ReadFace();
	initPerPar();
}
void CPerspective::ReadVertex()
{
	int a = 400;
	P[0].x = 0;P[0].y = 0;P[0].z = 2 * sqrt(6) * a / 9;
	P[1].x=a/2;P[1].y=-sqrt(3)*a/6;P[1].z=-sqrt(6)*a/9;
	P[2].x=0;P[2].y=sqrt(3)*a/3;P[2].z=-sqrt(6)*a/9; 
	P[3].x=-a/2;P[3].y=-sqrt(3)*a/6;P[3].z=-sqrt(6)*a/9;  
}


void CPerspective::ReadFace()
{
	F[0].vN = 3;F[0].vI[0] = 0;F[0].vI[1] = 1;F[0].vI[2] = 2;
	F[1].vN = 3;F[1].vI[0] = 0;F[1].vI[1] = 2;F[1].vI[2] = 3;
	F[2].vN = 3;F[2].vI[0] = 0;F[2].vI[1] = 3;F[2].vI[2] = 1;
	F[3].vN = 3;F[3].vI[0] = 1;F[3].vI[1] = 3;F[3].vI[2] = 2;
}

void CPerspective::initPerPar()
{
	k[1]=sin(PI*The/180);
	k[2]=sin(PI*Phi/180);
	k[3]=cos(PI*The/180);
	k[4]=cos(PI*Phi/180);
	k[5]=k[3]*k[2];
	k[6]=k[1]*k[2];
	k[7]=k[3]*k[4];
	k[8]=k[1]*k[4];
	ViewPoint.x=R*k[5];//�û�����ϵ���ӵ�������
	ViewPoint.y=R*k[6];
	ViewPoint.z=R*k[4];
	
}
void CPerspective::Perspective(CP3 P)
{
	//����185
	CP3 ViewPoint;
	ViewPoint.x = -k[1] * P.x + k[3] * P.y;	//�۲�����ϵ����
	ViewPoint.y = -k[7] * P.x - k[8] * P.y + k[2] * P.z;
	ViewPoint.z = -k[5] * P.x - k[6] * P.y - k[4] * P.z + R;
	
	ScreenPoint.x = ROUND(d * ViewPoint.x / ViewPoint.z);
	ScreenPoint.y = ROUND(d * ViewPoint.x / ViewPoint.z);


}

