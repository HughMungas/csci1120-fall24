#include <iostream>
#include "binaryTree.h"
using namespace std;

int main() {
    binaryTreeType<int> tree;

    /
    binaryTreeNode<int>* node1 = new binaryTreeNode<int>{10, nullptr, nullptr};
    binaryTreeNode<int>* node2 = new binaryTreeNode<int>{20, nullptr, nullptr};
    binaryTreeNode<int>* node3 = new binaryTreeNode<int>{30, nullptr, nullptr};
    binaryTreeNode<int>* node4 = new binaryTreeNode<int>{40, nullptr, nullptr};
    binaryTreeNode<int>* node5 = new binaryTreeNode<int>{50, nullptr, nullptr};

    
    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;

    tree.setRoot(node1);

    cout << "Inorder traversal of the tree: ";
    tree.inorderTraversal();
    cout << endl;

    cout << "Number of leaves: " << tree.leavesCount() << endl;

    return 0;
}
