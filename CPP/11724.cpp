#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited;
vector<vector<int>> graph; 

void dfs(int node) {
    visited[node] = true; 
    for(int i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if(!visited[next]) {
            dfs(next); 
        } 
    }
}

int main(){
    int N, M, u, v;
    cin >> N >> M;
    graph.resize(N + 1); 
    visited.resize(N + 1, false);

    for(int i = 0; i < M; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }

    int connectedComponents = 0;
    for(int i = 1; i <= N; i++) { 
        if(!visited[i]) {
            dfs(i); 
            connectedComponents++; 
        }
    }

    cout << connectedComponents << endl;

    return 0;
}
