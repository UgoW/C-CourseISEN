
#include "main.h"
#include "LinkedList.h"
#include "Stack.h"
#include "BinaryTree.h"

int main() {

    Node* head = NULL;
    int n = 100;
    for (int i = 1; i <= n; i++) {
        head = AddNode(head, i);
    }

    Node* temp = head;
    for (int i = 1; i < n / 2; i++) {
        temp = temp->next;
    }

    Node* head2 = temp->next;

    temp->next = NULL;

    DisplayNode(head);
    DisplayNode(head2);

    Stack s;
    Student student;
    Student student2;
    student = (Student){"John", 20};
    student2 = (Student){"Jane", 30};
    initStack(&s);

    push(&s, student);
    push(&s, student2);

    printf("Top elt: %s, Age: %d\n", peek(&s).name, peek(&s).age);
    printf("Popped elt: %s, Age: %d\n", pop(&s).name, pop(&s).age);

    NodeTree* root = NULL;

    return 0;


}



