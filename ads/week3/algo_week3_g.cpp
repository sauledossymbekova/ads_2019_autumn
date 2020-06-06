#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int ans = 0;
    int m = n;
    for(int i = 2; i <= sqrt(m); i++) {
        if (n % i == 0) ans++;
        while(n % i == 0) n /= i;
    }
    if (n > 1) ans++;
    cout << ans;
}