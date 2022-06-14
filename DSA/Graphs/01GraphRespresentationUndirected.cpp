//Adjacency Matrix

#include<iostream>
using namespace std;

int main(){
    //'n' : number of vertices
    //'m' : number of edges
    int n, m;

    cout<<"Enter number of vertices : ";
    cin>>n;
    cout<<"Enter number of edges : ";
    cin>>m;

    int adjMat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            adjMat[i][j]=0;
        }
    }

    cout<<"Enter " << m <<" coordinates with value '1' in the adjacency list \n";
    for(int i=0; i<m; i++){
        int u, v;
        cout<<"Enter " <<i+1 <<" coordinate : ";
        cin>>u >>v;
        adjMat[u][v]=1;
        adjMat[v][u]=1;
    }

    cout<<"\nAdjacency lmatrix \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<adjMat[i][j] <<" ";
        }

        cout<<"\n";
    }

    return 0;

}