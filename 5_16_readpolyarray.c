#include<stdio.h>
int expres[10], coeres[10],  n3;
void read(int e[], int c[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		printf("enter the coff and exponents of the 1st term:");
		else if(i==n-1)
		printf("enter the coeff and exponents of last term:");
		else
		printf("enter the coeff and exponent of next term:");
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
			if(c[i]<0)
		      printf("-%d",-c[i]);
			
			else
				printf("+%d", c[i]);
			}
			
			
			else
			{
			
			if(c[i]>0)
		        printf(" -%dx%d",-c[i], e[i]);
		        else
				printf("+ %dx^%d",c[i], e[i]);
			}
		}
	}
add(int c1[], int e1[], int c2[], int e2[], int n1, n2)
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(e1[i]==e2[i]);
		{
			expres[k]= e1[i];
			coeres[k]=c1[i]+c2[i];
			i++;j++;k++
			}
			else if(e1[i]<e2[j])
			{
				expres[k]=e2[j];
				coeres[k]=c2[j]
				j++;k++;	
			}
			else
			{
				expres[k]=e1[i];
				coeres[k]=c1[i];
				i++;k++;
			}
		}
		if(i<n1)
		{
			while(i<n1)
		{
			expres[k]=e1[i];
			coeres[k]=c1[i];
		}
		}
		else if(j<n2)
		{
			while(j<n2)
			{
				expres[k]=e2[j];
				coeres[k]=c2[j];
				}
		}
		n3=k;
	}
	sort(int e[], int c[], int n)
	{
		int a, i, j;
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				if(e[i]>e[j])
				{
					a=e[i];
					e[i]=e[j];
					e[j]=a;
					a=c[i];
					c[i]=c[j];
					c[j]=a;
				}
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
