#include <iostream>
#include <vector> 
#include <iterator>
using namespace std;
//Решето Эратосфена с линейным временем работы
int main(){
const int N = 10000000;
int lp[N+1];
vector<int> pr;
 
for (int i=2; i<=N; ++i) {
	if (lp[i] == 0) {
		lp[i] = i;
		pr.push_back (i);
	}
	for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
		lp[i * pr[j]] = pr[j];
}
}