class StockSpanner {
public:
stack<pair<int,int>> st ;
int i=0;
    StockSpanner() {
        st.push({0,i++});
    }
    
    int next(int price) {
        int x =1;
        while(!st.empty() and st.top().first<=price ){
            x+=st.top().second;
            st.pop();
        }
        
        
        st.push({price,x});
        return x ;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */