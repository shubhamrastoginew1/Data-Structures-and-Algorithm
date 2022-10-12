// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

// Code:
class Solution {
public:
    int count=0;
    bool isValid(vector<vector<char>>& grid,int m,int n,int i,int j)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0') return false;
        return true;
    }
    
    void dfs(vector<vector<char>>& grid,int m,int n,int i,int j)
    {
        grid[i][j]='0';
        
        if(isValid(grid,m,n,i+1,j))
            dfs(grid,m,n,i+1,j);
        if(isValid(grid,m,n,i,j+1))
            dfs(grid,m,n,i,j+1);
        if(isValid(grid,m,n,i-1,j))
            dfs(grid,m,n,i-1,j);
        if(isValid(grid,m,n,i,j-1))
            dfs(grid,m,n,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(), n=grid[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(grid,m,n,i,j);
                }
            }
        }
        
        return count;
    }
};