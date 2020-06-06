#include <iostream>
#include <map>


using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node *parent;
    Node(int x) {
        x = data;
        left = right = NULL;
    }
};

void insert (Node* &root, int data){
    if (root == NULL){
        root = new Node (data);
        return;
    }
    if  (root->data < data) insert(root->right, data); //add to right
    else insert(root-> left, data);
}
int ans =0;
map <int,int> m;
void calc (Node* root, int cnt =0){
    if (root == NULL) return;
    m[cnt] += root->data;
    calc(root->left, cnt + 1);
    calc(root->right, cnt + 1);
    ans = max (ans,cnt);
}

int main(){
    Node *root = NULL;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        insert(root,x);
    }
    calc(root);
    cout << ans<< endl;
    //for(auto:it) {cout<< (*it).second << " ";}
    for(auto it = m.begin(); it != m.end(); it++) { // for(auto it: m)
		cout << (*it).second << ' ';
	}

}