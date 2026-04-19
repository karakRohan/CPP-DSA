#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

vector<list<int> > graph;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }

}

void display() {
    for(int i = 0; i < graph.size(); i++) {
        cout<<i<<" -> ";
        for(auto el : graph[i]) {
            cout<<el<<" , ";
        }
        cout<<"\n";
    }
}

bool dfs(int src, int parent, unordered_set<int> &vis) {
    vis.insert(src);
    for(auto neighbour : graph[src]) {
        if(vis.count(neighbour) and neighbour != parent) {
            // cycle detected
            return true;
        }
        if(!vis.count(neighbour)) {
            bool res = dfs(neighbour, src, vis);
            if(res == true) return true;
        }
    } 
    return false;
}

//has_cycle() will call dfs for all the unvisited nodes in the graph and if any of the dfs call returns true, then it means that there is a cycle in the graph. If all the dfs calls return false, then it means that there is no cycle in the graph.
bool has_cycle() { // DFS // TC: O(V+E) // SC: O(V)
    unordered_set<int> vis;
    for(int i = 0; i < v; i++) {
        if(!vis.count(i)) {
            bool result = dfs(i, -1, vis);
            if(result == true) return true;
        }
    }
    return false;
}

int main() {

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--) {
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false);
    }
    // display();
    bool b = has_cycle();
    cout<<b<<"\n";

    return 0;
}


/*Input:
5 
5 
1 2
2 3
3 4
4 5
5 1
Output:
1

*/