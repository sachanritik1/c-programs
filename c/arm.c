#include<stdio.h>
int power(int num, int pow)
{
    int temp=1;
    for(int i=0;i<pow;i++)
    {
        temp=temp*num;
    }
    return temp;
}
int arm(int a)
{
    int temp=0,arr[10],n;
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    for(int i=100;i<=500;i++)
    {
        if(arm(i)==1)
        {
            printf("%d ",i);
        }   
    }
    return 0;
}