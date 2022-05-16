int birthdayCakeCandles(vector<int> candles) {
    int t=candles[0];
    int count=1;
    for(int i=1;i<candles.size();i++){
        if(candles[i]>t){
            t=candles[i];
            count=1;
        }else{
              if(candles[i]==t){
                  count++;
              }
    
        
    }
    return count;

}