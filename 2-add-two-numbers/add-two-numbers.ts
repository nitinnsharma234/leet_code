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

function addTwoNumbers(l1: ListNode | null, l2: ListNode | null): ListNode | null {
    let carry: number = 0;
    let sum: number = 0;
    let root: ListNode | null = new ListNode(-1, null);
    let l3: ListNode | null = root;
    while (l1 != null && l2 != null) {
        sum = l1.val + l2.val + carry;
        carry = Math.floor(sum / 10);
        let temp = new ListNode(sum % 10, null);
        l3.next = temp;
        l3 = l3.next;
        l1 = l1.next;
        l2 = l2.next;
    }
     while (l1 != null){
        sum = l1.val  + carry;
         carry =  Math.floor(sum / 10);
           let temp = new ListNode(sum % 10, null);
        l3.next = temp;
        l3 = l3.next;
         l1 = l1.next;
     }
      while (l2 != null){
        sum = l2.val  + carry;
         carry =  Math.floor(sum / 10);
           let temp = new ListNode(sum % 10, null);
        l3.next = temp;
        l3 = l3.next;
         l2 = l2.next;
     }
     if(carry!=0){
         let temp = new ListNode( Math.floor(carry), null);
          l3.next = temp;
        l3 = l3.next;
     }
     return root.next;

};