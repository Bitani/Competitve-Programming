/*
   -This solution for deleting a node from a singly-linked list is the most easiest and simplest one where it just points to the next list and leaves the current data it was holding. 


-Time Complexit of O(1).

*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *(node->next);
    }
};
