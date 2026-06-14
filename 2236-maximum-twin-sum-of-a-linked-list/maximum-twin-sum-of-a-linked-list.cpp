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
    int pairSum(ListNode* head) {
        vector<int> twin;

        ListNode * start = head ; 
        ListNode* end = head;
            int i =0 ;
        while(start!=NULL &&  end !=NULL ){
                twin.push_back(start->val); 
                start= start->next ; 
                end = end->next->next ;

        }
        int n = twin.size();

        int ans = INT_MIN;
        while(start!=NULL){
            twin[n-1]+=start->val;
            
            start=start->next ;
            ans = max (ans,twin[n-1]);
            n--;
        }
       
        return ans;
    }


};
// you have a singly linked list what u can do is convert it to an array or 