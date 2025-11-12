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

function getIntersectionNode(headA: ListNode | null, headB: ListNode | null): ListNode | null {
    let mp : Map<(ListNode|null),number> = new Map();
    while(headA!=null){
        mp.set(headA,1);
        headA=headA.next;
    }
    while(headB!=null){
        if(mp.get(headB)){
            return headB;
        }
         headB=headB.next;
    }
    return null;
};