#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<bool> bv;
	for (int j = 0; j < 5; j++){
		bv.push_back(true);
		bv.push_back(false);
	}
	vector<bool>::iterator it = bv.begin();
	int i = 1;
	for (i = 0; i < 10; i++){
		cout << "element\t" << i << "\t is \t" << bv[i] << endl;
	
	}

}