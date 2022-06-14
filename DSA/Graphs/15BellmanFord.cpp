#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    int n, m;
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>m;

    vector<vector<int>> adj;

    cout<<"Enter coordinates: \n";
    for(int i=0; i<m; i++){
        int u, v, wt;
        cout<<"Enter " <<i+1 <<" vertex: ";
        cin>>u >>v;
        cout<<"Enter weoght for vertex " <<u <<" and " <<v <<": ";
        cin>>wt;

        adj.push_back({u, v, wt});

    }

    int src=0;

    vector<int> dist(n, INF);
    dist[src] = 0;

    for(int i=0; i<n-1; i++){
        for(auto it : adj){
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            dist[v] = min(dist[v], wt+dist[u]);
        }
    }

    cout<< "Shortest distance from source to all other vertices: ";
    for(int i=0; i<n; i++){
        cout<< dist[i] << endl;
    }

    return 0;
}