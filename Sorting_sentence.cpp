/*
   The idea for this solution of sorting the sentence is by using their ASCII values.

   ASCII starts from 48 where any number that comes 48 is subtracted from it to get it's index so that each word is sorted in the correct format.
        Eg. "is2 sentence4 This1 a3"
->In the above sentence there are numbers associated with each word where if we look at "This1",
     1 comes after "This" where the ASCII value of 1 is 48 so 48-48=0 which will result in the the word "This" tho be placed on the 1st index position.
*/

// Time Complexity of O(n).

// Space complexity of O(1).

class Solution {
public:
    string sortSentence(string sen) {
         int N = sen.size();
        string word;
        vector<string>vec(10); // it's fixed to ten because numbers start from 0 t0 9.
        for(int i = 0; i < N; i++)
        {
            if(sen[i] >= 48 && sen[i] <= 57) // it's implying it's a number where ASCII value starts from 48.
            {
                vec[sen[i]-48] = word + " ";
                word = "";
                i++;
            }
           else
           {
              word += sen[i];  
           }
              
        }
        string total;
        
        for(string str:vec)
        {
           total+=str; 
        }
         
        total.pop_back(); // useful for removing the space after the last step
        
        return total;
    }
};
