
/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
//idea is to use Depth first search for all the neibhoring elements .we increase the counter on;y when we encounter "1" s.t. it has not been counted before.
class Solution {
public:
    void DFS(int i, int j , vector<vector<char>>& grid,vector<vector<bool>>& visited){
        cout <<i<<", "<<j <<endl;
        if(grid[i][j]== '0'){
            visited[i][j] = true;
            return;
        }
        visited[i][j] = true;
        if(i+1 < grid.size() && !visited[i+1][j]){          
            DFS(i+1, j , grid, visited);
        }
        if(i-1 >= 0 && !visited[i-1][j]){          
            DFS(i-1, j , grid, visited);
        }
        if(j+1 < grid[0].size() && !visited[i][j+1]){          
            DFS(i, j+1 , grid, visited);
        }
        if(j-1 >= 0 && !visited[i][j-1]){          
            DFS(i, j-1 , grid, visited);
        }
        
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited( m , vector<bool> (n, false));
        int count = 0;
        for(int i = 0;i < m;++i){
            for(int j = 0;j < n ;++j){
                       
                if(!visited[i][j] && grid[i][j]=='1'){
                    cout <<i<<" "<<j <<endl; 
                    count++;
                    DFS(i, j, grid,visited);
                }
            }
        }
        return count;

    }
};
// @lc code=end

