#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
using namespace std;

vector<int> primes;

void sieve(int n) {
	if (n >= 2) primes.push_back(2);
	vector<bool> prime (n + 1, true);
	for (ll i = 3; i <= n; i += 2) {
		if (prime[i]) {
			primes.push_back(i);
			for (ll j = i * i; j <= n; j += i)
				prime[j] = false;
		}
	}
}
int main() {
	long long k;
	cin >> k;
	sieve(1e15);
	long long count=0; //2
    for(int i = 1; i < k - 1; i++) {
        if (primes[i] - 2 != primes[i - 1] && primes[i] + 2 != primes[i + 1]) count++;
    }
    if (primes[n - 1] - 2 == primes[n - 2]) count--;
	cout << count;
	return 0;
}
