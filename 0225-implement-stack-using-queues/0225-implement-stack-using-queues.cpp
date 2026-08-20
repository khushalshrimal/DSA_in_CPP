class MyStack {
    queue<int> d;
    queue<int> d1;
public:
    MyStack() {
    }
    
    void push(int x) {
        d.push(x);
        
    }
    
    int pop() {
        int n=d.size();
        for(int i=0;i<n-1;i++){
            d1.push(d.front());
            d.pop();
        }
        int x=d.front();
        d.pop();
        int p=d1.size();
        for(int i=0;i<p;i++){
            d.push(d1.front());
            d1.pop();
        }
        return x;
    }
    
    int top() {
        int n=d.size();
        for(int i=0;i<n-1;i++){
            d1.push(d.front());
            d.pop();
         } 
         int x=d.front();
         d1.push(d.front());
         d.pop();
         int p=d1.size();
         for(int i=0;i<p;i++){
            d.push(d1.front());
            d1.pop();
         }  
         return x;
    }
    
    bool empty() {
        return d.empty();  
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */