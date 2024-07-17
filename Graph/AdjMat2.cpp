// Adjacency  matrix for undirected - weighted graph

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int vertex, edges;

    cout<<"Enter the vertex and edges respectively\n";
    cin>>vertex>>edges;

    vector<vector<int> > AdjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    for(int i = 0; i < edges; i++)
    {
        cin>>u>>v>>weight;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
    }

    for(int i = 0; i < vertex; i++)
    {
        for(int j = 0; j < vertex; j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
}