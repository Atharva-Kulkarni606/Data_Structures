#include<bits/stdc++.h>
using namespace std;


//Stack using Arrays 

class Stack {
private: 
	int top;
	vector<int>stack;
public: 

	Stack(int size) {
		top = -1;
		stack.resize(size, 0);
	}

	bool isEmpty() {
		return top == -1;
	}

	bool isFull() {
		return top == stack.size() - 1;
	}

	void push(int data) {
		if(isFull()) {
			cout << "Stack overflow\n";
		} else {
			top++;
			stack[top] = data;
		}
	}

	int pop() {
		int poppedElement = 0;
		if(isEmpty()) {
			cout << "Stack Underflow\n";
		} else {
			poppedElement = stack[top];
			top--;
		}
		return poppedElement;
	}

	//Return top element of the stack
	int peek() {
		if(isEmpty()) {
			return -1;
		}  
		return stack[top];
	}


};




int main() {
	int size;
	cin >> size;
	Stack st(size);
	
	st.push(5);
	st.push(10);

	cout << st.pop() << endl; 	
	cout << st.pop() << endl;

	return 0;
}