#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	list<int> coll;
	for (int i = 1; i <= 9; ++i){
		coll.push_back(i);
	}
	list<int>::iterator pos;
	pos = find(coll.begin(), coll.end(), 5);
	if (pos != coll.end()){
		cout << "difference between beginning and 5: " << distance(coll.begin(), pos);
	}
	else {
		cout << " cannot find 5";
	}
}