#include <iostream>

using namespace std;

int main() {
	int n, d;
	cin >> n >> d;
	int a[n];
	int used[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		used[i] = 0;
	}
	sort(a, a + n);
	reverse(a, a + n);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if (used[i] == 0) {
			ans++;
			used[i] = 1;
			for(int j = i + 1; j < n; j++) {
				if (used[j] == 0 && a[i] + a[j] <= d) {
					used[j] = 1;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
