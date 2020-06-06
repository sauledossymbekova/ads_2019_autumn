#include <iostream>
#include <stack>

using namespace std;

int main() {
	//stack<int> st;
    int n;
    cin>>n;
	int s[n];
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        s[i]=x;
	}
    int cnt=0;
    for(int i = n-1; i >=0; i--) {
        if (s[i]==0 && s[i+1]==0){
            cnt++;
        }
	}
    cout << cnt <<" "<< n-cnt;
}

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
