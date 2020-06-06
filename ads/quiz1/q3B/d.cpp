//abbacc > YES
// abab NO
#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st;
    int n;
    cin>>n;
	int s[n];
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        s[i]=x;
	}
    int cnt=0;
    int d=n;
	for(int i = 0; i < n; i++) {
		if (st.empty()) st.push(s[i]);
		else if (st.top() == s[i]){
            st.pop(); 
            st.push(s[i]);
            d++;
        } 
        else if (st.top() != s[i]){
            d--;
            st.push(s[i]);
        } 
	}
	cout << n-d <<" "<< d;
}
