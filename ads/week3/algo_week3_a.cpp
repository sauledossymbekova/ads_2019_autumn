#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	int m = n;
	while(n != 0) {
		ans += n % 10;
		n /= 10;
	}
	int i = 2;
	int ans1 = 0;
	while(m != 1) {
		int temp = 0;
		int j = i;
		while(j) {
			temp += j % 10;
			j /= 10;
		}
		while(m % i == 0) {
			ans1 += temp;
			m /= i;
		}
		i++;
	}
}