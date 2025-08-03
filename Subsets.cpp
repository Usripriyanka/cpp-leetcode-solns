class Solution {
public:
    vector<vector<int>> res;
    void backTrack(vector<int>&nums,vector<int>& path,int idx){
        res.push_back(path);

        for(int i=idx;i<nums.size();i++){
            path.push_back(nums[i]);
            backTrack(nums,path,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {       
        vector<int> path;
        backTrack(nums,path,0);
        return res;
    }
};
