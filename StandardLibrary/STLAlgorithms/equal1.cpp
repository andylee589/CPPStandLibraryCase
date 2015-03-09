#include "algostuff.h"
using namespace std;

bool bothEvenOrOdd(int elem1, int elem2){
	return elem1 % 2 == elem2 % 2;
}

int main(){
	vector<int> coll;
	list<int> coll2;
	INSERT_ELEMENTS(coll, 1, 7);
	INSERT_ELEMENTS(coll2, 3, 9);
	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	// check whether both collection are equal
	if (equal(coll.begin(), coll.end(), coll2.begin())){
		cout << "coll1==coll2" << endl;
	}
	else {
		cout << "coll1!=coll2" << endl;
	}
	// check for corresponding even and odd elements
	if (equal(coll.begin(), coll.end(), coll2.begin(), bothEvenOrOdd)){
		cout << "even and odd elements correspond" << endl;
	}
	else {
		cout << "even and odd elments do not correspond" << endl;
	}
}