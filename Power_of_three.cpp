class Solution {
public boolean isPowerOfThree(int n) {
   if(n<= 0)
       {
           return false;
       }
        if(n==1)
        {
            return true;
        }
        if(n%3==0)
        {
            n=n/3;
            return isPowerOfThree(n); 
        }
        return false;
    }
    
}
