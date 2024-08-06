class Solution {
public:
    int minimumPushes(string word) {
        vector<int> vt(26,0) ; 
        int ans =0;
        for(char x : word){
            vt[x-'a']++;
        }
        int count =1 ;
        sort(vt.begin(),vt.end(), std::greater<>());
        int k =0;
        for(int i =0;i<26;i++){
            ans +=(vt[i]*count);
            k++;
            if(k==8 ){
                count++;
                k=0;
            }

        }

        return ans ;
    }
};
// create a array decreasing in the matter of frequency
// count 
// count *2 
// count * 3
