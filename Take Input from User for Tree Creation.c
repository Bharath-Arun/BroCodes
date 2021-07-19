#include<stdio.h>
struct node
{
	int data;
	struct node *left, *right;
};
struct node *create()
{
	int r;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data : ");
	scanf("%d",&r);
	if(r==0)
	{
		return 0;
	}
	newnode->data=r;
	printf("\nEnter the left child of %d : ",r);
	newnode->left=create();
	printf("\nEnter the right child of %d : ",r);
	newnode->right=create();
	return newnode;
}
void main()
{
	int result;
	struct node *tree1;
	struct node *tree2;
	tree1=create();
}

