#include <stdio.h>
#include <stdbool.h>
bool unique(char str[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	char str[]="abcba";
	int n=sizeof(str)/sizeof(str[0]);
	if(unique(str,n))
	{
		printf("All characters are unique\n");
	}
	else
	{
		printf("All characters are not unique\n");
	}
}
