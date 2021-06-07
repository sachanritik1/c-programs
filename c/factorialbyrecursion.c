#include<stdio.h>
int factorial(int a)
{
    if (a>1)
    {
        return a*factorial(a-1);
    }
    else return 1;
}
void main()
{
	int num;
	printf("enter a no");
	scanf("%d",&num);
	printf("factorial of the number is %d",factorial(num));
}