class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            int b = target - nums[i];
            if(m.find(b)!=m.end()){
                int a = m[b];
                int b = i;
                    ans.push_back(a);
                ans.push_back(b);
                break;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};