class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
        int n = nums.size();
         int new_arr[n];
        for(int i=0;i<n;i++){
            if(i+k < n){
                new_arr[i+k]=nums[i];
            }
            else{
                int pos = (i+k)%n;
                new_arr[pos] = nums[i];
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=new_arr[i];
        }
    }
};