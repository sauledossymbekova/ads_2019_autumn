/*5 2 5 4 2 8
27
5 5 5 5 5 5
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

typedef vector<int> vi; 
typedef pair<int,int> pi;
int main(){
    int n;
    cin>>n;
    vi v;
    REP(i,0,n){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(
    int b=0;
    REP(i,1,n){
        b= b + (a[i] + a[0]);
    }
    cout<<b;
}