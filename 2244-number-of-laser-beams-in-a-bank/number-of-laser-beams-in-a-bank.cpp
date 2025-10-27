class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int curr = 0;
        int prev = 0;
        for (int i = 0; i < bank.size(); i++) {
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1') {
                    curr++;
                }
            }
            if (prev != 0 && curr!=0) {


                ans += (prev * curr);
            }
            if(curr!=0){
                prev = curr;
            }
            curr = 0;
        }
        return ans;
    }
};