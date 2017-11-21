// H4.cpp: implementation of the CH4 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Transform.h"
#include "H4.h"
#include "math.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif
#define ROUND(a) int(a+0.5)//��������
#define PI 3.1415926//Բ����

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH4::CH4()
{

}

CH4::~CH4()
{

}


void CH4::init(CDC *pDC)
{

	MaxX = 1918;MaxY = 976;
	CPen NewPen3d,NewPen2d,NewPen,*OldPen;
	NewPen3d.CreatePen(PS_SOLID,1,RGB(128,128,128));
	OldPen=pDC->SelectObject(&NewPen3d);
	pDC->MoveTo(MaxX/4,MaxY/2);//����y��
	pDC->LineTo(MaxX/2-25,MaxY/2);
	pDC->TextOut(MaxX/2-50,MaxY/2-20,"y");
	pDC->MoveTo(MaxX/4,MaxY/2);//����z��
	pDC->LineTo(MaxX/4,0);
	pDC->TextOut(MaxX/4-20,10,"z");
	pDC->MoveTo(MaxX/4,MaxY/2);//����x��
	pDC->LineTo(MaxX/4-MaxY/2,MaxY);//�н�Ϊ135��
	pDC->TextOut(MaxX/4-MaxY/2+70,MaxY-30,"x");
	pDC->TextOut(MaxX/4-20,MaxY/2-10,"0");
	pDC->TextOut(20,20,"б�Ȳ�ͶӰͼ");
	pDC->SelectObject(OldPen);
	NewPen3d.DeleteObject();
	NewPen.CreatePen(PS_SOLID,3,RGB(128,128,128));
	OldPen=pDC->SelectObject(&NewPen);
	pDC->MoveTo(MaxX/2-25,0);//���Ʒָ���
	pDC->LineTo(MaxX/2-25,MaxY);
	pDC->SelectObject(OldPen);
	NewPen.DeleteObject();
	NewPen2d.CreatePen(PS_SOLID,1,RGB(128,128,128));
	OldPen=pDC->SelectObject(&NewPen2d);
	pDC->MoveTo(MaxX/2-25,MaxY/2);//����x��
	pDC->LineTo(3*MaxX/4,MaxY/2);
	pDC->TextOut(MaxX/2-15,MaxY/2-20,"x");
	pDC->MoveTo(3*MaxX/4,MaxY/2);//����z��
	pDC->LineTo(3*MaxX/4,0);
	pDC->TextOut(3*MaxX/4-20,10,"z");
	pDC->MoveTo(3*MaxX/4,MaxY/2);//������y��
	pDC->LineTo(MaxX,MaxY/2);
	pDC->TextOut(MaxX-20,MaxY/2-20,"y");
	pDC->MoveTo(3*MaxX/4,MaxY/2);//������y��
	pDC->LineTo(3*MaxX/4,MaxY);
	pDC->TextOut(3*MaxX/4-20,MaxY-20,"y");
	pDC->TextOut(MaxX/2+10,20,"����ͼ");
	pDC->SelectObject(OldPen);
	NewPen2d.DeleteObject();	
}

void CH4::ReadPoint()
{
	P3[0][0]=0;  P3[0][1]=0;  P3[0][2]=0;  P3[0][3]=1;//A��
	P3[1][0]=0;  P3[1][1]=200;P3[1][2]=0;  P3[1][3]=1;//B��
	P3[2][0]=0;  P3[2][1]=200;P3[2][2]=100;P3[2][3]=1;//C��
	P3[3][0]=0;  P3[3][1]=0;  P3[3][2]=100;P3[3][3]=1;//D��
	P3[4][0]=100;P3[4][1]=0;  P3[4][2]=0;  P3[4][3]=1;//E��
	P3[5][0]=100;P3[5][1]=200;P3[5][2]=0;  P3[5][3]=1;//F��
	P3[6][0]=100;P3[6][1]=200;P3[6][2]=100;P3[6][3]=1;//G��
	P3[7][0]=100;P3[7][1]=0;  P3[7][2]=100;P3[7][3]=1;//H��
	P3[8][0]=50; P3[8][1]=0;  P3[8][2]=150;P3[8][3]=1;//I��
	P3[9][0]=50; P3[9][1]=200;P3[9][2]=150;P3[9][3]=1;//J��	
}


void CH4::ReadFace()
{
	F[0].En=4;F[0].p[0]=0;F[0].p[1]=3;F[0].p[2]=2;F[0].p[3]=1;//����ADEB
	F[1].En=4;F[1].p[0]=4;F[1].p[1]=5;F[1].p[2]=6;F[1].p[3]=7;//ǰ��EFGH
	F[2].En=5;F[2].p[0]=4;F[2].p[1]=7;F[2].p[2]=8;F[2].p[3]=3;F[2].p[4]=0;//����EHIDA
	F[3].En=5;F[3].p[0]=1;F[3].p[1]=2;F[3].p[2]=9;F[3].p[3]=6;F[3].p[4]=5;//����BCJGF
	F[4].En=4;F[4].p[0]=3;F[4].p[1]=8;F[4].p[2]=9;F[4].p[3]=2;//����DIJC
	F[5].En=4;F[5].p[0]=7;F[5].p[1]=6;F[5].p[2]=9;F[5].p[3]=8;//ǰ����HGJI
	F[6].En=4;F[6].p[0]=0;F[6].p[1]=1;F[6].p[2]=5;F[6].p[3]=4;//����HBFE
}

