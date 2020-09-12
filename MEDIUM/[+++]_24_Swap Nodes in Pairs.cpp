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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* next = head->next;
        head->next = swapPairs(next->next);
        next->next = head;
        return next;
    }
};

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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        vector<ListNode*> vec;
        ListNode* ptrL = head;
        ListNode* ptrR = head->next;
        ListNode* start = head->next;

        while (ptrL != NULL) {
            ptrR = ptrL->next;
            if (ptrR == NULL)
                break;
            ListNode* temp = ptrR->next;
            ptrR->next = ptrL;
            vec.push_back(temp);
            ptrL = temp;
        }

        ListNode* ptr = head;
        for (auto item:vec) {
            if (item != NULL) {
                if (item->next != NULL) {
                    ptr->next = item->next;
                    ptr = ptr->next->next;
                } else {
                    ptr->next = item;
                }
            } else {
                ptr->next = NULL;
            }
        }
        return start;
    }
};