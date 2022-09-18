class Solution {
public:
    double myPow(double x, int n) {
        double ans;
        if(n==0){
            return 1;
        }
        if(x>1 && n==INT_MIN){
            return 0;
        }
        if(x<=1 && n==INT_MIN){
            return 1;
        }
        if(x > 0 && n > 0){
            ans=pow(x, n);
            return ans;
        }
        if(x>0 && n<0){
            ans=pow(1/x, abs(n));
            return ans;
        }
        if(x<0 && n>0){
            ans = pow(x, n);
            return ans;
        }
        return 0;
    }
};