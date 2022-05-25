class Solution {
public:
    typedef unsigned long long ULL;
    int firstBadVersion(ULL n) {
        ULL i, beg=1, end=n;
       while(beg<=end){
           ULL mid=(beg+end)/2;
           if(isBadVersion(mid)==true){
               i= mid;
               end=mid-1;
           }else {
               beg=mid+1;
           }
       }
        return i;
        
    }
};
