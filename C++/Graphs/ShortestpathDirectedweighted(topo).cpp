#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph {
    public:
        map<T, list<pair<T, T> > > adjList;

    void addEdge(T u, T v, T weight, bool direction) {
        //direction = 0 -> undirected graph
        //direction = 1 -> directed grapp

        //for u->v
        adjList[u].push_back(make_pair(v,weight));
        //check v->u
        if(direction == 0) {
            adjList[v].push_back(make_pair(u, weight));
        }    
    }

    void printAdj() {
        
        for(auto i: adjList) {
            cout << i.first << " -> " ;
            
            for(auto j: i.second) {
                cout << "(" << j.first << ", " << j.second << "), ";
            }    
            cout << endl;
        }
    }

    void dfs(int node,unordered_map<int,bool>&vis,stack<int>&topo){
        vis[node]=true;
        for(auto neighbour:adjList[node]){
        if(!vis[neighbour.first]){
        dfs(neighbour.first,vis,topo);
          }
        }
        topo.push(node);
    }

      void getShortestPath(int src,vector<int>&dist,stack<int>&topo){
 dist[src]=0;
 while(!topo.empty()){
    int top =topo.top();
    topo.pop();
        if(dist[top]!=INT_MAX){
           for(auto i:adjList[top]){
              if(dist[top]+i.second<dist[i.first]){
              dist[i.first]=dist[top]+i.second;
              }
            }
          }
      }
    }
          

};
int main() {

    Graph<int> g;

    g.addEdge(0, 1,5, 1);
    g.addEdge(0, 2,3, 1);
    g.addEdge(1, 2,2, 1);
    g.addEdge(1, 3,6, 1);
    g.addEdge(2, 3,7, 1);
    g.addEdge(2, 4,4, 1);
    g.addEdge(2, 5,2, 1);
    g.addEdge(3, 4,-1, 1);
    g.addEdge(4, 5,-2, 1);

    cout << "Printing the Adjacency List " << endl;
    g.printAdj();
    
    int n=6;
// topological sort
unordered_map<int,bool>visited;
stack<int>s;
  for(int i=0;i<n;i++){
  if(!visited[i]){
    g.dfs(i,visited,s);
    }
  }



    int src=1;
vector<int>dist(n);
for(int i=0;i<n;i++)
 dist[i]=INT_MAX;

  g.getShortestPath(src,dist,s);
  cout<<"Answer is->";
  for(int i=0;i<dist.size();i++) cout<<dist[i]<<" ";


  return 0;
} 
