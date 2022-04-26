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
// Time Complexity of O(n).

// Space Complexity of O(1).

class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode*temp = head,*temp2 = head;
    
        while(temp!=NULL && temp->next!=NULL)
        {
            temp2 = temp2->next;
            temp = temp->next->next;
        }
        return temp2;
    }
};
