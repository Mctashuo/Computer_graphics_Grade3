// Z_Buffer.cpp: implementation of the CZ_Buffer class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Modeling.h"
#include "Z_Buffer.h"
#define ROUND(x) int(x+0.5)//四舍五入宏
#include "Vector.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CZ_Buffer::CZ_Buffer()
{
	Color = RGB(0,255,0);
}

CZ_Buffer::~CZ_Buffer()
{

}


void CZ_Buffer::ReadVertex()
{
	int i;	
	COLORREF red = RGB(255,0,0);
	COLORREF green = RGB(0,255,0);
	COLORREF blue = RGB(0,0,255);
	//红色长方条顶点的三维坐标(x,y,z)
	Pi[0][0].x=-150;Pi[0][0].y=-200;Pi[0][0].z=0;
	Pi[0][1].x=-150;Pi[0][1].y=-200;Pi[0][1].z=0;
	Pi[0][2].x=-125;Pi[0][2].y=-200;Pi[0][2].z=0;
	Pi[0][3].x=-125;Pi[0][3].y=-200;Pi[0][3].z=0;
	Pi[0][4].x=25;Pi[0][4].y=200;Pi[0][4].z=-100;
	Pi[0][5].x=25;Pi[0][5].y=200;Pi[0][5].z=-100;
	Pi[0][6].x=50;Pi[0][6].y=200;Pi[0][6].z=-100;
	Pi[0][7].x=50;Pi[0][7].y=200;Pi[0][7].z=-100;
	for(i=0;i<8;i++)//顶点颜色赋值
	{
		Pi[0][i].c=CRGB(1.0,0.0,0.0);
	}
	//蓝色长方条顶点的三维坐标(x,y,z)
	Pi[1][0].x=150;Pi[1][0].y=-200;Pi[1][0].z=50;
	Pi[1][1].x=150;Pi[1][1].y=-200;Pi[1][1].z=50;
	Pi[1][2].x=125;Pi[1][2].y=-200;Pi[1][2].z=50;
	Pi[1][3].x=125;Pi[1][3].y=-200;Pi[1][3].z=50;
	Pi[1][4].x=-25;Pi[1][4].y=200;Pi[1][4].z=100;
	Pi[1][5].x=-25;Pi[1][5].y=200;Pi[1][5].z=100;
	Pi[1][6].x=-50;Pi[1][6].y=200;Pi[1][6].z=100;
	Pi[1][7].x=-50;Pi[1][7].y=200;Pi[1][7].z=100;
	for(i=0;i<8;i++)//顶点颜色赋值
	{
		Pi[1][i].c=CRGB(0.0,0.0,1.0);
	}
	//绿色长方条顶点的三维坐标(x,y,z)
	Pi[2][0].x=-200;Pi[2][0].y=-150;Pi[2][0].z=-100;
	Pi[2][1].x=-200;Pi[2][1].y=-150;Pi[2][1].z=-100;
	Pi[2][2].x=-200;Pi[2][2].y=-125;Pi[2][2].z=-100;
	Pi[2][3].x=-200;Pi[2][3].y=-125;Pi[2][3].z=-100;
	Pi[2][4].x=200;Pi[2][4].y=-150;Pi[2][4].z=120;
	Pi[2][5].x=200;Pi[2][5].y=-150;Pi[2][5].z=120;
	Pi[2][6].x=200;Pi[2][6].y=-125;Pi[2][6].z=120;
	Pi[2][7].x=200;Pi[2][7].y=-125;Pi[2][7].z=120;
	for(i=0;i<8;i++)//顶点颜色赋值
	{
		Pi[2][i].c=CRGB(0.0,1.0,0.0);
	}

}

