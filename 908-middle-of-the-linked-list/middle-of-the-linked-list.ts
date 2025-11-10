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

function middleNode(head: ListNode | null): ListNode | null {
    let curr:ListNode=head;
    let fwd:ListNode=head;
    while(fwd!=null &&  fwd.next!=null){
        curr=curr.next;
        fwd=fwd.next.next;
    }
    return curr;
};