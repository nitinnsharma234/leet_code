class Solution {
public:
    int appendCharacters(string s, string t) {
     int lo=0;
     for (int i =0;i<t.length();i++){
        //cout<<i<<" ";
        int j=lo;
        for ( ;j<s.length();j++){
            //cout<<"j is"<<j<<endl;
            if (t[i]==s[j]){
                lo=j+1;

                break;
            }
        }
        if(j==s.length() && i!=t.length()){
            return (t.length()-i);
        }

     }
            return 0;
    }
};
