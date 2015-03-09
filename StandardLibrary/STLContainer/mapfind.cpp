#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

template <class K,class V>
class value_equals{
private:
	V value;
public:
	value_equals(const V& v):value(v){
	}

	bool operator()(pair<K, V> elem){
		return elem.second == value;
	}
};

int main(){
	typedef map<float, float> FloatFloatMap;
	FloatFloatMap coll;
	FloatFloatMap::iterator pos;
	// fill container
	coll[1] = 7;
	coll[2] = 4;
	coll[3] = 2;
	coll[4] = 3;
	coll[5] = 6;
	coll[6] = 1;
	coll[7] = 3;

	// search for key equals 3
	pos = coll.find(3);
	if (pos != coll.end()){
		cout << pos->first << ": " << pos->second << endl;
	}

	// search for value equals 3
	pos = find_if(coll.begin(), coll.end(), value_equals<float, float>(3));
	if (pos != coll.end()){
		cout << pos->first << ": " << pos->second << endl;
	}
}