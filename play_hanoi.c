#include <stdio.h>
#include "stack.h"	



int main(){	
	int disk;
	int hanoiA[9];
	int hanoiB[9];
	int hanoiC[9];
	char input[3] = { 0,0,0 };

	printf("Insert the number of disks(1~9): ");
	scanf_s("%d", &disk);

	for (int i = 0; i < disk; i++) {
		hanoiA[i] = i + 1;
	}

	while (input[0] != 'q') {

		printf("%3c %3c %3c\n", 'A', 'B', 'C');

		for (int i = 0; i < disk; i++) {
			printf("%3d\n", hanoiA[i]);
		}

		scanf_s("%c\n", &input);

		if (input[0] == 'q') {
			return 0;
		}
		else {
			printf("%c %c\n", input[0], input[2]);
		}
		
	}
	return 0;
}
