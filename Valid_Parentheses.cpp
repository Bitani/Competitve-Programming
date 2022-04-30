//Time Complexity of O(n).

//Space complexity of O(1).

class Solution {
public:
    bool isValid(string str) {
        stack <char> sta;
        int N = str.length();
      
        for(int i=0;i<N;i++)
        {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                sta.push( str[i]); 
            }
            else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
            {
                if( sta.empty())
                {
                    return false;
                } 
                else if( str[i] == ')' && sta.top() != '(')
                {
                 return false;   
                }
                else if( str[i] == '}' && sta.top() != '{')
                {
                   return false;  
                }
                else if( str[i] == ']' && sta.top() != '[')
                {
                    return false;
                }
                else{
                   sta.pop(); 
                } 
            }
        }
    if( sta.empty()) 
        {
            return true;
        }
    else 
        {
             return false;
        }
    }
};
