#include<bits/stdc++.h>
using namespace std;

void dfs(int root, bool visited[], vector<int> adj[]){
    visited[root]=true;
        cout<<root<<" ";

       for(auto child:adj[root]){

           if(!visited[child]){
             dfs(child, visited, adj);
           }
       }
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

    cout<<"DFS traversal : ";
    dfs(0, visited, adj);

    return 0;

}