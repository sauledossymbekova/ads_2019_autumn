#include<iostream>
using namespace std;
void Swap(int &a,int &b)
{
int c=a;a=b;b=c;
}
void SelectSort(int a[],int n)
{
int i,j,k;
for(i=0;i<n;i++)
{
k=i;
for(j=i+1;j<n;j++)
if(a[j]<a[k])k=j;
if(k>i)Swap(a[k],a[i]);	
}
}
int BubbleSort (int a[],int n)
{
int i,f,k=0;
do{f=0;
for (i=0;i<n-1;i++)if(a[i]>a[i+1])
{
Swap(a[i],a[i+1]);f=1;k++;
}
}while(f);
return k;
}
void InsertSort(int a[],int n)
{
int i,j,k;
for(i=1;i<n;i++)
{
j=i;k=a[i];
while(j&&k<a[j-1])
{
a[j]=a[j-1];j--;}
a[j]=k;
}
}

void Print(int a[],int n)
{
for(int i=0;i<n;i++)cout<<a[i]<<' ';
}
int main ()
{
int a[1000],n,i;
cin>>n;
for(i=0;i<n;i++)cin>>a[i];
cout<<BubbleSort(a,n);
}