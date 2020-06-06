#include <iostream>

using namespace std;

class Node {
    public:
    char value;
    Node *ch[26];
    bool ok;
    Node(char value) {
        this->value = value;
        for (int i = 0; i < 26; i++)
            this->ch[i] = NULL;
    }
};

class Trie {
    public:
    Node *root;
    Trie() {
        root = new Node(' ');
    }
    void insert(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL)
                cur = cur->ch[s[i] - 'a'];
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node; 
                cur = node;
            }
        }
    }
    bool find(string s) {
        Node *cur = root;
        for(int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] == NULL) {
                return false;
            }
            else {
                cur = cur->ch[s[i] - 'a'];
            }
        }
        return true;
    }
};

int main() {
    Trie *trie = new Trie();

    string s,t;
    cin >>s>> t;
    int n = s .size();
    if(s.size()>=t.size()){
        for (int i = 0; i < s.size(); i++) {
        string s1 = s.substr(i);
        trie->insert(s1);
    }
        if (trie->find(t)) {
            cout << s;
        }
        else {
            cout << s<<t;
        }
    }
    else if(s.size()<=t.size()){
        for (int i = 0; i < t.size(); i++) {
        string s1 = t.substr(i);
        trie->insert(s1);
    }
        if (trie->find(s)) {
            cout << t;
        }
        else {
            cout << s<<t;
        }
    }
    return 0;
}