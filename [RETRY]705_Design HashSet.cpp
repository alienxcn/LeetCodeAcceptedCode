class MyHashSet {
private:
    int a[1000010];
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        for(int i=0; i<1000010; i++){
            a[i] = 0;
        }
    }
    
    void add(int key) {
        a[key] = 1;
    }
    
    void remove(int key) {
        a[key] = 0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return a[key] == 1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */