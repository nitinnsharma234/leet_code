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

function removeNthFromEnd(head: ListNode | null, n: number): ListNode | null {
    let temp : ListNode | null =head;
    let k:number =0;
    let p:number =n;
    while(n>0&& temp!=null){
        temp=temp.next;
        k++;
        n--;
    }

    if(temp==null)return head.next
    let prev : ListNode | null =null;
    let root : ListNode | null = head;
    while(temp!=null){
        prev=root;
        root=root.next;
        temp=temp.next;

    }
    prev.next=root.next;
    return head;
};