void CZ_Buffer::ReadFace()
{
	F[0].vN=4;F[0].vI[0]=0;F[0].vI[1]=3;F[0].vI[2]=2;F[0].vI[3]=1;//每个条的后面
	F[1].vN=4;F[1].vI[0]=4;F[1].vI[1]=5;F[1].vI[2]=6;F[1].vI[3]=7;//每个条的前面
	F[2].vN=4;F[2].vI[0]=0;F[2].vI[1]=4;F[2].vI[2]=7;F[2].vI[3]=3;//每个条的左面
	F[3].vN=4;F[3].vI[0]=1;F[3].vI[1]=2;F[3].vI[2]=6;F[3].vI[3]=5;//每个条的右面
	F[4].vN=4;F[4].vI[0]=3;F[4].vI[1]=7;F[4].vI[2]=6;F[4].vI[3]=2;//每个条的顶面
	F[5].vN=4;F[5].vI[0]=0;F[5].vI[1]=1;F[5].vI[2]=5;F[5].vI[3]=4;//每个条的底面
	
}

void CZ_Buffer::DrawObject(CDC *pDC)
{
	CP3 Point[4];	
	InitDeepBuffer(800,800,-1000);//深度初始化
	for(int nBar=0;nBar<3;nBar++)
	{		
		for(int nFace=0;nFace<6;nFace++)
		{
			for(int nEdge=0;nEdge<F[nFace].vN;nEdge++)//边循环
			{
				Point[nEdge].x=Pi[nBar][F[nFace].vI[nEdge]].x;
				Point[nEdge].y=ROUND(Pi[nBar][F[nFace].vI[nEdge]].y);
				Point[nEdge].z=Pi[nBar][F[nFace].vI[nEdge]].z;
				Point[nEdge].c=Pi[nBar][F[nFace].vI[nEdge]].c;
			}
			SetPoint(Point,4);			
			CreateBucket();//建立桶表
			CreateEdge();//建立边表
			Gouraud(pDC);//
		}
	}
}


void CZ_Buffer::SetPoint(CP3 *p,int m)
{
	P=new CP3[m];
	for(int i=0;i<m;i++)
	{
		P[i]=p[i];	
	}
	PNum=m; 
}

void CZ_Buffer::CreateBucket()//创建桶表
{
	int yMin,yMax;
	yMin=yMax=P[0].y;
	for(int i=0;i<PNum;i++)//查找多边形所覆盖的最小和最大扫描线
	{
		if(P[i].y<yMin)
		{
			yMin=P[i].y;//扫描线的最小值
		}
		if(P[i].y >yMax)
		{
			yMax=P[i].y;//扫描线的最大值
		}
	}
	for(int y=yMin;y<=yMax;y++)
	{
		if(yMin==y)//建立桶头结点
		{
			HeadB=new CBucket;//建立桶的头结点
			CurrentB=HeadB;//CurrentB为CBucket当前结点指针
			CurrentB->ScanLine=yMin;
			CurrentB->pET=NULL;//没有连接边链表
			CurrentB->pNext=NULL;
		}
		else//建立桶的其它结点
		{
			CurrentB->pNext=new CBucket;
			CurrentB=CurrentB->pNext;
			CurrentB->ScanLine=y;
			CurrentB->pET=NULL;
			CurrentB->pNext=NULL;
		}
	}
}

