class Solution {
public:
map<char,int> mp={
    {'I',1,},
    {'V',5,},
    {'X',10,},
    {'L',50,},
   { 'C',100,},
   { 'D',500,},
    {'M',1000}
};
    int romanToInt(string s) {
        int num=0;
        for (int i=0;i<s.size();i++){
            if (i<s.size() and mp[s[i]]<mp[s[i+1]]){
                num+=(mp[s[i+1]]-mp[s[i]]);
                i++;
                continue;
            }

            num+=mp[s[i]];
        }
        return num;
    }
};