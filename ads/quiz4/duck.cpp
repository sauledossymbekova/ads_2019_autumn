/*5 25428
27
5 55555
40*/
#include<iostream>
#include <vector>
#include<algorithm>
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    REP(i,0,n) cin >> arr[i];
    sort(arr, arr + n);
    int k = 0;
    REP(i,1,n) k = k + (arr[i] + arr[0]);
    cout<<k;
    return 0;
}
