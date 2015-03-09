#include "algostuff.h"
using namespace std;

int main(){
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 5);
	random_shuffle(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "on entry: ");
	// permute elements until they are sorted runs
	// runs through all permutations because the elements are sorted now

	while (next_permutation(coll.begin(), coll.end())){
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "now: ");
	while (prev_permutation(coll.begin(), coll.end())){
		PRINT_ELEMENTS(coll, " ");
	}
	PRINT_ELEMENTS(coll, "afterward: ");
}