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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> st;
        while(headA!=nullptr or headB!=nullptr){
            if(headA==headB){
                return headA;
            }
            if(headA!=nullptr and st.count(headA)){
                return headA;
            }
            if(headB!=nullptr and st.count(headB)){
                return headB;
            }
            if(headA){
                st.insert(headA);
                headA=headA->next;
            }
            if(headB){
                  st.insert(headB);
                headB=headB->next;
            }
        }
        return nullptr;
    }
};