#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	int *arr=NULL;
	int n=0;
	char ch;
	int i;
	int result;
	int max_so_far=INT_MIN;
	int max_end=0;
	arr=(int *)malloc(sizeof(int));
	if(arr==NULL)
	{
		printf("Array allocation failed..");
		return 0;
	}
	printf("Enter the Array Elements : ");
	while(scanf("%d%c",&arr[n],&ch)>0 && ch!='\n')
	{
		n++;
		arr=(int *)realloc(arr,(n+1)*sizeof(int));
	}
	
	for(i=0;i<=n;i++)
	{
		max_end=max_end+arr[i];
		if(max_end<arr[i])
			max_end=arr[i];
		if(max_so_far<max_end)
		{
			max_so_far=max_end;
		}
	}
	printf("Max Sum is %d",max_so_far);
	if(arr)
	{
		free(arr);
		arr=NULL;
	}
	
	
}
