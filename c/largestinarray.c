#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int i=0;i<n-1;i++)
    {
       if(a<arr[i+1])
       {
            a=arr[i+1];
       }
    }
    printf("%d",a);    
    return 0;
}