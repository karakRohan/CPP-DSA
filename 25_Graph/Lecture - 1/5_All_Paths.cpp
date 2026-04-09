 #include <bits/stdc++.h>
using namespace std;

// 1st graph banaenge
vector<list<int>>graph;
int v; // no of vertices
// visited set
unordered_set<int>visited;
// set<int>visited;
vector<vector<int>> result;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int>& path){
    // base case
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back(); // backtrack
        return ;
    }
    visited.insert(curr); // mark vertex as visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){ // if neighbour is not visited
                dfs(neighbour, end, path);
            }
        }
        path.pop_back(); // backtrack
        visited.erase(curr); // unmark vertex as visited for other paths
        return;
    }



void allPath(int src, int dest){ // src = source, dest = destination
    vector<int> visited;
    dfs(src, dest, visited);

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
        add_edge(src, dest); // Directed Graph
    }
    int x, y; // source and destination
    cin>>x>>y;
    allPath(x, y);
    // cout<<result.size()<<endl;
    // Print all paths
    for( auto path : result){
        for(auto el : path){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}