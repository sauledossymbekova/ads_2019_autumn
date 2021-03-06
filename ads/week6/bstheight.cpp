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

int height(TreeNode* root) {
	if (root == NULL) return 0;
	return 1 + max(height(root -> left), height(root -> right));
}


int main() {
	TreeNode* root = NULL;
	map<int, int> m;
	int x;
	int n;
	cin>> n;
	int arr[n];
	while(n!=0){
	cin >> x;
		if (!x) break;
		if (!m[x]) insert(x, root);
		m[x]++;
		
		int i=0;
		arr[i] = x;
		i++;
	n--;
	}
	int k;
	cin>>k;
	for (int i=0; i<n; i++){
		if (arr[i]==k) {
			cout << arr[i];
			}
	}

	for (int x; x<n ;x++){
		if (m[x]==k){
			root = m[x];
		}
	}
	cout << height(root);
}