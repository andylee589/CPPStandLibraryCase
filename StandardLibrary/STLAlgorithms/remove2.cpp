#include "algostuff.h"
using namespace std;

int main(){
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	// print elements without those having the value 3
	remove_copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), 3);
	cout << endl;
	// print elements without those having a value greater than 4
	remove_copy_if(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), bind2nd(less<int>(), 4));
	cout << endl;
	// copy all elements greater than 3 into a multiset
	multiset<int> coll2;
	remove_copy_if(coll.begin(), coll.end(), inserter(coll2,coll2.begin()), bind2nd(less_equal<int>(), 4));
	PRINT_ELEMENTS(coll2);

}