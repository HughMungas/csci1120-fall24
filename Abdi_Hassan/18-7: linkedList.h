#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

template <class T>
struct Node {
    T data;
    Node* next;
    Node(T value) : data(value), next(nullptr) {}
};

template <class T>
class LinkedList {
protected:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}
    virtual ~LinkedList() { clear(); }

    void append(T value);  // Add a new node at the end
    void printList() const;  // Print the list
    void clear();  // Clear the list
};

template <class T>
void LinkedList<T>::append(T value) {
    Node<T>* newNode = new Node<T>(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node<T>* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

template <class T>
void LinkedList<T>::printList() const {
    Node<T>* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

template <class T>
void LinkedList<T>::clear() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

#endif
