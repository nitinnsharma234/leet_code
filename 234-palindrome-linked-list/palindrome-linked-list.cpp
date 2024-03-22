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
ListNode* reverseList(ListNode * head){
    cout<<"Head is "<<head->val<<endl;
    ListNode* prev =nullptr;
    ListNode* curr= head;
    ListNode* frwd=curr;
    while(curr!=nullptr){
        frwd=curr->next;
        curr->next =prev;
        prev=curr;
        curr=frwd;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        // how to get mid you know 
        ListNode* slow =head; 
        ListNode * fast = head; 
        ListNode * prev = nullptr; 
        int len=0;
        while(fast!=nullptr and fast -> next != nullptr ){
                prev=slow;
                len++;
             slow = slow -> next ; 
             fast = fast -> next -> next ;

        }
        if (len==0){
            return true;
        }
       prev->next=nullptr;
         ListNode * root = slow; 
        ListNode * h =reverseList (root);
        while(h!=nullptr && head!=nullptr){
            if (h->val != head->val){
                cout<<h->val <<" ANd "<< head->val<<endl;
                return false;
            }
            h=h->next; head=head->next;
        }
    
    return  true;
    }
    
};
// 1221
// if you can do what make it half and then reverse and then traverse
// to find the mid point we know 
// 1 -> 2 -> 2 -> 1 -> 1
// 