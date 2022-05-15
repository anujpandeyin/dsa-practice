class Solution {
public:
    vector<int> sortArray(vector<int>& A) {
        int min,i;
    for(int j=0;j<A.size()-1;j++){
        min=j;
        for(i=j+1;i<A.size();i++){
        if(A[min]>A[i]){
            min=i;
            
        
         }
           
          
    
        
    }
        if (min!=i){
             swap(A[min],A[j]);
        }
       
      
    
        
    }
         return A;
    
        
    }
};