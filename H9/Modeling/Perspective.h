// Perspective.h: interface for the CPerspective class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
#define AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "P3.h"
#include "Face.h"

class CPerspective  
{

public:
	CP3 P[4];
	CFace F[4];
public:
	CPerspective();
	virtual ~CPerspective();

	void ReadVertex();
	
	void ReadFace();

	void init();

};

#endif // !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
