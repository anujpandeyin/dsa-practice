class Solution {
public:
      int countPairs(vector<int>& deliciousness) {
        unordered_map<int,long long>mp;
        int n=deliciousness.size(),mod=1e9+7;
        long long ans=0;
        for(int s:deliciousness)
        {
            for(int i=0; i<=21; i++)
            {
               int t=1<<i;
               // int t=2*i;
                if(mp.find(t-s)!=mp.end())
                {
                    ans+=mp[t-s];
                }
            }
            mp[s]++;
        }
        return ans%mod;
    }
};