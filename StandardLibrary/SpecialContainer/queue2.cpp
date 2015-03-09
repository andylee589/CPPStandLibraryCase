#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

int main(){
	try{
		Queue <string> q;
		// insert three elements into the queue
		q.push("These ");
		q.push("are ");
		q.push("more than ");
		// read and print two elements from the queue
		cout << q.pop()<<endl;
		cout << q.pop()<<endl;
		// skip one elemnt
		q.pop();
		// read and print two elemnts from the queue
		cout << q.pop()<<endl;
		cout << q.pop() << endl;
	}
	catch (exception& e){
		cerr << "Exception: " << e.what() << endl;
	}
}