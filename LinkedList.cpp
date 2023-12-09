#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;
LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

void LinkedList::printList() {
    Node* temp = head;
    while(temp){
        cout<<temp->value<<endl;
        temp = temp->next;
    }

}

LinkedList::~LinkedList() {
    Node* temp = head;
    while(head){
        head = head->next;
        delete temp;
        temp = head;
    }
    //head, tail, length gets deleted by default destructor

}

void LinkedList::appendList(int value) {
    Node* newNode = new Node(value);

    if (length == 0){
        tail = newNode;
        head = newNode;
    }

    else{
        tail->next = newNode;
        tail = newNode;

    }
    length += 1;

}

void LinkedList::deleteLast() {
    Node* temp = head;

    if(length==0)return;
    if(length==1) {
        head = nullptr;
        tail = nullptr;
    }
    else{
    Node* pre = head;
    while(temp->next){
        pre = temp;
        temp = temp->next;
    }
    tail = pre;
    tail->next = nullptr;
    }

    length--;
    delete temp;
}

void LinkedList::getLength() {
    cout<<"Length: "<<this->length<<endl;

}

void LinkedList::prepend(int value) {
    auto* newNode = new Node(value);

    if(length==0){
        head = newNode;
        tail = newNode;
    }

    else{
        newNode->next = head;
        head = newNode;
    }

    length++;

}

void LinkedList::deleteFirst() {
    Node* temp = head;

    if(length==0)return;
    if(length==1){
        head = nullptr;
        tail = nullptr;
    }else{
    head = head->next;
    }
    length--;
    delete temp;

}

int LinkedList::get(int index) {
    if(index<0 || index>=length){
        return 0;
    }

    Node* temp = head;
    for (int i = 0;i<index;i++)
        temp = temp->next;

    return temp->value;
}




