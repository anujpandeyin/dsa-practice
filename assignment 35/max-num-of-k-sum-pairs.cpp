class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>my_map;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int ele=k-nums[i];
            if(my_map.find(ele)!=my_map.end()){
                my_map.erase(ele);
                count++;
            }
            else{
                my_map[nums[i]]=i;
            }
        }
        return count;
    }
};