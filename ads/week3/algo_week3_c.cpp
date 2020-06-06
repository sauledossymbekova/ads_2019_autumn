#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int l = 0, r = sum - a[0];
	for(int i = 0; i < n, r > 0; i++) {
		if (l == r) {
			cout << "YES";
			return 0;
		}
		l += a[i];
		r -= a[i + 1];
	}
	cout << "NO";
}