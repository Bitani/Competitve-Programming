//Time complexity of O(n)

//Space Complexity: O(1)

#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

void grading_stud()
{
int num, remainder;
    cin >> num;
    for(int i = 0; i < num; i++)
	{
         A:
        int grade;
        cin >> grade;
       if(grade>=0 && grade<=100)
	   {
	   	if (grade < 38) 
		{
            cout << grade << "\n";
            continue;
        }
        
        remainder = grade % 5;
        
        if (5 - remainder < 3)
        
        grade = grade + 5 - remainder;
        cout << grade << "\n";	
		     
		}
		else
		{
			cout<<"Error please enter a numer between 0 and 100"<<endl;
			goto A;
		 } 
        
    }	
}
int main()
{
    grading_stud();
    return 0;
}
