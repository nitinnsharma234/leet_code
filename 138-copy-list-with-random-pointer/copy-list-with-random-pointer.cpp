/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * temp = head ;
        if(head ==NULL){
            return NULL;
        }
        while(temp!=NULL){
            Node * a = new Node(temp->val);
            a->next =temp->next ;
            temp->next =a;
            temp=temp->next ->next ;
        }
        Node* root =head;
        Node * ans =new Node (-1);
      
        ans-> next = root->next ;
        while(head!=NULL){
            Node*copyNode =head->next;
            Node* nextt =copyNode->next;
            //copyNode->next =copyNode->next!=NULL ?copyNode->next->next:NULL ;
            copyNode->random = head ->random!=NULL?head->random->next :NULL;
           // head->next =nextt;
            head = nextt;

        }
        head=root;
         while(head!=NULL){
            Node*copyNode =head->next;
            Node* nextt =copyNode->next;
            copyNode->next =copyNode->next!=NULL ?copyNode->next->next:NULL ;
            //copyNode->random = head ->random!=NULL?head->random->next :NULL;
            head->next =nextt;
            head = nextt;

        }

        return ans->next;
        
    }
};