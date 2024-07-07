#include<stdio.h>
void read(int matrix[10][10], int r, int c)
{
	int i,j;
	printf("enter the elements:");
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		scanf("%d",&matrix[i][j]);
		}
	}
}
void disp(int matrix[10][10], int r, int c)
{
	int i,j;
	printf("matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		printf("%d",matrix[i][j]);
	}
	printf("\n");
}
}
void add(int a[10][10], int b[10][10], int x[10][10],int r, int c)
{
	int i,j;
	printf("enter the elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]+b[i][j];
		}
	}
}
void sub(int a[10][10], int b[10][10], int x[10][10],int r, int c)
{
	int i,j;
	printf("enter the elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]-b[i][j];
		}
	}
}
void mul(int a[10][10], int b[10][10], int x[10][10],int ra, int ca, int cb)
{
	int i,j,k;
	printf("enter the elements:");
	for(i=0;i<ra;i++)
	{
		for(j=0;j<ca;j++)
		{
			x[i][j]=0;
			for(k=0;k<ca;k++)
			{
			
		x[i][j] += a[i][k] * b[k][j];
		}
	}
 }
}
int main()
{
	int ra, ca, rb, cb;
	int addmat[10][10];
	int submat[10][10];
	int mulmat[10][10];
	int a[10][10],b[10][10];
    printf("Enter the number of rows and columns for Matrix a: ");
    scanf("%d %d", &ra, &ca);
    read(a, ra, ca);
    printf("Enter the number of rows and columns for Matrix b: ");
    scanf("%d %d", &rb, &cb);
    read(b, rb,cb);
        add(a, b, addmat, ra, ca);
        sub(a, b, submat, ra, ca);
        printf("Matrix a:\n");
        disp(a, ra, ca);
        printf("Matrix b:\n");
        disp(b, rb, cb);
        printf("Matrix a + Matrix b:\n");
        disp(addmat, ra, ca);
        printf("Matrix a - Matrix a:\n");
        disp(submat, ra, ca);
        
        mul(a, b, mulmat, ra, ca, cb);
        printf("Matrix a * Matrix b:\n");
        disp(mulmat, ra, cb); 
return 0;
}
