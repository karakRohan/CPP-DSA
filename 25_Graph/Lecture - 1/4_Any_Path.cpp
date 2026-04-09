#include <bits/stdc++.h>
using namespace std;

// 1st graph banaenge
vector<list<int>>graph;
int v; // no of vertices
// visited set
// unordered_set<int>visited;
set<int>visited;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end){
    // base case
    if(curr == end) return true;
    visited.insert(curr); // mark vertex as visited
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){ // if neighbour is not visited
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
}


bool anyPath(int src, int dest){ // src = source, dest = destination
    return dfs(src, dest);

}


int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e; // no of edges
    cin>>e;
    visited.clear();
    while(e--){
        int src, dest; // source and destination
        cin>>src>>dest;
        add_edge(src, dest, false); // Directed Graph
    }
    int x, y; // source and destination
    cin>>x>>y;
    cout<<anyPath(x, y)<<endl;
    return 0;
}