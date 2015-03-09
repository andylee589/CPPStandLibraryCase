#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Person {
private:
	string name;
public:
	Person(string n) :name(n){}
	void print() const {
		cout << name << endl;
	}
	
	void printWithPrefix(string prefix) const {
		cout << prefix << name << endl;
	}
};

void foo(const vector<Person>& coll){
	for_each(coll.begin(), coll.end(), mem_fun_ref(&Person::print));
	for_each(coll.begin(), coll.end(), bind2nd(mem_fun_ref(&Person::printWithPrefix), "person: "));
}

void foob(const vector<Person*>& coll){
	for_each(coll.begin(), coll.end(), mem_fun(&Person::print));
	for_each(coll.begin(), coll.end(), bind2nd(mem_fun(&Person::printWithPrefix), "person: "));
}

int main(){
	vector<Person> coll;
	for (int i = 1; i < 9; ++i){
		coll.push_back(Person("mate"));
	}
	foo(coll);
	vector<Person*> collPtr;
	for (int i = 1; i < 9; ++i){
		collPtr.push_back(new Person("mate"));
	}
	foob(collPtr);
}