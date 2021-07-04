#include <stdio.h>
#include "stack.h"	



int main(){	
	int disk;
	int hanoi[3][9];
	char input[3] = { 0,0,0 };
	int moveDisk;

	for (int i = 0; i < 9; i++) {
		hanoi[0][i] = i + 1;
		hanoi[1][i] = 0;
		hanoi[2][i] = 0;
	}

	printf("Insert the number of disks(1~9): ");
	scanf_s("%d", &disk);

	while (input[0] != 'q') {

		printf("%3c %3c %3c\n", 'A', 'B', 'C');
		for (int i = 0; i < disk; i++) {
			printf("%3d %3d %3d\n", hanoi[0][i], hanoi[1][i], hanoi[2][i]);
		}
			scanf_s("%s", &input); //disk 이동 받기

		if (input[0] == 'q') {
			return 0;
		}
		else {
			if (input[0] == 'A') {
				for (int i = 0; peek(hanoi[0][i])!='\0'; i++) {
					moveDisk = peek(hanoi[0][i]);
				}
			}
			if (input[0] == 'B') {
				for (int i = 0; peek(hanoi[1][i]) != '\0'; i++) {
					moveDisk = peek(hanoi[1][i]);
				}
			}
			if (input[0] == 'C') {
				for (int i = 0; peek(hanoi[2][i]) != '\0'; i++) {
					moveDisk = peek(hanoi[2][i]);
				}
			}
			if (input[1] == 'A') {
				for (int i = 0; peek(hanoi[0][i]) != '\0'; i++) {
					hanoi[0][i] = moveDisk;
				}
			}
			if (input[1] == 'B') {
				for (int i = 0; peek(hanoi[1][i]) != '\0'; i++) {
					hanoi[1][i] = moveDisk;
				}
			}
			if (input[1] == 'C') {
				for (int i = 0; peek(hanoi[2][i]) != '\0'; i++) {
					hanoi[2][i] = moveDisk;
				}
			}
		}
	}
		
	return 0;
}
