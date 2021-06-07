#include<stdio.h>
void main()
{
	int s,b1,b2,d;
	printf("enter your basic salary");
	scanf("%d",&s);
	b1=s*25/100;
	b2=s*15/100;
	d=(s+b1+b2)/10;
	printf("%d is your net salary",s+b1+b2-d);
}