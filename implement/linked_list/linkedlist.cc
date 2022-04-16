struct ListNode {
    int val;
    struct ListNode * next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int v) : val(v),  next(nullptr) {}
    ListNode(int v, struct ListNode *x) : val(v), next(x) {}
};


class LinkedList {

    struct ListNode * head;
    int size;

public:

    LinkedList() {
        head = new ListNode();
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        struct ListNode * trav = head;
        for (int i = 0; i < index; ++i) {
            trav = trav->next;
        }
        return trav->val;
    }

    void addAtHead(int val) {
        struct ListNode * newNode = new struct ListNode(val);
        newNode->next = head->next;
        head->next = newNode;
        size += 1;
    }

    void addAtTail(int val) {
        struct ListNode *trav = head;
        for (int i=0; i < size; ++i) 
            trav = trav->next;
        trav->next = new struct ListNode(val);
        size += 1;
    }   

    void addAtIndex(int index, int val) {
        if (index < 0)
            addAtHead(val);
        else if (index == size)
            addAtTail(val);
        else {
            struct ListNode * trav = head;
            for (int i=0; i < index; i++) 
                trav = trav->next;
            struct ListNode *newNode = new struct ListNode(val);
            newNode->next = trav->next;
            trav->next = newNode;
            size += 1;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size || size == 0)
            return;

        struct ListNode *trav = head;
        struct ListNode *del = nullptr;
        for (int i = 0; i < index; i++)
            trav = trav->next;
        del = trav->next;
        trav->next = del->next;
        delete del;
        size -= 1;
    }

};


/*
struct Listnode
{
    int val;
    struct Listnode *prev;
    struct Listnode *next;
    Listnode() : val(0), prev(nullptr), next(nullptr) {}
    Listnode(int v) : val(v), prev(nullptr), next(nullptr) {}
    Listnode(int v, Listnode *p) : val(v), prev(p), next(nullptr) {}
    Listnode(int v, Listnode *p, Listnode *n) : val(v), prev(p), next(n) {}
};

class MyLinkedList
{
    int size;
    Listnode *head;
    Listnode *tail;

public:
    /** Initialize your data structure here. */
    MyLinkedList()
    {
        size = 0;
        head = new Listnode(0);
        tail = new Listnode(0);
        head->next = tail;
        tail->prev = head;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        Listnode *trav = head;
        if (index + 1 < size - index)
        {
            for (int i = 0; i < index + 1; ++i)
                trav = trav->next;
        }
        else
        {
            trav = tail;
            for (int i = 0; i < size - index; ++i)
                trav = trav->prev;
        }
        return trav->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        Listnode *newNode = new Listnode(val, head, head->next);
        newNode->next->prev = newNode;
        head->next = newNode;
        ++size;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        Listnode *newNode = new Listnode(val, tail->prev, tail);
        tail->prev->next = newNode;
        tail->prev = newNode;
        ++size;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if (index > size)
            return;
        Listnode *trav = head;
        if (index + 1 < size - index)
        {
            for (int i = 0; i < index + 1; ++i)
                trav = trav->next;
        }
        else
        {
            trav = tail;
            for (int i = 0; i < size - index; ++i)
                trav = trav->prev;
        }
        Listnode *newNode = new Listnode(val, trav->prev, trav);
        trav->prev->next = newNode;
        trav->prev = newNode;
        ++size;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;
        Listnode *trav = head;
        if (index + 1 < size - index)
        {
            for (int i = 0; i < index + 1; ++i)
                trav = trav->next;
        }
        else
        {
            trav = tail;
            for (int i = 0; i < size - index; ++i)
                trav = trav->prev;
        }
        trav->prev->next = trav->next;
        trav->next->prev = trav->prev;
        delete trav;
        --size;
    }
};

*/