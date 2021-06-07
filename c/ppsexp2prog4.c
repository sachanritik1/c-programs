#include<stdio.h >
void main()
{
    int n,x,b,a,y;
    printf("enter the value of n,a,b,x");
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&x);
    
    if (n==1)
    {
        /* code */
        y=a*(x%b );
        printf("value of y is equal to %d",y);
    }
    if (n==2)
    {
        /* code */
        y=2*(a*x+b);
        printf("value of y is equal to %d",y);
    }
    if (n==3)
    {
        /* code */
        y=a-b*x;
        printf("value of y is equal to %d",y);
    }
    if (n==4)
    {
        /* code */
        y=a+x/b;
        printf("value of y is equal to %d",y);
    }
}