#include <iostream>

using namespace std;

struct Node {
	int val;
	Node * next;
	Node * prev;
	Node(int x) {
		val = x;
		next = NULL;
		prev = NULL;
	}
};

struct Stack {
	Node * head = NULL;
	Node * tail = NULL;
	int cnt(int x) {
			int cnt = 0;
			auto cur = head;
			while (cur) {
				if (cur->val == x)
					cnt++;
				cur = cur->next;
			}
			return cnt;
		}

		int getNth(int n) {
			auto cur = head;
			while (n-- && cur)
				cur = cur->next;
			return cur ? cur->val : -1;
		}

		void insertLast(int x) {
			auto node = new Node(x);
			if (tail == NULL) {
				head = node;
				tail = node;
				return;
			} else {
				tail->next = node;
				node->prev = tail;
				tail = node;
			}
		}

		void insertFirst(int x) {
			auto node = new Node(x);
			if (head == NULL) {
				head = node;
				tail = node;
				return;
			} else {
				head->prev = node;
				node->next = head;
				head = node;
			}
		}

		void deleteFirst() {
			head = head->next;
			if (head != NULL)
				head->prev = NULL;
			else
				tail = NULL;
		}

		void deleteLast() {
			tail = tail->prev;
			if (tail != NULL)
				tail->next = NULL;
			else
				head = NULL;
		}

		void del(int x) {
			auto cur = head;
			while (cur && cur->val != x)
				cur=cur->next;
			if (!cur)
				return;
			if (cur == head)
				deleteFirst();
			else if (cur == tail) 
				deleteLast();
			else
			{
				cur->next->prev = cur->prev;
				cur->prev->next = cur->next;
			}
		}

		void print() {
			auto cur = head;
			while (cur) {
				if (cur != head)
					cout << ' ';
				cout << cur->val;
				cur = cur->next;
			}
			cout << '\n';
		}
};

int main() {

}