#include <iostream>
#include <map>
#include <cstring>

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

map<int, int> m;
void order(TreeNode* root){
	if (root == NULL) return;
	m[root -> val]++;
	order(root -> left);
	order(root -> right);
}

int main() {
	TreeNode* root = NULL;
	int x;
	while(cin >> x) {
		if (!x) break;
		insert(x, root);
	}
	order(root);
	for(auto it: m) {
		cout << it.first << ' ' << it.second << '\n';
	}
}

//geeksforgeeks.com
