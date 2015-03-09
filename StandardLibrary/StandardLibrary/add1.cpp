#include <iostream>
#include <list>
#include <algorithm>
#include "print.h"
using namespace std;

class AddValue{
private :
	int value;
public:
	AddValue(int value) :value(value){}
	void operator()(int& element){
		element += value;
	}
};

int main(){
	list<int> coll;
	for (int i = 1; i < 9; i++){
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);
	for_each(coll.begin(), coll.end(), AddValue(10));
	PRINT_ELEMENTS(coll);
}