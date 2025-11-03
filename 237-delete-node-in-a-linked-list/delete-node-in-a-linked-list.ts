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

/**
 Do not return anything, modify it in-place instead.
 */
function deleteNode(node: ListNode | null): void {
    let prev:(ListNode | null)=node;
    let temp:(ListNode | null)=null;
    node=node.next;
    while(node!=null){
        prev.val=node.val;
        temp=prev;
        prev=node;

        node=node.next;
        // 
    }
    temp.next=null;
};