class LRUCache {
public:
 list<pair<int,int>>ll;
 int size =0;
 int myCap=0;
 unordered_map<int,list<pair<int,int>>::iterator> mp;
    LRUCache(int capacity) {
        myCap=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
           ll.splice(ll.begin(),ll,mp[key]);
           return mp[key]->second;
            //return *mp[key];
        
    }
    
    void put(int key, int value) {
            // if exists update it 
            if(get(key)!=-1){
                 mp[key]->second=value;
                 return;
            }
            if(mp.size()>=myCap){
               int key =ll.back().first;
               ll.pop_back();
               mp.erase(key);
               // ll.pop_back();
            }
            ll.emplace(ll.begin(), key, value); 
            mp[key]=ll.begin();

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */