// Perspective.cpp: implementation of the CPerspective class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Modeling.h"
#include "Perspective.h"
#define ROUND(a) int(a+0.5)//��������
#define PI 3.1415926//Բ����
#include "math.h"//��ѧͷ�ļ�
#include "Vector.h"
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
//	init();
	R = 800.0;d = 1000; Phi = 0; The = -90;
}

CPerspective::~CPerspective()
{

}

void CPerspective::init()
{

	ReadVertex();
	ReadFace();
	initPerPar();
	//DrawBuffer();
}
void CPerspective::ReadVertex()
{
	int a = 600;
	P[0].x = 0;P[0].y = 0;P[0].z = 2 * sqrt(6) * a / 9;
	P[1].x=a/2;P[1].y=-sqrt(3)*a/6;P[1].z = -sqrt(6)*a/9;
	P[2].x=0;P[2].y=sqrt(3)*a/3;P[2].z = -sqrt(6)*a/9; 
	P[3].x=-a/2;P[3].y=-sqrt(3)*a/6;P[3].z = -sqrt(6)*a/9;  
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
	ScreenPoint.y = ROUND(d * ViewPoint.y / ViewPoint.z);


}




void CPerspective::DrawBuffer(CDC *pDC,CRect Rect)
{
	pDC->SetMapMode(MM_ANISOTROPIC);//�Զ�������ϵ
	pDC->SetWindowExt(Rect.Width(),Rect.Height());
	pDC->SetViewportExt(Rect.Width(),-Rect.Height());//x��ˮƽ���ң�y�ᴹֱ����
	pDC->SetViewportOrg(Rect.Width()/2,Rect.Height()/2);//��Ļ����Ϊԭ��	
	
	CDC MemDC,Picture;

	MemDC.CreateCompatibleDC(pDC);
	MemDC.SetMapMode(MM_ANISOTROPIC);
	MemDC.SetWindowExt(Rect.Width(),Rect.Height());
	MemDC.SetViewportExt(Rect.Width(),-Rect.Height());
	MemDC.SetViewportOrg(Rect.Width()/2,Rect.Height()/2);


	CBitmap NewBitmap,*OldBitmap;
	NewBitmap.CreateCompatibleBitmap(pDC,Rect.Width(),Rect.Height());	//������ͻ�����ڴ�λͼ
	OldBitmap=MemDC.SelectObject(&NewBitmap);
	
	CRect r = CRect(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height());
	MemDC.FillSolidRect(r,pDC->GetBkColor());	//old background color fill

	MemDC.BitBlt(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height(),&Picture,-Rect.Width()/2,-Rect.Height()/2,SRCCOPY);
	CPen NewPen,*OldPen;

	NewPen.CreatePen(PS_SOLID,2,RGB(0,0,0));

	OldPen = MemDC.SelectObject(&NewPen);
/*	CPoint p1,p2;
	p1.x = -500;
	p1.y = -500;
	p2.x = 500;p2.y = 500;
	MemDC.MoveTo(p1);
	MemDC.LineTo(p2);
*/	
	DrawObject(&MemDC);	

	//MemDC.MoveTo(-500,-500);
	//MemDC.LineTo(ScreenPoint);

	pDC->BitBlt(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height(),&MemDC,-Rect.Width()/2,-Rect.Height()/2,SRCCOPY);

	MemDC.SelectObject(OldBitmap);	
	NewBitmap.DeleteObject();


}


void CPerspective::DrawFace(CDC *pDC,int NumberFace)
{
	CPoint t;

	for(int n = 0;n < F[NumberFace].vN;n++) //circle edge
	{
		Perspective(P[F[NumberFace].vI[n]]);		//͸��ͶӰ
	
		if( n == 0)
		{
			pDC->MoveTo(ScreenPoint);
			t = ScreenPoint;
		}

		else
		{
			pDC->LineTo(ScreenPoint);
		}
	}

	pDC->LineTo(t);
}



void CPerspective::DrawObject(CDC *pDC)
{
	for(int n = 0;n < 4;n++)
	{
		CVector V0(P[F[n].vI[1]],ViewPoint);	//����ʸ��
		CVector V1(P[F[n].vI[0]],P[F[n].vI[1]]);	//����ʸ��
		CVector V2(P[F[n].vI[1]],P[F[n].vI[2]]);	//����ʸ��

		CVector VN = V1 * V2;	//�淨ʸ��


		if(Dot(V0,VN) >= 0)		//����
		{
			DrawFace(pDC,n);
		}
	}
}

void CPerspective::Play(CDC *pDC,CRect Rect)
{
	Phi -= 1;
	The -= 1;
	init();
	DrawBuffer(pDC,Rect);
}