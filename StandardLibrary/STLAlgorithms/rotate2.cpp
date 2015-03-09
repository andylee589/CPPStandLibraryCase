#include "algostuff.h"
using namespace std;

int main(){
	set<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll: ");
	//print elements rotated one element to the left
	set<int>::iterator pos = coll.begin();
	advance(pos, 1);
	rotate_copy(coll.begin(), pos, coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}