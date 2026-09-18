class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int v) : val(v), next(nullptr) {}
    };
    
    Node* head;
    int size;

public:
    MyLinkedList() {
        head = new Node(0);
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* curr = head->next;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index < 0) index = 0;
        
        size++;
        Node* pred = head;
        for (int i = 0; i < index; ++i) {
            pred = pred->next;
        }
        
        Node* to_add = new Node(val);
        to_add->next = pred->next;
        pred->next = to_add;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        
        size--;
        Node* pred = head;
        for (int i = 0; i < index; ++i) {
            pred = pred->next;
        }
        
        Node* to_delete = pred->next;
        pred->next = pred->next->next;
        delete to_delete;
    }
};
