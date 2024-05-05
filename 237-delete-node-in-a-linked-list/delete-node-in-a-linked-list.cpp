/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
         ListNode*nextt=node->next;
          ListNode* prev=nullptr;
        curr=node;

        curr->val =nextt->val;
        curr->next = nextt->next;

        
    }
};


// 1 -> 2-> 3 -> nullptr 
