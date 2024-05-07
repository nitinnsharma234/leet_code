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
int carry=0;
void recursive(ListNode* head){
    if (head==nullptr){
        return ;
    }
    recursive(head->next);
    cout<<(head->val*2)%10<<" and "<< carry;
    int sum =head->val*2+carry;
    head->val=sum%10;
    carry=sum/10;
}
    ListNode* doubleIt(ListNode* head) {
        recursive(head);
        if(carry>0){
            ListNode* root =new ListNode(carry,head);
            return root;
        }
        return head;
    }
};