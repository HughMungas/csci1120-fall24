#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "binaryTree.h"

template <class T>
class binarySearchTree : public binaryTreeType<T> {
public:
    void insert(const T& newItem) {
        binaryTreeNode<T>* newNode = new binaryTreeNode<T>{newItem, nullptr, nullptr};

        if (this->root == nullptr) {
            this->root = newNode;
        } else {
            binaryTreeNode<T>* current = this->root;
            binaryTreeNode<T>* trailCurrent = nullptr;

            while (current != nullptr) {
                trailCurrent = current;
                if (newItem < current->info) {
                    current = current->left;
                } else {
                    current = current->right;
                }
            }

            if (newItem < trailCurrent->info) {
                trailCurrent->left = newNode;
            } else {
                trailCurrent->right = newNode;
            }
        }
    }
};

#endif
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "binaryTree.h"

template <class T>
class binarySearchTree : public binaryTreeType<T> {
public:
    void insert(const T& newItem) {
        binaryTreeNode<T>* newNode = new binaryTreeNode<T>{newItem, nullptr, nullptr};

        if (this->root == nullptr) {
            this->root = newNode;
        } else {
            binaryTreeNode<T>* current = this->root;
            binaryTreeNode<T>* trailCurrent = nullptr;

            while (current != nullptr) {
                trailCurrent = current;
                if (newItem < current->info) {
                    current = current->left;
                } else {
                    current = current->right;
                }
            }

            if (newItem < trailCurrent->info) {
                trailCurrent->left = newNode;
            } else {
                trailCurrent->right = newNode;
            }
        }
    }
};

#endif
