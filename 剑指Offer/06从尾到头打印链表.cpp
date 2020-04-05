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
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        if(head == NULL){
            return res;
        }
        while(head != NULL){
            res.push_back(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

// 递归
class Solution {
public:
    void func(ListNode* head, vector<int>& res){
        if(head == NULL)
            return;
        func(head->next, res);
        res.push_back(head->val);
    }
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        if(head == NULL){
            return res;
        }
        func(head, res);
        return res;
    }
};