#include <iostream>
#include <vector>
using namespace std;
bool comp(pair<string,int> l, pair<string,int> r){
    if(l.first.size()<r.first.size()) return true;
    if(l.first.size()>r.first.size()) return false;
    if(l.second<r.second) return true;
    return false;
}

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin,s);
        if(s==""){//bag
            i--;
            continue;
        }
        vector<pair<string,int> > v;
        string t = "";
        int cnt = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[j]==' '){
                v.push_back(make_pair(t,cnt));
                t = "";
                cnt++;
            } 
            else t+=s[j];
        }
        v.push_back(make_pair(t,cnt));
        sort(v.begin(),v.end(),comp);
        for(int j = 0; j < v.size(); j++) cout<<v[j].first<<" ";
        cout<<endl;
    }
}