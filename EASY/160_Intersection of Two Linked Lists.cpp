/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 将两个链表的起点同步，然后开始遍历。
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *T = headA;
        int lenA = 0;
        int lenB = 0;
        while(T){
            lenA++;
            T = T->next;
        }
        T = headB;
        while(T){
            lenB++;
            T = T->next;
        }
        if(lenB > lenA){
            int len = lenB - lenA;
            T = headB;
            while(len--){
                T = T->next;
            }
            headB = T;
        }
        if(lenA > lenB){
            int len = lenA - lenB;
            T = headA;
            while(len--){
                T = T->next;
            }
            headA = T;
        }
        while(headA && headB){
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};