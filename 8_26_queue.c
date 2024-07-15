#include<stdio.h>
int q[5], f=-1, r=-1;
void enqueue()
{
	if(r+1==5)
	{
		printf("queue is full");
		
	}
	else
	{
		if(f==-1)
		{
			f=0;
			
		}
		printf("enter data:");
		scanf("%d",&q[++r]);
	}
}
	void dequeue()
	{
		int i;
		if(f==-1)
		{
			printf("\n queue is empty");
		}
		else
		{
			printf("deleted element is %d",q[f]);
			if(f==r)
			{
			f=r=-1;
		    }
		    else
		    {
		    	for(i=0;i<r;i++)
		    	{
		    		q[i]=q[i+1];
				}
			}
			r--;
		}
	}
	void display()
	{
		int i;
		if(r==-1)
		{
			printf("queue is empty");
		}
		else
		{
		for(i=f;i<=r;i++)
			printf("%d\t",q[i]);
		}
		printf("\n");
	}
int menu()
{
	int ch;
	printf("enter options\n 1-enqueue\n 2-dequeue\n 3-display 4- exit \n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
			
int main()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			default: 
			printf("invalid");				
		}
	}
		return 0;
	}
		
	