void CH4::DrawPolygon(CDC *pDC,CRect Rect)
{
	ReadPoint();
	ReadFace();
	Project(P3,P2,10);//б�Ȳ�ͶӰ�任
	pDC->SetMapMode(MM_ANISOTROPIC);//�Զ�������ϵ
	pDC->SetWindowExt(Rect.Width(),Rect.Height());
	pDC->SetViewportExt(Rect.Width(),-Rect.Height());//x��ˮƽ���ң�y�ᴹֱ���� 
	pDC->SetViewportOrg(Rect.Width()/2,Rect.Height()/2);//��Ļ����Ϊԭ��
	CPoint p[5];//�������ζ�������
	int TotalEdge,PointNumber;
	for(int nFace=0;nFace<7;nFace++)
	{
		TotalEdge=F[nFace].En;//ÿ������ܱ���
		for(int nEdge=0;nEdge<F[nFace].En;nEdge++)//��ѭ��
		{
			PointNumber=F[nFace].p[nEdge];//��Ķ����
			p[nEdge]=CPoint(-MaxX/4+ROUND(P2[PointNumber][0]),ROUND(P2[PointNumber][1]));
		}
		Line(pDC,p,TotalEdge);//����бͶӰͼ		    	
	}		
}
void CH4::Line(CDC *pDC,CPoint p[],int num)//���ƶ���κ���
{
	for(int i=0;i<num;i++)
		if(i==0)
			pDC->MoveTo(p[i]);
		else
			pDC->LineTo(p[i]);
		pDC->LineTo(p[0]);
}

void CH4::Project(const double P3[][4],double P2[][3],const int n)
{
	for(int i=0;i<n;i++)
	{
		P2[i][0]=P3[i][1]-P3[i][0]/sqrt(2);
		P2[i][1]=P3[i][2]-P3[i][0]/sqrt(2);
	}
}

void CH4::DrawVView(CDC *pDC,CRect Rect)//����ͼ�任����
{
	ClearMatrix(TV);
	TV[0][0]=1;
	TV[2][2]=1;
	TV[3][3]=1;
	MultiMatrix(P3,TV);
	DrawTriView(pDC,Rect);
}
void CH4::DrawHView(CDC *pDC,CRect Rect)//����ͼ�任����
{
	ClearMatrix(TH);
	TH[0][0]=1;
	TH[1][2]=-1;
	TH[3][2]=-30;
	TH[3][3]=1;
	MultiMatrix(P3,TH);
	DrawTriView(pDC,Rect);
}
void CH4::DrawWView(CDC *pDC,CRect Rect)//����ͼ�任����
{
	ClearMatrix(TW);
	TW[1][0]=-1;
	TW[2][2]=1;
	TW[3][0]=-30;
	TW[3][3]=1;
	MultiMatrix(P3,TW);
	DrawTriView(pDC,Rect);
}

void CH4::ClearMatrix(int A[][4])//����任����
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			A[i][j]=0;
	}
}
void CH4::MultiMatrix(double P[][4],int T[][4])//�����������
{
	for(int i=0;i<10;i++)
		for(int j=0;j<4;j++)
		{
			Tri[i][j]=P3[i][0]*T[0][j]+P3[i][1]*T[1][j]+P3[i][2]*T[2][j]+P3[i][3]*T[3][j];					
		}
}

void CH4::DrawTriView(CDC *pDC,CRect Rect)//��������ͼ
{

	pDC->SetMapMode(MM_ANISOTROPIC);//�Զ�������ϵ
	pDC->SetWindowExt(Rect.Width(),Rect.Height());
	pDC->SetViewportExt(Rect.Width(),-Rect.Height());//x�����ң�y������ 
	pDC->SetViewportOrg(Rect.Width()/2,Rect.Height()/2);//��Ļ����Ϊԭ��
	CPoint p[5];
	int TotalEdge,PointNumber;
	for(int nFace=0;nFace<7;nFace++)
	{
		TotalEdge=F[nFace].En;//ÿ������ܱ���
		for(int nEdge=0;nEdge<F[nFace].En;nEdge++)//��ѭ��
		{
			PointNumber=F[nFace].p[nEdge];//��Ķ����
			p[nEdge]=CPoint(MaxX/4-ROUND(Tri[PointNumber][0]),ROUND(Tri[PointNumber][2]));		
		}
			Line(pDC,p,TotalEdge);	
	}
}