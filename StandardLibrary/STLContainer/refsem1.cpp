#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include <memory>
#include "countPtr.h"
using namespace std;

void printCountedPtr(CountedPtr<int> elem){
	cout << *elem << " ";
}

int main(){
	static int values[] = { 3, 5, 9, 1, 6, 4 };
	
	//two different collections
	typedef CountedPtr<int> IntPtr;
	deque<IntPtr> coll1;
	list<IntPtr> coll2;
	int length = sizeof(values) / sizeof(values[0]);
	// insert shared object into the collections
	for (int i = 0; i < length; ++i){
		IntPtr ptr(new int(values[i]));
		coll1.push_back(ptr);
		coll2.push_front(ptr);
	}

	// print contents  of both collections
	for_each(coll1.begin(), coll1.end(), printCountedPtr);
	cout << endl;
	for_each(coll2.begin(), coll2.end(), printCountedPtr);
	cout << endl<<endl;

	//modify values at different places
	*coll1[2] *= *coll1[2];
	(**coll1.begin()) *= -1;
	(**coll2.begin()) = 0;

	for_each(coll1.begin(), coll1.end(), printCountedPtr);
	cout << endl;
	for_each(coll2.begin(), coll2.end(), printCountedPtr);
	cout << endl << endl;

	coll1.erase(coll1.begin());
	for_each(coll1.begin(), coll1.end(), printCountedPtr);
	cout << endl;
	for_each(coll2.begin(), coll2.end(), printCountedPtr);
	cout << endl << endl;
}