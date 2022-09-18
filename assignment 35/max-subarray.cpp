class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int n = nums.size();
        int max=INT_MIN;
        int sum=0;
        if(n<=1){
            return nums[0];
        }
        while(i<n){
            sum+=nums[i];
            if(sum<0){
                if(sum>max){
                max = sum;
                }
                sum=0;
                i++;
            }
            else{
             if(sum>max){
                 max=sum;
             }   
                i++;
                }
            
        }
        return max;
    }
};