#include <iostream>
#include <set>
#include <list>
#include <iterator>
#include <algorithm>
#include "print.h"
using namespace std;

int main(){
	set<int> coll;
	// create insert iterator for coll
	insert_iterator<set<int>> iter(coll, coll.begin());
	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;
	PRINT_ELEMENTS(coll);

	inserter(coll, coll.end()) = 44;
	inserter(coll, coll.end()) = 55;
	PRINT_ELEMENTS(coll);

	list<int> coll2;
	copy(coll.begin(), coll.end(), inserter(coll2, coll2.begin()));
	PRINT_ELEMENTS(coll2);

	copy(coll.begin(), coll.end(), inserter(coll2, ++coll2.begin()));
	PRINT_ELEMENTS(coll2);
}