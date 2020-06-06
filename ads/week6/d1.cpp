#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >>n;
    int m;
    cin >>m;
    int a[n], b[m];
    vector<int> ans1;
    vector<int> ans2;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    vector<bool> used(n, 0);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(b[i] == a[j]){
                ans1.push_back(b[i]);
                used[j] = 1;
            }
        }
    }  
    for(int i = 0; i < n; i++) {
        if(used[i]==0) {
            ans2.push_back(a[i]);
        }
    }
    sort(ans2.begin(), ans2.end());
    for(int i = 0; i < ans1.size(); i++) cout << ans1[i] << " ";
    for(int i = 0; i < ans2.size(); i++) cout << ans2[i] << " ";
}