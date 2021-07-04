#include <stdio.h>
#include "stack.h"	



int main() {
	int disk;
	int hanoi[3][9];
	char input[4];
	int moveDisk;
	int destDisk;

	for (int i = 0; i < 9; i++) {
		hanoi[0][i] = i + 1;
		hanoi[1][i] = NULL;
		hanoi[2][i] = NULL;
	}

	printf("Insert the number of disks(1~9): ");
	scanf_s("%d", &disk);

	while (input[0] != 'q') {

		printf("%3c %3c %3c\n", 'A', 'B', 'C');
		for (int i = 0; i < disk; i++) {
			printf("%3d %3d %3d\n", hanoi[0][i], hanoi[1][i], hanoi[2][i]);
		}
		fgets(input, 10, stdin); //disk 이동 받기

		if (input[0] == 'q') {
			return 0;
		}

		if (input[0] == 'A') {
			moveDisk = peek(hanoi[0]);
			pop(hanoi[0]);
			if (input[2] == 'B') {
				push(hanoi[1], moveDisk);
			}
			if (input[2] == 'C') {
				push(hanoi[2], moveDisk);
			}
		}
		if (input[0] == 'B') {
			moveDisk = peek(hanoi[1]);
			pop(hanoi[1]);
			if (input[2] == 'A') {
				push(hanoi[0], moveDisk);
			}
			if (input[2] == 'C') {
				push(hanoi[2], moveDisk);
			}
		}
		if (input[0] == 'C') {
			moveDisk = peek(hanoi[2]);
			pop(hanoi[2]);
			if (input[2] == 'A') {
				push(hanoi[0], moveDisk);
			}
			if (input[2] == 'A') {
				push(hanoi[1], moveDisk);
			}
		}
		
	}
	return 0;
}
