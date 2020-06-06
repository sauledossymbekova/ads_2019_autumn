#include <map>
#include <iostream>
#include <cmath>
#define ll long long //int 10^9 ll 10^18
using namespace std;

int main(){
    ll n;
    cin >> n;
    map<ll, ll> primes;
    ll m = n;
    for(int i = 2; i <= sqrt(m); i++) {
        if (n % i == 0) {
            while(n % i == 0) {
                primes[i]++;
                n /= i;
            }
        }
    }
    if (n > 1) primes[n]++;
    if (primes.size() < 2) {
        cout << -1;
    }
    else {
        ll a = pow((*primes.begin()).first, (*primes.begin()).second); //primes.begin() - самый первый простой делитель(first - это его значение, а second его степень)
        cout << min(a,m / a) << ' ' <<max(a,m / a) ;
    }
}


//1620 2 ^ 2 * 3 ^ 4 * 5 ^ 1