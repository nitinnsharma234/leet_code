class Solution {
public:
void utils(vector<vector<int>> & mat, int i , vector<vector<int>>& sol,vector<int>& sets){
    if (i>= mat.size()){
        sol.push_back(sets);
        return ;
    }
    for( int j =0;j<mat[i][1];j++){
        sets.push_back(mat[i][0]);
        utils(mat,i+1,sol,sets);
    }
    int k = mat[i][1];
    while(k--){
        sets.pop_back();
    }
    utils(mat,i+1,sol,sets);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<vector<int>> mat ;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            mat.push_back({it->first, it->second});
        }
        vector<vector<int>>ans;
        vector<int> sets;
        utils(mat, 0, ans, sets);
        vector<vector<int>> arrays;
        for (auto x : ans){
                arrays.push_back(x);
        }
        return arrays;
    }
};