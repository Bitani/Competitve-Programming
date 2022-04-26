/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Time complexity of O(n).
// Space complexity of O(1).

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
      ListNode *temp,*temp2;
        
        temp=head;
    for (int i = 0; i < n; i++) 
        {
            temp = temp->next;
        }  
    if (!temp)
        {
            return head->next;
        }
   else
        {
           temp2=head;
      while (temp->next) 
        {
            temp = temp->next;
            temp2 = temp2->next;
        }
       
           temp2->next = temp2->next->next;
           return head;    
        } 
    }
};
