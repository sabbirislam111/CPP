#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list <int> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int> [V];
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printNaighbour(int chk)
    {
        cout<<chk<<" : ";
        for(auto i = adj[chk].begin(); i != adj[chk].end(); i++)
        {
            cout<<"("<< (*i) <<") ";

        }
        cout<<endl;
    }

    void kamalNaighbour(int chk, int k)
    {
        int cuntNaig = 0;
        if(chk == k)
        {
            for(auto i = adj[chk].begin(); i != adj[chk].end(); i++)
            {

                cuntNaig++;

            }
            cout<<cuntNaig;
            cout<<endl;
        }

    }



};


int main()
{

    int V, E;
    cin>>V>>E;
    Graph g(V);
    for(int i = 0; i < E; i++)
    {
        int u, v, w;
        cin>>u>>v;
        g.addEdge(u, v);
    }
    int k;
    cin>>k;



    for(int i = 0; i < V; i++)
    {
        g.kamalNaighbour(i, k);
    }








    return 0;
}
/*
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8


*/


