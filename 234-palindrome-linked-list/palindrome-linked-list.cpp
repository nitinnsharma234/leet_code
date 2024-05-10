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
    ListNode* reverse(ListNode * head){
        if (head -> next == nullptr or head ==nullptr){
            return head ;
        }
        ListNode * ptr = reverse (head -> next );
        head -> next -> next = head  ; 
        head -> next = nullptr;
        return ptr ;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow =head ;
        ListNode *fast =head;
        ListNode* prev =nullptr; 

        // base case if no head and one head only
        if (head == nullptr or head -> next== nullptr){
            return true ;
        }
        // finding mid pt.
        while(fast !=NULL and fast -> next != nullptr){
            fast = fast -> next -> next ; 
            prev = slow ;
            slow = slow-> next ;
        }
        prev -> next = nullptr;
        // reversing the n/2 LL 
        ListNode * head2 = reverse (slow);
         

        while (head != nullptr and head2 != nullptr){
            if (head -> val != head2->val){
                return false;
            }
            head = head -> next ; 
            head2 = head2 -> next ;
        }
        return true ;
    }
};

