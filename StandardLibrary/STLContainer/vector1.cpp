#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector<string> sentence;
	sentence.reserve(5);
	sentence.push_back("Hello, ");
	sentence.push_back("how");
	sentence.push_back("are");
	sentence.push_back("you");
	sentence.push_back("?");

	//print element separated with space
	copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));
	cout << endl;

	//print "technical data"
	cout << "max_size(): " << sentence.max_size() << endl;
	cout << "size(): " << sentence.size() << endl;
	cout << "capacity(): " << sentence.capacity() << endl;

	//swap second and fourth element
	swap(sentence[1], sentence[3]);
	// insert elemnt always before element"?"
	sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");
	// assign "!" to the last element
	sentence.back() = "!";
	copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));
	cout << endl;

	//print "technical data"
	cout << "max_size(): " << sentence.max_size() << endl;
	cout << "size(): " << sentence.size() << endl;
	cout << "capacity(): " << sentence.capacity() << endl;
}