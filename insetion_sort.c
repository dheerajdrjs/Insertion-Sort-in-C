//insertion sort

#include<stdio.h>

void insertionsort(int arr[], int n);
void printarray(int arr[], int n);

int main()
{
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
	
}

void insertionsort(int arr[],int n)
{
	int key;
	int i,j;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			arr[j]=key;
			j--;
		}
		arr[j+1]=key;
	}
	
}

void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
