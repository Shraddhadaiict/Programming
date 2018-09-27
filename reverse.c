#include <stdio.h>
#include <stdlib.h>
int top=-1;
int a[20];
void display()
{
     int x,i;
	x=top;
	for(i=0;i<=top;i++)
	{
		printf("stack[%d]=%d",i,a[i]);
	}
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int isFull(int n)
{
	if(top==n-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void push(int n)
{
	if(isFull(n))
	{
		printf("\nStack is Overflow");
	}
	else
	{
		top++;
		a[top]=n;
	}
}
int pop()
{
	if(isEmpty())
	{
		printf("\nStack Underflow");
	}
	else
	{
		return a[top--]; 
	}

}
int main()
{
	int ch,n;
	
	printf("\nEnter the no. of element you want to push:");
	scanf("%d",&ch);
	for(int i=1;i<=ch;i++)
	{
		printf("\nEnter a number you want to push:");
		scanf("%d",&n);
		push(n);
	}
	printf("\n Elements in reverse order:");
	for(int i=1;i<=ch;i++)
	{
		printf("\n%d",pop());
	}
}
