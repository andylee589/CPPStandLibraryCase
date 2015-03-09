#include <iostream>
#include <functional>
#include <set>
using namespace std;

int main(){
	typedef set<int, greater<int>> IntSet;
	IntSet coll1;
	// insert elements
	coll1.insert(4);
	coll1.insert(3);
	coll1.insert(5);
	coll1.insert(1);
	coll1.insert(6);
	coll1.insert(2);
	coll1.insert(5);

	// iterate
	IntSet::iterator pos;
	for (pos = coll1.begin(); pos != coll1.end(); ++pos){
		cout << *pos << " ";
	}
	cout << endl;

	//insert dulplicate element
	pair<IntSet::iterator,bool> status= coll1.insert(4);
	if (status.second){
		cout << "insert successed"<<endl;
	}
	else {
		cout << "insert failed"<<endl;
	}

	IntSet coll2(coll1.begin(), coll1.end());
	coll2.erase(coll2.begin(),coll2.find(3));
	for (pos = coll2.begin(); pos != coll2.end(); ++pos){
		cout << *pos << " ";
	}
	cout << endl;
	cout<<distance(coll2.begin(), pos);
	
}