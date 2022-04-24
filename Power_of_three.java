/*
The solution for power of three can be solved by the natural mathematical properties of logarithms.

If n is a power of 3, then 3^x = n. This can be rewritten as log3 n = x, where x will be an integer if n is a power of 3.
There is another propert where log10 is the base umber which we can use to calculate the power of 3 numbers where log10/log10=1 .

*/

// Time complexity of O(logn).

class Solution {
public boolean isPowerOfThree(int n) {
    if (n == 0)
        {
            return false;
        }
  else
        return (Math.log10(n) / Math.log10(3)) % 1 == 0;
   
    }
}
