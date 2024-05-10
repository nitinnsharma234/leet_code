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
ListNode * findKthNode (ListNode * root , int k){
    k--;
    while (k>0 and root!=nullptr){
        k--;
        root=root->next;
    }
    
    return root;
}
void reverseKGroup(ListNode * h){
ListNode * prev=NULL;
ListNode * curr=h;
ListNode * nextPtr=curr;
ListNode * root=nullptr;
    while(curr!=nullptr){
        nextPtr = curr->next;
        curr-> next = prev;
        prev = curr;
        curr= nextPtr;
        
    }
    while(curr!=nullptr){
        cout<<curr->val<<"->";
        curr=curr->next;
    }
    cout<<endl;


}
    ListNode* reverseKGroup(ListNode* head, int k) {



        ListNode * temp = head; 
        ListNode * prev=NULL;
        ListNode * nextt = NULL;
        while(temp !=nullptr){
            ListNode * kthNode = findKthNode(temp,k);
            if(kthNode == NULL){
                // connect simply 
                prev-> next = temp;
                break ;

            }
            nextt = kthNode-> next ;
            kthNode -> next =NULL;
            //reverse k group
            reverseKGroup(temp);

            if (temp == head ){
                head =kthNode;
            }
            else {
                prev-> next = kthNode;
            }
            prev=temp;
            temp=nextt;
        }


        return head;
        
    }
};