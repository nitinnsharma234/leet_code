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
function merge(head: ListNode | null): ListNode | null {
    if(head==null)return null;
    let mid: ListNode | null = null;
    let slow: ListNode | null = head;
    let fast: ListNode | null = head;
    let prev : ListNode | null = null;
    while(fast!=null && fast.next!=null){
        fast=fast.next.next; 
        prev=slow;
        slow=slow.next;
    }
    mid =slow;
    // if(fast!=null) mid = slow.next;
     if(prev==null) return head;
    prev.next = null;
    let l1 = merge(head);
    let l2 = merge(mid);
    let l3: ListNode | null = new ListNode(-1, null);
    let root: ListNode | null = l3;
    while (l1 != null && l2 != null) {
        let temp: ListNode | null;
        if (l1.val < l2.val) {

            temp = new ListNode(l1.val, null);
            l1 = l1.next;
        }
        else {
            temp = new ListNode(l2.val, null);
            l2 = l2.next;
        }
        l3.next = temp;
        l3 = l3.next;
    }
    while(l1!=null){
        let temp: ListNode | null= new ListNode(l1.val, null); 
         l3.next = temp;
        l3 = l3.next;
        l1 = l1.next;
    }
     while(l2!=null){
        let temp: ListNode | null= new ListNode(l2.val, null); 
         l3.next = temp;
        l3 = l3.next;
        l2 = l2.next;
    }
    return root.next;

}

function sortList(head: ListNode | null): ListNode | null {
        return merge(head);
};