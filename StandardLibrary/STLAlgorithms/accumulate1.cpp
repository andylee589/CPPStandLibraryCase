#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll);

	// process  sum of elements
	cout << "sum: "
		<< accumulate(coll.begin(), coll.end(), 0)
		<< endl;
	// process sum of elements less 100
	cout << "sum: "
		<< accumulate(coll.begin(), coll.end(), -100)
		<< endl;
	// process product of element
	cout << "product: "
		<< accumulate(coll.begin(), coll.end(), 1, multiplies<int>())
		<< endl;
	// process product of elements use 0 as initial value
	cout << "product: "
		<< accumulate(coll.begin(), coll.end(), 0, multiplies<int>())
		<< endl;
}