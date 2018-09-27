#include <stdio.h>
int main()
{
	int n,ans5=0,ans3=0;
	printf("\nEnter any number greater than 7:");
	scanf("%d",&n);
	while(n)
	{
		if(n%5==0){
			ans5=ans5+n/5;
			n=n-ans5*5;			
		}
		else{
			ans3+=1;
			n=n-3;
		}  
	}
	printf("\n5 rupees stamp required are:%d \n 3 rupees stamp required are:%d\n",ans5,ans3);

}
