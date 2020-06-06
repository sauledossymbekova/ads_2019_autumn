// Algorithms of Belman Ford
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
#define INF 1e9
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;
vector<set<int> > adj;
vector<bool> visited;
void DFS(int s){
    cout<<s << " ";
    for(auto u : adj[s]){
        if(visited[u]) continue;
        visited[u] = true;
        DFS(u);
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    adj.resize(a+1);
    visited.resize(a+1, false);
    REP (i,0,b){
        int x, y;
        cin>>x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    visited[1] = true;
    DFS(1);
    
}