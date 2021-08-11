#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	int data;
	struct treenode *left, *right;
};

struct Queue{
	struct Qnode *front, *rear;
};

struct Qnode
{
	int data;
	struct Qnode *next;
};

struct Qnode *treecurrent(int k)
{
	struct Qnode *cur=(struct Qnode*)malloc(sizeof(struct Qnode));
	cur->data=k;
	cur->next=NULL;
}

struct treenode *create()
{
	int r;
	struct treenode *newtreenode;
	newtreenode=(struct treenode *)malloc(sizeof(struct treenode));
	printf("\nEnter data (0 for NULL) : ");
	scanf("%d",&r);
	if(r==0)
	{
		return 0;
	}
	newtreenode->data=r;
	printf("\nEnter the left child of %d : ",r);
	newtreenode->left=create();
	printf("\nEnter the right child of %d : ",r);
	newtreenode->right=create();
	return newtreenode;
}

struct Queue *Qcreate()
{
	struct Queue *queue;
	queue=(struct Qnode *)malloc(sizeof(struct Qnode));	
	queue->front=queue->rear=NULL;
	
	return queue;
}

void main()
{
	int result;
	struct treenode *tree;
	tree=create();
	levelOrderTraversal(tree);
}

void levelOrderTraversal(struct treenode *tree)
{

	struct treenode *current=tree;
	struct Queue *queue=Qcreate();
	while(current)
	{
		printf("%d ",current->data);
		if(current->left)
		{
			push(queue, current->left);	
		}	
		if(current->right)
		{
			push(queue, current->right);
		}
		current=pop(queue);
	}	
}


void push(struct Queue *queue, int rear)
{
	struct Qnode *temp=treecurrent(rear);
	if(queue->rear==NULL)
	{
		queue->front=queue->rear=temp;
		return;
	}
	queue->rear->next=temp;
	queue->rear=temp;
}

int pop(struct Queue *queue)
{
	int value=0;
		if(queue->front==NULL)
			return 0;
		else
		{
			struct Qnode *temp=queue->front;
			value=queue->front->data;
			queue->front=queue->front->next;
		
			if(queue->front==NULL)
				queue->rear=NULL;
			free(temp);
		}
		return value;
		
}
