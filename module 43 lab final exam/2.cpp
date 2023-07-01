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
            cout<<(*i)<<" ";

        }
        cout<<endl;
    }




    void levelOrder(int sourch, int chk)
    {
        vector<bool> visited(V, false);
        queue<int> Q;
        visited[sourch] = true;
        Q.push(sourch);
        Q.push(-1);
        int level = 0;
        while(!Q.empty())
        {
            int u = Q.front();
            if(level == chk){
                if(u != -1){
                   cout<<u<<" ";
                }


            }
            Q.pop();
            if(u != -1)
            {
                for(auto element: adj[u])
                {
                    int v = element;
                    if(visited[v] != true)
                    {
                        visited[v] = true;

                           Q.push(v);
                    }

                }
            }
            else
            {
                if(!Q.empty())
                {
                    Q.push(-1);
                    level++;
                }
            }

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
        int u, v;
        cin>>u>>v;
        g.addEdge(u, v);
    }

    int level;
    cin>>level;
    g.levelOrder(0, level);



    return 0;
}
/*
3 2
0 1
0 2
1


7 10
0 1
0 2
0 5
1 3
2 3
3 6
6 5
6 4
5 4
2 5
2


*/
