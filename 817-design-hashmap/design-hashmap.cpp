
 #define PI 1e6;
class MyHashMap {
    //    vector<int> vt(1000001,-1);
public:
    // int num =1e6+1;
      vector<int> vt;

    MyHashMap() {
      vt.resize(1e6+1,-1);

    }
    
    void put(int key, int value) {
        vt[key]=value;
    }
    
    int get(int key) {
        return vt[key];
    }
    
    void remove(int key) {
        vt[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */