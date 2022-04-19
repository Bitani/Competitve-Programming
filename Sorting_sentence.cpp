class Solution {
public:
    string sortSentence(string sen) 
    {
        const int Sentence_words = 9;
        
        string total_word[Sentence_words];
        
        string word;
        
        for(int i=0; i<sen.size(); i++)
        {
            char lett_cha = sen[i];
            
            if (lett_cha >='0' && lett_cha <='9')
            {
                total_word[lett_cha-'0'-1] = word;
                word = "";
            }
            else if (lett_cha != ' ') 
            {
                word = word + lett_cha;
            }
        }
        
        for(int i=1; i < Sentence_words; i++)
        {
            if (total_word[i].size() <= 0 ) 
                continue;
            total_word[0] = total_word[0] +" " + total_word[i];
        }
        return total_word[0];
    }
};


//Time complexity: O(n)
//Space complexity: O(n)
