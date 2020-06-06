#include <iostream>

using namespace std;

struct Node {
	int val;
	Node * prev;
	Node(int x) {
		val = x;
		prev = NULL;
	}
};

struct Stack {
	Node * head = NULL;
	int cnt = 0;
	void push(int x) {
		Node * cur = new Node(x);
		cur -> prev = head;
		head = cur;
		cnt++;
	}
	void pop() {
		head = head -> prev;
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
		cnt = 0;
	}
};

int main() {

}