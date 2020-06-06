#include <bits/stdc++.h> //bst

using namespace std;

struct Node{
	int val;
	Node * left;
	Node * right;
	Node(int x) {
		val = x;
		left = right = NULL;
	}
};

void insert(Node* &root, int val) {
	if (root == NULL) {
		root = new Node(val);
		return;
	}
	if (root -> val < val) insert(root -> right, val);
	else insert(root -> left, val);
}

int ans = 0;
map<int, int> m;

void calc(Node* root, int cnt = 0) {
	if (root == NULL) return;
	m[cnt] += root -> val;
	calc(root -> left, cnt + 1);
	calc(root -> right, cnt + 1);
	ans = max(ans, cnt);
}

int main() {
	Node * root = NULL;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		insert(root, x);
	}
	calc(root);
	cout << ans + 1 << endl;
	for(auto it = m.begin(); it != m.end(); it++) { // for(auto it: m)
		cout << (*it).second << ' ';
	}
}