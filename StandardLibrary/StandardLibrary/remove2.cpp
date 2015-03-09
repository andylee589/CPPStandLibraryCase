#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
	list<int> coll;

	//insert 1~6
	for (int i = 1; i <= 6; i++){
		coll.push_front(i);
		coll.push_back(i);
	}
	// print all elements
	cout << "pre: ";
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//remove all element with 3
	list<int>::iterator end =remove(coll.begin(), coll.end(), 3);

	// print all elements
	cout << "post: ";
	copy(coll.begin(), end, ostream_iterator<int>(cout, " "));
	cout << endl;
	cout << "number of removed element: "<<
		distance(end,coll.end())<<endl;

	coll.erase(end, coll.end());
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}