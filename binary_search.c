#include<stdio.h>

int b_search(int a[],int x,int l,int r)
{	
	int m;
	if(l==r)
		return l;
	else
	{
		m=(l+r)/2;
		if(x==a[m]){
			return m;
		}
		else if(x<a[m]){
			return b_search(a,x,l,m-1);}
		else{
			return b_search(a,x,m+1,r);}
	}

}

void main()
{
	int a[100];
	int i,x,pos,n;
	
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("\nEnter all n elements:\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter value of x:\n");
	scanf("%d",&x);
	
	pos = b_search(a,x,0,n);
	printf("%d\n",pos+1);
	

}

