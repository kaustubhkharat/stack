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

void init(stack *s){
	s->top=NULL;
	return;
}

void push(stack *s, void *val){
	void *nn;
	nn=malloc(sizeof(node));
	nn->val=val;
	nn->next=s->top;
	s->top=nn;
	return;
}

void *pop(stack *s){
	if (s->top==NULL) return NULL;
	Node *p;
	void *val;
	p=s->top;
	s->top=p->next;
	val=p->val;
	free(p);
	return val;
}

void *peek(stack s){
	if (s.top==NULL) return NULL;
	return s.top->val;
}
