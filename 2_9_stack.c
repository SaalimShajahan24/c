#include<stdio.h>
int stack[5], top=-1;
void push(int e)
{
	if (top+1==5)
	{
		printf("\n error:stack is full");
	}
	else
	{
		stack[++top]=e;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n error:stack is empty");
	}
	else
	{
		printf("deleted element:%d\n", stack[top--]);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("topmost element in stack is %d\n",stack[top]);
	}
}
int menu()
{
	int ch;
	printf("push-1\n pop-2\n peek-3\n exit-4\n enter your choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch;
	for(ch=menu();ch!=3;ch=menu())
    	switch(ch)
    	{ 
		case 1:
    		printf("enter the element:");
    		scanf("%d",&ch);
    		push(ch);
    		break;
    	case 2:
		    pop();
			break;
	    case 3:
	    	peek();
		default:
		printf("\n error:wrong choice");
		}
	}

int main()
{
	process();
	return 0;
}

