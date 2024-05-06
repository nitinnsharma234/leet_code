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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* ans=head;


        while(head){

                while(!st.empty() and st.top()->val<head->val){
                    st.pop();

                }
            
            st.push(head);
            head=head->next;
        }
        ListNode* nextt =nullptr;
        while(!st.empty()){
                ans=st.top();
                ans->next=nextt;
                nextt=ans;
                st.pop();
        }
        return ans ;
    }
};
