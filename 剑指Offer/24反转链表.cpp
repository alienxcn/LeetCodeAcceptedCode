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
    ListNode* B = new ListNode(0);
    void func(ListNode* A){
        if(A == NULL)
            return;
        func(A->next);
        B->next = new ListNode(A->val);
        B = B->next;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = B;
        func(head);
        return temp->next;
    }
};