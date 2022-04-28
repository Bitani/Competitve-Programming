// Time Comlexity of O(n).

// Space Complexity of O(1).

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& array) 
    {
    sort(array.begin(),array.end());
        
     int N =array.size();
        
     long abs_diff=LONG_MAX;

    for(int i=0;i<N-1;i++)
    {
        if(abs(array[i]-array[i+1])<abs_diff)
        {
            abs_diff=abs(array[i]-array[i+1]);
        }
    }
    
    vector<vector<int>>vec;
      
    for(int i=1;i<N;i++)
    {
        if(abs(array[i]-array[i-1]==abs_diff))
           {
               vec.push_back({array[i-1],array[i]});
           }
    }
    return vec;
  }
};
