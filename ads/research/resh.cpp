#include <iostream>

using namespace std;
// O (nloglogN)
// i=2 > k=2> >к+i< 25 (2+2<25)> k=4 > p[k] вычеркнуто > k=6 p[6] x ..
// sqrt(n) is slower than i*i //till the root of the n
//p[i]==1 x; p[0] is prime
int p[1000000];

int main(){
    int n;
    cin>> n; 
    for (int i=2; i*i<=n; i++){  
    if (p[i]==0){
        int k=i;
        while(k+i<=n){
            k+=i;
            p[k]=1; 
        }
    }
    }
    for (int i=2; i<=n; i++){
        if (p[i]==0){
            cout<< i << " ";
            
        }
    }
return 0;
}