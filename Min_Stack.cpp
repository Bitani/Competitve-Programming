// Time Comlexity of O(1).

// Space Complexity of O(1).

class MinStack {
    int top_pt;
    int min_pt;
    int stack[10000];
    int min[10000];
public:
    
    MinStack() {
       top_pt = -1;
       min_pt = -1;
    }
    
    void push(int val) 
    {
        if(top_pt >= 10000)
        {
            return;
        }
        stack[++top_pt]= val;
        if(min_pt>=0)
        {
            if(min[min_pt] > val)
            {
              min[++min_pt] = val;  
            }
              else
                {
                    min[min_pt+1] = min[min_pt];
                    min_pt++;
                }
        }
        else
            min[++min_pt] = val;
    }
    
    void pop() {
        if(top_pt < 0)
        {
            return;
        }
        top_pt -= 1;
        min_pt -= 1; 
    }
    
    int top() {
       return stack[top_pt]; 
    }
    
    int getMin() {
      return min[min_pt];  
    }
};
