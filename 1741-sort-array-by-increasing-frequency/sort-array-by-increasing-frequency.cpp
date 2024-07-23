class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       vector<pair<int,int>>  freq;
       map<int,int> index;
       int j=0;
       for(int x : nums){
        if (index.find(x)!=index.end()){
            freq[index[x]].second+=1;
        }
        else{
            index[x]=j++;
            freq.push_back({x,1});
        }
       }
       sort(freq.begin(),freq.end(),[](pair<int,int> a , pair<int,int> b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return b.second>a.second;
       });
       int i =0;
       for(auto x : freq){
        int f =x.second;
        // cout<<x.first<<" "<<f<<endl;

            while(f--){
                nums[i++]=x.first;
            }
       }
       return nums;
    }
};
// counting sort 
// o (n);