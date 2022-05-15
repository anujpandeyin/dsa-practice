class Solution {
public:
    bool isPalindrome(string s) {
        string k;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&& s[i]<='Z'){
                k+=s[i]+32;
            }
            else if(s[i]>='0'&& s[i]<='9'){
                k+=s[i];
            }
            else if(s[i]>='a'&& s[i]<='z'){
                k+=s[i];
            }
        }
        int n=k.size()-1;
        int l=0;
        while(l<=n){
            if(k[l]!=k[n])
                return false;
                l++;
                n--;
        }
        return true;
        
    }
};