// Algorithms of Belman Ford
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
#define INF 1e9
#define REP(i,a,b) for (int i = a; i < b; i++)

vector<set<int> >adj;
vector<bool>visited;
void DFS(int v){
    cout<<v<< " ";
    for(auto u: adj[v]){
        if(visited[u]) continue;
        visited[u] = true;
        DFS(u);
    }
}
int main(){
    int a, b;
    cin>>a>> b;
    adj.resize(a+1);
    visited.resize(b+1, false);
    int x, y;
    REP (i,0,b){
        cin>>x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    visited[1] = true;
    DFS(1);
    return 0;
}
