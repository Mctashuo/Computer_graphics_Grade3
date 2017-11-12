// Fill.cpp: implementation of the CFill class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "Fill.h"
#define ROUND(x) int(x+0.5)//���������

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CFill::CFill()
{
	Color = RGB(0,255,0);
}

CFill::~CFill()
{

}




void CFill::SetPoint(CPx *p,int m)
{
	P=new CPx[m];
	for(int i=0;i<m;i++)
	{
		P[i]=p[i];	
	}
	PNum=m;
}

void CFill::CreateBucket()//����Ͱ��
{
	int yMin,yMax;
	yMin=yMax=P[0].y;
	for(int i=0;i<PNum;i++)//���Ҷ���������ǵ���С�����ɨ����
	{
		if(P[i].y<yMin)
		{
			yMin=P[i].y;//ɨ���ߵ���Сֵ
		}
		if(P[i].y >yMax)
		{
			yMax=P[i].y;//ɨ���ߵ����ֵ
		}
	}
	for(int y=yMin;y<=yMax;y++)
	{
		if(yMin==y)//����Ͱͷ���
		{
			HeadB=new CBucket;//����Ͱ��ͷ���
			CurrentB=HeadB;//CurrentBΪCBucket��ǰ���ָ��
			CurrentB->ScanLine=yMin;
			CurrentB->pET=NULL;//û�����ӱ�����
			CurrentB->pNext=NULL;
		}
		else//����Ͱ���������
		{
			CurrentB->pNext=new CBucket;
			CurrentB=CurrentB->pNext;
			CurrentB->ScanLine=y;
			CurrentB->pET=NULL;
			CurrentB->pNext=NULL;
		}
	}
}

void CFill::CreateEdge()//�����߱�
{
	for(int i=0;i<PNum;i++)
	{
		CurrentB=HeadB;
		int j=(i+1)%PNum;//�ߵĵڶ������㣬P[i]��P[j]��Թ��ɱ�
		if(P[i].y<P[j].y)//�ߵ��յ������
		{
			Edge=new CAET;
			Edge->x=P[i].x;//����ET���ֵ
			Edge->yMax=P[j].y;
			Edge->k=(P[j].x-P[i].x)/(P[j].y-P[i].y);//����1/k
			Edge->pb=P[i];//�󶨶������ɫ
			Edge->pe=P[j];
			Edge->pNext=NULL;
			while(CurrentB->ScanLine!=P[i].y)//��Ͱ��Ѱ�ҵ�ǰ�ߵ�yMin
			{
				CurrentB=CurrentB->pNext;//�Ƶ�yMin���ڵ�Ͱ���
			}		
		}
		if(P[j].y<P[i].y)//�ߵ��յ������
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

void CFill::Gouraud(CDC *pDC)//�������
{
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
		while(CurrentB->ScanLine>=T1->yMax)//�±��Ͽ�
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
			if(CurrentB->ScanLine>=T1->yMax)//�±��Ͽ�
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
		double xb,xe;//ɨ���ߵ������յ�����
		for(T1=HeadE;T1!=NULL;T1=T1->pNext)
		{
			if(Flag==FALSE)
			{
				xb=T1->x;
				Flag=TRUE;
			}
			else
			{
				xe=T1->x;
				for(double x=xb;x<xe;x++)//����ҿ�
				{
					pDC->SetPixel(ROUND(x),CurrentB->ScanLine,Color);
				}
				Flag=FALSE;
			}
		}
		for(T1=HeadE;T1!=NULL;T1=T1->pNext)//�ߵ�������
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

void CFill::AddEt(CAET *NewEdge)//�ϲ�ET��
{
	CAET *CE;//��ǰ�߱�ָ��
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
void CFill::EtOrder()//�߱��ð�������㷨
{
	CAET *T1,*T2;
	int Count=1;
	T1=HeadE;
	if(T1==NULL)
	{
		return;
	}
	if(T1->pNext==NULL)//�����ET��û������ET��
	{
		return;//Ͱ���ֻ��һ���ߣ�����Ҫ����
	}
	while(T1->pNext!=NULL)//ͳ�ƽ��ĸ���
	{
		Count++;
		T1=T1->pNext;
	}
	for(int i=1;i<Count;i++)//ð������
	{
		T1=HeadE;
		if(T1->x>T1->pNext->x)//��x��С��������
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
				if(T1->k>T1->pNext->k)//��б�ʵ�����С��������
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
			if(T1->x>T1->pNext->x)//��x��С��������
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
					if(T1->k>T1->pNext->k)//��б����С��������
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
