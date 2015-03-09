#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <algorithm>
#include "print.h"
using namespace std;

int square(int value){
	return value*value;
}

int main(){
	set<int> coll1;
	vector<int> coll2;
	
	//insert 1~9
	for (int i = 1; i <= 9; ++i){
		coll1.insert(i);
	}
	PRINT_ELEMENTS(coll1,"initialized: ");

	transform(coll1.begin(), coll1.end(), back_inserter(coll2), square);
	PRINT_ELEMENTS(coll2, "squared: ");

}