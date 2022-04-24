/*
The solution for power of four can be solved by the natural mathematical properties of logarithms.
If n is a power of 4, then 4^x = n. This can be rewritten as log4 n = x, where x will be an integer if n is a power of 4.
There is another propert where log10 is the base umber which we can use to calculate the power of 4 numbers where by log10/log10=1 .
*/

// Time complexity of O(logn).

class Solution {
    public boolean isPowerOfFour(int num) {
       if (num == 0)
        {
            return false;
        }
  else
  {
        return (Math.log10(num) / Math.log10(4)) % 1 == 0;
    }
}
    
}
