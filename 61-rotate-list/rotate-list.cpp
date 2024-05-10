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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr or head ->next ==nullptr or k==0){
            return head;
        }
        ListNode * slow (head);
        ListNode * fast(head);
        ListNode * tailLeft=nullptr;
        //tail for left side 
        ListNode * tailRight = nullptr ;
        int len =0;
        //tail of right side after splitting
        while(slow!=nullptr){
            slow=slow->next;
            len++;
        }
        k %=len;
        cout<<k<<endl;
        slow=head;
        if(k==0){
            return head;
        }
        while(k>0){
                tailLeft=fast;
                fast = fast->next ;
                k--;
        }
        // this will be tail after rotating
     

        while(fast!=nullptr){
            tailLeft=slow;
            slow=slow->next;
            tailRight=fast;
            fast=fast->next;
        }
        // setting kth node tail to initial head
           tailLeft->next =nullptr;
        cout<<tailLeft->val<<" "<<slow->val<<" "<<tailRight->val;
        tailRight->next =head;
        return slow ;
    }
};
