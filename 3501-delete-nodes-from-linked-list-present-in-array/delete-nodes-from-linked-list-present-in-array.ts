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
    let freq: number [] = new Array(100000).fill(0)

    for(const x of nums){
        freq[x]=1;
    }
    let root :ListNode | null = head;
    let prev:ListNode | null =null;
    while(root!=null){
        let y : number = root.val;
        if(freq[y]){
            if(root==head){
                head=head.next;
               
            }
            else{
                prev.next=root.next;

            }
        }
      else{
          prev=root;
        
      }
      root=root.next;
    }
    return head;
};