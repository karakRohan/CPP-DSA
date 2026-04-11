#include <bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbour : graph[node]){
        if(not visited.count(neighbour)){
            dfs(neighbour, visited);
        }
    }
}

int connected_components(){
    int result = 0;
    unordered_set<int> visited;
    int count = 0;
    for(int i = 0; i < v; i++){
        // got to every vertex
        // if from a vertex we can initialse a dfs, we got one more Connected Component
        if(visited.count(i) == 0){
            result++;
            dfs(i, visited);
        }
    }
    return result; 
}

int main(){
    
    cin>>v;
    graph.resize(v, list<int>());
    int e; // no of edges
    cin>>e;
    while(e--){
        int src, dest; // source and destination
        cin>>src>>dest;
        add_edge(src, dest, false);
    }
    cout<<connected_components()<<endl;
    return 0;
}




//input
/*
7 5
0 1
0 2
3 4
5 6
*/
//output
/*
3
*/