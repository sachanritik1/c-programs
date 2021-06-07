#include<stdio.h>
int factorial(int a)
{
	int temp=1;
	for(int i=a;i>0;i--)
	{
		temp=temp*i;
	}
	return temp;
}
void main()
{
	int num;
	printf("enter a no");
	scanf("%d",&num);
	printf("factorial of the number is %d",factorial(num));
}
	
