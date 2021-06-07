#include<stdio.h>
int prime(int num)
{
    int result,i;
    for(i=2;i<=(num/2);i++)
    {
        if(num%i!=0)
        {   
            continue;
        }
        else
        {
            return 0;
            break;
        }
    }
    if(i==num/2+1)
    {
        return 1;
    }
}
int main()
{
    int n=300;
    //scanf("%d",&n); //
    for(int i=1;i<=n;i++)
    {
        if(prime(i)==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}