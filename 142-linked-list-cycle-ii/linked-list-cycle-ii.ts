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

function detectCycle(head: ListNode | null): ListNode | null {
    if (head == null) return head;

    let fast: ListNode | null = head;
    let slow: ListNode | null = head;
    let cycle: boolean = false;
    while (fast != null && fast.next != null) {
        fast = fast.next.next;
        slow = slow.next;
        if (fast == slow) {
            cycle = true;
            break;
        };
    }
    if (!cycle) return null;
    while (fast != null && fast != head) {
        head = head.next;
        fast = fast.next;
    }
    return fast;
};