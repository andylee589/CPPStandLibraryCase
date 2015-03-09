#include <algorithm>
#include <iostream>
#include <list>
#include "print.h"
using namespace std;

int main(){
	list<int> coll;
	for (int i = 1; i <= 9; ++i){
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);
	iter_swap(coll.begin(), --coll.end());
	PRINT_ELEMENTS(coll);
}