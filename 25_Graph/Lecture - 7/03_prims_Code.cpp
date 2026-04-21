// Question Link : - https://www.hackerrank.com/challenges/primsmstsub/problem

#include <bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;

vector<list<pp > > gr;
void add_edge(int u, int v, int wt, bool bidir=true) {
    gr[u].push_back({v, wt});
    if(bidir) { // undirected graph // bidir means bidirectional graph
        gr[v].push_back({u, wt});
    }
}


ll prims(int src, int n) {
    // fibbonaci heap can be used to optimize the time complexity to O(E + VlogV) from O(ElogV) of binary heap
    priority_queue<pp, vector<pp> , greater<pp> > pq; // {wt, node} , pp is pair<int, int> 
    unordered_set<int> vis;
    vector<int> par(n+1);
    unordered_map<int, int> mp;
    for(int i = 1; i <= n; i++) {
        mp[i] = INT_MAX; // initially all nodes are at infinite distance from the source node, except the source node itself which is at distance 0
    }
    pq.push({0, src});
    mp[src] = 0;
    int total_count = 0; // 0 -> n-1 edges
    int result = 0; // sum of wts
    while(total_count < n && !pq.empty()) {
        pp curr = pq.top(); // {wt, node}
        if(vis.count(curr.second)) {
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result += curr.first;
        pq.pop();

        for(auto neighbour : gr[curr.second]) {
            if(!vis.count(neighbour.first) and mp[neighbour.first] > neighbour.second) {
                pq.push({neighbour.second, neighbour.first});
                par[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            }
        }

    }
    return result;

}

int main() {
    int n, m;
    cin>>n>>m;
    gr.resize(n+1, list<pp > ()); 
    while(m--) {
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }

    int src;
    cin>>src;
    cout<<prims(src, n)<<"\n";
    return 0;
}



/*
Input:  
5 6
1 2 2
1 3 4
2 3 1
2 4 3
3 4 5
4 5 6
1

Output:
12
*/