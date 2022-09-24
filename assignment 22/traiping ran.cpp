class Solution {
public:
    int trap(vector<int>& arr) {
       int n= arr.size();
        vector<int>max_height(n+1);
        for(int i=n-1;i>=0;i--)
        {
            max_height[i]=max(max_height[i+1],arr[i]);
        }
        int res=0;
        int left=0;
        for(int i=0;i<n;i++)
        {
            res += max(min(left,max_height[i+1])-arr[i],0);
            left=max(arr[i],left);
        }
        return res;
    }
};