#include <iostream>
#include <map>
#include<list>
#include<queue>
using namespace std;

template <typename T>
class Graph {
    public:
        map<T, list<T> > adjList;

    void addEdge(T u, T v, bool direction) {
        //direction = 0 -> undirected graph
        //direction = 1 -> directed grapp

        //for u->v
        adjList[u].push_back(v);
        //check v->u
        if(direction == 0) {
            adjList[v].push_back(u);
        }    
    }

    void printAdj() {
        
        for(auto i: adjList) {
            cout << i.first << " -> " ;
            for(auto j: i.second) {
                cout << j << ", "; 
            }    
            cout << endl;
        }
    }
    void dfs(int src, map<int, bool>& visited ) {
        visited[src] = true;
        cout << src << ", ";

        for(auto neighbour: adjList[src]) {
            if(!visited[neighbour]) {
                dfs(neighbour, visited);
            }
        }
    }
};



int main() {

    Graph<int> g;

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 4, 0);
    g.addEdge(2, 4, 0);

    cout << "Printing the Adjacency List " << endl;
    g.printAdj();

    cout << "printing the dfs traversal  " << endl;

    int n = 5;
    map<int, bool> visited;
    //to handle graph with disconnected components
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            g.dfs(i, visited);
        }
    }
    
    

  return 0;
} 