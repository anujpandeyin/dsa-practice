class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(), nums.end());
        int ans=(nums[n]-1) * (nums[n-1]-1);
        return ans;
    }
};