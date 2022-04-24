// Time complexity of O(n).

// Space complexity of O(1) or constant.

class Solution 
{    
public:
    int fib(int num) 
{
   if (num <= 1) 
        {
        return num;
        }    
   else
     return fib(num - 1) + fib(num - 2);    
}
    
};
