#include <stdio.h>
#include <string.h>
char *removeDuplicate(char str[],int n)
{
	int index=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(str[i]==str[j])
				break;
			
		}
		if(i==j)
		{
			str[index++]=str[i];
		}
	}
	return str;
	
}
int main()
{
	char str[]="computersystem";
	int n=sizeof(str)/sizeof(str[0]);
	printf("after removing duplication:%s\n",removeDuplicate(str,n));
}
