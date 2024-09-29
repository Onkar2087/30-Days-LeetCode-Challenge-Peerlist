class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j) 
    {
        int r = grid.size();
        int c = grid[0].size();

        if (i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == '0' || visited[i][j] == true) 
        {
            return;
        }
        
        visited[i][j] = true;

        dfs(grid, visited, i - 1, j); 
        dfs(grid, visited, i + 1, j); 
        dfs(grid, visited, i, j - 1); 
        dfs(grid, visited, i, j + 1); 
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0; 
        
        int m = grid.size();
        int n = grid[0].size();
        int c = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (grid[i][j] == '1' && !visited[i][j]) 
                {
                    c++;
                    dfs(grid, visited, i, j);  
                }
            }
        }
        
        return c;
    }
};
