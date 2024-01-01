#include <stdlib.h>
#include "stack.h"

/*

typedef struct Node{
	void *val;
	struct Node* next;
}Node;

typedef struct{
	Node *top;
}stack;

*/

// initialise the stack top pointer
void init(stack *s){
	s->top=NULL;
	return;
}

void push(stack *s, void *val){
	Node *nn;
	nn=(Node*)malloc(sizeof(Node));
	if (nn==NULL) return; // malloc failed
	nn->val=val;
	nn->next=s->top;
	s->top=nn;
	return;
}

void *pop(stack *s){
	if (s->top==NULL) return NULL;//empty stack returns NULL
	Node *p;
	void *val;
	p=s->top;
	s->top=p->next;
	val=p->val;
	free(p);
	return val;
}

void *peek(stack s){
	if (s.top==NULL) return NULL;// empty stack returns NULL
	return s.top->val;
}
