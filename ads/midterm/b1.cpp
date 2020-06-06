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

void insert2(int x, TreeNode* &root2) {
	TreeNode * cur2 = new TreeNode(x);
	if (root2 == NULL) {
		root2 = cur2;
		return;
	}
	else if (x < root2 -> val) {
		insert(x, root2 -> left);
	}
	else insert(x, root2 -> right);
}
int height(TreeNode* root) {
	if (root == NULL) return 0;
	return 1 + max(height(root -> left), height(root -> right));
}


int main() {
	TreeNode* root = NULL;
    TreeNode* root2 =NULL;

	map<int, int> m;
    map<int, int> l;
	int n,x;
    int  k=n;
	cin>> n;

	while(n!=0){
	cin >> x;
		if (!x) break;
		if (!m[x]) insert(x, root);
		m[x]++;
	n--;
	}
    int sub;
    cin>>sub;  
    int count;
    for (int i=0; i<k ; i++){
        if (m[i]==sub){
            i= count;

            insert2(i, root2);
        }
    }
    while(count!=0){
        int i=0;
		insert2(i, root2);
		m[x]++;
	count--;
	}


	cout << height(root2);
}