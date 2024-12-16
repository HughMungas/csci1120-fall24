#include "binaryTree.h"

int main() {
    binaryTreeType<int> tree;

   
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    // Display the original tree (inorder traversal)
    cout << "Original tree (inorder traversal): ";
    tree.inorderTraversal();

    // Swap subtrees
    tree.swapSubtrees();

    cout << "Tree after swapping subtrees (inorder traversal): ";
    tree.inorderTraversal();

    return 0;
}
