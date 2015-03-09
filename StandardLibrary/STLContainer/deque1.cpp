#include <iostream>
#include <iterator>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	// create empty deque 
	deque<string> coll;
	coll.assign(3, string("string"));
	coll.push_back("last string");
	coll.push_front("first striing");

	// output 
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
	//  remove 
	coll.pop_front();
	coll.pop_back();
	// insert 
 	for (int i = 1; i < coll.size(); ++i){
		coll[i] = "another " + coll[i];
	}
	// resize
	coll.resize(4, "resized string");
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
}