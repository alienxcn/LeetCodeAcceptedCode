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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode H(0);
        H.next = head;
        ListNode* L = &H;
        ListNode* R = &H;
        n++;
        while(n--){
            R = R->next;
        }
        while(R != NULL){
            L = L->next;
            R = R->next;
        }
        L->next = L->next->next;
        return H.next;
    }
};