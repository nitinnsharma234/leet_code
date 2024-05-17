class Solution {
public:
    string reversed(string s){
        int n =s.length();
         stringstream str(s);
         string word;
         int len=0;
        while (str >> word) {
                word+=' ';
                s.insert(n,word);
                
                len +=(word.length());

        }
        return s.substr(n,len-1);
    }
    string reverseWords(string s) {
       
        string st = reversed(s);
       // cout<<"'"<<st<<"'";
        return st;
    }
};