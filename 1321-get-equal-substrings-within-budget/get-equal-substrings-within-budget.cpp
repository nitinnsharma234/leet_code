class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> diff; 
        // if both strings are actually equal 
        if (s==t){
            return s.size();
        }
        for (int i =0;i<s.size(); i++){
            diff.push_back(abs(s[i]-t[i]));
        }
        int ans =0; 
        int sum =0;
        int k =-1;
        // for(auto x : diff){
        //     cout<<x<<" ";
        // }
        for (int i =0;i<diff.size();i++){
            sum+=diff[i];
            while (k<i and sum>maxCost){
                k++;
                sum-=diff[k];

            }
            ans=max(i-k,ans);
        }
        return ans ;
    }
};
// new string would be array of integers which would be  basically differece
// normally sliding window 
// 4 4 1 1 1 1 1
// ans dena lenht 