class Solution {
public:

void utils (vector<int> & candidates , int target , int curr, vector<int>& ans , vector<vector<int>>& sols){
        if (curr>= candidates.size()){
            cout<<target<<" ";
            if (target==0){
                 sols.push_back(ans);
            }
            return ;
        }
        
        if (candidates[curr]<=target){
                ans.push_back(candidates[curr]);
                utils (candidates, target-candidates[curr],curr,ans,sols);
                  ans.pop_back();
        }
       
         utils (candidates, target,curr+1,ans,sols);
       
           
        
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations ;
        vector<int> ans ;

        utils(candidates,target, 0 , ans,combinations);
        return combinations ;
    }
};
