#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
	list<int> coll1;
	vector<int> coll2;
	deque<int> coll3;
	set<int> coll4;

	// insert elements
	for (int i = 1; i < 9; i++){
		coll1.push_back(i);
	}
	// 
	copy(coll1.begin(), coll1.end(),  back_inserter(coll2));
	copy(coll1.begin(), coll1.end(),  front_inserter(coll3));
	copy(coll1.begin(), coll1.end(), inserter(coll4, coll4.begin()));
}