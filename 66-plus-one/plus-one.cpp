class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans = digits;  
        int n =digits.size()-1;
        int c=1;
        while(n>=0){
            int sum = c+digits[n];
             c = sum/10;
        
            ans[n]=sum%10;
           
            n--;
                if(sum<10) break;
        }
        if(c>0){
            ans.insert(ans.begin(), c);
        }
        return ans;
    }
};