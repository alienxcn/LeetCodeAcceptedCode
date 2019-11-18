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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode temp(INT_MIN);
        ListNode* L = &temp;
        L->next = head;
        ListNode* R = head;
        while(R != NULL){
            if(R->next != NULL && R->val == R->next->val){
                while(R->next != NULL && R->val == R->next->val)
                    R = R->next;
                R = R->next;
                L->next = R;
            } else {
                L->next = R;
                L = L->next;
                R = R->next;
            }
        }
        return temp.next;
    }
};