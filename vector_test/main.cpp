#include <vector>
#include <list>
#include <iostream>
#include "A.h"


void hoge(std::vector<A> *vec){
	vec->push_back( A(7, 8, 9) );
}

int main(){
	std::vector<A> vec;

	vec.push_back( A(1, 2, 3) );
	vec.push_back( A(4, 5, 6) );
	hoge(&vec);

	std::vector<A>::iterator current, end;
	current = vec.begin();
	end = vec.end();
	while(current != end){
		current->display();
		current++;
	}

	getchar();
}
