#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector<string> coll;

	// read all words from the standard input
	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));

	// sort elements
	sort(coll.begin(), coll.end());

	// print all elements without duplicates
	unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));

}