/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    ListNode* solve(ListNode* headA , ListNode* headB , int d){
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        while(d--){
            t2 = t2->next;
        }
        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1 =0;
        int c2=0;

        ListNode* t1=headA;
        ListNode* t2=headB;

        while(t1){
            c1++;
            t1=t1->next;
        }
        while(t2){
            c2++;
            t2=t2->next;
        }

        if(c1 < c2){
          return  solve(headA,headB,c2-c1);
        }else{
         return   solve(headB,headA,c1-c2);
        }

    }

};