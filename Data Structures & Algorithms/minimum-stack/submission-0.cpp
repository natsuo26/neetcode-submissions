class MinStack {
private:
    stack<int> minStack;
    stack<int> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(minStack.empty()){
            minStack.push(val);
        }
        else{
            minStack.push(min(minStack.top(),val));
        }
        st.push(val);
    }
    
    void pop() {
        st.pop();
        minStack.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
