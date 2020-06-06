#include <iostream>
#include <vector>
#include <utility>

using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector <int> v;

    for(int i = 0; i < n; i++) cin>>v[i];
    for(int i = 0; i < q; i++){
        int l,r; cin>>l>>r;
        int cnt = 1;
        for(int j = l; j < r; j++){
            if(v[j-1]>=v[j]) cnt++;
        }
        cout<<cnt<<endl;
    }
}