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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* L = NULL;
        ListNode* R = head;
        while(R != NULL){
            if(R->val == val){
                if(L == NULL){
                    L = R->next;
                    return L;
                } else {
                    L->next = R->next;
                }
                break;
            } else {
                L = R;
                R = R->next;
            }
        }
        return head;
    }
};