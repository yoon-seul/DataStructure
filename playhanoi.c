//Stack Study by yoonseul at 210719

#include <stdio.h>
#include <stdbool.h>
#define SIZE 9

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
	if (pstack->top == -1)
		return true;
}

int Peek(Stack* pstack)
{
	if (IsEmpty(pstack)) {
		exit(1);
	}
	return pstack->item[pstack->top];
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

int main()
{
	int num;
	int rodA[SIZE], rodB[SIZE], rodC[SIZE];
	char from, to;
	int move;

	scanf_s("%d", &num);

	InitStack(&rodA);
	InitStack(&rodB);
	InitStack(&rodC);

	for (int i = 0; i < num+1; i++) {
		Push(&rodA, i+1);
	}

	while (true) {

		printf("%3c %3c %3c\n", 'A', 'B', 'C');
		for (int i = 0; i < num; i++) {
			printf("%3d %3d %3d\n", rodA[i], rodB[i], rodC[i]);
		}
		scanf_s("%c %c", &from, &to);
		
		if (from == 'q')
			return 0;
		switch (from) {
			case 'A' :
				move = Peek(&rodA);
				Pop(&rodA);
				if (to == 'B') {
					Push(&rodB, move);
				}

		}

	}
}