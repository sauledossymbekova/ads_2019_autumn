#include <iostream>
#include <vector>
#include <cmath>

#define ll long long
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

bool isPrime(int n) {
	if (n == 1) return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int k;
	cin >> k;
	sieve(1e5);
	vector<ll> superPrimes;
	for(int i = 1; i < primes.size(); i++) {
		if (isPrime(i + 1)) superPrimes.push_back(primes[i]); // индексация начинается с нуля, хотя в задаче указана 1-индексация
	}	
	cout << superPrimes[k - 1];
}
