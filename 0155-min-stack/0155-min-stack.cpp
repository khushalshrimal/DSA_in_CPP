class MinStack {
public:
stack<int> st;
stack<int> getmin;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(getmin.empty() || value<getmin.top()){
            getmin.push(value);
        }
        else{
            getmin.push(getmin.top());
        }
        
    }
    
    void pop() {
        st.pop();
        getmin.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return getmin.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */