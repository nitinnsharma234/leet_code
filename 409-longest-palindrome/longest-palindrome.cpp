class Solution {
public:
    int longestPalindrome(string s) {
       map<char, int> mp ; 
       for (int i =0;i<s.size();i++){
            mp[s[i]]++;
       } 
       int count=0;
       bool flag = false;
       for(auto it = mp.begin(); it!=mp.end(); it++){
        //cout<<it->second<<" "<<it->first<<endl;
            if (it->second>1){
                if (it->second%2==0)
               { count+=it->second;}
               else{
                count+=(it->second-1);
                flag=true;
               }
            }
            if (it->second==1 and flag==false){
                flag=true;
            }
       }
       if (flag==true){
        count+=1;
       }
       return count;
    }
};


//letter de rkhe honge 
// you have to form longest palindrom 
