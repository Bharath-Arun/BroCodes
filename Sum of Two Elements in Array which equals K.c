#include<stdio.h>
int main()
{
	int arr[100];
	int i,j,n,k;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Sum value :");
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==k)
			{
				printf("%d,%d",i,j);
			}
		}
	}
}
