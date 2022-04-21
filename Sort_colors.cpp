/*  
   Constraints
  n == nums.length
  1 <= n <= 300
  nums[i] is either 0, 1, or 2. 
*/

/*
  This color sorting problem is solved using Dutch national flag problem where :
- array[0 to bottom-1] zeroes (red)
- array[bottom to Middle-1] ones (white)
- array[Middle to top-1] unknown
- array[Top to N(size of the array)] twos (blue)
- So whenever 0 is seen it will swap with elelment present at the bottom position.
- Similarly, if 1 is seen then keep it as it is but shrink the unknown range(array[Middle to top-1]) and if 2 is encountered swap it with element at Top Position.

*/

// Time Complexity of O(n) 
// Space Complexity of O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int bottom = 0, middle = 0, top = nums.size()-1;
        while(middle<=top)
        {
            if(nums[middle]==0)
            {
                swap(nums[middle],nums[bottom]);
                bottom++;
                middle++;
            }
            else if(nums[middle]==1)
                middle++;
            
            else
            {
                swap(nums[middle],nums[top]);
                top--;
            }
        }
    }
};
