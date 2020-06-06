#include <iostream>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x){val = x; left = NULL; right = NULL;}
};
void insert(Node* root, int x){
    if(root -> val > x){
        if(root -> left) insert(root -> left, x);
        else {
            Node* t = new Node(x);
            root -> left = t;
        }
    }
    else{
        if(root -> right) insert(root -> right, x);
        else {
            Node* t = new Node(x);
            root -> right = t;
        }
    }
}
Node* node;
void dfs(Node* root, int x){
    if(!root) return;
    if(root -> val == x){
        node = root;
        return;
    }
    dfs(root -> left, x);
    dfs(root -> right, x);
}
int height(Node* root){
    int t1 = 0;
    int t2 = 0;
    if(root -> left) t1 = 1 + height(root -> left);
    if(root -> right) t2 = 1 + height(root->right);
    return max(t1, t2);    
}
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    Node* root = new Node(x);
    for(int i = 1; i < n; i++){
        cin >> x;
        insert(root, x);
    }
    cin >> x;
    dfs(root, x);
    cout << height(node)+1;
}