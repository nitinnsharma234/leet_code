/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function reverseList(head: ListNode | null): ListNode | null {
    if(head==null || head.next==null){
        return head;
    }
   let prev= reverseList(head.next);
   let nextt:ListNode|null = head.next;
   let curr:ListNode|null=head;
   nextt.next=curr;
   curr.next=null;
   return prev;
};