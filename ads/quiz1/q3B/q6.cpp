#include <iostream>

using namespace std;

int main(){
    double eps= 1e-6;
    double d;
    cin >> d;
    double l = 0, r = d + 1;
    while(r - l > eps) {
        double mid = (l + r) / 2;
        if (mid * mid <= d) {
            l = mid;
        }
        else r = mid;
    }
    cout << l;
}
