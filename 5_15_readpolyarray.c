#include<stdio.h>
void read(int e[], int c[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		
		printf("enter the coff and exponents of the term:");
		scanf("%d%d",&c[i],&e[i]);
	}
}
	
void display(int e[], int c[], int n)
{
	int i;
	printf("%dx^%d",c[0], e[0]);
	for(i=1;i<n;i++)
	{
		if(e[i]==0)
		
			
			{
				printf("+%d", c[i]);
			}
			
			else
			if(c[i]>0)
			{
				printf("+ %dx^%d",c[i], e[i]);
			}
		}
	}
void main()
{
	int e1[10], e2[10], c1[10], c2[10], n1, n2,i;
	printf("enter number of terms:");
	scanf("%d",&n1);
	printf("enter terms of first polynomial");
	read(e1,c1,n1);
	printf("polynomial:");
	display(e1,c1,n1);
}
