// H4.cpp: implementation of the CH4 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H4.h"
#include "Fill.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH4::CH4()
{

}

CH4::~CH4()
{

}


void CH4::ReadPoint()
{
	int a=200;
	//�����һ�������ε������Ƕ�������
	P1[0] = CPoint(1800/4,800/2+a);//P1
	P1[1] = CPoint(1800/4+a,800/2);//P2
	P1[2] = CPoint(1800/4-a,800/2);//P3
	//�����һ�������ε������Ƕ�������
	P2[0]=CPoint(1800/4-a,800/2);
	P2[1]=CPoint(1800/4+a,800/2);
	P2[2]=CPoint(1800/4,800/2-a);
	//����ڶ��������ε������Ƕ�������
	P3[0]=CPoint(3*1800/4,800/2+a);
	P3[1]=CPoint(3*1800/4,800/2-a);
	P3[2]=CPoint(3*1800/4-a,800/2);
	//����ڶ��������ε������Ƕ�������
	P4[0]=CPoint(3*1800/4,800/2+a);
	P4[1]=CPoint(3*1800/4+a,800/2);
	P4[2]=CPoint(3*1800/4,800/2-a);


}
