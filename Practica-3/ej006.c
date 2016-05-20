#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE 500

typedef struct _AQueue {
	int data[MAX_QUEUE];
	int front, back;
} AQueue;

AQueue * queue_create(){
	AQueue * nuevo = NULL;
	nuevo = malloc(sizeof(AQueue));
	nuevo->front = -1;
	nuevo->back = 0;
	return nuevo;
}

int queue_front(AQueue * Q){
	return Q->data[Q->back]; // se, en la pos back esta el primero que entro...
}

void enqueue(AQueue * Q, int v){
	Q->data[++Q->front] = v;
}

void dequeue(AQueue * Q){
	Q->back++;
}

void queue_print(AQueue * Q){
	int i;
	for(i = Q->back; i <= Q->front; i++){
		printf("%d ", Q->data[i]);
	}
	puts("");
}

void queue_destroy(AQueue * Q){
	free(Q);
}

int main(){
	AQueue * Q = NULL;
	Q = queue_create();
	enqueue(Q, 5);
	queue_print(Q);
	enqueue(Q, 9);
	queue_print(Q);
	enqueue(Q, 14);
	queue_print(Q);
	enqueue(Q, 21);
	queue_print(Q);
	enqueue(Q, 7);
	queue_print(Q);
	enqueue(Q, 19);
	queue_print(Q);
	dequeue(Q);
	queue_print(Q);
	dequeue(Q);
	queue_print(Q);
	printf("Front: %d\n", queue_front(Q));
	return 0;
}
