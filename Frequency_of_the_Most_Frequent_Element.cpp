//Time comlexity of O(nlogn).

//Space complexity of O(1).

class Solution {
public:
   // This solution uses a sliding window method.
    int maxFrequency(vector<int>& nums, long k) 
    {
        sort(nums.begin(), nums.end());
      
        const int N = nums.size();
        int left = 0, total = 0;
        //Expands the window by moving the right pointer
        for(int right=0; right<N; right++)
        {
            k += nums[right];
            //Shrinking the window by moving the left pointer when there isn't enough operations to reach the goal.
            while(k<(long) nums[right]*(right-left+1))
            {
                k -=nums[left];
                left++;
            }
            //updates the window to optimal(max) window size
            total = max(total, right-left+1);
        }
        return total;
    }
};
