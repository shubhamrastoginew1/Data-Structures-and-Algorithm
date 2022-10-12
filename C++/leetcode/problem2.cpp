// We want to split a group of n people (labeled from 1 to n) into two groups of any size. Each person may dislike some other people, and they should not go into the same group.

// Given the integer n and the array dislikes where dislikes[i] = [ai, bi] indicates that the person labeled ai does not like the person labeled bi, return true if it is possible to split everyone into two groups in this way.

// Code:

class Solution {
public:
    bool dfs(unordered_map<int,vector<int>>& adj,vector<int>& color,int src,int parent)
    {
        if(parent==-2) color[src]=0;
        else color[src]=1-color[parent];
        
        for(auto i: adj[src])
        {
            if(color[i]==-1)
            {
                if(!dfs(adj,color,i,src)) return false;
            }
            
            if(color[i]!=-1 && color[i]==color[src])
                return false;
        }
        
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<dislikes.size();i++)
        {
            int u = dislikes[i][0];
            int v = dislikes[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> color(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                if(!dfs(adj,color,i,-2)) return false;
            }
        }
        return true;
    }
};