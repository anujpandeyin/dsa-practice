
  
class Solution {
public:
    typedef unsigned long long ULL;
    int guessNumber(ULL n) {
        ULL g;
        ULL beg=1,end=n;
        while(beg<=end){
            ULL mid=(beg+end)/2;
            g=guess(mid);
            if(g==0){
                return mid;
            }
            else if(g==-1){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return 0;
    
            
        
        
    }
};