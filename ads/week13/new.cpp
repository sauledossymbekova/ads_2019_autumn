#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> prefix_func(string s)
{
    vector<int> v;
    v.push_back(0);
    for (int q = 1; q < s.size(); q++){
        int j = v[q - 1];
        while (j > 0 && s[j] != s[q])
            j = v[j - 1];
        if (s[j] == s[q])
            j++;
        v.push_back(j);
    }
    return v;
}

int main() {
  int n;
  while(true)
  {
    cin >> n;
    if(n == 0)
      return 0;
    string s[n], text;
    vector<string> ans;
    map<string, bool> used;
    int max = 0;
    for( int i = 0; i < n; i++)
      cin >> s[i];
      
    cin >> text;
    
    for( int i = 0; i < n; i++)
    {
      int cr = 0;
      vector<int> kmp = prefix_func(s[i] + "#" + text);
      for( int j = 0; j < kmp.size(); j++)
      {
        if(kmp[j] == s[i].size())
          cr++;
        if(cr > max)
        {
          max = cr;
          ans.clear();
          ans.push_back(s[i]);
        }
        else if(cr == max)
          ans.push_back(s[i]);
      }
    }
    cout << max << "\n";
      for( int i = 0; i < ans.size(); i++)
      {
        if(used[ans[i]] == false)
          cout << ans[i] << "\n";
        used[ans[i]] = true;
      }
  }
}