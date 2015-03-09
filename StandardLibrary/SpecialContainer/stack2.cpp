#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
	try {
		Stack<int> st;
		// push three
		st.push(1);
		st.push(2);
		st.push(3);
		// pop and print two elemnts from the stack
		cout << st.pop() << " ";
		cout << st.pop() << " ";
		// modify top element
		st.top() = 77;
		// push tow new element
		st.push(4);
		st.push(5);
		st.pop();
		cout << st.pop() <<' ';
		cout << st.pop() << endl;
		cout << st.pop() << endl;

	}
	catch (const exception & e){
		cerr << "Exception: " << e.what() << endl;
	}
}