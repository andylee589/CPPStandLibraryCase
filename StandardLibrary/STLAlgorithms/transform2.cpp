#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll1;
	list<int> coll2;
	INSERT_ELEMENTS(coll1, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1: ");
	// square each element
	transform(coll1.begin(), coll1.end(), coll1.begin(), coll1.begin(), multiplies<int>());
	PRINT_ELEMENTS(coll1, "squared: ");

	// add each element traversed forward with each element traversed backward and insert result into coll2;
	transform(coll1.begin(), coll1.end(), coll1.rbegin(), back_inserter(coll2), plus<int>());
	PRINT_ELEMENTS(coll2, "coll2: ");

	cout << "diff: ";
	transform(coll1.begin(), coll1.end(), coll2.begin(), ostream_iterator<int>(cout, " "), minus<int>());
	cout << endl;
}
