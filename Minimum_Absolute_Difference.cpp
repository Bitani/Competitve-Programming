// Time Comlexity of O(nlogn).

// Space Complexity of O(n).

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& array) 
    {
    sort(array.begin(),array.end());
        
     int N =array.size();
        
     int abs_diff=INT_MAX;

    for(int i=0;i<N-1;++i)
    {
            abs_diff = min(array[i+1]-array[i],abs_diff);
    }
    
    vector<vector<int>>vec;
    for(int i=0;i<N-1;++i)
    {
        if(array[i+1]-array[i]==abs_diff)
           {
               vec.push_back({array[i],array[i+1]});
           }
    }
    return vec;
  }
};
