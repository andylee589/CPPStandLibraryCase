#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

class Person{
public:
	string firstName()const;
	string lastName()const;

};

bool personSortCriterion(const Person& p1, const Person& p2){
	return p1.lastName() < p2.lastName() ||
		(!(p1.lastName() < p2.lastName()) && p1.firstName() < p2.firstName());
}

int main(){
	deque<Person> coll;
	sort(coll.begin(), coll.end(), personSortCriterion);
	
}