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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int len = 1;
        ListNode* ptr = head;
        while(ptr->next != NULL){
            ptr = ptr->next;
            len++;
        }
        k = k % len;
        if(k == 0)
            return head;
        ptr->next = head;
        k = len - k - 1;
        ptr = head;
        while(k--){
            ptr = ptr->next;
        }
        head = ptr->next;
        ptr->next = NULL;
        return head;
    }
};