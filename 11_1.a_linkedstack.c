#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
	
};
typedef struct node stack;
enum op{PUSH=1, POP, EXIT};
stack *top=NULL;
void push(int e)
{
	stack *t=(stack*)malloc (sizeof(stack));
	t->data=e;
	t->next=top;
	top=t;
	
}
void pop()
{
if(top==NULL)
printf("empty stack");
else
{
	printf("\n%d", top->data);
	top=top->next;
}
}
int menu()
{
	int ch;
	printf("\n push-1 \n pop-2\n exit-3\n choice:");
	scanf("%d",&ch);
return ch;
}
void processstack()
{
	int ch;
	for(ch=menu();ch!=3;ch=menu())
{

switch(ch)
{
	case PUSH:
		printf("enter element to push:");
		scanf("%d",&ch);
		push(ch);
		break;
	case POP:
		pop();
		break;
}
}
}
int main()
{
	processstack();
	return 0;
}
