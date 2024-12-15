#ifndef BINARYTREE_H
#define BINARYTREE_H

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
protected:
    binaryTreeNode<T>* root;

    void destroy(binaryTreeNode<T>*& p);
    int countLeaves(binaryTreeNode<T>* p) const;

public:
    binaryTreeType();
    ~binaryTreeType();

    // Public setter for root
    void setRoot(binaryTreeNode<T>* newRoot);

    // Traversal functions
    void inorderTraversal() const;
    void inorder(binaryTreeNode<T>* p) const;

    // Function to count leaves
    int leavesCount() const;
};

template <class T>
binaryTreeType<T>::binaryTreeType() {
    root = nullptr;
}

template <class T>
binaryTreeType<T>::~binaryTreeType() {
    destroy(root);
}

template <class T>
void binaryTreeType<T>::setRoot(binaryTreeNode<T>* newRoot) {
    root = newRoot;
}

template <class T>
void binaryTreeType<T>::destroy(binaryTreeNode<T>*& p) {
    if (p != nullptr) {
        destroy(p->left);
        destroy(p->right);
        delete p;
        p = nullptr;
    }
}

template <class T>
int binaryTreeType<T>::countLeaves(binaryTreeNode<T>* p) const {
    if (p == nullptr)
        return 0;
    if (p->left == nullptr && p->right == nullptr)
        return 1;
    return countLeaves(p->left) + countLeaves(p->right);
}

template <class T>
int binaryTreeType<T>::leavesCount() const {
    return countLeaves(root);
}

template <class T>
void binaryTreeType<T>::inorderTraversal() const {
    inorder(root);
}

template <class T>
void binaryTreeType<T>::inorder(binaryTreeNode<T>* p) const {
    if (p != nullptr) {
        inorder(p->left);
        cout << p->info << " ";
        inorder(p->right);
    }
}

#endif // BINARYTREE_H
