#include<bits/stdc++.h>
using namespace std;

bool dfs(int v, bool visited[], vector<int> adj[], bool recuStack[]){
    
    visited[v] = true;
    recuStack[v] = true;
    vector<int> :: iterator neighbour;
    for(neighbour=adj[v].begin(); neighbour!=adj[v].end(); neighbour++){
        if(!visited[*neighbour]){
            if(dfs(*neighbour, visited, adj, recuStack))
                return true;
        }
        else if(recuStack[*neighbour]){
                return true;
        }
    }

    recuStack[v] = false; //// remove the vertex from recursion stack
    return false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    bool *visited = new bool(V);
    bool *recuStack = new bool(V);
    for(int i=0;i<V;i++){
        visited[i]=false;
        recuStack[i]=false;
    }
    
    for(int i=0; i<V; i++){

        if(!visited[i]){
            if(dfs(i, visited, adj, recuStack))
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
    }

    bool result = isCyclic(v, adj);
    
    if(result)
        cout<<"There is a cycle";
    else
        cout<<"No Cycle";

    return 0;

}