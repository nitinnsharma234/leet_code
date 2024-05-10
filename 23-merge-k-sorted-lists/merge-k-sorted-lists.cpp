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
ListNode * mergeTwoLists(ListNode* h1 , ListNode* h2){

    //traversing and comparing nodes of both linked list and setting into a new LL
    ListNode * root=new ListNode(-1) ;
    ListNode * temp=root;
    while(h1 != nullptr and h2 != nullptr){
       
        if(h1->val<h2->val){
            temp ->next =h1;
            h1=h1->next;

        }
        else{
              temp ->next =h2;
            h2=h2->next;
        }
        temp=temp->next;
    }
     if(h1!=nullptr){
            temp->next =h1;
               
        }
         if(h2!=nullptr){
            temp->next =h2;
                

        }
        
    return root->next;

}
// ListNode * helper(vector<ListNode*>& lists){
//     if(n==2){
//         return mergeTwo
//     }
// }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       ListNode* root =nullptr;
       for(int i =0;i<lists.size();i++){
               ListNode * ans= mergeTwoLists(root,lists[i]);
            root=ans;
       }
       return root;
    }
};