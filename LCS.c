#include <stdio.h>
#include <string.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int LCS(char *c1,char *c2,int n1,int n2)
{
	if(n1==0 || n2==0)
		return 0;
	if(c1[n1-1]==c2[n2-1])
	{
		return 1+LCS(c1,c2,n1-1,n2-1);
	}
	else
	{
		return max(LCS(c1,c2,n1,n2-1),LCS(c1,c2,n1-1,n2));
	}
}


int main()
{	
	char c1[50],c2[50];
	int n1,n2;
	printf("Enter the 1st char sequence:");
	scanf("%s",c1);
	printf("Enter the 2nd char sequence:");
	scanf("%s",c2);
	n1=strlen(c1);
	n2=strlen(c2);
	printf("Length of LCS is:%d\n",LCS(c1,c2,n1,n2));
	return 0;
}
