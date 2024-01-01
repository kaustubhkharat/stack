#ifndef STACK_H
#define STACK_H 1

typedef struct Node{
	void *val;
	struct Node* next;
}Node;

typedef struct{
	Node *top;
}stack;

void init(stack *s);//initialise stack pointer
void push(stack *s, void *val);//push a value in to stack
void *pop(stack *s);//pop a value out of the stack
void *peek(stack s);//see the top of the stack of the stack without removing it

#endif
