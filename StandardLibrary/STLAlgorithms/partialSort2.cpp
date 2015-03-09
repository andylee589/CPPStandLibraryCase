#include "algostuff.h"
using namespace std;

int main(){
	deque<int> coll;
	vector<int> coll6(6);
	vector<int> coll30(30);
	INSERT_ELEMENTS(coll, 3, 7);
	INSERT_ELEMENTS(coll, 2, 6);
	INSERT_ELEMENTS(coll, 1, 5);
	PRINT_ELEMENTS(coll);

	// copy element of coll sorted into coll6
	vector<int>::iterator pos6;
	pos6 = partial_sort_copy(coll.begin(), coll.end(), coll6.begin(), coll6.end());
	// print all copied elements
	copy(coll6.begin(), pos6, ostream_iterator<int>(cout, " "));
	cout << endl;
	// copy elements of coll sorted into coll30
	vector<int>::iterator pos30;
	pos30 = partial_sort_copy(coll.begin(), coll.end(), coll30.begin(), coll30.end(), greater<int>());
	// print all copied elements
	copy(coll30.begin(), pos30, ostream_iterator<int>(cout, " "));
	cout << endl;
}