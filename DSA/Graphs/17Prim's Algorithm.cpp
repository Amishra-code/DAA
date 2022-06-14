#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt){
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

// void addEdge(vector<pair<int, int>> g[], int u, int v, int wt){
//     g[u].push_back(make_pair(v, wt));
//     g[v].push_back(make_pair(u, wt));
// }

void Prims(vector<pair<int, int>> adj[], int n, int src){
    priority_queue<pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>> > pq; //greater implements for comparable, the pair which is smaller is given priority
    vector<int> dist(n, INT_MAX);
    vector<int> parent(n, -1);
    vector<bool> inMST(n, false);

    dist[src]=0;

    pq.push(make_pair(0, src));

    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        if(inMST[u]==true)
            continue;

        inMST[u]=true;

        for(auto it : adj[u]){
            int v = it.first;
            int wt = it.second;

            if(inMST[v]==false &&  dist[v]>wt){
                dist[v]=wt;
                pq.push(make_pair(dist[v], v));
                parent[v] = u;
            }
        }
    }

    cout<<"Vertex distance from source node " <<src <<": \n";
    for(int i=0; i<n; i++){
        cout<< parent[i] <<"-> " << i <<endl;
    }
 
    return;

}

int main(){
    int n, m;
    cout<<"Enyter number of vertices: ";
    cin>>n;
    cout<<"Enyter number of edges: ";
    cin>>m;

    vector<pair<int, int>> adj[n];

    cout<<"Enter coordinates : \n";
    for(int i=0; i<m; i++){
        int u, v, wt;
        cout<<"Enter " <<i+1 <<" coordinate: ";
        cin>>u >>v;
        cout<<"Enter weight for corrdinate " <<u <<" and " <<v <<": ";
        cin>>wt;
        addEdge(adj, u, v, wt);
    }

    Prims(adj, n, 0);

    // vector<pair<int, int>> g[9];
    // addEdge(g, 0, 1, 4);
    // addEdge(g, 0, 7, 8);
    // addEdge(g, 1, 2, 8);
    // addEdge(g, 1, 7, 11);
    // addEdge(g, 2, 3, 7);
    // addEdge(g, 2, 8, 2);
    // addEdge(g, 2, 5, 4);
    // addEdge(g, 3, 4, 9);
    // addEdge(g, 3, 5, 14);
    // addEdge(g, 4, 5, 10);
    // addEdge(g, 5, 6, 2);
    // addEdge(g, 6, 7, 1);
    // addEdge(g, 6, 8, 6);
    // addEdge(g, 7, 8, 7);

    // Prims(g, 9, 0);

    return 0;
} 