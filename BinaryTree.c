//
// Created by Ugo WAREMBOURG on 10/10/2024.
//

#include "BinaryTree.h"

NodeTree* createNode(int data) {
    NodeTree* node = (NodeTree*)malloc(sizeof(NodeTree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorderTraversal(NodeTree* root) {
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

struct NodeTree* insertNode(NodeTree* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }

    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);

    return root;
}




