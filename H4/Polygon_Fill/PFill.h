// PFill.h: interface for the CPFill class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PFILL_H__21111336_2D64_4561_9EBB_9552F18BA9F0__INCLUDED_)
#define AFX_PFILL_H__21111336_2D64_4561_9EBB_9552F18BA9F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Stack_Node.h"
class CPFill  
{
public:
	CPFill();
	virtual ~CPFill();
	virtual void PolygonFill(CDC *pDC);
	void Push(CPoint point);
	CStack_Node *Pop();
	void start(CDC *,CPoint);
	virtual void init(CDC *);
public:
	//CPoint Point[9];
	CPoint Seed;
	CPoint PLeft,PTop,PRight,PBottom,PLeftTop,PRightTop,PRightBottom,PLeftBottom;//аз╫с╣Ц
	CStack_Node *Head,*Base,*Last;
};

#endif // !defined(AFX_PFILL_H__21111336_2D64_4561_9EBB_9552F18BA9F0__INCLUDED_)
