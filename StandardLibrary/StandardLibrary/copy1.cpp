#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	list<int> coll1;
	vector<int> coll2;

	// insert elements
	for (int i = 1; i < 9; i++){
		coll1.push_back(i);
	}

	// RUNTIME ERROR
	copy(coll1.begin(), coll1.end(), coll2.begin());
}