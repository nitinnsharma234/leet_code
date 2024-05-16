class MinStack {
public:

stack <int> st ;
deque<int>dq;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(dq.empty() or  val<=dq.back()) {
          dq.push_back(val);
        }
    }
    
    void pop() {
        int x= st.top();
        st.pop();
        if(!dq.empty() and x==dq.back()){
            dq.pop_back();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
      //  return 1 ;
        return dq.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */