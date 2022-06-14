#include<bits/stdc++.h>
using namespace std;

bool dfs(int v, bool visited[], vector<int> adj[], int parent){
    
    visited[v] = true;
    vector<int> :: iterator neighbour;
    for(neighbour=adj[v].begin(); neighbour!=adj[v].end(); neighbour++){
        if(!visited[*neighbour]){
            if(dfs(*neighbour, visited, adj, v))
                return true;
        }
        else if(parent!=(*neighbour)){
                return true;
        }
    }

    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    bool *visited = new bool(V);
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    
    for(int i=0; i<V; i++){

        if(!visited[i]){
            if(dfs(i, visited, adj, -1))
                return true;
        }
    }
    
    return false;
}

int main(){
    int v, e;

    cout<<"Enter number of vertices : ";
    cin>>v;
    cout<<"Enter number of edges : ";
    cin>>e;

    bool visited[v]={false};

    vector<int> adj[v];
    int x, y;
    cout<<"Enter coordinates for Graph\n";
    for(int i=0; i<e; i++){
        cout<<"Enter " <<i+1 <<" coordinate: ";
        cin>> x>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool result = isCyclic(v, adj);
    
    if(result)
        cout<<"There is a cycle";
    else
        cout<<"No Cycle";

    return 0;

}