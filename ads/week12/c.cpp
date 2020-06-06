#include <iostream>
#include <set>
using namespace std;

class Node {
    public:
    char value;
    Node *ch[26];
    Node(char value) {
        this->value = value;
        for (int i = 0; i < 26; i++)
            this->ch[i] = NULL;
    }
};
//unordered_set<Node*> st;
set<Node*> st;
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
    void find(string s) {
        Node *cur = root;
        for(int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL) {
                cur = cur->ch[s[i]- 'a'];
                st.insert(cur);
            }
            else break;
        }
    }
};

int main() {
    Trie *trie = new Trie();
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        string s1 = s.substr(i);
        trie->insert(s1);
    }
    for(int i = 0; i < t.size(); i++) {
        string s1 = t.substr(i);
        trie->find(s1);
    }
    cout << st.size();
    return 0;
}

//abcd
//abdd
// a0 + a1 * p1 + a2 * p2 + a3 * p3 = h;
