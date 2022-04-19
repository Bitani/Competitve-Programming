
/* This is a counting sort problem that does not require comparison. 
Instead, you create an integer array whose index range covers the entire range of values in your array to sort. 
Each time a value occurs in the original array, you increment the counter at that index. 
At the end, run through your counting array, printing the value of each non-zero valued index that number of times.*/


#include <bits/stdc++.h>

#include <vector>

using namespace std;

vector<int>List;
int main()
{
	int max_num;
	cin >> max_num;
	
	List.resize(100,0);//This initialization resizes our input after the max num we entered so that our input doesn't exceed 100.
	
	for (int i = 0; i != max_num; i++)
	{
		int num;
		cin >> num;
		List[num]++;
	}
	for (int k = 0; k != List.size(); k++)
	{
		cout << List[k]<<" ";
	}
	return 0;
}
