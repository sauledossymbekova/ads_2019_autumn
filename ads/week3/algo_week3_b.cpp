#include <bits/stdc++.h>

using namespace std;

int main(){
	queue<int> q1, q2, q3;
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for(int i = 0; i < n1; i++) {
		int x;
		cin >> x;
		sum1 += x;
		q1.push(x);
	}
	for(int i = 0; i < n2; i++) {
		int x;
		cin >> x;
		sum2 += x;
		q2.push(x);
	}
	for(int i = 0; i < n3; i++) {
		int x;
		cin >> x;
		sum3 += x;
		q3.push(x);
	}
	bool ok = false;
	if (sum2 == sum3 && sum1 == sum2) {
		ok = true;
	}
	while(!ok) {
		if (sum1 >= sum2 && sum1 >= sum3) {
			sum1 -= q1.front();
			q1.pop();
		}
		else if (sum2 >= sum1 && sum2 >= sum3) {
			sum2 -= q2.front();
			q2.pop();
		}
		else if (sum3 >= sum2 && sum3 >= sum1) {
			sum3 -= q3.front();
			q3.pop();
		}
		if (sum2 == sum3 && sum1 == sum2) {
			ok = true;
		}
	}
	cout << sum3;
}