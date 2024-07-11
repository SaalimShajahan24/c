#include<stdio.h>
#include<malloc.h>
int main()
{
	int *ptr;
	int n,i,sum=0;
	float mean;
	printf("enter :");
	scanf("%d",&n);
	printf("enter the numbers:");
    ptr=(int *)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
    	scanf("%d",ptr+i);
    	sum=sum+ *(ptr+i);
    	
	}
	mean=sum/n;
	printf("mean=%f", mean);
	return 0;
}
