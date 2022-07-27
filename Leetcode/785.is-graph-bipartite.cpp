/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution {
public:
    bool flag;
    vector<bool>visited;
    vector<int>color;
    
    void util(vector<vector<int>> &graph, int currColor, int currNode){
        if(visited[currNode]  && color[currNode] != currColor){
            
            flag  = false;
            return;
        }
        color[currNode] = currColor;
        if(visited[currNode])
            return;
        visited[currNode] = true;
        cout <<currNode <<" ";
        for (auto i: graph[currNode]){
            util(graph, currColor xor 1 , i);
        }
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();

        color  = vector<int>(n, -1);
        visited = vector<bool>(n, false);
        
        flag = true;
        for(int i = 0;i < n;i++){
            if(!visited[i])
                util(graph, 0, i);
        }   
        return flag;
    }
};
// @lc code=end

