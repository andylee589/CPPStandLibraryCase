#include <iostream>
#include <queue>
#include <algorithm>
#include <iterator>
#include <functional>
using namespace std;

int main(){
	priority_queue <float> q;
	// insert three elements into the priority queue
	q.push(66.6);
	q.push(22.2);
	q.push(44.4);

	// read and print two element
	cout << q.top() << ' ';
	q.pop();
	cout << q.top() << ' ';
	q.pop();
	// insert three more elements
	q.push(11.1);
	q.push(55.5);
	q.push(33.3);
	q.pop();
	// pop and print remaining elements
	while (!q.empty()){
		cout << q.top() << ' ';
		q.pop();
	}
	cout << endl;

	vector<int> coll;
	coll.push_back(2);
	coll.push_back(1);
	sort(coll.begin(), coll.end(),greater<int>());
	copy(coll.begin(), coll.end(), ostream_iterator<int>(cout, ""));
}