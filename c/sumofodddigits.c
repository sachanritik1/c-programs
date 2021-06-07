#include<stdio.h> 
int sood(int num)
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=num % 10;
        num=num/10;
    }
    int temp=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2!=0)
        {
             temp=temp+arr[i];
        }
    }
    return temp;
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("sum of odd digits are %d",sood(n));
    return 0;
}