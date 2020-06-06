//ababbababa
//aba
//0 5 7 
#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_func(string s, string t) {
    string a = s+ " " + t;
    int cnt=0;
    int n = a.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}
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
int main() {
    string s, t;
    cin >> s >> t;
    string s1 = t + "#" + s;
    vector<int> p = prefix_func(s, t);
    

    return 0;
}