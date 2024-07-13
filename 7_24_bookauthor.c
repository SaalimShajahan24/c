#include<stdio.h>
struct author
{
	char name[20];
	char email[20];
};
struct book
{
	char bname[20];
	float bprice;
	struct author details;
};
int main()
{
	struct book b;
	printf("enter the book name");
	scanf("%s", &b.bname); 
	printf(" price of the book");
	scanf("%f", &b.bprice);
	printf("author name");
	scanf("%s", &b.details.name);
	printf("author email");
	scanf("%s", &b.details.email);
	
	printf("Name of the book:%s\n price of the book:%f\n author name:%s\n author email %s\n",b.bname,b.bprice,b.details.name,b.details.email);
	return 0;
}

