#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void count_h( long long & h, long long & m,  long long & q) {
    h = 1;
    for (long long i = 1; i < m; ++i)
        h *= 10 % q;
}
bool comp(string & s1, string & s2, long long & del) {
    for (int i = 0; i < s2.size(); ++i)
        if (s1[i + del] != s2[i])
        return false;
    return true;
}
void Rabin_Karp_Match(string & T, string & P, int d, long long q = pow(2, 1e56)) {
    long long n = T.size(), m = P.size(), p = 0, t = 0;
    if (n < m || n == 0 || m == 0)
    return;
unsigned long long h;
count_h(h, m, q);
for (long long i = 0; i < m; ++i){
    p = (d * p + P[i]) % q;
    t = (d * t + T[i]) % q;
}
for (long long s = 0; s <= n - m; ++s) {
    if (p == t)
        if (comp(T, P, s))
            cout << s + 1<< ',';
            t = (d * (t - T[s] * h) + T[s + m]) % q;
}
}

int main(){
    string t = "green green green", p = "g";
    int d = 10;
    cout << "input word = "<< t << " --- substring = " << p << endl;
    cout << "Found position : ";

Rabin_Karp_Match(t, p, d);
    cout << endl;
}