#include <iostream>
#include <vector>
using namespace std;
vector<int> prefix_func(string s) {
    int n = s.size();
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


int main(){
    int n,k;
    cin>>n>>k;
    string s1,s2;
    for (int i=0; i<=n;i++){
        cin>>s1;
        s1=s1+"#";
    }
    vector<int> v =prefix_func(s1);
    
    for (int i=0; i<=n;i++){
        cin>>s2;
        s2=s2+"#";
    }
    vector<int> v2 =prefix_func(s2);
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    for (int i = 0; i < v2.size(); i++)
        cout << v[i] << " ";
}