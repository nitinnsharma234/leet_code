class Solution {
public:
    int stock_span(int arr[], int n)
{
    stack<int> st;
    st.push(0);
    int max_area = arr[0];
    for (int i = 1; i < n; i++)
    {

        while (st.empty() == false and arr[i] < arr[st.top()])
        {
            int val = st.top();
            int k = arr[val];
            st.pop();
            max_area = (st.empty() == false) ? max(max_area, k * (i - st.top() - 1)) : max(max_area, i * k);
        }
        st.push(i);
    }
    int size = n;
    while (st.empty() == false)
    {
        int tp = st.top();
        int val = arr[tp];
        st.pop();
        max_area = (st.empty() == false) ? max(max_area, val * (size - st.top() - 1)) : max(max_area, size * val);
    }

    return max_area;
}
    void print(int dp[],int s)
    {
        for(int i=0;i<s;i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
         if (n==0 )
         {
             return 0;
         }
        int col=matrix[0].size();
        
        int dp[col];
        int maximum=INT_MIN;
        memset(dp,0,sizeof(dp));
        
        for(int row=0;row<n;row++)
        {
            for(int i=0;i<col;i++)
            {
                if (matrix[row][i]=='0')
                {
                    dp[i]=0;
                   
                }
                else{
                    dp[i]+=1;
                }
            }
            print(dp,col);
            maximum=max(maximum,stock_span(dp,col));
        }
        return maximum;
    }
    
};