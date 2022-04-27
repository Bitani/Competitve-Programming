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
    ListNode* deleteDuplicates(ListNode* head) 
    {
      // declaring a temporary variable so that it starts from the beginning of the list.
        ListNode*temp; 
     if (head==NULL || head->next==NULL)
     {
         return head;
     }
       // Initializing the temp variable as head so that it can iterate through the list inside the loop and chack if there is any duplicates avaliable.
        temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            if(temp->val==temp->next->val) // Checks if the value temp is holding is equal to the next value of the temp.
            {
                temp->next= temp->next->next; 
            }
            else
            {
                temp=temp->next; // This is excuted if there is no duplicate and continues through the loop above to check duplicates. 
            }
        }
        return head;.
    }
};
