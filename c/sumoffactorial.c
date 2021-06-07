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
	int num,sum=0;
	printf("enter a no");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
    {
        sum=sum+factorial(i);
    }
    printf("sum of factorials till %d term is %d",num,sum);
}
	