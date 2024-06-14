class Solution {
public:
    vector<string> split(string str){
           stringstream ss(str);
 
    vector<string> v;
    string s ;
    while (getline(ss, s, ':')) {
        v.push_back(s);
    }
    return v;

    }
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans (n,0);
        stack<pair<int,int>> st;
      //  st.push()
    //   return ans ;
      vector<string> values;
            for(int i =0;i<logs.size();i++){
                values=split(logs[i]);
                int id= stoi(values[0]);
                int time= stoi(values[2]);
                bool isStart=values[1]=="start";
                if(isStart){
                    if(!st.empty()){
                        ans[st.top().first]+=time-st.top().second;
                    }
                    st.push({id,time});
                }
                else{
                 //   cout<<id<<" "<<time<<" "<<st.top().second<<endl;

                    // while(!st.empty() and st.top().first!=id){
                    //     ans[st.top().first]+=(time-st.top().second+1);
                    //     st.pop();
                    // }
                     ans[st.top().first]+=(time-st.top().second+1);
                   //  cout<<ans[st.top().first]<<endl;
                  st.pop();
                  if(!st.empty()) st.top().second=time+1;
                    
                }
            }
        return ans;
    }
};