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
    ListNode* res = new ListNode(0);
    ListNode* ptr = res;
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        reverseList(head->next);
        if(head != NULL){
            ptr->next = new ListNode(head->val);
            ptr = ptr->next;
        }
        return res->next;
    }
};