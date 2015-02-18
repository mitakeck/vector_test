#include <iostream>
#include "A.h"



A::A(void){
	x = -1;
	y = -1;
	z = -1;
}

A::A(int _x, int _y, int _z){
	x = _x;
	y = _y;
	z = _z;
}

A::A(const A &a){
	x = a.x;
	y = a.y;
	z = a.z;
}

A::~A(void)
{

}


int A::getX(){
	return x;
}
int A::getY(){
	return y;
}
int A::getZ(){
	return z;
}

void A::display(void){
	std::cout <<  "x: " << x << ", y: " << y << ", z: " << z << std::endl;
}
