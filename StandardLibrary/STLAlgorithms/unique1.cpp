#include "algostuff.h"
using namespace std;

int main(){
	// source data
	int source[] = { 1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4 };
	int sourceNum = sizeof(source) / sizeof(source[0]);
	list<int> coll;
	// initialize coll with elements from source
	copy(source, source + sourceNum,   back_inserter(coll));
	PRINT_ELEMENTS(coll);
	// remove  consecutive duplicates
	list<int>::iterator pos;
	pos = unique(coll.begin(), coll.end());
	// copy the elements not remvoed
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << "\n\n";
	// reinitialize coll with elements from source
	copy(source, source + sourceNum, coll.begin());
	PRINT_ELEMENTS(coll);
	coll.erase(unique(coll.begin(), coll.end(), greater<int>()), coll.end());
	PRINT_ELEMENTS(coll);
}