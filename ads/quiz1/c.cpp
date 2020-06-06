#include <iostream>
#include <deque>
#define ll long long
using namespace std;

int main(){
    deque<string> d;
    for(int i = 0; i < 52; i++) {
        string s;
        cin >> s;
        d.push_back(s);
    }
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;
        sum += x;
    }
    while(sum--) {
        string s = d.front();
        //cout << d.front()<< " ";
        d.pop_front();
        d.push_back(s);
    }
    cout << d.front() << '\n';
    d.pop_front();
    cout << d.front() << '\n';
}