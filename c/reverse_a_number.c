#include<stdio.h>
int reverse(int num)
{
    int rev=0;
    while(num!=0)
    {
       rev=rev*10+num%10;
       num=num/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",reverse(n));
    return 0;
}