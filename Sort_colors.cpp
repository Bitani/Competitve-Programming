

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
