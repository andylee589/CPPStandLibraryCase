#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	istream_iterator<string> cinPos(cin);
	ostream_iterator<string> coutPos(cout, " ");
	// while input is not at the end of the file write thired string
	while (cinPos != istream_iterator<string>()){
		advance(cinPos, 2);
		// read and write the thired string
		if (cinPos != istream_iterator<string>()){
			*coutPos++ = *cinPos++;
		}
	}
	cout << endl;
}