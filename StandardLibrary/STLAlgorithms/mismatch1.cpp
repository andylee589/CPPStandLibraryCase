#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	list<int> coll2;
	INSERT_ELEMENTS(coll, 1, 6);
	for (int i = 1; i <= 16; i *= 2){
		coll2.push_back(i);
	}
	coll2.push_back(3);
	PRINT_ELEMENTS(coll, "coll: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	pair<vector<int>::iterator, list<int>::iterator> values;
	values = mismatch(coll.begin(), coll.end(), coll2.begin());
	if (values.first != coll.end()){
		cout << "first mismatch: "
			<< *values.first << " and "
			<< *values.second << endl;
	}
	else {
		cout << "no mismatch" << endl;
	}
	values = mismatch(coll.begin(), coll.end(), coll2.begin(), less_equal<int>());
}