#include <stdio.h>
#include "stack.h"	



int main(){	
	int disk;
	int hanoiA[9]; //Hanoi탑의 축
	int hanoiB[9] = { ' ' };
	int hanoiC[9] = { ' ' };
	char input[3] = {'0','0','0'}; 
	int moveDisk;

	printf("Insert the number of disks(1~9): ");
	scanf_s("%d", &disk);

	for (int i = 0; i < disk; i++) {
		hanoiA[i] = i + 1;	//Hanoi탑 A축에 disk 넣기
	}

	while (input[0] != 'q') {

		printf("%3c %3c %3c\n", 'A', 'B', 'C');

		print_stack(hanoiA);

		scanf_s("%c", &input); //disk 이동 받기

		if (input[0] == 'q') {
			return 0;
		}
		else {
			if (input[0] == 'A' && input[2] == 'B') {
				for (int i = 0; peek(hanoiA[i] != ' '); i++) {
					moveDisk = peek(hanoiA[i + 1]);
					pop(hanoiA[i + 1]);
					if (hanoiB[0] == ' ') {
						push(hanoiB[0], moveDisk);
					}
					for (int i = 0; peek(hanoiB[i] != ' '); i++) {
						push(hanoiB[i+1], moveDisk);
					}
					
				}
			}

		}
		
	}
	return 0;
}
