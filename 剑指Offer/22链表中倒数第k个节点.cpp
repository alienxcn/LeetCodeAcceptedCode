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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(head == NULL)
            return NULL;
        ListNode* L = head;
        ListNode* R = head;
        while(k--){
            R = R->next;
        }
        while(R != NULL){
            L = L->next;
            R = R->next;
        }
        return L;
    }
};