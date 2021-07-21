#include<stdio.h>
int main()
{
	int arr[100];
	int i,l,r,j,n,k;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Sum value :");
	scanf("%d",&k);
	l=0;
	r=n-1;
	while(l<r)
	{
		if(arr[l]+arr[r]<k)
		{
			l++;
		}
		else if(arr[l]+arr[r]>k)
		{
			r--;
		}
		else
		{
			printf("%d,%d",l,r);
			l++;
		}
	}
}
