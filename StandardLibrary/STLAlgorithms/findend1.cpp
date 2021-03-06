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
	// search last occurence of subcoll in coll
	deque<int>::iterator pos;
	pos = find_end(coll.begin(), coll.end(), subcoll.begin(), subcoll.end());
	deque<int>::iterator end(coll.end());
	while (pos != end){
		cout << "subcoll found starting with elment "
			<< distance(coll.begin(), pos) + 1
			<< endl;
		end = pos;
		pos = find_end(coll.begin(), pos, subcoll.begin(), subcoll.end());
	}

}