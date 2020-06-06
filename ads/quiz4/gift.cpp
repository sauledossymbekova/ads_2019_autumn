#include <iostream>
using namespace std;
struct Node{
    Node* right;
    Node* left;
    int count;
    Node(int k){
        right = left = NULL;
        count = k;
    }
}; 
Node* add(Node* &root, int h){
    if(!root){
        root = new Node(h);
        return root;
    }
    if(root -> count > h) {
        root -> left = add(root -> left, h);
    }
    else {
        root -> right = add(root -> right, h);
    }
    return root;
}
void ans(Node* root, bool boy, int n){
    if(!root){
        return;
    }
    if(root -> count == n) {
        boy = true;
    }
    if(boy) {
        cout << root -> count << " ";
    }
    ans(root -> left, boy, n);
    ans(root -> right, boy, n);
}
int main(){
    int num, son;
    cin >> num;
    Node* root = NULL;
    for(int i =1; i <=num; ++i){
        int son;
        cin >>son;
        add(root, son);
    }
    cin >>son;
    ans(root, false, son);    
}