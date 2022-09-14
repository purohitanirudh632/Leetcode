class MinStack {
public:
    stack<int> st;
    map<int,int> mp;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        mp[val]++;
    }
    
    void pop() {
        if(mp[st.top()] >1 )
            mp[st.top()]--;
        else
          mp.erase(st.top());
        
          st.pop();
    }
    
    int top() {
        int j = st.top();
        
        return j;
    }
    
    int getMin() { 
        auto it = mp.begin();
        int ans=it->first;
        
        return ans;
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