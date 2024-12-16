#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
using namespace std;

template <class T>
struct binaryTreeNode {
    T info;
    binaryTreeNode<T>* left;
    binaryTreeNode<T>* right;
};

template <class T>
class binaryTreeType {
public:
    binaryTreeType();
    void swapSubtrees();
    void inorderTraversal() const;
    void insert(const T& newItem);
    ~binaryTreeType();

private:
    binaryTreeNode<T>* root;
    void swapSubtrees(binaryTreeNode<T>*& node);
    void inorderTraversal(binaryTreeNode<T>* node) const;
    void destroyTree(binaryTreeNode<T>*& node);
};

// Constructor
template <class T>
binaryTreeType<T>::binaryTreeType() {
    root = nullptr;
}

// Public swapSubtrees
template <class T>
void binaryTreeType<T>::swapSubtrees() {
    swapSubtrees(root);
}

// Private recursive swapSubtrees
template <class T>
void binaryTreeType<T>::swapSubtrees(binaryTreeNode<T>*& node) {
    if (node != nullptr) {
        swap(node->left, node->right);
        swapSubtrees(node->left);
        swapSubtrees(node->right);
    }
}

// Public inorderTraversal
template <class T>
void binaryTreeType<T>::inorderTraversal() const {
    inorderTraversal(root);
    cout << endl;
}

// Private recursive inorderTraversal
template <class T>
void binaryTreeType<T>::inorderTraversal(binaryTreeNode<T>* node) const {
    if (node != nullptr) {
        inorderTraversal(node->left);
        cout << node->info << " ";
        inorderTraversal(node->right);
    }
}

// Insert function
template <class T>
void binaryTreeType<T>::insert(const T& newItem) {
    binaryTreeNode<T>* newNode = new binaryTreeNode<T>;
    newNode->info = newItem;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (root == nullptr) {
        root = newNode;
    } else {
        binaryTreeNode<T>* current = root;
        binaryTreeNode<T>* trail = nullptr;

        while (current != nullptr) {
            trail = current;
            if (newItem < current->info)
                current = current->left;
            else
                current = current->right;
        }

        if (newItem < trail->info)
            trail->left = newNode;
        else
            trail->right = newNode;
    }
}

// Destructor
template <class T>
binaryTreeType<T>::~binaryTreeType() {
    destroyTree(root);
}

// Private destroyTree
template <class T>
void binaryTreeType<T>::destroyTree(binaryTreeNode<T>*& node) {
    if (node != nullptr) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
        node = nullptr;
    }
}

#endif
