#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
 		return 1;
 	}
 	else
 	{
  		return n*fact(n-1);
  	}
}
int main()
{
  	int n;
  	printf("\nEnter the value of the number for which you want to find the factorial:");
  	scanf("%d",&n);
  	printf("\n factorial of %d is %d",n,fact(n));
  	return 0;
 }

