// H3.cpp: implementation of the CH3 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Transform.h"
#include "H3.h"
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

CH3::CH3()
{

}

CH3::~CH3()
{

}

void CH3::init(double x,double y,CDC *pDC,CRect Rect)
{
	afa = x;beta = y;
	CPen MyPen,*OldPen;
	MyPen.CreatePen(PS_SOLID,3,RGB(128,128,128));
	OldPen=pDC->SelectObject(&MyPen);
	pDC->MoveTo(Rect.Width()/2,Rect.Height()/2);//����y��
	pDC->LineTo(Rect.Width(),Rect.Height()/2);
	pDC->TextOut(Rect.Width()-20,Rect.Height()/2-30,"x");
	pDC->MoveTo(Rect.Width()/2,Rect.Height()/2);//����z��
	pDC->LineTo(Rect.Width()/2,0);
	pDC->TextOut(Rect.Width()/2-20,10,"y");
	pDC->MoveTo(Rect.Width()/2,Rect.Height()/2);//����x��
	pDC->LineTo(Rect.Width()/2-Rect.Height()/2,Rect.Height());//�н�Ϊ135��
	pDC->TextOut(Rect.Width()/2-Rect.Height()/2-20,Rect.Height()-30,"z");
	pDC->TextOut(Rect.Width()/2-20,Rect.Height()/2-20,"0");
	pDC->SelectObject(OldPen);
	MyPen.DeleteObject();
}

void CH3::ReadPoint()
{
	int a=200;//������߳�
	//�������ά����
	P3[0].x=0;P3[0].y=0;P3[0].z=0;//A��
	P3[1].x=0;P3[1].y=a;P3[1].z=0;//B��
	P3[2].x=0;P3[2].y=a;P3[2].z=a;//C��
	P3[3].x=0;P3[3].y=0;P3[3].z=a;//D��
	//ǰ�����ά����
	P3[4].x=a;P3[4].y=0;P3[4].z=0;//E��
	P3[5].x=a;P3[5].y=a;P3[5].z=0;//F��
	P3[6].x=a;P3[6].y=a;P3[6].z=a;//G��
	P3[7].x=a;P3[7].y=0;P3[7].z=a;//H��
}

void CH3::ReadFace()
{
	F[0].En=4;F[0].p[0]=0;F[0].p[1]=3;F[0].p[2]=2;F[0].p[3]=1;//����ADCB
	F[1].En=4;F[1].p[0]=4;F[1].p[1]=5;F[1].p[2]=6;F[1].p[3]=7;//ǰ��EFGH
	F[2].En=4;F[2].p[0]=0;F[2].p[1]=4;F[2].p[2]=7;F[2].p[3]=3;//����AEHD
	F[3].En=4;F[3].p[0]=1;F[3].p[1]=2;F[3].p[2]=6;F[3].p[3]=5;//����BCGF
	F[4].En=4;F[4].p[0]=3;F[4].p[1]=7;F[4].p[2]=6;F[4].p[3]=2;//����DHGC
	F[5].En=4;F[5].p[0]=0;F[5].p[1]=1;F[5].p[2]=5;F[5].p[3]=4;//����ABFE
}


void CH3::DrawCube(CDC *pDC,CRect Rect)
{
	pDC->SetMapMode(MM_ANISOTROPIC);//�Զ�������ϵ
	pDC->SetWindowExt(Rect.Width(),Rect.Height());
	pDC->SetViewportExt(Rect.Width(),-Rect.Height());//x�����ң�y������ 
	pDC->SetViewportOrg(Rect.Width()/2,Rect.Height()/2);//��Ļ����Ϊԭ��	
	CP2 Point[4];//���������涥������
	ReadPoint();
	ReadFace();
	for(int nFace=0;nFace<6;nFace++)//��ѭ��
	{		
		for(int nEdge=0;nEdge<F[nFace].En;nEdge++)//��ѭ��
			Point[nEdge]=Project(P3[F[nFace].p[nEdge]]);//бƽ��ͶӰ		
		Line(pDC,nFace,Point);
	}
}


void CH3::Line(CDC *pDC,int nface,CP2 p[])
{
	for (int i=0;i<F[nface].En;i++)
	{
		if(i==0)
			pDC->MoveTo(ROUND(p[0].x),ROUND(p[0].y));
		else
			pDC->LineTo(ROUND(p[i].x),ROUND(p[i].y));
	}
	pDC->LineTo(ROUND(p[0].x),ROUND(p[0].y));
}

CP2 CH3::Project(CP3 P0)
{
	CP2 Pt;
	Pt.x=P0.y-P0.x*cos(beta*PI/180)/tan(afa*PI/180);
	Pt.y=P0.z-P0.x*sin(beta*PI/180)/tan(afa*PI/180);
	return Pt;	
}
