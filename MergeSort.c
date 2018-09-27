#include <stdio.h>
void Merge(int arr[],int p,int q,int r){
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    
    for(i=0;i<n1;i++)
        L[i]=arr[p+i];
    for(j=0;j<n2;j++)
        R[j]=arr[q+1+j];
        
    i=0;
    j=0;
    k=p;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
        {
            arr[k]=L[i]; 
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }
}
void MergeSort(int arr[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r-1)/2;
        MergeSort(arr,p,q);
        MergeSort(arr,q+1,r);
        Merge(arr,p,q,r);
        
    }
}

void printArray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(void) {
	int n;
	int arr[100];
	printf("Enter the no. of elements you want to sort:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printArray(arr,n);
	MergeSort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}

