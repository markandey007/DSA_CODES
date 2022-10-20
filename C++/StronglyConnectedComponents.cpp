#include<bits/stdc++.h>
using namespace std;
/*

What are Strongly Connected Components in a Graph ? 

A directed graph is strongly connected if there is a path between all pairs of vertices. 
A strongly connected component (SCC) of a directed graph is a maximal strongly connected subgraph.

*/

/*


Kosaraju's Algorithm : O(E+V) : 3 Iterations 

https://www.codingninjas.com/codestudio/problems/count-strongly-connected-components-kosaraju-s-algorithm_1171151


Kosaraju's algorithm finds the strongly connected components of a graph using three DFS traversals.
Initially, it stores the nodes of the graph in a stack according to their finish times.
Then we reverse each edge of the graph to achieve a transpose graph. The strongly connected
components of a graph remain intact after reversal of edges. Then visit the connected components 
of each stack tops. Each stack top will give a SCC if it was not already visited.

*/


void dfs(int node, stack<int> & st, vector<int>adj[], vector<bool>& visited){
    visited[node]=true;
    for(auto it: adj[node]){
        if(!visited[it]){
            dfs(it,st,adj,visited);
        }
    }
    st.push(node);
}
void revdfs(int node, vector<int>transpose[], vector<bool>&visited){
    visited[node]=true;
    for(auto it: transpose[node]){
        if(!visited[it]){
            revdfs(it,transpose,visited);
        }
    }
}
int stronglyConnectedComponentsKosaraju(int v, vector<vector<int>> &edges)
{
    vector<int>adj[v];
    
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }
    
    stack<int>st; 
    vector<bool> visited(v,false); 
    
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i,st,adj,visited);
        }
    }
    
    vector<int> transpose[v];
    for(int i=0;i<v;i++){
        visited[i]=false; 
        for(auto it: adj[i]){  
            transpose[it].push_back(i); 
        }
    }

    int count=0;
    while(!st.empty()){
        int node=st.top(); 
        st.pop();
        if(!visited[node]){
            count++;
            revdfs(node,transpose, visited);
        }
    }
    return count;
}


/*

Tarjan's Algorithm : O(E+V) : 1 Iteration 

https://www.codingninjas.com/codestudio/problems/985311?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0


Tarjan's Algorithm finds the strongly connected components of a graph using a single DFS traversal.
In calling phase of dfs, we compute discovery time of each vertex, initialize lowest discovery time
vertex accessible for the considered vertex and push the vertex to a stack. In returning phase,
we compute lowest discovery time vertex accessible from the node using discovery time of back
edge and lowest discovery time vertex of child vertex (we ignore parent and cross edges while 
minimizing lowest discovery time vertex accessible) and after this in the returning phase only 
if for the node of the recursion stack low[node] = disc[node] then we pop from stack till that 
node is reached in stack => whenever this condition is satisfied we get a scc. 	

*/



void dfs(int node, int& timer, vector<int> adj[], vector<int>& disc, vector<int>& low, stack<int>& st, vector<bool>& visited, vector<int> conn, vector<vector<int>>& scc){
    visited[node] = true;
    st.push(node);
    disc[node] = low[node] = timer;
    timer++;
    
    for(auto adjacent: adj[node]){
        if(disc[adjacent] == 0){
            dfs(adjacent, timer, adj, disc, low, st, visited, conn, scc);
            low[node] = min(low[node], low[adjacent]);
        }else if(visited[adjacent]){  // back edge
            low[node] = min(low[node], disc[adjacent]);
        }
    }
    
    if(low[node] == disc[node]){
        while(st.top() != node){
            conn.push_back(st.top());
            visited[st.top()] = false;
            st.pop();
        }
        conn.push_back(st.top());
        visited[st.top()] = false;
        st.pop();        
    }
    
    if(conn.size() > 0)
        scc.push_back(conn);
    
}

vector<vector<int>> stronglyConnectedComponentsTarjan(int n, vector<vector<int>> &edges)
{
    vector<int> disc(n, 0);
    vector<int> low(n, 0);
    stack<int> st;
    vector<vector<int>> scc;
    vector<int> adj[n]; 
    vector<bool> visited(n, false);
    for(auto i:edges){
        adj[i[0]].push_back(i[1]);
    }
    
    int timer = 1;
    for(int i=0; i<n; i++){
        if(!disc[i]){
            vector<int> conn; 
            dfs(i, timer, adj, disc, low, st, visited, conn, scc);
        }
    }
    
    return scc;
}