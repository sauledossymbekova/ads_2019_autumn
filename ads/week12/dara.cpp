#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



int main(){
  int n;
  cin>>n;
  long long sum = 0, cur;
  string ans = "";
  for(int i = 0; i < n; ++i){
    cin>>cur;
    cur -= sum;
    sum += cur;
    cur /= pow(2, i);
    ans += char(cur+97);
  }
  cout<<ans;
}

//#define _GLIBCXX_DEBUG
#include <iostream>
#include <algorithm>
using namespace std;


struct Node{
    Node* children[26];
    bool word;
    int cnt;
    Node(){ 
        word = false;
        for(int i = 0; i < 26; i++) children[i] = NULL;
        cnt = 0;
    }
};

void insert(Node* root, string word){
    Node* temp = root;
    for(int i = 0; i < word.size(); i++){
        int idx = word[i] - 'a';
        if(!temp -> children[idx])  
            temp -> children[idx] = new Node();
        temp = temp -> children[idx];
        temp->cnt++;
    }
    temp -> word = true;
}


int search(Node* root, string word){
    Node* temp = root;
    for(int i = 0; i < word.size(); i++){
        int idx = word[i] - 'a';
        if(!temp -> children[idx]) return false;
        temp = temp -> children[idx];
    }
    return temp->cnt;
}


int main(){
    Node* root = new Node();
    int n, m; 
    cin >> n >> m;
    for(int i = 0; i < n; i++){
      string s;
        cin >> s;
        reverse(s.begin(), s.end());
        insert(root, s);
    }
   
    for(int i = 0; i < m; i++){
        string t;
        cin >> t;
        reverse(t.begin(), t.end());
        cout << search(root, t) << "\n";
    } 
    
}

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int kmp(string & r, string & l){
  string s = l + "#" + r;
  vector<int> p(s.size());
  int ans = 0;
  for(int i = 1; i < s.size(); ++i){
    int j = p[i-1];
    while(j > 0 && s[i]!=s[j])
      j = p[j-1];
    if(s[i] == s[j]) ++j;
    p[i] = j;

    if(j == l.size() && i > l.size())
      ans = max(ans, i - 2 * (int)l.size() );
  }
  return ans;
}


int main(){
  string s, t;
  cin >> s >> t;
  int n = kmp(s, t);
  cout << s + t.substr(n, t.size()-n);
}