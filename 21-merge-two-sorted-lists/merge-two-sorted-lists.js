/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    let ans = new ListNode(-1);
    let ansh=ans;
    while(l1!==null && l2!==null){
        let temp;
        if(l1.val<=l2.val){
        temp=new ListNode(l1.val);
        ans.next=temp;
        ans=ans.next;
        l1=l1.next;
        }else{
        temp=new ListNode(l2.val);
        ans.next=temp;
        ans=ans.next;
        l2=l2.next;
        }
    }
    while(l1){
        let temp=new ListNode(l1.val);
        ans.next=temp;
        ans=ans.next;
        l1=l1.next;
    }
    while(l2){
        let temp=new ListNode(l2.val);
        ans.next=temp;
        ans=ans.next;
        l2=l2.next;
    }
    return ansh.next;

};