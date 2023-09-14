#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top = NULL; /*Global Variable*/

struct node *createNode(int element){
	struct node *nn;
	nn = (struct node *) malloc(sizeof(struct node));
	nn->data = element;
	nn->next = NULL;
	return nn;
}

void push(int element){
	struct node *nn;
	nn = createNode(element);
	nn->next = top;
	top = nn;
}

void pop(){
  struct node *temp = top;
	if(top == NULL)
		printf("Stack underflow\n");
  	else{
		top = top->next;
        	free(temp);
	}
}
void display(){
  struct node *temp = top;
	if(temp == NULL){
	printf("\n Stack is empty  \n");
	return;
	}
	while(temp != NULL){
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	printf("\n \n");
}
int main(){
	push(5);
	push(6);
	push(7);
	display();
	pop();
	display();
	push(8);
  	display();
	return 0;
}
