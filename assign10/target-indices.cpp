class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        int i,beg=0,end=n;
        vector<int> index;
        for(i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        for(int k=0;k<n;k++){
            if(nums[k]==target){
                index.push_back(k);
            }
        }
        return index;
        
    }
};