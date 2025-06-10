class Solution {
public:
    int maxDifference(string s) {
        map<char,int> mp;
        int max_odd=INT_MIN;
        int min_even=INT_MAX;
        for (char x : s){
            mp[x]++;


        }
        for(auto y : mp){
            if(y.second %2==0){
min_even=min(min_even,y.second);
            }
            else{
max_odd=max(max_odd,y.second);
            }
        }

    return max_odd-min_even;
    }
};