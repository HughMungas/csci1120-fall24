#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main()
{
    bSearchTreeType<int> tree;

    // Inserting values
    tree.insert(10);
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(15);
    tree.insert(12);
    tree.insert(18);

    cout << "Preorder traversal: ";
    tree.preorderTraversal();
    cout << endl;

    cout << "Inorder traversal: ";
    tree.inorderTraversal();
    cout << endl;

    cout << "Postorder traversal: ";
    tree.postorderTraversal();
    cout << endl;

    // Searching for a value
    cout << "Searching for 7: " << (tree.search(7) ? "Found" : "Not Found") << endl;

    // Deleting a value
    tree.deleteNode(7);
    cout << "Inorder traversal after deletion: ";
    tree.inorderTraversal();
    cout << endl;

    return 0;
}
