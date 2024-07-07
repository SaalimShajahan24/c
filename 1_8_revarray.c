#include<stdio.h>
void revarray(int a[],int n)
{
	int i;
	if(n>0)
	{
		i=n-1;
		printf("%d\n",a[i]);
		revarray(a,i);
	}
return;
}
int main()
{
	int n,j;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[j]);
    }
    printf("reverse of an array:");
    revarray(a,n);
    return 0;
}
