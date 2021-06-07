#include <stdio.h>
int main()
{
    int a=0,b=1,i,n,temp;
    printf("enter the numbers till you want to print fibonacci series ");
    scanf("%d",&n);
    
     for(i=0;i<n;i++)
     {
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
     }
   return 0;
}