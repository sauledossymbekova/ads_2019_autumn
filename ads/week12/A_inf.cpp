//z
//1
#include <iostream>
#include <vector>

using namespace std;

int prefix_func(string s) {
    if(s.size()==1) return 1;
    int count=0;
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i]){ 
            j++;
            count ++;
        }
        p[i] = j;
    }
    return count;
}

int main() {
    string s, t;
    cin >> s >> t;
    string s1 = t + "#" + s;
    cout << prefix_func(s1);
    return 0;
}
