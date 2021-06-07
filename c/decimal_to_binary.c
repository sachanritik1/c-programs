#include<stdio.h>
int dtb(int num)
{
    int arr[25],i=0;
    while(num!=0)
    {
        arr[i]=num%2;
        num=num/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    dtb(n);
    return 0;
}