
/*aerguno
kaergun
6
ulsvnxe
olsxeul
2*/
//KMP
#include<iostream>
#include <vector>
#include<algorithm>
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

typedef vector<int> vi; 
typedef pair<int,int> pi;

vi prefix_func(string s) {
    int n = s.size();
    vi p(n);
    p[0] = 0;
    REP(i,1,n){
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}
int main() {
    string s, t;
    cin >> s >> t;
    string s1 = t  + "#" + s;
    string s2 = s  + "#" + t;
    vi p1 = prefix_func(s1);
    vi p2 = prefix_func(s2);
    /*REP(i,0,s.size()) {
        if (p[i] == t.size())
            cout << i - t.size() - t.size() << " ";
    }*/
    int ans = max(p1[p1.size() - 1], p2[p2.size() - 1]);
    cout << ans;
    return 0;
}

