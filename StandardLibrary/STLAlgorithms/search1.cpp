#include "algostuff.h"
using namespace std;

int main(){
	deque<int> coll;
	list<int> subcoll;
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(subcoll, 3, 6);
	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(subcoll, "subcoll: ");

	// search first occurence of subcoll in coll
	deque<int>::iterator pos;
	pos = search(coll.begin(), coll.end(), subcoll.begin(), subcoll.end());
	while (pos != coll.end()){
		// print position of first element
		cout << "subcoll found starting with elment "
			<< distance(coll.begin(), pos) + 1
			<< endl;
		pos = search(++pos, coll.end(), subcoll.begin(), subcoll.end());
	}
}