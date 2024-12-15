#include <iostream>
#include "binarySearchTree.h"
using namespace std;

int main() {
  
    bSearchTreeType<int> tree;

    
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);


    cout << "In-order traversal: ";
    tree.inorderTraversal();
    cout << endl;

    cout << "Pre-order traversal: ";
    tree.preorderTraversal(); // Should display: 50 30 20 40 70 60 80
    cout << endl;

    cout << "Post-order traversal: ";
    tree.postorderTraversal(); // Should display: 20 40 30 60 80 70 50
    cout << endl;


    int searchValue = 40;
    if (tree.search(searchValue)) {
        cout << "Value " << searchValue << " found in the tree." << endl;
    } else {
        cout << "Value " << searchValue << " not found in the tree." << endl;
    }

    // Delete a value from the tree
    int deleteValue = 30;
    cout << "Deleting value " << deleteValue << " from the tree." << endl;
    tree.deleteNode(deleteValue);


    cout << "In-order traversal after deletion: ";
    tree.inorderTraversal(); // Should display: 20 40 50 60 70 80
    cout << endl;

 
    cout << "Height of the tree: " << tree.treeHeight() << endl;

  
    if (tree.isEmpty()) {
        cout << "The tree is empty." << endl;
    } else {
        cout << "The tree is not empty." << endl;
    }

    return 0;
}
