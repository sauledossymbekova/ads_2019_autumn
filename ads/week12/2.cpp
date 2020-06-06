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