#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int> > pq; 
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	double ans = 0;
	while(pq.size() != 1) {
		int t1 = pq.top();
		pq.pop();
		int t2 = pq.top();
		pq.pop();
		int t3 = t1 + t2;
		ans += (t3 * 1.0 / 20);
		pq.push(t3);
	}
	cout << fixed;
  	cout << setprecision(6) << ans << '\n'; // количество цифр после запятой
  	printf("%.6f", ans); // тоже самое
}
