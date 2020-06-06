#include <iostream>
#include <vector>
using namespace std;
//Решето Эратосфена
//все числа, кроме нуля и единицы, как простые
//если #i простое, то помечаем все числа, кратные ему, как составные.
int main(){
    int n;
    cin >> n;
    vector<char> prime (n+1, true);
    prime[0] = prime[1] = false;
for (int i=2; i<=n; ++i)
    if (prime[i])    
        if (i * 1ll * i <= n)
			for (int j=i*i; j<=n; j+=i)
				prime[j] = false;
for (int i=2; i<=n; ++i)
	if (prime[i]) cout << i << " ";
}
//i^2 легко может переполнить тип int, в коде перед вторым вложенным циклом делается дополнительная проверка с использованием типа long~long.
//O (n) памяти & ыполняет O (n \log \log n) действий