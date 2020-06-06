#include <iostream>
#include <stack>
#define ll long long
using namespace std;

int main(){
    stack<int> st;
    int n;
    cin >> n;
    int ans = 0, temp = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (st.empty()) {
            st.push(x);
        }
        if (st.top() == 0 && x == 0) {
            temp++;
            st.push(x);
        }
        if (st.top() != 0 || x != 0) {
            st.push(x);
            temp = 0;
        }
        if (temp > 1 && x == 0) {
            ans++;
            st.push(x);
        }
    }
    if (st.top() == 0) {
        st.pop();
        if (st.top() == 0) {
            ans++;
        }
    }
    cout << ans << ' ' << n - ans;
}