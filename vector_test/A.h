
#pragma once
class A
{
public:
	int x;
	int y;
	int z;

	A(void);
	A(int x,int y,int z);
	A(const A &a);
	~A(void);

	void display(void);
};

