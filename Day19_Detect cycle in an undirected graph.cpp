class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool helper(int node,vector<int>* adj, int parent, vector<bool> &vis){
        vis[node]=true;
        for(auto it: adj[node]){
            if(it==parent){
            
                continue;
            }
            if(vis[it]==true){
                return true;
            } 
            if(helper(it,adj,node,vis)==true){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(vis[i]==false){
	           if(helper(i,adj,-1,vis)==true){
	                return true;
	            }
            }
        }
        return false;
    }
};
