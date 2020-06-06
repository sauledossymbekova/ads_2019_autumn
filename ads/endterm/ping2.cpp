/*4
1 3 3000 3002
1 2 3 3*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

typedef vector<int> vi; 
typedef pair<int,int> pi;
typedef queue<int> qi;
int main(){
    int n;
    cin>> n;
    vi v;
    REP(i,0,n){
        int x;
        cin>>x;
        v.push_back(x);
        if(x-v.front()>3000) v.erase(v.begin()); 
        cout<< v.size()<<" ";
    }
    return 0;
}