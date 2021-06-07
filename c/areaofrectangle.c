#include<stdio.h>
int aor(int num1,int num2)
{
    return num1*num2;
}
int main()
{
    int a,b;
    printf("enter the side of rectangle\n");
    scanf("%d%d",&a,&b);
    printf("area of rectangle is %d",aor(a,b));
    return 0;
}