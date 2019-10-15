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
    ListNode* middleNode(ListNode* head) {
        ListNode* L = head;
        ListNode* R = head;
        while(R->next != NULL && R->next->next != NULL){
            R = R->next->next;
            L = L->next;
        }
        if(R->next == NULL)
            return L;
        else
            return L->next;
    }
};