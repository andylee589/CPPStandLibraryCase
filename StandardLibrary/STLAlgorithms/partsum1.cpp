#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	// print all partial sums
	partial_sum(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	// print all partial product
	partial_sum(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "), multiplies<int>());
	cout << endl;
}