#include<bits/stdc++.h>
using namespace std;

int* shortestPath(vector<int> adj[], int dist[], int v, int src){
    queue<int> q;
    q.push(src);

    dist[src] = 0;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            if((dist[node]+1) < (dist[it])){
                dist[it] = dist[node]+1;
                q.push(it);
            }
        }
    }

    return dist;

}

int main(){
    int v, e;

    cout<<"Enter number of vertices : ";
    cin>>v;
    cout<<"Enter number of edges : ";
    cin>>e;

    vector<int> adj[v];
   
    int dist[v];
    for(int i=0; i<v; i++){
        dist[i] = INT_MAX;
    }

    int x, y;
    cout<<"Enter coordinates for Graph\n";
    for(int i=0; i<e; i++){
        cout<<"Enter " <<i+1 <<" coordinate: ";
        cin>> x>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    shortestPath(adj, dist, v, 0);
    for(int i=0; i<v; i++){
        cout<< i << "-> " << dist[i] <<endl;
    }

    return 0;
}