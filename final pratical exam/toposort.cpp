#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
       vector<int> indegree(V,0);
       vector<vector<int>> adj(V);
       vector<int> topo;
       for(auto& e:edges)
       {
           int u=e[0];
           int v=e[1];
           adj[u].push_back(v);
           indegree[v]++;
       }
       queue<int> q;
       for(int i=0;i<V;i++)
       {
           if(indegree[i]==0) q.push(i);
       }
       while(!q.empty())
       {
           int node=q.front();
           q.pop();
           topo.push_back(node);
           for(int b:adj[node])
           {
               indegree[b]--;
               if(indegree[b]==0) q.push(b);
           }
       }
        return topo;
    }
};