#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// DATA_TYPE == int, defined in "stack.h"
/* FYI, stack_t is defined as below:
	struct stack_t{
		DATA_TYPE size;
		DATA_TYPE top;
		DATA_TYPE *arr;
	}

*/

 void init_stack(stack_t* s, int size){

	 s->top = -1;

}

 bool is_full(stack_t* s){
	bool res=true;
	
	if (s->top == SIZE_MAX - 1) {
		return res;
	}
}

bool is_empty(stack_t* s){
	bool res = true;
	
	if (s->top == -1) {
		return res;
	}
}

DATA_TYPE peek(stack_t* s){
	DATA_TYPE res=0;
	if (is_empty(s) == true) {
		exit(1);
	}
	else {
		res = s->arr[s->top];
		return res;
	}
}

void push(stack_t* s, DATA_TYPE item){

	if (is_full(s) == true) {
		exit(1);
	}
	else {
		s->arr[++(s->top)] = item;
	}
	

}

void pop(stack_t* s){
	if (is_empty(s) == true) {
		exit(1);
	}
	else {
		--(s->top);
	}
}

void print_stack(stack_t* s){
	if (is_empty(s) == true) {
		exit(1);
	}
	while (s->top++) {
		printf("%3c", peek(s->arr[s->top]));
	}
		
}

/* DO NOT define the main function in this file */
