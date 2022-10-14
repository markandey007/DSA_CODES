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
 map<int,list<int>> getAdj() {
    return adjlist;
 }
};


void bfs(int src,map<int, bool>& visited,vector<int>&pbfs,map<int,list<int>>adjList,unordered_map<int, int>&parent) {

        queue<int> q;
        q.push(src);
        parent[src]=-1;
        
        visited[src] = true;

        while(!q.empty()) {
            int front = q.front();
            pbfs.push_back(front);
            q.pop();

            for(auto neighbour: adjList[front]) {
                if(!visited[neighbour] ) {
                    parent[neighbour]=front;
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        return;
    }
int main(){

    graph g;
   g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(1, 4, 0);
    g.addEdge(2, 5, 0);
    g.addEdge(3, 8, 0);
    g.addEdge(4, 6, 0);
    g.addEdge(5, 8, 0);
    g.addEdge(6, 7, 0);
    g.addEdge(7, 8, 0);
    int s=1;
    int t=8;
    cout << "Printing the Adjacency List " << endl;
    g.printAdj();
    map<int,list<int>>adj=g.getAdj();
    map<int, bool> visited;
    unordered_map<int, int>parent;
    vector<int>bfsp;
    bfs(0,visited,bfsp,adj,parent);
    cout<<"Path of BFS->";
    for(int i=0;i<bfsp.size();i++) cout<<bfsp[i]<<" ";
    cout<<endl;

    // prepare shortest path
        vector<int>ans;
        int currentNode=t;
        ans.push_back(t);
        while(currentNode!=s){
        currentNode =parent[currentNode];
        ans.push_back(currentNode);
        }


        reverse(ans.begin(),ans.end());
        
        cout<<"Shortest path->";
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<"->";
        
}