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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> L;
        stack<ListNode*> R;
        ListNode* head = headA;
        while(head != NULL){
            L.push(head);
            head = head->next;
        }
        head = headB;
        while(head != NULL){
            R.push(head);
            head = head->next;
        }
        ListNode* tmp = NULL;
        while(!L.empty() && !R.empty() && L.top() == R.top()){
            tmp = L.top();
            L.pop();
            R.pop();
        }
        return tmp;
    }
};