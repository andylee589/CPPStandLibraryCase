#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");

	//reverse order of elements
	reverse(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "coll: ");
	reverse_copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}