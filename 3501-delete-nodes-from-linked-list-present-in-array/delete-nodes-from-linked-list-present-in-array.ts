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

function modifiedList(nums: number[], head: ListNode | null): ListNode | null {
     const numsSet = new Set(nums);
    
    // Create dummy node to handle head deletion elegantly
    const dummy = new ListNode(0, head);
    let prev = dummy;
    let curr = head;
    
    while (curr !== null) {
        if (numsSet.has(curr.val)) {
            // Skip current node
            prev.next = curr.next;
        } else {
            // Keep current node, advance prev
            prev = curr;
        }
        curr = curr.next;
    }
    
    return dummy.next;
};