//This is the solved answer from hacker rank insertion sort problem part-1.


#include <bits/stdc++.h>
#include <vector>

using namespace std;

void insertion_Sort(vector <int> array) 
{
    int total = array.size();
  
    //it checks if it's empty and proceeds if it's not.
  
    if(total ==0) 
    {
    return;	
	  }
        
    if(total ==1)
    {
    cout<<array[total -1]<<endl;	
	  }   
    int nowpos = array[total -1];
    int i=total -2;
    while(i>=0)
	{
        if(array[i]>=nowpos)
		{
            array[i+1]=array[i];
        }
        else
		{
            array[i+1]=nowpos;
            i--;
        }
        for(int j=0;j<total ;j++)
        
            cout<<array[j];
            cout<<endl;
        if(i==0)
		   {
            array[i]=nowpos;
            for(int j=0;j<total ;j++)
            {
                cout<<array[j];
                cout<<endl;	
			     }
                
        }
        i--;

    }

}


int main() {
   vector <int> totarray;
   
   int array_num;
   cin >> array_num;//we enter the maximum numbers we want to sort
   
 for(int i=0; i<array_num; i++) 
{
   int array_temp;
   cin >> array_temp;
   totarray.push_back(array_temp); 
   /* the vector<int> has a member function called "push_back" that is used to push elements or numbers we inserted
   into a vector from the back and increases the size up to the "array_num" we inserted.*/
}

insertion_Sort(totarray);
   
   return 0;
}
