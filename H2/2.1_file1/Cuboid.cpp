#include"Cuboid.h"
CCuboid::CCuboid(int width,int height,int length):CRectangle(width,height)
{
	this->length=length;
	cout<<"建立派生类对象"<<endl;
	 
}

CCuboid::~CCuboid()
{
	cout<<"撤销派生类对象"<<endl;
	 
}

double CCuboid::volume()
{
	return width*height*length;
}

