#include <iostream>
using namespace std;
//за O (\sqrt n)
// функция Эйлера 
// количество чисел 1 - n, взаимно простых с n
// n=8 :fi(8) 1 2 3 4 5 6 7 8 > 1,3,5,7 
// fi(8) = 4

int phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i) 
		if (n % i == 0) { 
			while (n % i == 0)   
				n /= i; 
                //cout << "n="<<n;
            result -= result / i; 
		}
	if (n > 1)
        result -= result / n; 
	return result;
}
int main(){
    int n;
    cin>> n;
    cout<< phi(n) << " ";
}
/*тк п числа не имеют делителей  больше 1
fi(p) = p-1; fi(21377)=21376 or fi(7)=6 :123456
fi(A*B)= fi(A)*fi(B) 
if >fi(n)=fi(p1)*fi(p2) >> = p1-1)*(p2-1
*/