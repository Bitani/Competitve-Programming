//Time complexity of O(n).

// Space complexity of O(n).

class MinStack {
public:
    stack<pair<int,int>> st; //using just one stack to maintain 2 states.
    
    void push(int n) 
    {
        int minimum = n;
        
        if(!st.empty())
        {
            minimum = min(n,st.top().second);
        }
        st.push(make_pair(n,minimum));
    }
    
    void pop() 
    {
        st.pop();
    }
    
    int top() 
    {
        return st.top().first;
    }
    
    int getMin()
    {
        return st.top().second;
    }
};
