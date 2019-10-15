/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 拆分为两个链表，然后递归链表进行索引。
class Solution {
public:
    ListNode* P = new ListNode(0);
    bool res = true;
    void rev(ListNode* Q){
        if(Q == NULL){
            return;
        }
        rev(Q->next);
        if(P->val != Q->val){
            res = false;
        }
        P = P->next;
    }
    bool isPalindrome(ListNode* head) {
        P = head;
        ListNode* t = head;
        if(t == NULL){
            return true;
        }
        int n = 0;
        while(t){
            t = t->next;
            n++;
        }
        n/=2;
        t = head;
        while(n--){
            t = t->next;
        }
        rev(t);
        return res;
    }
};