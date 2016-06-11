#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st;
	
	bool empty = st.empty();
	
	if (empty) {
		cout << "stack is empty!" << endl;
	}
	
	st.push(1);
	st.push(2);
	st.push(3);
	
	cout << "1, 2, 3 are pushed in the stack!" << endl;
	
	cout << "the size of the stack is " << st.size() << endl;
	
	cout << "the top of the stack is " << st.top() << endl;
	
	st.pop();
	
	cout << "the top element is poped!" << endl;
	
	cout << "the size of the stack is " << st.size() << endl;
	
	return 0;
}
