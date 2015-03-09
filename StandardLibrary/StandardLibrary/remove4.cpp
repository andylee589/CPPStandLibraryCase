#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
using namespace std;

int main(){
	list<int> coll;
	//insert element
	for (int i = 1; i <= 6; i++){
		coll.push_back(i);
		coll.push_front(i);
	}

	// remove all elments with value 3
	// --poor performance
	coll.erase(remove(coll.begin(), coll.end(), 3), coll.end());

	// remove all elements with value 3
	// --good performance
	coll.remove(4);
}