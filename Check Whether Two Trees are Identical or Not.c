#include<stdio.h>
struct node
{
	int data;
	struct node *left, *right;
};
int check();
struct node *create()
{
	int r;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter data (0 for NULL) : ");
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
	tree2=create();
	result=check(tree1,tree2);
	if(result==1)
	{
		printf("\nThe trees are IDENTICAL");
	}
	else
	{
		printf("\nThe trees are DIFFERENT");
	}
}
int check(struct node *a, struct node *b)
{
	if(a==NULL && b==NULL)
		return 1;
	else if(a==NULL||b==NULL)
		return 0;
	else if(a->data!=b->data)
		return 0;
	else
	{
		return check(a->left,b->left) && check(a->right,b->right);
	}
}
