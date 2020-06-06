#include <iostream>
#include <map>

using namespace std;

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

int cnt(TreeNode* root) {
	if (root == NULL) return 0;
	return 1 + cnt(root -> left) + cnt(root -> right);
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
	cout << cnt(root);
}