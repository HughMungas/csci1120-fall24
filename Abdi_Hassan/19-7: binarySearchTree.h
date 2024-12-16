#ifndef H_binarySearchTree
#define H_binarySearchTree

#include "binaryTree.h"

template <class elemType>
class bSearchTreeType : public binaryTreeType<elemType>
{
public:
    bool search(const elemType& searchItem) const override;
    void insert(const elemType& insertItem) override;
    void deleteNode(const elemType& deleteItem) override;

private:
    void insert(nodeType<elemType>*& treeRoot, const elemType& insertItem);
    void deleteNode(nodeType<elemType>*& treeRoot, const elemType& deleteItem);
    void deleteFromTree(nodeType<elemType>*& p);
};

template <class elemType>
bool bSearchTreeType<elemType>::search(const elemType& searchItem) const
{
    nodeType<elemType>* current = this->root;
    while (current != nullptr)
    {
        if (current->info == searchItem)
            return true;
        else if (current->info > searchItem)
            current = current->lLink;
        else
            current = current->rLink;
    }
    return false;
}

template <class elemType>
void bSearchTreeType<elemType>::insert(const elemType& insertItem)
{
    insert(this->root, insertItem);
}

template <class elemType>
void bSearchTreeType<elemType>::insert(nodeType<elemType>*& treeRoot, const elemType& insertItem)
{
    if (treeRoot == nullptr)
    {
        treeRoot = new nodeType<elemType>;
        treeRoot->info = insertItem;
        treeRoot->lLink = treeRoot->rLink = nullptr;
    }
    else if (insertItem < treeRoot->info)
        insert(treeRoot->lLink, insertItem);
    else if (insertItem > treeRoot->info)
        insert(treeRoot->rLink, insertItem);
}

template <class elemType>
void bSearchTreeType<elemType>::deleteNode(const elemType& deleteItem)
{
    deleteNode(this->root, deleteItem);
}

template <class elemType>
void bSearchTreeType<elemType>::deleteNode(nodeType<elemType>*& treeRoot, const elemType& deleteItem)
{
    if (treeRoot == nullptr)
        return;

    if (deleteItem < treeRoot->info)
        deleteNode(treeRoot->lLink, deleteItem);
    else if (deleteItem > treeRoot->info)
        deleteNode(treeRoot->rLink, deleteItem);
    else
        deleteFromTree(treeRoot);
}

template <class elemType>
void bSearchTreeType<elemType>::deleteFromTree(nodeType<elemType>*& p)
{
    nodeType<elemType>* tempPtr;
    if (p == nullptr)
        return;
    else if (p->lLink == nullptr)
    {
        tempPtr = p;
        p = p->rLink;
        delete tempPtr;
    }
    else if (p->rLink == nullptr)
    {
        tempPtr = p;
        p = p->lLink;
        delete tempPtr;
    }
    else
    {
        tempPtr = p->lLink;
        while (tempPtr->rLink != nullptr)
            tempPtr = tempPtr->rLink;

        p->info = tempPtr->info;
        deleteNode(p->lLink, tempPtr->info);
    }
}
#endif
