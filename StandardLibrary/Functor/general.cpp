#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include "print.h"
using namespace std;

class IntSequence{
private:
	int value;
public:
	IntSequence(int initValue) :value(initValue){}
	int operator()(){
		return value++;
	}
};

int main(){
	list<int> coll;
	generate_n(back_inserter(coll), 9, IntSequence(1));
	PRINT_ELEMENTS(coll);
	generate(++coll.begin(), --coll.end(), IntSequence(42));
	PRINT_ELEMENTS(coll);
}