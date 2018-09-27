#include <stdio.h>
int main()
{
	int n;
	long long int fact=1,i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of number=%lli \n",fact);
	return 0;
}
