//DataStructure HW2 in SKKU by yoonseul at 20210723 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define MAX_QUEUE 100;

typedef struct queue_t {
	int front, rear;
	int items[100];
}queue_t;

void init_queue(queue_t* pqueue)
{
	pqueue->front = pqueue->rear = 0;
}

bool is_full(queue_t* pqueue)
{
	return pqueue->front == (pqueue->rear + 1) % MAX_QUEUE;
}
bool is_empty(queue_t* pqueue)
{
	return pqueue->front == pqueue->rear;
}
int peek(queue_t* pqueue)
{
	if (is_empty(pqueue))
		return -1;
	return pqueue->items[pqueue -> front];
}
void enqueue(queue_t* pqueue, int item)
{
	if (is_full(pqueue)) {
		return -1;
	}
	pqueue->items[++(pqueue->rear)] = item;
	pqueue->rear = (pqueue->rear + 1) % MAX_QUEUE;
}
void dequeue(queue_t* pqueue)
{
	if (is_empty(pqueue)) {
		return -1;
	}
	pqueue->front = (pqueue->front + 1) % MAX_QUEUE;
}

int main(void)
{
	int guest, capacity, duration;
	int standard[100], fastpass[100];
	int num;
	char pass;

	scanf("%d %d %d", &guest, &capacity, &duration);

	for (int i = 0; i < guest; i++) {
		scanf("%d %c", &num, &pass);
		if (pass == 's') {
			standard[i + 1] = num;
		}
		else {
			fastpass[i + 1] = num;
		}
	}


}