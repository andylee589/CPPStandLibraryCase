#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
using namespace std;

bool isPrime(int number){
	number = abs(number);
	if (number == 0 || number == 1){
		return true;
	}
	int divisor;
	for (divisor = number / 2; number%divisor != 0; --divisor){}
	return divisor == 1;
}

int main(){
	list<int> coll1;
	// insert
	for (int i = 24; i <= 30; i++){
		coll1.push_back(i);
	}
	list<int>::iterator pos = find_if(coll1.begin(), coll1.end(), isPrime);
	if (pos != coll1.end()){
		cout << *pos << " is first prime number found" << endl;
	}
	else {
		cout << "NULL";
	}

}