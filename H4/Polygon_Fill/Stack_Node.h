// Stack_Node.h: interface for the CStack_Node class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STACK_NODE_H__5EFDED0A_FA00_4F83_BE95_8BACD92B6B4A__INCLUDED_)
#define AFX_STACK_NODE_H__5EFDED0A_FA00_4F83_BE95_8BACD92B6B4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CStack_Node  
{
public:
	CStack_Node();
	virtual ~CStack_Node();

	CPoint PixelPoint;
	CStack_Node *pNext;

};

#endif // !defined(AFX_STACK_NODE_H__5EFDED0A_FA00_4F83_BE95_8BACD92B6B4A__INCLUDED_)
