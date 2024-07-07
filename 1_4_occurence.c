#include<stdio.h>

void main()
{
	int a[10], n;
	int i, num, count=0;
	printf("enter limit:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d", &a[i]);
    }

	printf("the elements are:\n");
	for(i=0;i<n;i++)
	{
	printf("%d", a[i]);
    }
    printf("enter the number to be searched:\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
    	if(a[i]==num)
    	{
    		printf("element is found at position:%d\n", i);
    		count++;
		}
	
	}
	
		printf("number is %d times", count);
	
}
