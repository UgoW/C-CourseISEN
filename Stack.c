
#include "Stack.h"

#define MAX 100

void initStack(Stack *s) {
    s->top = -1;
}

bool isEmpty(Stack *s) {
    return s->top == -1;
}

bool isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, Student  item) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->items[s->top] = item;
}

Student pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return (Student) {"", -1};
    }
    return s->items[s->top--];
}

Student peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return (Student) {"", -1};
    }
    return s->items[s->top];
}
