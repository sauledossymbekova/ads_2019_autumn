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
	string s, t, p;
	cin >> s >> t >> p;
	vector<int> v = prefix_function(p + '#' + t);
	vector<int> v1 = prefix_function(p + '#' + s);
	int ans = 0;
	for(int i =	0; i < v.size(); i++) {
		ans += (v[i] == v1[i] && v[i] == p.size());
	}
	cout << ans;
}
