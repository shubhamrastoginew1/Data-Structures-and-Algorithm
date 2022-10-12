// Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.

{
	public:
	vector<int> ans;
	void dfs(vector<int> adj[], unordered_map<int,bool>& visited,int src)
	{
	    visited[src]=true;
	    
	    for(auto i: adj[src])
	    {
	        if(!visited[i])
	        {
	            dfs(adj,visited,i);
	        }
	    }
	    ans.push_back(src);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    unordered_map<int,bool> visited;
	    for(int i=0;i<v;i++)
	    {
	        if(!visited[i])
	        {
	            dfs(adj,visited,i);
	        }
	    }
	    
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};