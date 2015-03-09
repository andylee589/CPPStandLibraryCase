#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <class T>
void shrinkCapacity(vector<T>& v){
	
	vector<T> tmp(v);
	v.swap(tmp);
}

int main(){
	vector<int> vec;
	vec.reserve(100);
	vec.resize(90);
	cout << "before capacity " << vec.capacity() << endl;
	cout << "before size " << vec.size() << endl;
	shrinkCapacity(vec);
	cout << "after capacity " << vec.capacity() << endl;
	cout << "after size " << vec.size() << endl;
}