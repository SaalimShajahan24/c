#include<stdio.h>
int a[10], pos=-1;
int insert (int n)
{
	if(pos+1==10)
	{
		printf("array is full\n");
	}
	else
	{
		a[++pos]=n;
	}
	return pos;
	
}
void search()
{
	int i,ser, flag;
	printf("enter element to be searched:");
	scanf("%d",&ser);
	for(i=0;i<pos;i++)
	{
		if(a[i]==ser)
		{
			flag=0;
			printf("element found at %d position",i);
			break;
		}
		if(flag==1)
		
		{
			printf("element not found");
			
		}
	}
}
int delete()
{
	if(pos==-1)
	{
		printf("array is empty");
	
	}
		else
		 {
			printf("deleted element:%d", a[pos--]);
			
		}
		return pos;
	}
	
void sort()
{
	int i,j,temp;
	for(i=0;i<pos;i++)
	{
		for(j=i+1;j<pos;j++)
		{
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
}

void display()
{
	int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	
}
int menu()
{
	int ch;
		printf("insert-1\n search-2\n delete-3\n sort-4\n display-5\n exit-6\n enter your choice:\n");
		scanf("%d",&ch);
		return ch;
		
	}
	void disp()
	{
		int ch;
		for(ch=menu();ch!=6;ch=menu())
		{
			switch(ch)
			{
			
			case 1:
				printf("enter element to be inserted:");
				scanf("%d",&ch);
				insert(ch);
				break;
			case 2:
				search();
				break;
			case 3:
				delete();
				break;
		    case 4:
		    	sort();
		    	break;
		    case 5: 
		        display();
		        break;
			default:
				printf("invalid");
		}
		}
	}

int main()
{
	disp();
	return 0;
}
