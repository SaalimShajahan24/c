#include<stdio.h>
#include<malloc.h>
void main()
{
	int *a;
	a=(int *)malloc(1* sizeof(int));
	printf("enter a number:");
	scanf("%d",a);
	printf("%d", *a);
	int *b;
	b=(int *)calloc(1 ,sizeof(int));
	printf("enter a number:");
	scanf("%d",b);
	printf("%d", *b);
	free(a);
	free(b);
}
