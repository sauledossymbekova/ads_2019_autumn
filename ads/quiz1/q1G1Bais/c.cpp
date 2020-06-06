#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	int n;
	cin >> n;
	int cur = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 1) {
			int m;
			cin >> m;
			q.push(m);
		}
		else if (x == 2) {
			int m;
			cin >> m;
			cur += m;
		}
		else {
			while (!q.empty()) {
				if (q.front() <= cur) {
					q.pop();
				}
				else break;
			}
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
	}
}
