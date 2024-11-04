#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;

int v;

void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void topoBFS()
{
    vector<int> inDegree(v, 0);

    for(int i = 0; i < v; i++)
    {
        for(auto neighbour : graph[i])
        {
            inDegree[neighbour]++;
        }
    }

    queue<int> q;

    unordered_set<int> vis;
    
    for(int i = 0; i < v; i++)
    {
        if(inDegree[i] == 0)
        {
            q.push(i);
            vis.insert(i);
        }
    }

    cout<<"Starting BFS\n";

    while(!q.empty())
    {
        int node = q.front();
        cout<<node<<" ";
        q.pop();

        for(auto neighbour : graph[node])
        {
            if(!vis.count(neighbour))
            {
                inDegree[neighbour]--;
                if(inDegree[neighbour] == 0)
                {
                    q.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}

int main()
{
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while (e--)
    {
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false);
    }
    topoBFS();
    return 0;
}