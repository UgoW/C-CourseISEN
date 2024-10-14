#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Stack structure
*/

typedef struct {
    char *name;
    int age;
} Student;

typedef struct {
    Student *items;
    int top;
} Stack;


/*
 * Initialize stack
 * @param s: Stack pointer
 * @return void
*/
void initStack(Stack *s);

/*
 * Check if stack is empty
 * @param s: Stack pointer
 * @return bool
*/
bool isEmpty(Stack *s);

/*
 * Check if stack is full
 * @param s: Stack pointer
 * @return bool
*/
bool isFull(Stack *s);

/*
 * Push item to stack
 * @param s: Stack pointer
 * @param item: Student
 * @return void
*/
void push(Stack *s, Student item);

/*
 * Pop item from stack
 * @param s: Stack pointer
 * @return Student
*/
Student pop(Stack *s);

/*
 * Peek item from stack
 * @param s: Stack pointer
 * @return Student
*/
Student peek(Stack *s);
