#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	deque<int> coll2;
	INSERT_ELEMENTS(coll, 1, 9);
	INSERT_ELEMENTS(coll2, 11, 23);
	deque<int>::iterator pos;
	pos = swap_ranges(coll.begin(), coll.end(), coll2.begin());
	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	if (pos != coll2.end()){
		cout << "first element not modified: "
			<< *pos << endl;
	}
	// mirror first three with last three elements in coll2
	swap_ranges(coll2.begin(), coll2.begin() + 3, coll2.rbegin());
	PRINT_ELEMENTS(coll2, "coll2: ");
}