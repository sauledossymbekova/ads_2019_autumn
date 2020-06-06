#include <iostream>
#include <map>
#include <cstring>

using namespace std;
const int N = 1e6 + 15;
struct TreeNode{
	int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int x) {
		val = x;
		left = right = NULL;
	}
};

void insert(int x, TreeNode* &root) {
	TreeNode * cur = new TreeNode(x);
	if (root == NULL) {
		root = cur;
		return;
	}
	else if (x < root -> val) {
		insert(x, root -> left);
	}
	else insert(x, root -> right);
}

void leafs(TreeNode * root) {
	if (root == NULL) {
		return;
	}
	leafs(root -> left);
	if (root -> left && root -> right) {
		cout << root -> val << '\n';
	}
	leafs(root -> right);
}

int main() {
	TreeNode* root = NULL;
	map<int, int> m;
	int x;
	while(cin >> x) {
		if (!x) break;
		if (!m[x]) insert(x, root);
		m[x]++;
	}
	leafs(root);
}