void CZ_Buffer::CreateEdge()//创建边表
{
	for(int i=0;i<PNum;i++)
	{
		CurrentB=HeadB;
		int j=(i+1)%PNum;//边的第二个顶点，P[i]和P[j]点对构成边
		if(P[i].y<P[j].y)//边的终点比起点高
		{
			Edge=new CAET;
			Edge->x=P[i].x;//计算ET表的值
			Edge->yMax=P[j].y;
			Edge->k=(P[j].x-P[i].x)/(P[j].y-P[i].y);//代表1/k
			Edge->pb=P[i];
			Edge->pe=P[j];

			Edge->pNext=NULL;
			while(CurrentB->ScanLine!=P[i].y)//在桶内寻找当前边的yMin
			{
				CurrentB=CurrentB->pNext;//移到yMin所在的桶结点
			}		
		}
		if(P[j].y<P[i].y)//边的终点比起点低
		{
			Edge=new CAET;
			Edge->x=P[j].x;
			Edge->yMax=P[i].y;
			Edge->k=(P[i].x-P[j].x)/(P[i].y-P[j].y);
			Edge->pb=P[i];
			Edge->pe=P[j];
			Edge->pNext=NULL;
			while(CurrentB->ScanLine!=P[j].y)
			{
				CurrentB=CurrentB->pNext;
			}
		}
		if(P[j].y == P[i].y)//边的终点比起点低
		{
			Edge=new CAET;
			Edge->x=P[j].x;
			Edge->yMax=P[i].y;
			Edge->k=(P[i].x-P[j].x)/(P[i].y-P[j].y);
			Edge->pb=P[i];
			Edge->pe=P[j];

			Edge->pNext=NULL;
			while(CurrentB->ScanLine!=P[j].y)
			{
				CurrentB=CurrentB->pNext;
			}
		}
		if(P[j].y!=P[i].y)
		{
			CurrentE=CurrentB->pET;
			if(CurrentE==NULL)
			{
				CurrentE=Edge;
				CurrentB->pET=CurrentE;
			}
			else
			{
				while(CurrentE->pNext!=NULL)
				{
					CurrentE=CurrentE->pNext;
				}
				CurrentE->pNext=Edge;
			}
		}
	}
}

void CZ_Buffer::Gouraud(CDC *pDC)//填充多边形
{
	double	CurDeep=0.0;//当前扫描线的深度
	double	DeepStep=0.0;//当前扫描线随着x增长的深度步长
	double	A,B,C,D;//平面方程Ax+By+Cz＋D=0的系数
	CVector V21(P[1],P[2]),V10(P[0],P[1]);
	CVector VN=V21*V10;
	A=VN.x;B=VN.y;C=VN.z;
	D=-A*P[1].x-B*P[1].y-C*P[1].z;
	DeepStep=-A/C;//计算直线deep增量步长
	CAET *T1,*T2;
	HeadE=NULL;	
	for(CurrentB=HeadB;CurrentB!=NULL;CurrentB=CurrentB->pNext)
	{
		for(CurrentE=CurrentB->pET;CurrentE!=NULL;CurrentE=CurrentE->pNext)
		{
			Edge=new CAET;
			Edge->x=CurrentE->x;
			Edge->yMax=CurrentE->yMax;
			Edge->k=CurrentE->k;
			Edge->pb=CurrentE->pb;
			Edge->pe=CurrentE->pe;
			Edge->pNext=NULL;
			AddEt(Edge);
		}
		EtOrder();	
		T1=HeadE;
		if(T1==NULL)
		{
			return;
		}
		while(CurrentB->ScanLine>=T1->yMax)//下闭上开
		{
			T1=T1->pNext;
			HeadE=T1;
			if(HeadE==NULL)
				return;
		}
		if(T1->pNext!=NULL)
		{
			T2=T1;
			T1=T2->pNext;
		}
		while(T1!=NULL)
		{
			if(CurrentB->ScanLine>=T1->yMax)//下闭上开
			{
				T2->pNext=T1->pNext;
				T1=T2->pNext;
			}
			else
			{
				T2=T1;
				T1=T2->pNext;
			}
		}

		BOOL Flag=FALSE;
		double xb,xe;//扫描线的起点和终点坐标
		CRGB Ca,Cb,Cf;//Ca、Cb代边上任意点的颜色，Cf代表面上任意点的颜色
		Ca=Interpolation(CurrentB->ScanLine,HeadE->pb.y,HeadE->pe.y,HeadE->pb.c,HeadE->pe.c);
		Cb=Interpolation(CurrentB->ScanLine,HeadE->pNext->pb.y,HeadE->pNext->pe.y,HeadE->pNext->pb.c,HeadE->pNext->pe.c);

		for(T1=HeadE;T1!=NULL;T1=T1->pNext)
		{
			if(Flag==FALSE)
			{
				xb=T1->x;
				CurDeep=-(xb*A+CurrentB->ScanLine*B+D)/C;//z=-(Ax+By-D)/C
				Flag=TRUE;
			}
			else
			{
				xe=T1->x;
				for(double x=xb;x<xe;x++)//左闭右开
				{
					Cf=Interpolation(x,xb,xe,Ca,Cb);
					if(CurDeep>=ZB[ROUND(x)+Width/2][CurrentB->ScanLine+Height/2])//如果新采样点的深度大于原采样点的深度
					{
						
						ZB[ROUND(x)+Width/2][CurrentB->ScanLine+Height/2]=CurDeep;//xy坐标与数组下标保持一致
						pDC->SetPixel(ROUND(x),CurrentB->ScanLine,RGB(Cf.red*255,Cf.green*255,Cf.blue*255));
					
					}
					CurDeep+=DeepStep;					
				}
				Flag=FALSE;
			}
		}
		for(T1=HeadE;T1!=NULL;T1=T1->pNext)//边的连续性
		{
			T1->x=T1->x+T1->k;
		}		
	}
	delete HeadB;
	delete HeadE;
	delete CurrentE;
	delete CurrentB;
	delete Edge;	
}

