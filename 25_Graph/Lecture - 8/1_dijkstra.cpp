#include <bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;

vector<list<pp > > gr;

void add_edge(int u, int v, int wt, bool bidir=true) {
    gr[u].push_back({v, wt});
    if(bidir) {
        gr[v].push_back({u, wt});
    }
}

unordered_map<int, int> djikstra(int src, int n) { // O(VlogV + ElogV)
    priority_queue<pp, vector<pp> , greater<pp> > pq; // {wt, node}
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int, int> mp;

    for(int i = 1; i <= n; i++) { // O(V)  // FIX: 1-based indexing
        mp[i] = INT_MAX;
    }

    pq.push({0, src});
    mp[src] = 0;

    while(!pq.empty()) { // O((V+E)logV)
        pp curr = pq.top();

        if(vis.count(curr.second)) {
            pq.pop();
            continue;
        }

        vis.insert(curr.second);
        pq.pop();

        for(auto neighbour : gr[curr.second]) {
            if(!vis.count(neighbour.first) && mp[neighbour.first] > mp[curr.second] + neighbour.second) {
                pq.push({mp[curr.second] + neighbour.second, neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second;
            }
        }
    }
    return mp;
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

    unordered_map<int, int> sp = djikstra(src, n);

    for(int i = 1; i <= n; i++) { 
        cout<<i<<" "<<sp[i]<<"\n";
    }

    int dest;
    cin>>dest;

    cout<<sp[dest]<<"\n";

    return 0;
}



/*
input:
5 6
1 2 2
1 3 4
2 3 1
2 4 7
3 5 3
4 5 1
1
5

*/


/*

// Sanket Singh code //

#include <bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;

vector<list<pp > > gr;
void add_edge(int u, int v, int wt, bool bidir=true) {
    gr[u].push_back({v, wt});
    if(bidir) {
        gr[v].push_back({u, wt});
    }
}


unordered_map<int, int> djikstra(int src, int n) { // O(VlogV + ElogV)
    priority_queue<pp, vector<pp> , greater<pp> > pq; // {wt, node}
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) { // O(V)
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    while(!pq.empty()) { // O((V+E)logV)
        pp curr = pq.top();
        if(vis.count(curr.second)) {
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        pq.pop();

        for(auto neighbour : gr[curr.second]) {
            if(!vis.count(neighbour.first) and mp[neighbour.first] > mp[curr.second] + neighbour.second) {
                pq.push({mp[curr.second] + neighbour.second, neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second;
            }
        }

    }
    return mp;
}

int main() {
    int n, m;
    cin>>n>>m;
    gr.resize(n, list<pp > ());
    while(m--) {
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }
    int src;
    cin>>src;
    unordered_map<int, int> sp = djikstra(src, n);
    for(auto p : sp) {
        cout<<p.first<<" "<<p.second<<"\n";
    }
    int dest;
    cin>>dest;
    cout<<sp[dest]<<"\n";
    return 0;
}

*/

