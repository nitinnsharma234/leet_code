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

function hasCycle(head: ListNode | null): boolean {
    if(!head) return false;
    let fwd:ListNode | null =  head.next;
    while(head!=fwd && fwd!=null && fwd.next!=null){
        console.log("(",head.val,"  >>   ",fwd.val);
        head=head.next;
        fwd=fwd.next.next;
        if(head==fwd) return true;

    }
     if(head==fwd) return true;
    return false;
};