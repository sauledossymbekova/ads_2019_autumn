#include <iostream>
using namespace std;
int gcd (long long a, long long b) {
	return b ? gcd (b, a % b) : a; // if b!=0 then gcd if not, a
}
//lcm(x, y) * gcd(x, y) = x * y
// N * 1 = N * 1
int lcm (long long a, long long b) {
	return a / gcd (a, b) * b;
}
int main(){
    long long n;
    cin>>n;
    for(long long i=2; i*i<n; i++){
            if (lcm(i,i+1)==n && gcd (i,i+1)==1){
                cout<< i<<" "<< j; 
                return 0;
            }
            
        }
        cout<< "-1";
}
