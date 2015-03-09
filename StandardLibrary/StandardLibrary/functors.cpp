#include <iostream>
#include <functional>
#include <iterator>
#include <set>
#include <list>
#include <deque>
#include <algorithm>
#include "print.h"

using namespace std;

int main(){
	set<int, greater<int>> coll1;
	deque <int> coll2;
	// insert elements 
	for (int i = 1; i < 9; ++i){
		coll1.insert(i);
	}
	PRINT_ELEMENTS(coll1, "initialized: ");

	// transform all elements into coll2 by multiplying 10
	transform(coll1.begin(), coll1.end(), back_inserter(coll2), bind2nd(multiplies<int>(), 10));
	PRINT_ELEMENTS(coll2, "transformed: ");

	// replace value equal to 70 with 42
	replace_if(coll2.begin(), coll2.end(), bind2nd(equal_to<int>(), 70), 42);

	PRINT_ELEMENTS(coll2, "replaced: ");

	// remove 
	coll2.erase(remove_if(coll2.begin(), coll2.end(), bind2nd(less<int>(), 50)),coll2.end());

	PRINT_ELEMENTS(coll2, "removed: ");
}
