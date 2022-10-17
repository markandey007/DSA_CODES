#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    map<int,list<int>>adjlist;
    void addEdge(int u,int v,bool direction){
        adjlist[u].push_back(v);
        if(direction==0){
          adjlist[v].push_back(u);  
        }

    }
 void printAdj() {
    for(auto i: adjlist) {
            cout << i.first << " -> " ;
            for(auto j: i.second) {
                cout << j << ", "; 
            }    
            cout << endl;
        }
 }


void topodfs(int node,unordered_map<int,bool>&vis){
        vis[node]=true;
        for(auto neighbour:adjlist[node]){
        if(!vis[neighbour]){
        topodfs(neighbour,vis);
          }
        }
        cout<<node<<" ";
    }

};
int main(){

    graph g;
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 5, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(5, 4, 1);
     
    cout << "Printing the Adjacency List " << endl;
    g.printAdj();
    int n=5;
// topological sort
     cout << "Printing the topo sort in reverse -> " << endl;
     unordered_map<int,bool>visited;
    for(int i=1;i<n;i++){
    if(!visited[i]){
    g.topodfs(i,visited);
    }
  }

}