#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head, *ptr, *cur, *temp;
void insert();
void reverse();
void print();

void main()
{
	int choice=0;
	while(choice!=4)
	{
		printf("\n1) Insert node\n2) Reverse the list\n3) Print\n4) Exit\n\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				reverse(head);
				break;
			case 3:
				print();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid input");
		}
	}
}

void insert()
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	temp=head;
	int value;
	printf("\nEnter the Data : ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->next=NULL;		
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
	}
}
void reverse(struct node *cur)
{
	if(cur->next==NULL)
	{
		head=cur;
		printf("\nList is Reversed\n");
		return;
	}
	reverse(cur->next); 
		
	cur->next->next=cur;
	cur->next=NULL;
}
void print()
{
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
