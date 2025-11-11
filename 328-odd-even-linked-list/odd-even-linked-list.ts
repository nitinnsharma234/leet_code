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

function oddEvenList(head: ListNode | null): ListNode | null {
    let oddHead : ListNode | null= null ;
    let evenHead : ListNode | null= null ;
    let oddRoot : ListNode | null= new ListNode(-1,null) ;
    let evenRoot : ListNode | null= new ListNode(-1,null) ;
    oddHead=oddRoot;
    evenHead=evenRoot;
    let root: ListNode | null = head;
    let i: number =1;
    while(root!=null){

            if(i%2==0){

                evenHead.next =root;
                evenHead=evenHead.next;
                // evenHead.next=null;
            }
            else{

                oddHead.next=root;
                oddHead=oddHead.next;
                // oddHead.next=null;
            }


            i++;
            root=root.next;
    }
    evenHead.next=null;
    oddHead.next=evenRoot.next;
   
    return oddRoot.next;
};