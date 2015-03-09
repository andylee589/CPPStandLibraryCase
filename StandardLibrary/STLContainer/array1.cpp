#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	int coll[] = { 5, 6, 2, 4, 1, 3 };
	int length = sizeof(coll) / sizeof(coll[0]);
	// square all element
	transform(coll, coll + length, coll, coll, multiplies<int>());
	sort(coll + 1, coll + length);
	copy(coll, coll + length, ostream_iterator<int>(cout, " "));
	cout << endl;
}