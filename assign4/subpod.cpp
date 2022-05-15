class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,rem;
        int diff;
        while(n!=0){
            rem=n%10;
            product=product*rem;
            sum=sum+rem;
            n=n/10;
            
        }
        diff=product-sum;
        return diff;
        
        
    }
};