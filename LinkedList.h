

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

#include "Node.h"

class LinkedList{

private:
    int length = 0;
    Node* head;
    Node* tail;
public:
    LinkedList() =default;
    explicit LinkedList(int value);
    void printList();
    ~LinkedList();
    void appendList(int value);
    void deleteLast();
    void getLength();
    void prepend(int value);
    void deleteFirst();
    int get(int index);
};
#endif //LINKED_LIST_LINKEDLIST_H
