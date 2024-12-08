#ifndef UNORDERED_LINKED_LIST_H
#define UNORDERED_LINKED_LIST_H

#include "linkedList.h"

template <class T>
class UnorderedLinkedList : public LinkedList<T> {
public:
    void selectionSort();  // Selection sort algorithm
};

template <class T>
void UnorderedLinkedList<T>::selectionSort() {
    // If the list is empty or has one element, no sorting is needed
    if (this->head == nullptr || this->head->next == nullptr) {
        return;
    }

    Node<T>* current = this->head;

    // Iterate through the list
    while (current != nullptr) {
        // Find the minimum node in the unsorted part of the list
        Node<T>* minNode = current;
        Node<T>* temp = current->next;

        while (temp != nullptr) {
            if (temp->data < minNode->data) {
                minNode = temp;
            }
            temp = temp->next;
        }

        // Swap data between current and minNode
        if (minNode != current) {
            T tempData = current->data;
            current->data = minNode->data;
            minNode->data = tempData;
        }

        // Move to the next node in the list
        current = current->next;
    }
}

#endif
