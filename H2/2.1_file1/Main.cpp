#include"CRectangle.cpp"
#include"Cuboid.cpp"
int main()
{
	CCuboid * pCuboid = new CCuboid(30,20,100);
	cout<<"����������Ϊ��"<<pCuboid->volume()<<endl;
	delete pCuboid; 
}
