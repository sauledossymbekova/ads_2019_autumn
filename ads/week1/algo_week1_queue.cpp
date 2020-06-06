#include <iostream>

using namespace std;

struct Node {
	int val;
	Node * prev;
	Node(int x) {
		val = x;
		next = NULL;
	}
};

struct Stack {
	Node * head = NULL;
	Node * tail = NULL;
	int cnt = 0;
	void push(int x) {
		Node * cur = new Node(x);
		if (cnt == 0) {
			head = cur;
		}
		else {
			tail -> next = cur;
		}
		tail = cur;
		cnt++;
	}
	void pop() {
		head = head -> prev;
		if (head == NULL) tail = NULL;
		cnt--;
	}
	int size(){
		return cnt;
	}
	bool empty() {
		return cnt == 0;
	}
	void erase() {
		head = NULL;
		tail = NULL;
		cnt = 0;
	}
};

int main() {

}