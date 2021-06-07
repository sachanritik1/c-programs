#include<stdio.h>
int factorial(int a)
{
    long int result=1;
    for(int i=1;i<=a;i++)
    {
        result = result*i;
    }
    return result;
}
int main()
{
    long int n,temp=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        temp=temp+factorial(i);
    }
    printf("sum of series is %d",temp);
    return 0;
}