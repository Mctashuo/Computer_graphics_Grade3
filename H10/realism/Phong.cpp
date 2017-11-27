// Phong.cpp: implementation of the CPhong class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "realism.h"
#include "Phong.h"

#define ROUND(a) int(a+0.5)
#define PI 3.1415926
#include "cmath"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPhong::CPhong()
{
	Play=FALSE;
	R=800.0,d=1000,Phi=-45,Theta=-50;//视点位置	
	LightNum=1;//光源数量
	pLight=new CLighting(LightNum);
	pLight->Light[0].SetGlobal(R,Phi,Theta);//光源位置
	//设置光源参数
	for(int i=0;i<LightNum;i++)
	{
		pLight->Light[i].L_Diffuse=CRGB(0.8,0.8,0.8);
		pLight->Light[i].L_Mirror=CRGB(0.508,0.508,0.508);
		pLight->Light[i].L_C0=1.0;
		pLight->Light[i].L_C1=0.0000001;
		pLight->Light[i].L_C2=0.00000001;
		pLight->Light[i].L_Open=TRUE;
	}	
	//设置材质参数
	pMaterial=new CMaterial;
	pMaterial->M_Enviroment=CRGB(0.247,0.2,0.075);
	pMaterial->M_Diffuse=CRGB(0.752,0.606,0.226);
	pMaterial->M_Mirror=CRGB(0.628,0.556,0.366);
	pMaterial->M_Exp=5.0;//高光指数

}

CPhong::~CPhong()
{
	if(pMaterial)
		delete pMaterial;
}

void CPhong::ReadPoint()
{
	double a=300;//正方体边长
	//顶点的三维坐标(x,y,z)
	P[0].x=-a/2;P[0].y=-a/2;P[0].z=-a/2;
	P[1].x=a/2; P[1].y=-a/2;P[1].z=-a/2;
	P[2].x=a/2; P[2].y=a/2; P[2].z=-a/2;
	P[3].x=-a/2;P[3].y=a/2; P[3].z=-a/2;
	P[4].x=-a/2;P[4].y=-a/2;P[4].z=a/2;
	P[5].x=a/2; P[5].y=-a/2;P[5].z=a/2;
	P[6].x=a/2; P[6].y=a/2; P[6].z=a/2;
	P[7].x=-a/2;P[7].y=a/2; P[7].z=a/2;
}
void CPhong::ReadFace()
{
	F[0].En=4;F[0].p[0]=0;F[0].p[1]=3;F[0].p[2]=2;F[0].p[3]=1;//后面
	F[1].En=4;F[1].p[0]=4;F[1].p[1]=5;F[1].p[2]=6;F[1].p[3]=7;//前面
	F[2].En=4;F[2].p[0]=0;F[2].p[1]=4;F[2].p[2]=7;F[2].p[3]=3;//左面
	F[3].En=4;F[3].p[0]=1;F[3].p[1]=2;F[3].p[2]=6;F[3].p[3]=5;//右面
	F[4].En=4;F[4].p[0]=3;F[4].p[1]=7;F[4].p[2]=6;F[4].p[3]=2;//顶面
	F[5].En=4;F[5].p[0]=0;F[5].p[1]=1;F[5].p[2]=5;F[5].p[3]=4;//底面
}


void CPhong::InitParameter()
{
	k[1]=sin(PI*Theta/180);
	k[2]=sin(PI*Phi/180);
	k[3]=cos(PI*Theta/180);
	k[4]=cos(PI*Phi/180);
	k[5]=k[3]*k[2];
	k[6]=k[1]*k[2];
	k[7]=k[3]*k[4];
	k[8]=k[1]*k[4];
	ViewPoint.x=R*k[5];//用户坐标系的视点球坐标
	ViewPoint.y=R*k[6];
	ViewPoint.z=R*k[4];
}



void CPhong::PerProject(CP3 P)		//透视变换
{

	CP3 ViewP;
	ViewP.x =- k[1]*P.x + k[3]*P.y;
	ViewP.y=ROUND(-k[7]*P.x-k[8]*P.y+k[2]*P.z);
	ViewP.z=-k[5]*P.x-k[6]*P.y-k[4]*P.z+R;
	ViewP.c=P.c;
	ScreenP.x=d*ViewP.x/ViewP.z;
	ScreenP.y=ROUND(d*ViewP.y/ViewP.z);
	ScreenP.c=ViewP.c;
	
}
void CPhong::DoubleBuffer(CDC *pDC, CRect Rect)
{
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(Rect.Width(),Rect.Height());
	pDC->SetViewportExt(Rect.Width(),-Rect.Height());
	pDC->SetViewportOrg(Rect.Width()/2,Rect.Height()/2);
	
	CDC MemDC,Picture;

	MemDC.CreateCompatibleDC(pDC);
	MemDC.SetMapMode(MM_ANISOTROPIC);
	MemDC.SetWindowExt(Rect.Width(),Rect.Height());
	MemDC.SetViewportExt(Rect.Width(),-Rect.Height());
	MemDC.SetViewportOrg(Rect.Width()/2,Rect.Height()/2);


	CBitmap NewBitmap,*OldBitmap;
	NewBitmap.CreateCompatibleBitmap(pDC,Rect.Width(),Rect.Height());	
	OldBitmap=MemDC.SelectObject(&NewBitmap);
	
	CRect r = CRect(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height());
//	MemDC.FillSolidRect(r,pDC->GetBkColor());	//old background color fill

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
//	MemDC.LineTo(500,500);

	pDC->BitBlt(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height(),&MemDC,-Rect.Width()/2,-Rect.Height()/2,SRCCOPY);

	MemDC.SelectObject(OldBitmap);	
	NewBitmap.DeleteObject();
}


void CPhong::DrawObject(CDC *pDC)
{
	CPi2  Point[4];
	
	for(int nFace=0;nFace<6;nFace++)
	{
		
		CVector VS(P[F[nFace].p[1]],ViewPoint);
		CVector V01(P[F[nFace].p[0]],P[F[nFace].p[1]]);
		CVector V12(P[F[nFace].p[1]],P[F[nFace].p[2]]);
		CVector VN=V01 * V12;
		if(Dot(VS,VN)>=0)
		{
			for(int nEdge=0;nEdge<F[nFace].En;nEdge++)
			{
				PerProject(P[F[nFace].p[nEdge]]);
				Point[nEdge].x=ScreenP.x;
				Point[nEdge].y=ROUND(ScreenP.y);
			 	Point[nEdge].c=pLight->Lighting(ViewPoint,P[F[nFace].p[nEdge]],VN,pMaterial);
				//Point[nEdge].c = CRGB(0.0,1.0,0.0);
			}
			fill.SetPoint(Point,4);
			fill.CreateBucket();
			fill.CreateEdge();
			fill.Gouraud(pDC);
		}
	}
	
}


void CPhong::PlayW(CDC *pDC,CRect Rect)
{
	Phi -= 10;
	Theta -= 10;
	pLight->Light[0].SetGlobal(R,Phi,Theta);
	InitParameter();
	DoubleBuffer(pDC,Rect);
}

void CPhong::init()
{
	ReadPoint();
	ReadFace();
	InitParameter();
}