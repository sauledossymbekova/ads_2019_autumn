#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
	if (n == 1) return false; 
	for(int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
    while(n%2==0){
        cout<< 2<< " ";
        n=n/2; 
    }
    for(int i = 3; i<=n; i=i+2) {
        while (n%i==0){
            cout << i<<"";
            n=n/i;
        }
    }   
}