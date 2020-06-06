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
int N;

int main(){
    int t = 1000000000;
    int n = 100000;
    int a;
    cin>>a;
    qi q;
    int b[a];
    REP(i, 0, a){
        cin>>b[i];
        q.push(b[i]);
        while(b[i] - q.front()>3000) q.pop();
        cout<< q.size()<< " ";
    }
    return 0; 

}
