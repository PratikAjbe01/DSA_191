/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    let fast=headA;
    let slow=headB;
   while(fast !==slow){
    fast=fast?fast.next:headB;
    slow=slow?slow.next:headA;
   }
   return fast;
};