class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<pair<int,int>> sortedRanks ;
        for (int i =0;i<score.size();i++){
            sortedRanks.push_back({score[i],i});
        }
        sort(sortedRanks.begin(),sortedRanks.end(),greater<pair<int,int>>());
        vector<string> result(score.size(),"") ;
        for (int i=0;i<sortedRanks.size();i++){
            int rank =i;
            string a="";
            if(rank==0){
a="Gold Medal";
            }
            else if (rank ==1){
a="Silver Medal";
            }
            else if (rank==2) {
                a="Bronze Medal";
            }
            else{
a=to_string(i+1);
            }
                result[sortedRanks[i].second]=a;
        }
        return result;
    }
};
