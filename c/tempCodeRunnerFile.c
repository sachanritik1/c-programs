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
int btd(int num)
{
    int rem,i=0,dec=0;
    
    while(num!=0)
    {
            rem=num%10;
            dec+=rem*power(2,i);
            num=num/10;
            i++;
    }
    return dec;
}
int main()
{
    int a;
    printf("enter a binary number");
    scanf("%d",&a);
    printf("decima is %d",btd(a));
    return 0;
}