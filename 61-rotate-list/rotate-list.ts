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

function rotateRight(head: ListNode | null, k: number): ListNode | null {
    if(head==null) return null ;
    let len: number =0
    let temp : ListNode | null = head;
    let prev : ListNode | null = null;
    let tail : ListNode | null = null;
    while(temp){
        tail=temp;
        temp=temp.next;
        len++;
    }
    k=k%len;
    if(k==0) return head;
    k= len-k;
    temp = head;

    while(k>0){
        prev=temp;
        temp=temp.next;
        k--;
    }
    if(temp==null)return head;
    prev.next=null;
    tail.next=head;

    return temp;
};