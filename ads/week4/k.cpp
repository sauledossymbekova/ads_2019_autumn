#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int lowest = a[n - 1];
	int ans = 1;
	for(int i = n - 2; i >= 0; i--) {
		if (lowest > a[i]) {
			lowest = a[i];
			ans++;
		}
	}
	cout << ans;
}