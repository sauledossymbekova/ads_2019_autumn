#include <iostream>
int gcd (long long a, long long b) {
	return b ? gcd (b, a % b) : a; // if b!=0 then gcd if not, a
}
//lcm(x, y) * gcd(x, y) = x * y
// N * 1 = N * 1
int lcm (long long a, long long b) {
	return a / gcd (a, b) * b;
}

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n;
    int cur = 1;
    for(int i = 2; i*i <= m; i++) {
        if (n % i == 0) {
            while(n % i == 0) {
                cur *= i;
                n /= i;
            }
            if (n == 1) {
                cout << -1;
                break;
            }
            else {
                cout << cur << " " << n;
                break;
            }
        }
    }
}