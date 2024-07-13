#include<stdio.h>
#include<malloc.h>

	void read(int *ptr, int n)
	{
	
	int i;
	printf("enter the elements\n :");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",ptr+i);
    }
	}
	void mode(int *ptr, int n)
	{
	
     int a[10];
     int lar=0, i,j,k=0,count;
     for(i=0;i<n;i++)
     {
     	count=0;
     	for(j=i;j<n;++j)
     	 {
         if (*(ptr + j) == *(ptr + i))
            ++count;
      }
      if(count>=lar)
      {
      	if(count>lar)
      	k=0;
      	a[k]=*(ptr+1);
      	lar=count;
      	k++;
      	
	  }
	 }
	 if(k==1)
     {
     	printf("the mode is %d", a[0]);
     }
     	else
     	{
     		printf("the modes are:");
     		for(i=0;i<k;i++)
     		printf("%d\t",a[i]);
		 }
		}   
	void main()
	{
		int i, n;
		printf("enter the number of elements:");
		scanf("%d",&n);
		int *ptr=(int *)calloc(n, sizeof(int));
		read(ptr,n);
		mode(ptr,n);	
	}



