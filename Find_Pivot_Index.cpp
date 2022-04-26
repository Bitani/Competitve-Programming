// Time complexity of O(n).

class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
    int right_sum = 0;
        
    for (auto n: nums) 
     {
        right_sum = right_sum + n;
     }

    int left_sum= 0;
        
    for(int i=0; i<nums.size(); i++) 
     {
        right_sum = right_sum - nums[i];
        
        if(left_sum == right_sum) 
         {
            return i;
         }
        left_sum = left_sum + nums[i];
     }

    return -1;
    }
};
