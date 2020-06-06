#include <iostream>
 
using namespace std;
 
int gcd(int a, int b) {
    if (!b) return a; //=0
    else return gcd(b, a % b);
}
 
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
 
int main() {
    int a, b;
    cin >> a >> b;
    int f[40];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < 32; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << lcm(f[a], f[b]);
}