#include <iostream>
#include <vector>
using namespace std;

int main(){
	{
		vector<int> vec;
		vec.reserve(100);
		cout << vec.capacity() << endl;
		vec.resize(100);
		cout << vec.capacity() << endl;
	}
	{
	vector<int> vec;
	vec.resize(100);
	cout << vec.capacity() << endl;
	cout << vec.size() << endl;
	vec.resize(50);
	cout << vec.capacity() << endl;
	cout << vec.size() << endl;
}
	{
		vector<int> vec;
		vec.resize(100);
		cout << vec.capacity() << endl;
		cout << vec.size() << endl;
		vec.push_back(1);
		cout << vec.capacity() << endl;
		cout << vec.size() << endl;
	}

}