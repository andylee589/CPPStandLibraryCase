#include <cstdlib>
#include "algostuff.h"
using namespace std;

int main(){
	list<int> coll;
	// insert five random numbers
	generate_n(back_inserter(coll), 5, rand);
	PRINT_ELEMENTS(coll);
	generate(coll.begin(), coll.end(), rand);
	PRINT_ELEMENTS(coll);
}