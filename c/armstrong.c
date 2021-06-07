#include <stdio.h>
int power(int num, int pow)
{
    int temp=1;
    for(int i=0;i<pow;i++)
    {
        temp=temp*num;
    }
    return temp;
}
void main ()
{
    int temp=0,a,arr[10],n;
    printf("enter a number\n");
    scanf("%d",&a);
    n=a;
    for(int i=0;i<10;i++)
    {
        arr[i]=n % 10;
        n=n/10;
    }
    for(int i=0;i<10;i++)
    {
        temp=temp+power(arr[i],3);
    }
    if (temp==a)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("it is not armstrong");
    }
}