#include <iostream>

using namespace std;
int a[1e5 + 100];
int bs(int l, int r, int x) {
	while(r >= l) {
		int mid = (l + r) << 1;
		if (a[mid] == x) {
			return mid;
		}
		else if (a[mid] > x) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
		return -1;
	}
}
int main() {
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(i = 0; i < k; i++) {
		int x;
		cin >> x;
		if (bs(0, n - 1,x) != -1) {
			cout << x << '\n';
		}
		else {
			int l = x - 1;
			int r = x + 1;
		}
	}
}