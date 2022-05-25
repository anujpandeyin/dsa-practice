class Solution {
public:
    int arrangeCoins(int n) {
        int beg=1;
        while(beg<=n){
            n=n-beg;
            beg++;
        }
        return beg-1;
        
    }
};