#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void DisplayNode(Node* n);

Node* AddNode(Node* head, int data);

