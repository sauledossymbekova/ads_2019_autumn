#include<iostream>

using namespace std;
int main()
{
    int n,q,count,max;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++){
       scanf("%d",&h[i]);
    }
    cin>>q;
    while(q--){
        count=1;
        int temp,temp1;
        cin>>temp>>temp1;
        max=h[temp];
        for(int j=temp+1;j<=temp1;j++){
          if(h[j] > max){
              count++;
              max=h[j];
          } 
        }
        printf("%d",count);
    }
}
 
