//Time Complexity of O(n).

//Space Cmplexity of O(1).

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int N = nums.size();
         
    if(N<=1)
       {
           return;
       }
        int next = 0;
        for(int prev = 0; prev < N; prev++)
         {
          if(nums[prev]!=0)
            {
               nums[next] = nums[prev];
                
             if(next!=prev)
               {
                nums[prev] = 0;
               }
              next++;
            }
         }
    }
};
