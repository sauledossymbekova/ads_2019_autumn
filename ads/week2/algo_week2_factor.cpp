#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<ll, int> primes;

void factorization(ll n)
{
	primes.clear();
	ll i = 2;
	while (i * i <= n) {
		if (n % i == 0) {
			primes[i]++;
			n /= i;
		}
		else i++;
	}
	primes[n]++;
}