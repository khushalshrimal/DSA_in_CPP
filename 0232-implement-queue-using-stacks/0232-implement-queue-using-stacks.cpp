class MyQueue {
public:
stack<int> s1;
stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);  
    }
    
    int pop() {
        int n=s1.size();
        for(int i=0;i<n;i++){
            s2.push(s1.top());
            s1.pop();
        }
        int x=s2.top();
        s2.pop();
        int p=s2.size();
        for(int i=0;i<p;i++){
            s1.push(s2.top());
            s2.pop();
        }
        return x;

        
    }
    
    int peek() {
        int n=s1.size();
        for(int i=0;i<n;i++){
            s2.push(s1.top());
            s1.pop();
        }
        int x=s2.top();
        int p=s2.size();
        for(int i=0;i<p;i++){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
        
    }
    
    bool empty() {
        return s1.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */