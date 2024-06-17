class Solution {
public:
  std::map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int romanToInt(string s) {
        int sum =0;
        for(int i =0;i<s.size();i++){
            int no=mp[s[i]];
            
            if(i<s.size()-1 and mp[s[i+1]]>mp[s[i]]){
                no=mp[s[i+1]]-mp[s[i]];
                i++;
            }
            // cout<<no<<" ";
            sum+=no;
        }
        return sum;
    }
};