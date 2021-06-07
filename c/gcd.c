#include<stdio.h>
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return (gcd(a-b,b));
    if(a<b) return (gcd(b-a,a));
    else return a;
}
int main()
{   
    int n;
    printf("how many numbers are there?");
    scanf("%d",&n);
    printf("enter the numbers");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=arr[0];
    for(int i=1;i<n;i++)
    {
        result=gcd(arr[i],result);
        if(result==1)
        {
            break;
        }
    }
    printf("gcd is %d",result);
    
    return 0;
}