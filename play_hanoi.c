#include <stdio.h>
#include "stack.h"	



int main(){	
	int disk;
	int hanoiA[9];
	int hanoiB[9];
	int hanoiC[9];
	char inputA[1] = {0};
	char inputB[1] = { 0 };

	printf("Insert the number of disks(1~9): ");
	scanf_s("%d", &disk);

	for (int i = 0; i < disk; i++) {
		hanoiA[i] = i + 1;
	}

	while (inputA[0] != 'q') {

		printf("%3c %3c %3c\n", 'A', 'B', 'C');

		for (int i = 0; i < disk; i++) {
			printf("%3d\n", hanoiA[i]);
		}

		scanf_s("%s %s\n", &inputA[0], &inputB[0]);

		if (inputA[0] == 'q') {
			return 0;
		}
		else {
			
		}
		
	}
	return 0;
}
