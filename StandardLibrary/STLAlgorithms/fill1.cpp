#include "algostuff.h"
using namespace std;

int main(){
	// print ten times 7.7
	fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);
	cout << endl;
	
	list<string> coll;
	// insert "hello" nine times
	fill_n(back_inserter(coll), 9, "hello");
	PRINT_ELEMENTS(coll, "coll: ");
	// overwrite all elements with "again"
	fill(coll.begin(), coll.end(), "again");
	PRINT_ELEMENTS(coll, "coll: ");
	// replace all but two elements with "hi"
	fill_n(coll.begin(), coll.size() - 2, "hi");
	PRINT_ELEMENTS(coll, "coll: ");
	// replace the second and up to the last element but one  with "hmmm"
	fill(++coll.begin(), --coll.end(), "hmmm");
	PRINT_ELEMENTS(coll, "coll: ");
}