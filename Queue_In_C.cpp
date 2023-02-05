#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE],front=-1,rare=-1;
void enqueue();
void dequeue();
void display();
int main(){
	int c;
	while(1){
		printf("\nPress 1. For Insertion\n");
		printf("Press 2. For Deletion\n");
		printf("Press 3. For Display\n");
		printf("Press 4. For Exit\n");
		printf("Enter your choice:");
		scanf("%d",&c);
		switch(c){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid input\n");
		}
	}
	return 0;
}
void enqueue(){
	int e;
	if(rare==SIZE-1)
		printf("Can not Insert...Queue Overflow\n");
	else if(rare==-1 || front==-1){
		rare=0;
		front=0;
		printf("Enter Element:");
		scanf("%d",&e);
		queue[rare]=e;
		printf("Inserted Element is %d\n",e);
	}
	else{
		rare++;	
		printf("Enter Element:");
		scanf("%d",&e);
		queue[rare]=e;
		printf("Inserted Element is %d\n",e);
	}
}
void dequeue(){
	if(front==-1 || rare==-1){
		printf("Can not Delete anything...Queue Underflow\n");
	}
	else if(front==rare){
		printf("Deleted Element id %d\n",queue[front]);
		rare=front=-1;
	}
	else{
		printf("Deleted Element is %d\n",queue[front]);
		front++;
	}
}
void display(){
	if(front==-1 || rare==-1){
		printf("Can not Display anything...Queue Underflow\n");
	}
	else{
		for(int i=front;i<=rare;i++){
			printf("%d ",queue[i]);
		}
	}
}
