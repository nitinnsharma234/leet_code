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
        if(mp.find(key)!=mp.end()){
            list<pair<int,int>>::iterator it =mp[key];
            pair<int,int>pair  =*it;
           int  val=pair.second;
            ll.erase(it);
            mp.erase(key);
            ll.push_front({key,val});
            mp[key]=ll.begin();
            return val;
            //return *mp[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
            // if exists update it 
            if(mp.find(key)!=mp.end()){
                auto it = mp[key];
                ll.erase(it);
                mp.erase(key);
            }
            if(mp.size()>=myCap){
               int key =ll.back().first;
               ll.pop_back();
               mp.erase(key);
               // ll.pop_back();
            }
            ll.push_front({key,value});
            mp[key]=ll.begin();

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */