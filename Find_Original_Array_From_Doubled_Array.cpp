
//Time Complexity of O(nlogn).

// Space complexity of O(n)

class Solution {
 public:
 vector<int> findOriginalArray(vector<int>& changed)
 {
      sort(changed.begin(), changed.end());
     
        unordered_map<int, int> ves;
     
        int N = changed.size();
     
        vector<int> total;
     
         if (N%2 != 0) 
         {
             return total;
         }
     
         for (int n : changed) 
         {
             ves[n]++;
         }
       
        for (int n : changed) 
        {
            if (ves[n] == 0) 
            {
                continue;
            }
            
            total.push_back(n);
            ves[n]--;
            
            if (ves[2*n] == 0) 
            {
                return vector<int>();
            }
            ves[2*n]--;
        }
        return total;
    }
};
