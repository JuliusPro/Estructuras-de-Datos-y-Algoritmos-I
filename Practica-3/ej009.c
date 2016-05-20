#include <stdio.h>
#include <stdlib.h>
#define MAX_HEAP 2016

typedef struct _BHeap {
	int data[MAX_HEAP];
	int nelems;
} BHeap;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

BHeap * bheap_create(){
	BHeap * nuevo = (BHeap *) malloc(sizeof(BHeap)); 
	nuevo->nelems = 0;
	return nuevo;
}

int bheap_minimum(BHeap * B){
	return B->data[1];
}

void bheap_erase_minimum(BHeap * B){
	swap(&B->data[1], &B->data[ B->nelems ]);
	B->nelems--;
	
	int pos = 1, mn, id;
	
	while(1){
		mn = B->data[pos];
		id = pos;
		if(pos * 2 <= B->nelems){
			if( B->data[pos * 2] < mn ){
				mn = B->data[pos * 2];
				id = pos * 2;
			}
		}
		if(pos * 2 + 1 <= B->nelems){
			if( B->data[pos * 2 + 1] < mn ){
				mn = B->data[pos * 2 + 1];
				id = pos * 2 + 1;
			}
		}
		if(id != pos){
			swap(&B->data[pos], &B->data[id]);
			pos = id;
		} else break;
	}
	
}

void bheap_insert(BHeap * B, int data){
	B->data[ ++B->nelems ] = data;
	int pos = B->nelems;
	
	while(pos > 1 && B->data[pos / 2] > B->data[pos]){
		swap(&B->data[pos / 2], &B->data[pos]);
		pos /= 2;
	}
}

void bheap_print(BHeap * B){
	int i;
	for(i = 1; i <= B->nelems; i++){
		if(i != 1) printf(" ");
		printf("%d", B->data[i]);
	}
	puts("");
}

void bheap_destroy(BHeap * B){
	free(B);
}

int main(){
	BHeap * B = bheap_create();
	bheap_insert(B, 3);
	bheap_print(B);
	bheap_insert(B, 5);
	bheap_print(B);
	bheap_insert(B, 4);
	bheap_print(B);
	bheap_insert(B, 9);
	bheap_print(B);
	bheap_insert(B, 6);
	bheap_print(B);
	bheap_insert(B, 2);
	bheap_print(B);
	int k = 0, A[100];
	while(B->nelems > 1){
		A[k++] = bheap_minimum(B);
		bheap_erase_minimum(B);
		bheap_print(B);
	}
	printf("A: ");
	int i;
	for(i = 0; i < k; i++){
		printf("%d ", A[i]);
	}
	puts("");
	bheap_destroy(B);
	return 0;
}
