#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string remove_vowel(string str)
{
  int n= str.length();
  for(int i = 0; i < n; i++)
  {
    if(str.at(i) == 'a' || str.at(i) == 'u' ||str.at(i) == 'e' 
    || str.at(i) == 'i' || str.at(i) == 'o' )
    {
      str.erase(i,1);
    }  
    else if(str.at(i) == 'A' || str.at(i) == 'E' || str.at(i) == 'I' || 
    str.at(i) == 'O' || str.at(i) == 'U')
    {
      str.erase(i,1);
    }
   }
    return str;
}
void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main(){
    string s;
    cin>>s;
    string half=s.substr(0, s.length()/2);
    string half2=s.substr(s.length()/2);
    reverseStr(half2);
    cout<<(remove_vowel(half)) <<half2<<endl;
}