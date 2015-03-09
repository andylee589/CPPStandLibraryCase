#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
#include "print.h"
using namespace std;

template <class OutputIt, class Size,class Generator>
OutputIt  generateN(OutputIt first, Size count, Generator g){
	for (Size i = 0; i < count; ++i){
		*first++ = g();
	}
	return first;
}

class IntSequence {
public:
	int value;
public:
	IntSequence(int initValue) :value(initValue){}
	int operator ()(){ return value++; }
};
int main(){
	list<int> coll;
	IntSequence seq(1);
	// insert value from 1 to 4
	generateN<back_insert_iterator<list<int>>, int, IntSequence&>(back_inserter(coll), 4, seq);
	PRINT_ELEMENTS(coll);
	//cout << seq.value<<endl;
	// insert value from 42 to 45
	generateN(back_inserter(coll), 4, IntSequence(42));
	PRINT_ELEMENTS(coll);
	//continue with first sequence pass function object by refrence
	
	// continue with first sequence pass function object by value
	generateN(back_inserter(coll), 4, seq);
	PRINT_ELEMENTS(coll);
	generateN<back_insert_iterator<list<int>>, int, IntSequence&>(back_inserter(coll), 4, seq);
	PRINT_ELEMENTS(coll);
}