#include<stdio.h>
struct poly
{
	int exp;
	int coe;
	
};
read(struct poly p[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the coefficient and exponent: ");
		scanf("%d%d",&p[i].coe,&p[i].exp);
	}
	sort(p,n);
}
sort(struct poly p[], int n)
{
	int a,i,j;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(p[i].exp<p[j].exp)
			{
			
			a=p[i].coe;
			p[i].coe=p[j].coe;
			p[j].coe=a;
			a=p[i].exp;
			p[i].exp=p[j].exp;
			p[j].exp=a;
		}
	}
}
}
void disp(struct poly p[], int n)
{
	int i;
	printf("%dx^%d",p[0].coe, p[0].exp );
	for(i=1;i<n;i++)
	{
		if(p[i].exp==0)
		{
			if(p[i].coe<0)
			{
				printf("-%d", -p[i].coe);
			}
			else
			{
				printf("+%d", +p[i].coe);
			}
		}
		if(p[i].coe<0)
		{
			printf("-%dx^%d", -p[i].coe, p[i].exp);
		}
		else
		{
			printf("+%dx^%d", +p[i].coe,p[i].exp);
		}
	}
}
void main()
{
struct poly p[10];
int n1;
printf("enter number of terms of first polynomial:");
scanf("%d",&n1);
printf("enter the terms of polynomial:\n");
read(p,n1);
printf("the polynomial is:");
disp(p,n1);
}
