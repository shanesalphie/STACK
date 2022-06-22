#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];
int isfull(){
	if(top==n-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
void findtop(){
	printf("In top position %d \n",top);
	printf("In top value %d \n",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n %d \n",stack[i]);
	}
	
}
void push(int val)
{
	if(isfull()){
		printf("\n Overflow");
	}
	else{
		top++;
		stack[top]=val;
		printf("\n %d pushed \n",stack[top]);
	}
}
void pop(){
	if(isempty()){
		printf("\n Underflow \n");
	}
	else{
		printf("\n %d popped \n",stack[top]);
		stack[top]==-1;
		top--;
	}
}
void main()
{
	int ch,val;
	printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.FINDTOP \n5.EXIT\n");
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter the value:");
				scanf("%d",&val);
				push(val);
			}break;
			case 2:
			{
				pop();
			}break;
			case 3:
			{
				display();
			}break;
			case 4:
			{
				findtop();
			}break;
			case 5:
			{
				printf("\nGoodBye \n");
				exit(0);
			}
			default:
			{
				printf("\nERROR \n");
			}
		}
	}
}	
