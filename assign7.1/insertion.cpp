class Solution {
public:
    vector<int> sortArray(vector<int>& A) {
     int min=0,i;
    for(int j=0;j<A.size()-1;j++){
        for(i=j;i<A.size();i++){
        if(A[j]>A[i]){
             swap(A[j],A[i]);
         }
        }
    }
        return A;
    }
};