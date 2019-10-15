// 可以说是AC得很艰苦
class MyLinkedList {
private:
    struct node{
        int val;
        node* next;
        node(){
            val = 0;
            next = NULL;
        }
        node(int a){
            val = a;
            next = NULL;
        }
        node(int a, node* b){
            val = a;
            next = b;
        }
    };
    node* head;
    node* tail;
    int size;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= size || index < 0)
            return -1;
        node* ptr = head;
        while(index--){
            ptr = ptr->next;
        }
        return ptr->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        size++;
        if(head == NULL){
            head = new node(val, head);
            tail = head;
        } else {
            head = new node(val, head);
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        size++;
        if(tail == NULL){
            tail = new node(val);
            head = tail;
        } else {
            tail->next = new node(val);
            tail = tail->next;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index <= 0){
            addAtHead(val);
        } else if(index < size){
            size++;
            index--;
            node* ptr = head;
            while(index--){
                ptr = ptr->next;
            }
            ptr->next = new node(val, ptr->next);
        } else if(index == size) {
            addAtTail(val);
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index == 0){
            size--;
            node* t = head;
            head = t->next;
            delete t;
        }
        else if(index == size-1){
            size--;
            node* ptr = head;
            index--;
            while(index --){
                ptr = ptr->next;
            }
            if(size == 0){
                delete ptr;
                head = NULL;
                tail = NULL;
            } else {
                delete ptr->next;
                ptr->next = NULL;
                tail = ptr;
            }
        }
        else if(0<index && index<size-1){
            size--;
            node* ptr = head;
            index--;
            while(index--){
                ptr = ptr->next;
            }
            node* t = ptr->next;
            ptr->next = ptr->next->next;
            delete t;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */