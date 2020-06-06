#include <iostream>
#include <algorithm> // for __gcd

using namespace std;

int gcd(int x, int y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}
int main(){
	int g = __gcd(14, 49);
}