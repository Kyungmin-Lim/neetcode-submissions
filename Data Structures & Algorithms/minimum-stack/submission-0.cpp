class MinStack {
private:
    vector<int> st;
    vector<int> min_st; // minimum value stack
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        if(min_st.empty() || val<min_st.back())
        {
            min_st.push_back(val);
        }
        else
        {
            int last = min_st.back();
            min_st.push_back(last);
        }
        
    }
    
    void pop() {
        st.pop_back();
        min_st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return min_st.back();
        
    }
};
