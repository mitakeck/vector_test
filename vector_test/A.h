
#pragma once
class A
{
private:
	int x;
	int y;
	int z;
public:
	A(void);
	A(int x,int y,int z);
	A(const A &a);
	~A(void);
	int getX();
	int getY();
	int getZ();

	void display(void);
};

