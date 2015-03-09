#include <iostream>
#include <functional>
#include <algorithm>
#include "print2.h"
#include "carray.h"
using namespace std;

int main(){
	carray<int, 10> a;
	for (unsigned int i = 0; i < a.size(); i++){
		a[i] = i + 1;
	}
	PRINT_ELEMENTS(a);
	reverse(a.begin(), a.end());
	PRINT_ELEMENTS(a);
	transform(a.begin(), a.end(), a.begin(), negate<int>());
	PRINT_ELEMENTS(a);
}