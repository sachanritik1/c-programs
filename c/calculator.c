#include<stdio.h>
#include<stdlib.h>
void main()
{
    int p,q;
	char i;
	printf("enter 2 no \n if you wanted to divide enter d \n if you wanter to multiply enter m \n if you wanted to add enter a \n if you wanted to subtract press s\n");
	scanf("%d",&p);
	scanf("%d",&q);
	scanf(" %c",&i);
	if(i=='a')
	{
		printf("%d",p+q);
	}
	if(i=='s')
	{
		printf("%d",p-q);
	}
	if(i=='m')
	{
		printf("%d",p*q);
	}
	if(i=='d')
	{
		printf("%d",p/q);
	}
}
