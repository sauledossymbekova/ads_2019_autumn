#include <bits/stdc++.h> // primes
#define ll long long // we can write ll instead of long long

using namespace std;

vector<ll> primes;

void sieve(ll n) {
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
	int n;
	cin >> n;
	const int N = (int)2e5;
	sieve(N);
	cout << primes[n - 1];
}