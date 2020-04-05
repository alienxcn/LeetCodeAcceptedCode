/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return NULL;
        // 插入新链
        Node* ptr = head;
        while(ptr != NULL){
            Node* temp = ptr->next;
            ptr->next = new Node(ptr->val);
            ptr->next->next = temp;
            ptr = ptr->next->next;
        }
        // 修正新链的random
        ptr = head;
        while(ptr != NULL){
            if(ptr->random != NULL){
                ptr->next->random = ptr->random->next;
            } else {
                ptr->next->random = NULL;
            }
            ptr = ptr->next->next;
        }
        // 分离链
        Node* res = head->next;
        ptr = head;
        while(ptr != NULL){
            Node* temp = ptr->next->next;
            Node* temp2 = ptr->next;
            ptr->next = temp;
            if(temp != NULL)
                temp2->next = temp->next;
            else
                temp2->next = NULL;
            ptr = temp;
        }
        /*
        Node* T = res;
        while(T != NULL){
            cout << T->val << " ";
            if(T->random != NULL)
                cout << T->random->val << endl;
            else
                cout << "null" << endl;
            T = T->next;
        }
        */
        return res;
    }
};