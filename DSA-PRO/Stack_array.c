#include<stdio.h>
#define MAX 10
int stack[MAX];
int top = -1; /* top of the stack*/

void push(int element){
	if(top >= MAX-1){
		printf("Stack is full\n");
		return;
	}else{
	stack[++top] = element;
	}
}
int pop(){
	if(top < 0){
		printf("Stack underflow\n");
		return 0;
	}
	return stack[top--];
}
void display(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d\t", stack[i]);
	}
	printf("\n");
}
int main(){
    int elem;
	push(5);
	push(6);
    	push(7);
	display();
	elem = pop();
	printf("%d is popped outof stack\n", elem);
	push(8);
    	display();
	return 0;
}
