#include<stdio.h> 
int sood(int num)
{
    int arr[5];
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
             arr[(i)/2]=num % 10;
        }
        num=num/10;
    }
    int temp=0;
    for(int i=0;i<5;i++)
    {
        temp=temp+arr[i];
    }
    return temp;
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("sum of digits at odd places are %d",sood(n));
    return 0;
}