#include <bits/stdc++.h>

using namespace std;

int main() {
	int test;
	cin >> test;
	stack<string> back, forward;
	back.push("http://www.lightoj.com/");
	for(int t = 1; t <= test; t++) {
		printf("Case %d:\n", t);
		string s;
		while(cin >> s) {
			if (s == "VISIT") {
				string temp;
				cin >> temp;
				back.push(temp);
				cout << back.top();
				while(!forward.empty()) forward.pop();
			}
			else if (s == "BACK") {
				if (back.size() == 1) {
					cout << "Ignored";
				}
				else {
					forward.push(back.top());
					back.pop();
					cout << back.top();
				}
			}
			else if (s == "FORWARD") {
				if (forward.size() == 0) {
					cout << "Ignored";
				}else {
					back.push(forward.top());
					forward.pop();
					cout << back.top();
					}
			}
			else if (s == "QUIT") {
				break;
			}
			cout << '\n';
		}
	}
}