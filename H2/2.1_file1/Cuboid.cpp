#include"Cuboid.h"
CCuboid::CCuboid(int width,int height,int length):CRectangle(width,height)
{
	this->length=length;
	cout<<"�������������"<<endl;
	 
}

CCuboid::~CCuboid()
{
	cout<<"�������������"<<endl;
	 
}

double CCuboid::volume()
{
	return width*height*length;
}