void CZ_Buffer::AddEt(CAET *NewEdge)//合并ET表
{
	CAET *CE;//当前边表指针
	CE=HeadE;
	if(CE==NULL)
	{
		HeadE=NewEdge;
		CE=HeadE;
	}
	else
	{
		while(CE->pNext!=NULL)
		{
			CE=CE->pNext;
		}
		CE->pNext=NewEdge;
	}
}
void CZ_Buffer::EtOrder()//边表的冒泡排序算法
{
	CAET *T1,*T2;
	int Count=1;
	T1=HeadE;
	if(T1==NULL)
	{
		return;
	}
	if(T1->pNext==NULL)//如果该ET表没有再连ET表
	{
		return;//桶结点只有一条边，不需要排序
	}
	while(T1->pNext!=NULL)//统计结点的个数
	{
		Count++;
		T1=T1->pNext;
	}
	for(int i=1;i<Count;i++)//冒泡排序
	{
		T1=HeadE;
		if(T1->x>T1->pNext->x)//按x由小到大排序
		{
			T2=T1->pNext;
			T1->pNext=T2->pNext;
			T2->pNext=T1;
			HeadE=T2;
		}
		else
		{
			if(T1->x==T1->pNext->x)
			{
				if(T1->k>T1->pNext->k)//按斜率倒数由小到大排序
				{
					T2=T1->pNext;
					T1->pNext=T1->pNext->pNext;
					T2->pNext=T1;
					HeadE=T2;
				}
			}
		}
		T1=HeadE;
		while(T1->pNext->pNext!=NULL)
		{
			T2=T1;
			T1=T1->pNext;
			if(T1->x>T1->pNext->x)//按x由小到大排序
			{
				T2->pNext=T1->pNext;
				T1->pNext=T1->pNext->pNext;
				T2->pNext->pNext=T1;
				T1=T2->pNext;
			}
			else
			{
				if(T1->x==T1->pNext->x)
				{
					if(T1->k>T1->pNext->k)//按斜率由小到大排序
					{
						T2->pNext=T1->pNext;
						T1->pNext=T1->pNext->pNext;
						T2->pNext->pNext=T1;
						T1=T2->pNext;
					}
				}
			}
		}
	}	
}


void CZ_Buffer::InitDeepBuffer(int width,int height,double depth)
{
	Width=width,Height=height;
	ZB=new double *[Width];
	for(int i=0;i<Width;i++)
		ZB[i]=new double[Height];
	for(i=0;i<Width;i++)//初始化深度缓冲
		for(int j=0;j<Height;j++)
			ZB[i][j]=double(depth);
	
}


void CZ_Buffer::init()
{

	ReadVertex();
	ReadFace();
	//InitDeepBuffer();
	//DrawBuffer();
}


CRGB CZ_Buffer::Interpolation(double t,double t1,double t2,CRGB c1,CRGB c2)//线性插值
{
	CRGB c;
	c=(t-t2)/(t1-t2)*c1+(t-t1)/(t2-t1)*c2;
	return c;
}