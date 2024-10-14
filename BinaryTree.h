//
// Created by Ugo WAREMBOURG on 10/10/2024.
//

#ifndef UNTITLED1_BINARYTREE_H
#define UNTITLED1_BINARYTREE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct NodeTree {
    int data;
    struct Node* left;
    struct Node* right;
}NodeTree;

NodeTree* createNode(int data);
void inorderTraversal(struct NodeTree* root);
struct NodeTree* insertNode(struct NodeTree* root, int data);

#endif
