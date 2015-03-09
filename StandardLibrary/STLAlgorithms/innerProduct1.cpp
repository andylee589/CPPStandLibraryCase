#include "algostuff.h"
using namespace std;

int main(){
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);
	// process sum of all product
	cout << "inner product: "
		<< inner_product(coll.begin(), coll.end(), coll.begin(), 0)
		<< endl;
	// process sum 
	cout << "inner reverse product: "
		<< inner_product(coll.begin(), coll.end(), coll.rbegin(), 0)
		<< endl;
	// process product of all sums
	cout << "product of sums: "
		<< inner_product(coll.begin(), coll.end(), coll.begin(), 1, multiplies<int>(), plus<int>())
		<< endl;
}