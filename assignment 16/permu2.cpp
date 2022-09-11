class Solution {
public:
    void recursion(int i,vector<int> nums, vector<vector<int>> &ans){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
           swap(nums[i],nums[j]);
            recursion(i+1,nums,ans);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        recursion(index,nums,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
