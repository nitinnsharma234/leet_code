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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
       ListNode* head = list1; 
       ListNode * root=list2;
        ListNode * temp=NULL;
         ListNode * prev=NULL;
           ListNode * nextt=NULL;
         ListNode * temp2=NULL;
         int i=0;
       while(head!=NULL) {
        if(i==a-1){
            temp=head;
        }
        if(i==b+1){
             temp2=head;
        }
        head=head->next; 
        i++;    
       }
     
         temp->next=list2;
            while(root!=NULL){
                prev=root;
                root=root->next;
            }
            prev->next=temp2;
            return list1;
    }
};