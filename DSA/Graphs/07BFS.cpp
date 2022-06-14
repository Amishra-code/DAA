#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e;

    cout<<"Enter number of vertices : ";
    cin>>v;
    cout<<"Enter number of edges : ";
    cin>>e;

    vector<bool> vis(v, false);

    vector<int> adj[v];
    int x, y;
    cout<<"Enter coordinates for Graph\n";
    for(int i=0; i<e; i++){
        cout<<"Enter " <<i+1 <<" coordinate: ";
        cin>> x>> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;
    q.push(0);
    vis[0]=true;

    cout<<"BFS traversal : ";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node <<" ";

        vector<int> :: iterator it;
        for(it=adj[node].begin(); it!=adj[node].end(); it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }

    return 0;

}