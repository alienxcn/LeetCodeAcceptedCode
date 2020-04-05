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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        ListNode* L = l1;
        ListNode* R = l2;
        if(L->val > R->val){
            L = l2;
            R = l1;
        }
        // 确保L是小段开始
        ListNode* res = L;
        while(R != NULL && L->next != NULL){
            if(L->val <= R->val && R->val <= L->next->val){
                ListNode* tmp = R->next;
                R->next = L->next;
                L->next = R;
                R = tmp;
            } else {
                L = L->next;
            }
        }
        if(R == NULL){
            return res;
        }
        if(L->next == NULL){
            L->next = R;
        }
        return res;
    }
};