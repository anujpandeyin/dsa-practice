class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int>my_map;
        int sum=0;
        int i=0;
        int count=0;
        while(i<nums.size()){
            sum+=nums[i];
            if(sum==k){
                count++;
                
            }
            if(my_map.find(sum-k)!=my_map.end()){
                count+=my_map[sum-k];
            }
            my_map[sum]++;
            i++;
        }
        return count;
    }
};
Footer
