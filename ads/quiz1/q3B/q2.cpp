#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <chrono>
#include <stack>
#include <string>
#include <bitset>
#include <unordered_map>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>
#include <tuple>
#include <iomanip>
#include <random>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <fstream>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define popb pop_back()
#define ll long long
#define sz size()
#define all(x) x.begin(), x.end()
#define forn(x) for(int i=1;i<=x;i++)
#define sforn(x, y) for(int i=1;i<=x;i++)for(int j=1;j<=y;j++)
#define pii pair<int, int>
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MAXN = 6e6 + 155;
/*
    LOL KEK CHEBUREK

    PIHALITI

 */
std::vector<ll> primes;

void sieve()
{
        primes.push_back(2);
        vector<bool> prime (MAXN + 1, true);
        for (ll i = 3; i <= MAXN; i += 2) {
                if (prime[i]) {
                        primes.push_back(i);
                        for (ll j = i * i; j <= MAXN; j += i)
                                prime[j] = false;
                }
        }
}

int main(){ speed;
    int n;
    cin >> n;
    sieve();
    int ans = 2;
    for(int i = 1; i < n - 1; i++) {
        if (primes[i] - 2 != primes[i - 1] && primes[i] + 2 != primes[i + 1]) ans++;
    }
    if (primes[n - 1] - 2 == primes[n - 2]) ans--;
    cout << ans;
    return 0;
}