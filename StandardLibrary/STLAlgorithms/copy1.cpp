#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	list<int> coll2;
	INSERT_ELEMENTS(coll, 1, 9);
	
	// copy elements of coll into coll2
	copy(coll.begin(), coll.end(), back_inserter(coll2));
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	copy(coll.rbegin(), coll.rend(), coll2.begin());
	copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}