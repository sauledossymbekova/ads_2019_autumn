#include <iostream>

using namespace std;

int main() {
    
	bool r;

	int n; cin >> n; int *a = new int[n];
	for(int i = 0; i < n; i++) { cin >> *(a+i); }

	int m; cin >> m; int *b = new int[m];
	for(int i = 0; i < m; i++) { cin >> *(b+i); }

	for(int i = 0; i < n; i++) {

		r = false;

		for(int j = 0; j < m; j++) {

			if(*(a+i) == *(b+j)) { r = true; break; } }

		if(!r) { cout << "NO"; return 0; } }

	for(int i = 0; i < m; i++) {

		r = false;

		for(int j = 0; j < n; j++) {

			if(*(b+i) == *(a+j)) { r = true; break; } }

		if(!r) { cout << "NO"; return 0; } }

	cout << "YES";

    return 0;
}