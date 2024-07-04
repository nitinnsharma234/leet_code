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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode * root = new ListNode(-1);
        ListNode* temp=root;
        int sum =0;
        while(head!=nullptr){
            if (head->val==0){
                if(sum!=0){
                    
                
                ListNode* a = new ListNode(sum);
                sum=0;
                temp->next = a; 
                temp =temp->next;
                }
            }
            sum+=head->val;
            head=head->next;
        }
        return root->next;
    }
};