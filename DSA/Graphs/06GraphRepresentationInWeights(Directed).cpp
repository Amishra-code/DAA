#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt){
    adj[u].push_back(make_pair(v, wt));
}

void printGraph(vector<pair<int, int>> adj[], int V){
    for(int u=0; u<V; u++){
        cout << "Node " << u << " makes an edge with \n";
        for(auto it = adj[u].begin(); it!=adj[u].end(); it++){
            int v = it->first;
            int wt = it->second;
            cout << "\tNode " << v << " with edge weight =" << wt << "\n";

        }

        cout<<"\n";
    }
}

int main(){
    int v, e;
    cout<<"Enter number of vertices : ";
    cin>>v;
    cout<<"Enter number of edges : ";
    cin>>e;

    cout<<"\n";

    vector<pair<int, int>> adj[v];

    for(int i=0; i<e; i++){
        
        int u, v, wt;
		
		cout<<"Enter coordinates for " <<i+1 <<" coordinate : ";
		cin>>u>>v;
		cout<<"Enter weight for coordinate " << u <<" and " <<v <<" : ";
		cin>>wt;
		cout<<"\n";

		addEdge(adj, u, v, wt);
    }

    printGraph(adj, v);
}