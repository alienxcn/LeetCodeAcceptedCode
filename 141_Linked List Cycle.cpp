/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 双指针 赛跑原则。
// 假如存在环的话，两个速度不一样的指针总会相遇。
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode *s = head;
        ListNode *q = head;
        s = s->next;
        if(s == NULL){
            return false;
        }
        q = q->next->next;
        
        while(s && q){
            if(s == q){
                return true;
            }
            s = s->next;
            if(q->next == NULL){
                return false;
            }
            q = q->next->next;
        }
        return false;
    }
};