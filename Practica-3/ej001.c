#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 100

typedef struct _AStack{
	int data[MAX_STACK];
	int back;
} AStack;

AStack * astack_create(){
	AStack * nuevo = malloc(sizeof(AStack));
	nuevo->back = -1;
	return nuevo;
}

int astack_top(AStack * stk){
	return stk->data[stk->back];
}

void astack_push(AStack * stk, int val){
	stk->data[++stk->back] = val;
}

void astack_pop(AStack * stk){
	--stk->back;
}

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void astack_reverse(AStack * stk){
	int k = stk->back, i;
	for(i = 0; i <= k / 2; i++){
		swap(&stk->data[i], &stk->data[k - i]);
	}
}

void astack_print(AStack * stk){
	int k = stk->back, i;
	for(i = k; i >= 0; i--){
		printf("%d ", stk->data[i]);
	}
	puts("");
}

void astack_destroy(AStack * stk){
	free(stk);
}

int main(){
	AStack * pila = NULL;
	pila = astack_create();
	astack_push(pila, 5);
	astack_push(pila, 1);
	astack_push(pila, 7);
	astack_push(pila, 4);
	astack_print(pila);
	astack_reverse(pila);
	astack_print(pila);
	astack_destroy(pila);
	return 0;
}
