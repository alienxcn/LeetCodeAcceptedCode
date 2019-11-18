/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode p1(INT_MIN);
        ListNode p2(INT_MIN);
        ListNode* ptr1 = &p1;
        ListNode* ptr2 = &p2;
        while(head != NULL){
            if(head->val < x){
                ptr1->next = head;
                ptr1 = ptr1->next;
            } else {
                ptr2->next = head;
                ptr2 = ptr2->next;
            }
            head = head->next;
        }
        ptr1->next = p2.next;
        ptr2->next = NULL;
        return p1.next;
    }
};