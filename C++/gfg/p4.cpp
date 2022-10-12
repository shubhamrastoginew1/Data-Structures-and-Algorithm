// Given a grid of dimension nxm containing 0s and 1s. Find the unit area of the largest region of 1s.
// Region of 1's is a group of 1's connected 8-directionally (horizontally, vertically, diagonally).

// Code:

class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    /*
     6 4
1 0 1 0
1 1 1 0
1 1 0 0
0 0 1 1
0 1 0 1
0 1 1 0
*/
    int ans=0;
    int maxi=0;
    bool isValid(vector<vector<int>>& grid, int n,int m,int i,int j)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0) return false;
        return true;
    }
    
    void dfs(vector<vector<int>>& grid, int n,int m,int i,int j)
    {
        grid[i][j]=0;
        ans++;
        
        if(isValid(grid,n,m,i-1,j+1))
        {
            // ans++;
            dfs(grid,n,m,i-1,j+1);
        }
            
        if(isValid(grid,n,m,i,j+1))
        {
            // ans++;
            dfs(grid,n,m,i,j+1);
        }
            
        if(isValid(grid,n,m,i+1,j+1))
        {
            // ans++;
            dfs(grid,n,m,i+1,j+1);
        }
            
        if(isValid(grid,n,m,i-1,j))
        {
            // ans++;
            dfs(grid,n,m,i-1,j);
        }
            
        if(isValid(grid,n,m,i+1,j))
        {
            // ans++;
            dfs(grid,n,m,i+1,j);
        }
            
        if(isValid(grid,n,m,i-1,j-1))
        {
            // ans++;
            dfs(grid,n,m,i-1,j-1);
        }
            
        if(isValid(grid,n,m,i,j-1))
        {
            // ans++;
            dfs(grid,n,m,i,j-1);
        }
            
        if(isValid(grid,n,m,i+1,j-1))
        {
            // ans++;
            dfs(grid,n,m,i+1,j-1);
        }
        
        maxi = max(maxi,ans);
        // cout<<ans<<" "<<maxi<<endl;
        return;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=0;
                if(grid[i][j]==1) dfs(grid,n,m,i,j);
            }
        }
        return maxi;
    }
};