class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int>s;
        int a,b;
        
        for(string n: tokens)
        {
            if(n=="+")
            {
                a= s.top();
                s.pop();
                b= s.top();
                s.pop();
                s.push(a+b);
            }
            
            else if(n=="-")
            {
                a= s.top();
                s.pop();
                b= s.top();
                s.pop();
                s.push(b-a);
            }
            
            else if(n=="*")
            {
                a= s.top();
                s.pop();
                b= s.top();
                s.pop();
                s.push(a*b);
            }
            
            else if(n=="/")
            {
                a= s.top();
                s.pop();
                b= s.top();
                s.pop();
                s.push(b/a);
            }
            
            else
            {
                s.push(stoi(n));
            }
            
        }
        return s.top();
    }
};
