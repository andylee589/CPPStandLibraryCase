#include <iostream>
#include <set>
#include <algorithm>
#include "associateIterator.h"
#include "print.h"
using namespace std;

int main(){
	 set<int> coll;
	// create inserter for coll
	// inconvenient way
	associate_insert_iterator<set<int>> iter(coll);
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;
	PRINT_ELEMENTS(coll);
	associate_inserter(coll)=44;
	associate_inserter(coll) = 55;
	PRINT_ELEMENTS(coll);
	
	// use inserter with an algorith
	int vals[] = { 33, 67, -4, 13, 5, 2 };
	copy(vals, vals + sizeof(vals) / sizeof(vals[0]), associate_inserter(coll));
	PRINT_ELEMENTS(coll);
}