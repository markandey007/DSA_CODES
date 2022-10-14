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

void bfd(){
    unordered_map<int,bool>m;
    queue<int>q;
    
}

};
int main(){

    graph g;

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 3, 0);
    cout << "Printing the Adjacency List " << endl;
    g.printAdj();

}