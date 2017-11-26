// Material.cpp: implementation of the CMaterial class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "realism.h"
#include "Material.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMaterial::CMaterial()
{
	M_Enviroment=CRGB(1.0,1.0,1.0);
	M_Diffuse=CRGB(1.0,1.0,1.0);
	M_Mirror=CRGB(1.0,1.0,1.0);
	M_Exp=1.0;
}



void CMaterial::SetEnviroment(CRGB c)
{
	M_Enviroment=c;
}

void CMaterial::SetDiffuse(CRGB c)
{
	M_Diffuse=c;
}

void CMaterial::SetMirror(CRGB c)
{
	M_Mirror=c;
}

void CMaterial::SetExp(double Exp)
{
	M_Exp=Exp;
}
