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
		printf("\nstack[%d]=%d",i,a[i]);
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
	while(1)
	{
		printf("\nEnter 1 for push an element into stack");
		printf("\nEnter 2 for pop an element from stack");
		printf("\nEnter 3 to check whether stack is empty or not");
		printf("\nEnter 4 to display elements of stack");
		printf("\nEnter 5 to exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter a number you want to push:");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				printf("\nElement %d is popped",pop());
				break;
			case 3: 
				isEmpty();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("\nInvalid choice");
		}
	}


}
