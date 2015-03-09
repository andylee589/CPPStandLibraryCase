#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> st;
	//push
	st.push(1);
	st.push(2);
	st.push(3);
	// pop and print two elements from the stack
	cout << st.top() << ' ';
	st.pop();
	cout << st.top() << ' ';
	st.pop();
	// modify top element
	st.top() = 77;
}