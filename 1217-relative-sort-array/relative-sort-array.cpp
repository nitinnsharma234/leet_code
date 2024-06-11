class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for (int x :arr1){
            mp[x]++;
        }
        int j =0;
        for (int x : arr2){
            while(mp[x]--){
                arr1[j++]=x;
            }
            mp.erase(x);
        }
        for (auto& [key, value]: mp) {
        
            while(mp[key]--){
                arr1[j++]=key;
            }
        }

        return arr1;
    }
};

// question of counting sort 