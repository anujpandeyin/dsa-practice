vector<int> prime;

void sieve(){
    int c = 0;
    int n = 5e6+5;
    prime.push_back(c);
    prime.push_back(c);
    vector<int> arr(n,1);
    arr[1]=0;
    arr[0]=0;
    for(long long i=2;i<n;i++){
        if(arr[i]){
            c++;
            for(long long j = i*i;j<n;j+=i){
                arr[j] = 0;
            }    
        }
        prime.push_back(c);
    }
}

class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        if(prime.size()==0) sieve();
        return prime[n-1];
    }
    
    
};