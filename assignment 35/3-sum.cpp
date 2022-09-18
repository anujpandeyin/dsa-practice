class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            int b=i+1;
            int c=nums.size()-1;
            int sum=0-nums[i];
            while(b < c){
            if(nums[b]+nums[c]==sum){
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[b]);
                temp.push_back(nums[c]);
                ans.push_back(temp);
                
            
                    while(b<c && nums[b]==nums[b+1]){
                        b++;
                    }
                    while(b<c && nums[c]==nums[c-1]){
                        c--;
                    }
                    b++;
                    c--;
            }    
                else if(nums[b]+nums[c] < sum){
                    b++;
                }
                else{
                    c--;
                }
            }
            }
        }
               return ans;
    }
};