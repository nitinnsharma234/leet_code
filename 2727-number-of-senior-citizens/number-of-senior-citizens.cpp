class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0 ; 
        for (auto x : details){
            string id = x; 
            int age = ((id[11]-'0')*10)+(id[12]-'0');
            if(age>60) count ++ ; 

        }
        return count ; 
    }
};