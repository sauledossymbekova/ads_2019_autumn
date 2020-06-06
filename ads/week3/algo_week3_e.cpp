#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int lowest = 1000, highest = -1;
    for(int i = 0; i < n; i++) {
        lowest = min(a[i], lowest);
        highest = max(a[i], highest);
    }
    for(int i = 0; i < n; i++) {
        if (highest == a[i]) {
            a[i] = lowest;
        }
        cout << a[i] << ' ';
    }
}