/*
 * @lc app=leetcode id=1443 lang=cpp
 *
 * [1443] Minimum Time to Collect All Apples in a Tree
 */

// @lc code=start
class Solution {
public:
    int solve(int root,vector<unordered_set<int>>& graph,vector<bool>& hasApple,vector<int>& vis)
    {
        if(vis[root]) return 0;
        if(graph[root].size()==0) return hasApple[root] ? 2 : 0;

        vis[root]=1;

        int ans=0;
        for(int node:graph[root])
        {
            ans+=solve(node,graph,hasApple,vis);
        }
        return (ans || hasApple[root]) ? ans+2 : ans;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple)
    {
        vector<unordered_set<int>>graph(n);
        vector<int>vis(n,0);

        for(auto it:edges)
        {
            graph[it[0]].insert(it[1]);
            graph[it[1]].insert(it[0]);
        }
        int ans=solve(0,graph,hasApple,vis);
        return ans ? ans-2 : ans;
    }
};
// @lc code=end

