class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> out, visited(nums.size(), 0);
        dfs(nums, 0, res, out, visited);
        return res;
    }
    void dfs(vector<int>& nums, int level, vector<vector<int>>& res, vector<int>& out, vector<int>& visited){
        if (level == nums.size()){
            res.push_back(out);
            return;
        }
        for (int i = 0; i < nums.size(); i++){
            if (visited[i] == 1){
                continue;
            }
            visited[i] = 1;
            out.push_back(nums[i]);
            dfs(nums, level+1, res, out, visited);
            out.pop_back();
            visited[i] = 0;
        }
    }
};
