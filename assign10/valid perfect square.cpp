class Solution {
public:
    typedef unsigned long long ULL;
    bool isPerfectSquare(ULL num) {
        ULL beg=1, end=num;
        ULL sqrt=num;
        while(beg<=end){
            ULL mid=(beg+end)/2;
            if(mid*mid==num){
                return true;
            }
            else if(mid*mid>num){
                end=mid-1;
            }
            else{
                sqrt=mid;
                beg=mid+1;
            }
        }
        if(sqrt*sqrt==num){
            return true;
        }
        return false;
        
    }
};
