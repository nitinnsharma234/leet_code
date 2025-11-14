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
function reverse(head: ListNode | null) {
    let prev: ListNode | null = null;
    let curr: ListNode | null = head;
    let nextt: ListNode | null = head;
    while (head != null) {
        nextt = head.next;
        head.next = prev;
        prev = head;
        head = nextt;


    }
    return prev;

}
function reverseKGroup(head: ListNode | null, k: number): ListNode | null {
    let root: ListNode | null = new ListNode(-1);
    let n: number = 0;
    let tail : ListNode | null = null;
    while (head != null) {
        let temp: ListNode | null = head;
        let prev: ListNode | null = head;
        n = 0;
        while (n != k && head != null) {
            prev = head;
            head = head.next;
            n++;
        }
        if(n!=k) {
        tail.next=temp;
        return root.next;}
        prev.next = null;
        let reversedHead = reverse(temp)
        if (root.next == null) root.next = reversedHead;
          if(tail!=null)tail.next = reversedHead;
          tail=temp;
        // console.log("Head ",head!=null?head.val:"()"," Prev ",prev.val," temp->" , temp.val," reversedHead",reversedHead.val);
    }
    return root.next;
};