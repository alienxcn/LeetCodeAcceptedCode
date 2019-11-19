// 品，你细品。四指针
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(m == n)
            return head;
        ListNode* L = NULL;
        ListNode* R = NULL;
        ListNode* LL = NULL;
        ListNode* RR = NULL;
        int index = 1;
        ListNode* ptr = head;
        while(ptr != NULL){
            if(index == m-1){
                LL = ptr;
            }
            if(index == m){
                L = ptr;
                RR = ptr->next;
                while(index != n){
                    ListNode* pre = ptr;
                    ptr = RR;
                    index++;
                    RR = RR->next;
                    ptr->next = pre;
                }
                R = ptr;
                ptr = RR;
                break;
            }
            ptr = ptr->next;
            index++;
        }
        if(LL != NULL){
            LL->next = R;
        } else {
            L->next = RR;
            return R;
        }
        L->next = RR;
        return head;
    }
};