// Hexagonal.cpp: implementation of the CHexagonal class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "realism.h"
#include "Hexagonal.h"
#define ROUND(x) int(x + 0.5)
#include "math.h"
#define PI 3.1415926535
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CHexagonal::CHexagonal()
{
	MaxX = 1500;MaxY = 800;

}

CHexagonal::~CHexagonal()
{

}

void CHexagonal::ReadPointFlat()
{
	int a=300;
	for(int i=0;i<6;i++)
	{
		Pf[i].x=MaxX/4+ROUND(a*cos(i*PI/3));
		Pf[i].y=MaxY/2+ROUND(a*sin(i*PI/3));
	}
	Pf[6].x=MaxX/4;Pf[6].y=MaxY/2;
	Pf[0].c.red=0.0;Pf[0].c.green=0.0;Pf[0].c.blue=1.0;
	Pf[1].c.red=0.0;Pf[1].c.green=1.0;Pf[1].c.blue=0.0;
	Pf[2].c.red=0.0;Pf[2].c.green=1.0;Pf[2].c.blue=1.0;
	Pf[3].c.red=1.0;Pf[3].c.green=0.0;Pf[3].c.blue=0.0;
	Pf[4].c.red=1.0;Pf[4].c.green=0.0;Pf[4].c.blue=1.0;
	Pf[5].c.red=1.0;Pf[5].c.green=1.0;Pf[5].c.blue=0.0;
	Flag=true;
}

void CHexagonal::ReadPointSmooth()
{
	int a=300;
	for(int i=0;i<6;i++)
	{
		Ps[i].x=3*MaxX/4+ROUND(a*cos(i*PI/3));
		Ps[i].y=MaxY/2+ROUND(a*sin(i*PI/3));
	}
	Ps[6].x=3*MaxX/4;Ps[6].y=MaxY/2;
	Ps[0].c.red=0.0;Ps[0].c.green=0.0;Ps[0].c.blue=1.0;
	Ps[1].c.red=0.0;Ps[1].c.green=1.0;Ps[1].c.blue=0.0;
	Ps[2].c.red=0.0;Ps[2].c.green=1.0;Ps[2].c.blue=1.0;
	Ps[3].c.red=1.0;Ps[3].c.green=0.0;Ps[3].c.blue=0.0;
	Ps[4].c.red=1.0;Ps[4].c.green=0.0;Ps[4].c.blue=1.0;
	Ps[5].c.red=1.0;Ps[5].c.green=1.0;Ps[5].c.blue=0.0;
	Ps[6].c.red=1.0;Ps[6].c.green=1.0;Ps[6].c.blue=1.0;
	Flag=false;
}

void CHexagonal::ReadFace()
{
	F[0].En=3;F[0].p[0]=0;F[0].p[1]=1;F[0].p[2]=6;//右下
	F[1].En=3;F[1].p[0]=1;F[1].p[1]=2;F[1].p[2]=6;//下面
	F[2].En=3;F[2].p[0]=2;F[2].p[1]=3;F[2].p[2]=6;//左下
	F[3].En=3;F[3].p[0]=3;F[3].p[1]=4;F[3].p[2]=6;//左上
	F[4].En=3;F[4].p[0]=4;F[4].p[1]=5;F[4].p[2]=6;//上面
	F[5].En=3;F[5].p[0]=5;F[5].p[1]=0;F[5].p[2]=6;//右上	
}

void CHexagonal::DrawHexagonal(CDC *pDC,CP2 *P)//绘制正六边形
{

	CPi2 Point[3];
	for(int nFace=0;nFace<6;nFace++)
	{
		int TotalEdge=F[nFace].En;
		for(int nEdge=0;nEdge<TotalEdge;nEdge++)
		{
			int PointNumber=F[nFace].p[nEdge];
			Point[nEdge].x=P[PointNumber].x;
			Point[nEdge].y=ROUND(P[PointNumber].y);
			if(Flag)
				Point[nEdge].c=P[F[nFace].p[0]].c;
			else
				Point[nEdge].c=P[PointNumber].c;
		}
		fill.SetPoint(Point,3);
		fill.CreateBucket();
		fill.CreateEdge();
		fill.Gouraud(pDC);
	}
}
