#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int>  coll;
	coll.push_back(2);
	coll.push_back(1);
	if (coll.size() > 1){
		sort(++coll.begin(), coll.end());
	}
}