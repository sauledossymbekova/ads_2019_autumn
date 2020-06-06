#include <vector>
#include <iostream>
using namespace std;

vector<int> prefix_function (string s) {
	int n = (int) s.length();
	vector<int> pi (n);
	for (int i=1; i<n; ++i) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j])  ++j;
		pi[i] = j;
	}
	return pi;
}

int main() {
	int n1,n2;
    cin>>n1;
    string s,s2;
    while(n1!=0){
        cin>>s;
        s+=s;
        n1--;
    }
    cin>> n2;
    while(n2!=0){
        cin>>s2;
        s2+=s2;
        n2--;
    }
	vector<int> v = prefix_function(s);
	int n = s.size() - v[v.size() - 1];
	if (s.size() % n == 0) {
		cout << n;
	}
	else {
		cout << s.size();
	}
    vector<int> v2 = prefix_function(s2);
	int k = s2.size() - v2[v2.size() - 1];
	if (s2.size() % k == 0) {
		cout << n;
	}
    else {
		cout << s.size();
	}
}
