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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        while(head != NULL && head->val == val){
            head = head->next;
        }
        if(head == NULL){
            return head;
        } else {
            ListNode* P = head;
            while(P->next != NULL){
                if(P->next->val == val){
                    P->next = P->next->next;
                } else {
                    P = P->next;
                }
            }
        }
        return head;
    }
};