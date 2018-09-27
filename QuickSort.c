#include <stdio.h>
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
        
    }
    swap(&arr[high],&arr[i+1]);
    return (i+1);
}
void QuickSort(int arr[],int low,int high)
{
    int q;
    if(low<high)
    {
        q=partition(arr,low,high);
        QuickSort(arr,low,q-1);
        QuickSort(arr,q+1,high);
        
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
	QuickSort(arr,0,n-1);
	printArray(arr,n);
	return 0;
}

