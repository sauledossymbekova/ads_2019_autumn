#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> pref(string s){
    vector<int> p(s.size());
    p[0] = 0;
    for( int i = 1; i<s.size(); i++){
        int j = p[i-1];
        while(j>0 and s[i]!=s[j]){
            j = p[j-1];
        }
        if(s[i]==s[j]) j++;
        p[i] = j;   
    }
    return p;
}
int main (){
    string s,s2;
    cin>>s>>s2;
    if(s == s2){
        cout<<0;
        return 0;
    }
    vector<int>p = pref( s2 + '#' + s + s);// cout<<periodic_reverse(s,s2);
    int n = s.size();
    bool error = true;
    for( int i = 0; i<p.size(); i++){
        if(p[i] == n){
            cout<< p.size()-i-1<<endl;
            error = false;
            break;
        }
    } 
    if(error) cout<<-1;
    return 0;   
}