class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        char curr=chars[0];
        int count=1;
        int len =0;
        int j=0;
        for (int i =1;i<n;i++){
            if(curr==chars[i]){
                count++;
            }
            else{
                len++;
                chars[j++]=curr;
                string s =to_string(count);
                   // cout<<s<<" ";
                if(count>1)
                   {  
                    
                    for(int k=0;k<s.size();k++){
                        chars[j++]=s[k];
                        len++;
                    }
                }
                
                count =1 ;
                curr=chars[i];
            }
        }
        len++;
                chars[j++]=curr;
                 string s =to_string(count);
                 if(count>1)
                   {  
                    
                    for(int k=0;k<s.size();k++){
                        chars[j++]=s[k];
                        len++;
                    }
                }
        return len;
    }
};
// 0 26 