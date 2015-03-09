#include <iostream>
#include <iterator>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	set<int> coll;
	for (int i = 1; i <= 9; i++){
		coll.insert(i);
	}
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	// remove all elements with value 3
	int num = coll.erase(3);
	//print number of removed elments
	cout << "number of removed elements: " << num << endl;
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}