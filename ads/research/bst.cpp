#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left;
    Node *right;
    Node *parent;
    Node(int data) {
        
        this->data = data;
        left = null;
        right = null;
    }
};
class Tree{
    public:
    Node *root;
    Tree() {
        root = NULL;
    }
    Node *insert_node(Node *node, int data){
    if (node = NULL){
        node = new Node(data);
        return node;
    }  
    if  (node->data < data) 
        node->right = insert_node(node->right, data); //add to right
    else 
        node->left = insert_node(node-> left, data);
    return node;
    }

int main(){
    Tree *tree = new Tree();
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        tree->root = tree->insert_node(tree->root, x);
        }
    
    return 0;
}
}
//read access