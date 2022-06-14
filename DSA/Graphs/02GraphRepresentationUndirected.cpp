//Adjacency list

#include <bits/stdc++.h>
using namespace std;

void addValue(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printList(vector<int> adj[], int n){
    cout<<"\nAdjacency list \n";
    for(int i=0; i<n; i++){
        cout<<i;
        for(auto x : adj[i]){
            cout<< "-> " <<x;
        }
        cout<<endl;
    }
}

int main(){
    int n, m;
    cout<<"Enter number of vertices : ";
    cin>>n;
    cout<<"Enter number of edges : ";
    cin>>m;

    vector<int> adj[n];
    
    for(int i=0; i<m; i++){
        int u, v;
        cout<<"Enter " <<i+1 <<" coordinate : "; 
        cin>>u >>v;
        addValue(adj, u, v);
    }

    printList(adj, n);

    return 0;
}