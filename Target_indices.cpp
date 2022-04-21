// The Time complexity is O(nlogn)

// The Space complexity is O(1)

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
     vector<int> result;
        
      sort(begin(nums), end(nums));
   
    for (int pos = 0; pos < nums.size(); pos++)
    {
        if (nums[pos] == target) 
        {
            result.push_back(pos);
        }
    }
     
    return result;
    }
};
