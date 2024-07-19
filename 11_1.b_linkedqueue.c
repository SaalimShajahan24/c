#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node queue;
enum op{ENQUEUE=1, DEQUEUE, EXIT};
queue *f=NULL,*r=NULL;
 void enqueue(int e)
 {
 	queue *t=(queue*)malloc(sizeof(queue));
 	t->data=e;
 	t->next=NULL;
 	if(f==NULL)
 	{
 		f=t;
 		r=t;
	 }
	 else
	 {
	 	r->next=t;
	 	r=t;
	 }
 }
 void dequeue()
 {
 if(f==NULL)
 {
 printf("\nempty queue");
}
 else
 printf("\n%d", f->data);
 f=f->next;
 if(f==NULL)
 {
 	r=NULL;
 }
}
void processqueue()
{
int ch;
for(ch=menu();ch!=3;ch=menu())
{
	switch(ch)
	{
	case ENQUEUE:
		printf("enter element to be inserted:");
		scanf("%d",&ch);
		enqueue(ch);
		break;
	case DEQUEUE:
		dequeue();
		break;
	}
}
}
int menu()
{
	int ch;
	printf("\nenqueue-1 \ndequeue-2 \nexit-3 \n your choice:");
	scanf("%d",&ch);
	return ch;
	
}
int main()
{
	processqueue();
	return 0;
}
