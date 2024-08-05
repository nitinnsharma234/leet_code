class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      map<string,int> mp ; 
      string ans ="";
      for(string x : arr)  {
        mp[x]++;
      }
      for (auto x :arr){
        if (mp[x]==1){
           
            k--;
             cout<<k<<" ";
        }
        if(k==0) return x;
      }
      return ans;
    }
};
