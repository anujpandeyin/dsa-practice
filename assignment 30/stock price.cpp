class StockPrice {
public:
    
    unordered_map<int,int>mp; //timestamp as key and price as value
    int currentTime = 0;
    multiset<int>S; //insert price
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(mp.find(timestamp) != mp.end()){
            auto it = S.find(mp[timestamp]);
	        S.erase(it);
        }
        mp[timestamp]=price;
        S.insert(price);
        currentTime = max(timestamp, currentTime);
    }
    
    int current() {
        return mp[currentTime];
    }
    
    int maximum() {
        auto it = S.end();
        return  *(--it);
    }
    
    int minimum() {
        return *S.begin();
    }
};
Footer
