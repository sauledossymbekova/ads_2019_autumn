#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int partition(vector<int> &v, int l, int r) { 
    int x = v[r], i = l; 
    for (int j = l; j <= r - 1; j++) 
    { 
        if (v[j] <= x) 
        { 
            swap(v[i], v[j]); 
            i++; 
        } 
    } 
    swap(v[i], v[r]); 
    return i; 
} 

int kthSmallest(vector<int> v, int l, int r, int k) { 
    if (k > 0 && k <= r - l + 1) { 
        int pos = partition(v, l, r); 
  
        if (pos - l == k - 1) 
            return v[pos]; 
        if (pos - l > k - 1)  
            return kthSmallest(v, l, pos - 1, k); 
  
        return kthSmallest(v, pos + 1, r, k - pos + l - 1); 
    } 
    return INT_MAX; 
} 
int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;	
		v.pb(x);
	}
	int k;
	cin >> k;
	cout << kthSmallest(v, 0, n - 1, k); 
}