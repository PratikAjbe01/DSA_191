/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    let curr=head;
    let len=0;
    while(curr){
        len++;
        curr=curr.next;
    }
    len-=n;
    curr=head;
    temp=new ListNode(0);
    temp.next=head;
    prev=temp;

    for(let i=0;i<len;i++){
        prev=curr;
        curr=curr.next;
    }
    prev.next=curr.next;
    return temp.next;

};