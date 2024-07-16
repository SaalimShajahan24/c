#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
display(struct node *head)
{
	if(head==NULL)
	{
		printf("null");
	}
	else
	{
		printf("\n%d",head->data);
	}
}
struct node* front(struct node *head, int value)
{
	struct node *p;
	p=malloc(sizeof(struct node));
	p->data=value;
	p->next=head;
	return (p);
}
end(struct node *head, int value)
{
	struct node *p, *q;
	p=malloc(sizeof(struct node));
	p->data=value;
	p->next=head;
	q=head;
	if(q->next!=NULL)
	{   
		q=q->next;
		
	}
	p=q->next;
}
specified(struct node *a, int value)
{
	 if (a->next != NULL)
	{
		struct node *p;
		p=malloc(sizeof(struct node));
		p->data=value;
		p->next=a->next;
		a->next=p;
	}
	printf(".....");
}
int main()
{
	struct node *prev, *head, *p;
	int n, i;
	printf("enter elements:");
	scanf("%d",&n);
	head=NULL;
	for(i=0;i<n;i++)
	{
		p=malloc(sizeof(struct node));
		scanf("%d", p->data);
		p->next=NULL;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			prev->next=p;
			prev=p;
			head=front(head,10);
			end(head, 20);
			specified(head->next->next,30);
			display(head);
			return 0;
		}
	}
}
