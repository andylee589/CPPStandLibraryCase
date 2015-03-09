#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "print.h"
using namespace std;

int main(){
	// create istream iterator that reads integers from cin
	istream_iterator <int> intReader(cin);

	// create end of stream iterator 
	istream_iterator<int> intReadEOF;
	/*while (intReader != intReadEOF){
		cout << "once: " << *intReader << endl;
		cout << "onece again: " << *intReader << endl;
		++intReader;
	}*/
	
	vector<int> coll(intReader, intReadEOF);
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, "\t"));
}