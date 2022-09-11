class Solution {
public:
    vector<string> ans;
     void recursion(int a, string s){
    
            ans.push_back(s);
          
        for(int i=a;i<s.size();i++){
            
         if(isalpha(s[i])){
               
               s[i]=isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
            
           
            recursion(i+1,s);
            
               
               s[i]=isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
         }
        }
    }
    vector<string> letterCasePermutation(string s) {
        
        int index=0;;
        recursion(index,s);
        
        return ans;
        
    }
};