#include <iostream>
#include <set>
#include <map>
#include <functional>
#include "print2.h"
using namespace std;
enum test{one,tow};
template <class T>
class RuntimeCmp{
public:
	enum cmp_mode {normal,reverse};
	cmp_mode mode;
public:
	RuntimeCmp(cmp_mode m = normal):mode(m){
	}
	bool operator ()(const T& t1, const T& t2) const{
		return mode == normal ? t1<t2 : t1>t2;
	}
	void operator=(const RuntimeCmp& rhs){
		this->mode = rhs.mode;
	}
};
typedef set<int, RuntimeCmp<int>> IntSet;
void fill(IntSet& set);
int main(){
	IntSet coll1;
	fill(coll1);
	PRINT_ELEMENTS(coll1, "coll1: ");
	
	// reverse
	RuntimeCmp<int> reverse_order(RuntimeCmp<int>::reverse);
	IntSet coll2(reverse_order);
	fill(coll2);
	PRINT_ELEMENTS(coll2, "coll2: ");

	coll1= coll2;
	
	PRINT_ELEMENTS(coll1, "coll1: ");
}
void fill(IntSet& set){
	set.insert(4);
	set.insert(7);
	set.insert(5);
	set.insert(1);
	set.insert(6);
	set.insert(2);
	set.insert(5);
	map<int, string> coll2;
}