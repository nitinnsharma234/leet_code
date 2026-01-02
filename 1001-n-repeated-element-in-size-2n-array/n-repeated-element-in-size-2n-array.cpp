class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size(); 
        map<int,int> freq ;
        for(int i =0;i<n; i++){
            if(freq[nums[i]]>=1){
                return nums[i];
            }
            freq[nums[i]]++;
        }
        return -1;

    }
};
//array count // 2 this is your ans 0(n+1)
//1 2 3 4 4 