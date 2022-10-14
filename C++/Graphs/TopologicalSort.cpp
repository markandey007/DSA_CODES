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


void topoSort() {
map<int, int> indegree;
        queue<int> q;

        //initialse indegree with 0
        for(auto i: adjlist) {
            indegree[i.first] = 0;
        }
        
        for(auto i: adjlist) {
            for(auto j: i.second) {
                indegree[j]++;
            }
        }

        //step2: push in q, indegree -> 0
        for(auto i: indegree) {
            if(i.second == 0) {
                q.push(i.first);
            }
        }

        //step3: BFS
        while(!q.empty()) {
            int front = q.front();
            cout << front << " ";
            q.pop();

            for(auto neigh: adjlist[front]) {
                indegree[neigh]--;
                if(indegree[neigh] == 0) {
                    q.push(neigh);
                }
            }
        }
    cout << endl;
        
    }

};
int main(){

    graph g;

    //g.addEdge(0, 0, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 5, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(5, 4, 1);
     
    cout << "Printing the Adjacency List " << endl;
    g.printAdj();
      g.topoSort();

}