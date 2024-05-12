class Solution {
public:
    void utils (vector<int>& candidates , int target , int idx,vector<vector<int>>& soln , vector<int>& ans  ){
        //if(idx>=candidates.size()){

        
        if (target == 0 ){
            cout<<"Yes";
            soln.push_back(ans);
             return ;
            
        }
       
        //}
        
        for(int i = idx;i<candidates.size();i++){
        if(i>idx and candidates[i]==candidates[i-1]){
            continue;
        }
        if (candidates[idx]>target){
            break;
        }
            
                    ans.push_back(candidates[i]);
                    utils(candidates,target-candidates[i],i+1,soln,ans);
                    ans.pop_back();
            
                }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> soln ; 
        vector<int> ans ;
        sort(candidates.begin(),candidates.end());
       utils (candidates, target , 0 , soln , ans );
       return soln; 
    }
};