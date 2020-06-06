#include <iostream>

using namespace std;
//Алгоритм Евклида нахождения НОД (наибольшего общего делителя)
// и НОК lcd
//O (\log \min(a,b))
int gcd1 (int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
// 4,6 > 6,4> 4,2> 2,2> 2,0 > 2
int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a; // if b!=0 then gcd if not, a
}
// 4,6> 4/2*6 > 12
int lcm (int a, int b) {
	return a / gcd (a, b) * b;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
    cout << lcm(a,b)
}
//последовательные числа Фибоначчи — наихудшие входные данные для алгоритма Евклида
