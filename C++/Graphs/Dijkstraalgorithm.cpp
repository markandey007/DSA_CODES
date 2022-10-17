#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    map<int,list<pair<int,int>>>adjlist;
    void addEdge(int u,int v,int wt,bool direction){
        adjlist[u].push_back(make_pair(v,wt));
        if(direction==0){
          adjlist[v].push_back(make_pair(u,wt));  
        }

    }
 void printAdj() {
    for(auto i: adjlist) {
            cout << i.first << " -> " ;
            for(auto j: i.second) {
                cout <<"["<< j.first<<","<<j.second << "], "; 
            }    
            cout << endl;
        }
 }



 vector<int> dijkstra(int src, int n ) {
        vector<int> dist(n, INT_MAX);

        //distance, nodeName
        set<pair<int,int> > st;

        //initial step:
        dist[src] = 0;
        st.insert(make_pair(0,src));

        while(!st.empty()) {
            //step1: get the top element
            auto top = *(st.begin());
            //pop
            st.erase(st.begin());

            int nodeDistance = top.first;
            int node = top.second;

            //step2: explore neighbour
            for(auto neighbour: adjlist[node]) {
                //neighbour.first -> neighbour node name
                //neighbour.second -> neighbour weight
                
                if(nodeDistance + neighbour.second < dist[neighbour.first]) {
                    //remove old record
                    auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                    //if record is found, then erase it
                    if(record != st.end()) {
                        st.erase(record);
                    }

                    //dist update
                    dist[neighbour.first] = nodeDistance + neighbour.second ;

                    //push new record
                    st.insert(make_pair(dist[neighbour.first], neighbour.first));
                }
            }
        }
        return dist;
    } 
 
};



int main(){

    graph g;
   g.addEdge(0,1,5,0);
   g.addEdge(0,2,8,0);
   g.addEdge(1,2,9,0);
   g.addEdge(1,3,2,0);
   g.addEdge(2,3,6,0);
   g.printAdj();
   vector<int>ans=g.dijkstra(0,4);
   for(auto i : ans){
    cout<< i<<" ";
   }
   cout<<endl;
}