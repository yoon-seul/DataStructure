#include <stdio.h>

typedef int Data;
typedef enum { false, true } bool;

typedef struct {
	Data items[100];
	int top;
} Stack;

void initStack(Stack* pstack)
{
	return pstack->top = -1;
}

bool isFull(Stack* pstack)
{
	return pstack->top == 99;
}

bool isEmpty(Stack* pstack)
{
	return pstack->top == -1;
}

Data Peek(Stack* pstack)
{
	if (isEmpty(pstack) == true) {
		exit(1);
	}
	return pstack->items[pstack->top];
}

Data Push(Stack* pstack, Data item)
{
	if (isFull(pstack)) {
		exit(1);
	}

	return pstack->items[++pstack->top] = item;
}

Data Pop(Stack* pstack)
{
	if (isEmpty(pstack))
	{
		exit(1);
	}
	--(pstack->top);
}