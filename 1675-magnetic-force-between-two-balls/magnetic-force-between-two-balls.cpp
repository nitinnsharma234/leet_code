class Solution {
public:

    bool isFeasible(int m, vector<int>& position, int force){
        int last = position[0];
        m--;
        for (int i =1;i<position.size();i++){
            // cout<<position[i]-last<<"-->";
            if(position[i]-last>=force){
                last=position[i];
                // cout<<"Last"<<last<<endl;
                m--;
            }
            if(m==0){
                cout<<"Yes";
                return true;
            }
        }
        cout<<endl;
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        if(m>position.size()) return false;
        sort(position.begin(),position.end());

        // index 
        int n =position.size();
        int l=0;
        int h = position[n-1]-position[0];
        int ans =-1;

        while(l<=h){
            int mid =(l+h)/2;
            // cout<<mid<<" ";
            if(isFeasible(m,position,mid)){
                ans=mid;
                l=mid+1;

            }
            else{
                h=mid-1;

            }
        }
        return ans;
    }
};