class LRUCache {
public:
typedef pair<int,int> pi;

    list<pi> ll;
    int size=0;
    map<int,list<pi>::iterator> mp;
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
       // cout<<key<<" "<<mp[key]->first<<" "<<mp[key]->second<<endl;
        ll.splice(ll.begin(),ll, mp[key]);
        return mp[key]->second;
    }
    
    void put(int key, int value) {
      if (get(key)!=-1){
        mp[key]->second=value;
        return;
      }
      ll.push_front({key,value});
       mp[key]=ll.begin();
       if(ll.size()>size){
        int key =ll.back().first;
               ll.pop_back();
               mp.erase(key);
       }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */