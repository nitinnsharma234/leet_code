class Solution {
public:
    int totalFruit(vector<int>& fruits) {

     unordered_map<int,int> mp;
     int ans =0;
     int s=-1;
     for(int i=0;i<fruits.size();i++){
        mp[fruits[i]]++;
        //cout<<mp.size()<<"size"<<endl;
        while(mp.size()>2){
            s++;
            mp[fruits[s]]--;
            if(mp[fruits[s]]==0){
                //clear the key 
               mp.erase(fruits[s]);
              //cout<<fruits[s]<<endl;
            }
        }
        if(mp.size()<=2){
            ans = max(i-s,ans);
        }
     }
            return ans;
    }
};
// 1 2 3 