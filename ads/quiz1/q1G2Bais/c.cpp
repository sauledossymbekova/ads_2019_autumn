#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st, mx;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "getmax") {
			if (mx.empty()) cout << "error\n";
			else cout << mx.top() << '\n';
		}
		else if (s == "getcur") {
			if (st.empty()) cout << "error\n";
			else cout << st.top() << '\n';
		}
		else if (s == "add") {
			int x;
			cin >> x;
			st.push(x);
			if (mx.empty()) mx.push(x);
			else if (mx.top() <= x) {
				mx.push(x);
			}
		}
		else {
			if (st.top() == mx.top() && !mx.empty()) {
				mx.pop();
			}
			if (!st.empty()) st.pop();
		}
	}
}
