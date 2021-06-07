#include<stdio.h>
int sof(int n)
{
    int a=0,b=1,sum=0,temp=0;
     for(int i=0;i<n;i++)
     {
        sum=sum+a;
        temp=a+b;
        a=b;
        b=temp;
     }
   return sum;
}
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("sum of fibonacci seies upto %d terms is %d",a,sof(a));
}