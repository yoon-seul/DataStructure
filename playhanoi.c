//Stack Study by yoonseul at 210719

#include <stdio.h>
#include <stdbool.h>
#define SIZE 9
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	int item[SIZE];
	int top;
} Stack;

void InitStack(Stack* pstack)
{
	pstack->top = -1;
}

bool IsFull(Stack* pstack)
{
	return pstack->top == SIZE - 1;
}

bool IsEmpty(Stack* pstack)
{
	return pstack->top == -1; 
}

int Peek(Stack* pstack)
{
	if (IsEmpty(pstack)) {
		return -1;
	}
	return pstack->item[pstack->top];//have to handle to address but handle the value
}

void Push(Stack* pstack, int disk)
{
	if (IsFull(pstack)) {
		exit(1);
	}
	pstack->item[++(pstack->top)] = disk;
}

void Pop(Stack* pstack) {
	if (IsEmpty(pstack)) {
		exit(1);
	}
	--(pstack->top);
}

int exchange(int x);

int main()
{
	int num;
	int rod[3][SIZE];
	char from='0',to;

	scanf("%d", &num);

	InitStack(&rod[0]);
	InitStack(&rod[1]);
	InitStack(&rod[2]);

	for (int i = 0; i < num+1; i++) {
		Push(&rod[0], i+1);
	}
	for (int i = 0; i < num + 1; i++) {
		Push(&rod[1], 0);
	}
	for (int i = 0; i < num + 1; i++) {
		Push(&rod[2], 0);
	}
	

	while (from != 'q') {
		printf("%3c %3c %3c\n", 'A', 'B', 'C');
		for (int i = 0;i<num; i++) {
			printf("%3d %3d %3d\n", rod[0][i], rod[1][i], rod[2][i]);
		}


		scanf("%c %c", &from, &to);

		if (from == 'q')
			return 0;
		
		int peekF, peekT;
		int numF = exchange(from);
		int numT = exchange(to);
		
		peekF = Peek(&rod[numF]);
		peekT = Peek(&rod[numT]);

		if (peekT == -1) {
			Pop(&rod[numF]);
			Push(&rod[numT], peekF);
		}

		else {
			if (peekF > peekT) {
				printf("Invalid Move\n");
			}

			else {
				Pop(&rod[numF]);
				Push(&rod[numT], peekF);
			}
		}

		
	}
}

int exchange(int x)
{
	switch (x) {
		case 'A':
			return 0;
		case 'B':
			return 1;
		case 'C':
			return 2;
	}
}