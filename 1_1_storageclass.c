#include<stdio.h>
int a=1;
void main()
{
	int c=3;
	static int i=1;
	register int x=10;
	printf("global variable=%d\n", a);
	printf("local variable=%d\n",c);
	printf("static variable=%d\n", i);
	printf("register variable=%d", x);
}

