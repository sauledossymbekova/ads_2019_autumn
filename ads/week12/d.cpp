#include <iostream>
#include <vector>

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
	string s, t;
	cin >> s >> t;
	vector<int> v = prefix_function(s + " " + t);
	vector<int> v1 = prefix_function(t + " " + s);
	if (v[v.size() - 1] > v1[v.size() - 1]) {
		cout << t + s.substr(v[v.size() - 1]);
	}
	else cout << s + t.substr(v1[v.size() - 1]); 
}

// cout << max(v[v.size() - 1], v1[v1.size() - 1]);

//abcdasdew abc
//abc#abcdasddw
//if (v[v.size() - 1] == t.size()) cout << "YES";
