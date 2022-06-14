#include<bits/stdc++.h>
using namespace std;

void dfs(int v, bool visited[], vector<int> adj[], stack<int> &stack){
    
    visited[v] = true;
    vector<int> :: iterator neighbour;
    for(neighbour=adj[v].begin(); neighbour!=adj[v].end(); neighbour++){
        if(!visited[*neighbour]){
            dfs(*neighbour, visited, adj, stack);
        }
    }

    stack.push(v);

}

int* topoSort(int V, vector<int> adj[])
{
    bool *visited = new bool(V);
    stack<int> stack;
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    
    for(int i=0; i<V; i++){

        if(!visited[i]){
            (dfs(i, visited, adj, stack));
        }
    }

    
    int *ans = new int(V);

    int i=0;

    while(!stack.empty()){
        cout<<stack.top() <<" ";
        ans[i++] = stack.top();
        stack.pop();
        //cout<<"stack is empty ";
    }

    return ans;

}

int main(){
    int v, e;

    cout<<"Enter number of vertices : ";
    cin>>v;
    cout<<"Enter number of edges : ";
    cin>>e;

    vector<int> adj[v];
    int x, y;
    cout<<"Enter coordinates for Graph\n";
    for(int i=0; i<e; i++){
        cout<<"Enter " <<i+1 <<" coordinate: ";
        cin>> x>> y;
        adj[x].push_back(y);
    }

    int *result;

    result = topoSort(v,adj);
    
    cout<<"Elements after Topological sorting : ";
    for(int i=0; i<v; i++){
        cout<<*(result+i) <<" ";
    }

    return 0;

}