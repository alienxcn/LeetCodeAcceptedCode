/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 将R串的元素逐个插入到L串。
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* L = l1;
        ListNode* R = l2;
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        if(l1->val > l2->val){
            L = l2;
            R = l1;
        }
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
        if(R == NULL)
            return res;
        if(L->next == NULL){
            L->next = R;
        }
        return res;
    }
};