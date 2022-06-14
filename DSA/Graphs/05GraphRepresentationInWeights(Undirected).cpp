// C++ program to represent undirected and weighted graph
// using STL. The program basically prints adjacency list
// representation of graph
#include <bits/stdc++.h>
using namespace std;

// To add an edge
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt)
{
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

// Print adjacency list representation of graph
void printGraph(vector<pair<int,int> > adj[], int V)
{
	int v, w;
	for (int u = 0; u < V; u++)
	{
		cout << "Node " << u << " makes an edge with \n";
		for (auto it = adj[u].begin(); it!=adj[u].end(); it++)
		{
			v = it->first;
			w = it->second;
			cout << "\tNode " << v << " with edge weight =" << w << "\n";
		}
		cout << "\n";
	}
}

// Driver code
int main()
{
	int V, e;
	cout<<"Enter number of vertices : ";
	cin>>V;
	cout<<"Enter number of edges : ";
	cin>>e;

	vector<pair<int, int> > adj[V];
	
	for(int i=0; i<e; i++){
		
		int u, v, wt;
		
		cout<<"Enter coordinates for " <<i+1 <<" coordinate : ";
		cin>>u>>v;
		cout<<"Enter weight for coordinate " << u <<" and " <<v <<" : ";
		cin>>wt;
		cout<<"\n";

		addEdge(adj, u, v, wt);
	}
	printGraph(adj, V);
	return 0;
}
