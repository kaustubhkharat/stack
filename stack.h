#ifndef STACK_H
#define STACK_H 1

typedef struct Node{
	void *val;
	struct Node* next;
}Node;

typedef struct{
	Node *top;
}stack;

void init(stack *s);
void push(stack *s, void *val);
void *pop(stack *s);
void *peek(stack s);

#endif
