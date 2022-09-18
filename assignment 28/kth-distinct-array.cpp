class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> hash;
         for(string s: arr)
    {
        hash[s]++;
    }
    string str="";
    for(string s: arr)
    {
        if(hash[s]==1)
        {
            k--;
            if(k==0)
            {
                return s;
            }
        }
    }
    return str;
    
}
};