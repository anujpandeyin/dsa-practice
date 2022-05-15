class Solution {
public:
    void merge(vector<int>& A, int start,int mid,int end){
        int i=start, j=mid+1;
        vector<int> B;
        while(i<=mid&&j<=end){
            if(A[i]<=A[j]){
                B.push_back(A[i]);
                i++;
            }
            else{
                B.push_back(A[j]);
                    j++;
            }
        }
        while(i<=mid){
            B.push_back(A[i]);
            i++;
        }
        while(j<=end){
            B.push_back(A[j]);
            j++;
        }
        for(int i=start;i<=end;++i)
            A[i]=B[i-start];
            
            
    }
    void sort(vector<int>& A, int start, int end){
        if(start<end){
            int mid=(start+end)/2;
            sort(A,start,mid);
            sort(A,mid+1,end);
            merge(A,start,mid,end);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums,0,n-1);
        return nums;
        
    }
};