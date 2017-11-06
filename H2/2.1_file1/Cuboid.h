class CCuboid:public CRectangle
{
public:
	CCuboid(int width,int height,int length);
	~CCuboid();
	double volume();
private:
	int length;
};

