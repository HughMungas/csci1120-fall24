#ifndef H_binarySearchTree
#define H_binarySearchTree

#include <iostream>
#include "binaryTree.h"

using namespace std;

template <class elemType>
class bSearchTreeType: public binaryTreeType<elemType> {
public:
    bool search(const elemType& searchItem) const;
    void insert(const elemType& insertItem);
    void deleteNode(const elemType& deleteItem);

private:
    void deleteFromTree(binaryTreeNode<elemType>*& p);
};

template <class elemType>
bool bSearchTreeType<elemType>::search(const elemType& searchItem) const {
    binaryTreeNode<elemType>* current = this->root;
    while (current != nullptr) {
        if (current->info == searchItem)
            return true;
        else if (current->info > searchItem)
            current = current->left;
        else
            current = current->right;
    }
    return false;
}

template <class elemType>
void bSearchTreeType<elemType>::insert(const elemType& insertItem) {
    binaryTreeNode<elemType>* newNode = new binaryTreeNode<elemType>;
    newNode->info = insertItem;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (this->root == nullptr) {
        this->root = newNode;
        return;
    }

    binaryTreeNode<elemType>* current = this->root;
    binaryTreeNode<elemType>* trailCurrent = nullptr;

    while (current != nullptr) {
        trailCurrent = current;
        if (current->info == insertItem) {
            cout << "Duplicate item not allowed.\n";
            delete newNode;
            return;
        }
        else if (current->info > insertItem)
            current = current->left;
        else
            current = current->right;
    }

    if (trailCurrent->info > insertItem)
        trailCurrent->left = newNode;
    else
        trailCurrent->right = newNode;
}

template <class elemType>
void bSearchTreeType<elemType>::deleteNode(const elemType& deleteItem) {
    binaryTreeNode<elemType>* current = this->root;
    binaryTreeNode<elemType>* trailCurrent = nullptr;
    bool found = false;

    while (current != nullptr && !found) {
        if (current->info == deleteItem)
            found = true;
        else {
            trailCurrent = current;
            if (current->info > deleteItem)
                current = current->left;
            else
                current = current->right;
        }
    }

    if (!found) {
        cout << "Item not found in the tree.\n";
        return;
    }

    if (current == this->root)
        deleteFromTree(this->root);
    else if (trailCurrent->info > deleteItem)
        deleteFromTree(trailCurrent->left);
    else
        deleteFromTree(trailCurrent->right);
}

template <class elemType>
void bSearchTreeType<elemType>::deleteFromTree(binaryTreeNode<elemType>*& p) {
    binaryTreeNode<elemType>* temp;

    if (p->left == nullptr && p->right == nullptr) {
        temp = p;
        p = nullptr;
        delete temp;
    }
    else if (p->left == nullptr) {
        temp = p;
        p = p->right;
        delete temp;
    }
    else if (p->right == nullptr) {
        temp = p;
        p = p->left;
        delete temp;
    }
    else {
        binaryTreeNode<elemType>* current = p->left;
        binaryTreeNode<elemType>* trailCurrent = nullptr;

        while (current->right != nullptr) {
            trailCurrent = current;
            current = current->right;
        }

        p->info = current->info;

        if (trailCurrent == nullptr)
            p->left = current->left;
        else
            trailCurrent->right = current->left;

        delete current;
    }
}

#endif
